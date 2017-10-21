# How To Configure
The recommended way of configuring TManager, is through the user interface while the configuration file is meant to provide a "backdoor". Configuring through the UI will be the easiest and the most robust way of doing it. Regardless, you can choose to have multiple configuration profiles (with just a single file) and switch between them when needed.

## The Humane Way
*\*Insert amazing documentation with screenshots that explains 'settings button' in the menu etc. here\**

## Through The Configuration File
Getting our hands dirty are we? Follow along braveheart!

### Configuration File Location
For now, the configuration file is located at a fixed file path depending on the operating system. TManager is only supported on linux, so this will be updated when we support other platforms.

| OS | Full Path |
| :---|:---|
| Linux   | ~/.config/tmanager/settings |
Windows | -
| Mac | - |


You can synchronize these files across the computers / operating systems and they should work fine.

### Example Configuration File

[//] : - Configuration file is composed of profiles that are denoted by a name and seperated by braces. For example:


```
# This is a comment line

key = value                    # Acceptable key- value pair
keys with spaces = value       # Still acceptable

# Integers
width  = 68                   # Yes you can put commments at the end of the lines
length =      126             # Empty spaces and tabs are ignored

# Floating point numbers
flotPointNumber    = 73.8
scientificNotation = 0.738e2  # Same value with the previous line.

# String
emptyString  = ""            # Empty string
# Strings cannot be empty:
# invalidEmptyString =       
customString  = "\"quote\""   # "quote" with escape characters
customString2 = '\'quote\''   # 'quote'
customString3 = "'quote'"     # No need for escape for different quotes
customString4 = No need for quotes for single line alphanumeric text
customString5 = You still need 
customString5 = "For multi line strings

MyConfig {

# Contents

}
```

denotes an empty configuration profile named as "MyConfig" and will be visible through the user interface when used in the program.


### Contents of the Configuration File

- Actual content goes here.
