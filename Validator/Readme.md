# Validator Functionalities

## Methods

| Method                    | Do? | Returns                                            | Args                                                                        |
|---------------------------|-----|----------------------------------------------------|-----------------------------------------------------------------------------|
| `inf.readChar()`          |     | char                                               | none or char                                                                |
| `inf.readInt()`           |     | int                                                | none or min, max, varName                                                   |
| `inf.readLong()`          |     | long long                                          | none or min, max, varName                                                   |
| `inf.readDouble()`        |     | double                                             | none or min, max, varName                                                   |
| `inf.readWord()`          |     | string                                             | none or pattern, varName                                                    |
| `inf.readStrictDouble()`  |     | double                                             | min, max, min int after point, max int after point, varName                 |
| `inf.readEoln()`          |     | void                                               | none                                                                        |
| `inf.readEof()`           |     | void                                               | none                                                                        |
| `inf.readSpace()`         |     | char                                               | none                                                                        |
| `inf.readInts()`          |     | vector of int                                      | size, min, max, varName, baseIndex                                          |
| `inf.readWords()`         |     | vector of string                                   | size, pattern, varName, baseIndex                                           |
| `inf.readLongs()`         |     | vector of long long                                | size, min, max, varName, baseIndex                                          |
| `inf.readDoubles()`       |     | vector of double                                   | size, min, max, varName, baseIndex                                          |
| `inf.readStrings()`       |     | vector of string                                   | size, min, max, varName, baseIndex                                          |
| `inf.readStrictDoubles()` |     | vector of double                                   | size, min, max,min int after point, max int after point, varName, baseIndex |
| `ensure()`                |     | check condition                                    | condition                                                                   |
| `ensuref()`               |     | check condition and out text if condition is false | condition, text                                                             |

---

### Ex:

```cpp
    inf.readChar();
    inf.readChar('q');
    int valueOfInt = inf.readInt(_min, _max, varName);
    inf.readLong((ll) _min, (ll) _max, varName);
    inf.readDouble(_min, _max, varName);
    inf.readWord(pattern, varName);
    inf.readString(pattern, varName);
    inf.readStrictDouble((double) _min, (double) _max, (int) _min, (int) _max, varName);
    
    inf.readEoln();
    inf.readEof();
    inf.readSpace();
    
    auto vectorOfInts = inf.readInts(_size, _min, _max, varName, 0);
    inf.readWords(_size, pattern, varName, 0);
    inf.readLongs(_size, (ll) _min, (ll) _max, varName, 0);
    inf.readDoubles(_size, _min, _max, varName, 0);
    inf.readStrings(_size, pattern, varName, 0);
    inf.readStrictDoubles(_size, (double) _min, (double) _max, (int) _min, (int) _max, varName, 0);
    
    ensure(valueOfInt >= 3);
    ensuref(valueOfInt >= 3, "x isn't more than or equal 3");
```

---

## Regex Patterns

| Pattern             | Describe                                                                                       |
|---------------------|------------------------------------------------------------------------------------------------|
| `[a-z]`             | Range from `a` to `z` only                                                                     |
| `^[a-z]`            | Anything out the range from `a` to `z` only                                                    |
| `[a-z]{3,10}`       | String of chars in range `a` to `z` with size between `3`and `10` only                         |
| `YES\|NO`           | One of two options **Yes** or **NO**                                                           |
| `[a-zA-z]+`         | Nonempty string contains capital and small letters                                             |
| `MA[a-zA-z]*`       | "MA" + string contains capital and small letters can be empty also when i add `*`              |
| `-?[1-9][0-9]{0,5}` | Make `-` optional and number from `-9999` to `9999` excluding `0` _Ex:_ "-123", "456", "-7890" |

---