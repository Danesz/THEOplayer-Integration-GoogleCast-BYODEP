Pod::Spec.new do |s|
  s.name                   = 'THEOplayer-Integration-GoogleCast'
  s.version                = '5.4.0'
  s.swift_version          = '5.0'
  s.author                 = 'THEO Technologies'
  s.license                = { :type => 'Commercial', :text => 'SEE LICENSE AT https://www.theoplayer.com/terms' }
  s.homepage               = 'https://github.com/THEOplayer/theoplayer-sdk-ios'
  s.source                 = { :git => 'https://github.com/THEOplayer/theoplayer-sdk-ios.git', :tag => s.version.to_s }
  s.summary                = 'THEOplayer Cast integration.'
  s.description            = 'THEOplayer Cast integration for the iOS THEOplayerSDK.'
  s.ios.deployment_target  = '12.0'
  s.pod_target_xcconfig    = {  }
  s.vendored_frameworks    = 'THEOplayer-Integration-GoogleCast/THEOplayerGoogleCastIntegration.xcframework'
  s.ios.dependency 'google-cast-sdk-dynamic-xcframework', '~>4.7.1'
end
