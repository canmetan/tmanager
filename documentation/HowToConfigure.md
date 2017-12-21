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

### Configuration File Explanation

[//] : - Configuration file is composed of profiles that are denoted by a name and seperated by braces. For example:


```python
# This is a comment line
key = value                            # Acceptable key- value pair

# Integers
width  = 68                            # Yes you can put commments at the end of the lines
    length =      126                  # Empty spaces and tabs are ignored

# Floating point numbers
flotintPointNumber = 73.8
scientificNotation = 0.738e2           # Exact same value with the previous line.

# Strings
customString  = This line is a SINGLE string value
customString2 = "This is also legit."  # This is also legit. --> is the value.
customString2 = "\"value\""            # "value" with escape characters
customString3 = '\'value\''            # 'value'
customString4 = "'quote'"              # No need for escape characters here
customString5 = "For multi line strings,
                 you need to use quotations."
customString6 = "For\n these"          # Quotations are needed.
# customString7 = This for instance
#                 is not acceptable.   Needs to be covered with either " or '

emptyString  = ""                      # '' is also valid.
# Values cannot be empty
# invalidEmptyString =

multipleTimes = 5                      # If a key is assigned a value multiple times,
multipleTimes = 10                     # only the last value will count (10 in this case).

Ex4mpl3 Object With "'!@$%^&*()_+=-0@<>?./[]Characters {

    # You can create 'objects' with spaces, numbers and punctuation marks in their names.
    # Only the pound sign is not allowed in object names: #
    # To use braces, or backslash for the name, use these: \{    \}      \\

    # Braces that determine the scope can be on the same line or on a new line.
    # Braces cant come in the same line with a key = value pair. So;

    # globalVariable = 5 Example object {

    # is not valid. Otherwise,

    # Example Object
    # {
    # }

    # is valid.
    # Object names are case sensitive, so "Example Object" and "example object" are
    # two different objects.
}


localVariable = 5

Example Object {

    localVariable = 10                # Example Object.localVariable is 10, localVariable is
                                      # is still 5.
    # Variables can be optionally indented.
    variable = value

    # or not. As long as it is in between braces, it is defined for that object.
anotherValue = 5
}

```

denotes an empty configuration profile named as "MyConfig" and will be visible through the user interface when used in the program.


### Contents of the Configuration File

- Actual content goes here.
