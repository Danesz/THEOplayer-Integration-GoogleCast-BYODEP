# THEOplayer-Integration-GoogleCast - Bring Your Own DEPendency

THEOplayer's THEOplayer-Integration-GoogleCast has a transitive dependency on **Google's Cast SDK**.

In most cases this is fine, however, there could be scenarios where another module in your project also has a transitive dependency on the Cast SDK but maybe on a different version or flavor.

Then module/class collision could happen.

This project demonstrates how you can overcome this issue.

## What changed?

The repository contains the modified version of **THEOplayer-Integration-GoogleCast.podspec** file which has no dependencies on **Google's Cast SDK**.

_**This also means you need to take care of that dependency yourself.**_

## How to use it?
Here is a sample `Podfile` for your project depending on `THEOplayer-Integration-GoogleCast` module on different ways.

```ruby
# Uncomment the next line to define a global platform for your project
# platform :ios, '9.0'

target 'NoTransitivePodProject' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  # Pods for NoTransitivePodProject

  # Using the official THEOplayerSDK-Integration-GoogleCast dependency
  #pod 'THEOplayer-Integration-GoogleCast', '~> 5.4.0'
  
  # Using a local checkout with local .podspec file
  #pod 'THEOplayer-Integration-GoogleCast', :path => '../../local_repo'
  
  # Using a remote repository (assuming it contains a  .podspec file)
  pod 'THEOplayer-Integration-GoogleCast', :git => 'https://github.com/Danesz/THEOplayer-Integration-GoogleCast-BYODEP.git'
  
  # Using a remote .podspec file directly
  #pod 'THEOplayer-Integration-GoogleCast', :podspec => 'https://raw.githubusercontent.com/Danesz/THEOplayer-Integration-GoogleCast-BYODEP/main/THEOplayer-Integration-GoogleCast.podspec'
end

```
Now you can include the Cast SDK dependency separately or you are free to use other dependencies that import it as a transitive dependency.

## Remarks
This above example provides a generic solution if you have transitive pod dependency collision.

**By using this technique you need to be careful about what and where to exclude or include. Not supported dependency versions by the other module could cause runtime exceptions.**

## Want to know more?
Please check the official [Podfile documentation](https://guides.cocoapods.org/using/the-podfile.html).