Pod::Spec.new do |s|
  s.name         = 'YYText_FixWarnings'
  s.summary      = 'Powerful text framework for iOS to display and edit rich text.'
  s.version      = '1.0.9'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.authors      = { 'Sun' => 'holaux@gmail.com' }
  s.homepage     = 'https://github.com/oneofai/YYText'
  s.platform     = :ios, '9.0'
  s.ios.deployment_target = '9.0'
  s.source       = { :git => 'https://github.com/oneofai/YYText.git', :tag => s.version.to_s }
  
  s.requires_arc = true
  s.source_files = 'YYText/**/*.{h,m}'
  s.public_header_files = 'YYText/**/*.{h}'
  
  s.frameworks = 'UIKit', 'CoreFoundation','CoreText', 'QuartzCore', 'Accelerate', 'CoreServices'

end
