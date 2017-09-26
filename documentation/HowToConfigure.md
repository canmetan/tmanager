# How To Configure
Configuration can be done through both the user interface () and through the configuration text file. Regardless, you can choose to have multiple configuration profiles and switch between when needed.

## Through User Interface

## Through The Configuration Text File.

At this point, the configuration file is located at a fixed file path depending on the operating system.

Windows: -
Linux:   ~/.config/tmanager/settings
Mac:     -

You can synchronize these files across the computers / operating systems.

### Contents of the Configuration File

- Any line starting with '\#' will be ignored as a comment.
- Configuration file is composed of profiles that are denoted by a name and seperated by braces. For example:

<pre><code>
MyConfig {

# Contents

}
</pre></code>
