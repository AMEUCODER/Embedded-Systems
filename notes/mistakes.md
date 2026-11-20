# Mistakes and lessons

One line per lesson: what happened, why, and the fix. This file is for you, so be honest and short.

| Date | Board / part | What happened | Cause | Fix |
| --- | --- | --- | --- | --- |
| | | | | |

## Checklist before blaming the code
- Is the common ground connected between all parts?
- Is the board and port selected in the IDE?
- Does the baud rate in `Serial.begin()` match the Serial Monitor?
- Is the part powered at the right voltage (5 V vs 3.3 V)?
- Is the I2C address correct (run the scanner)?
