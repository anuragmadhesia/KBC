#!/usr/bin/env python3
from __future__ import annotations

from pathlib import Path


def main() -> int:
    source = Path(__file__).resolve().parents[1] / "KBMC.CPP"
    content = source.read_text(encoding="utf-8", errors="ignore")

    expected = {
        "Who is father of Screen Touch Phone technology?": "Dr.Samuel Hurst",
    }

    for question, answer in expected.items():
        if question not in content:
            raise AssertionError(f"Missing question text: {question}")
        if f"Right Answer {{{answer}}}" not in content:
            raise AssertionError(f"Right answer mismatch for: {question}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
