#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef THEOPLAYERGOOGLECASTINTEGRATION_SWIFT_H
#define THEOPLAYERGOOGLECASTINTEGRATION_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import THEOplayerSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="THEOplayerGoogleCastIntegration",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

/// This class includes a default application ID to be used in a custom GCKCastOptions implementation and a function to set the GCKCastContext instance with a default GCKCastOptions.
SWIFT_CLASS_NAMED("CastIntegrationHelper")
@interface THEOplayerCastIntegrationHelper : NSObject
/// Default THEOplayer Chromecast receiver application identifier.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull theoplayerV2ReceiverApplicationID SWIFT_DEPRECATED_MSG("Please use CAF V3 receivers. Google deprecated V2 receivers and encourages the migration to V3. THEOplayer GoogleCastIntegration module officially supports CAF V3 receivers only.");)
+ (NSString * _Nonnull)theoplayerV2ReceiverApplicationID SWIFT_WARN_UNUSED_RESULT;
+ (void)setTheoplayerV2ReceiverApplicationID:(NSString * _Nonnull)value;
/// Default Google Chromecast receiver application identifier.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull defaultV3ReceiverApplicationID;)
+ (NSString * _Nonnull)defaultV3ReceiverApplicationID SWIFT_WARN_UNUSED_RESULT;
+ (void)setDefaultV3ReceiverApplicationID:(NSString * _Nonnull)value;
///  This function will set the GCKCastContext shared instance with a default implementation of GCKCastOptions that will set the THEOplayer chromecast receiver as the receiver and set the physicalVolumeButtonsWillControlDeviceVolume parameter to true.
/// note:
/// Call this method in -[application:didFinishLaunchingWithOptions:] application  lifecycle method
///         https://developers.google.com/cast/docs/ios_sender/integrate#initialize_the_cast_context
+ (void)setGCKCastContextSharedInstanceWithDefaultCastOptions;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;
@class THEOplayerCastError;
@protocol GCKUICastButtonDelegate;
@protocol THEOplayerChromecastConnectionDelegate;
@class THEOplayerChromeCastEvent;
@protocol THEOplayerEventListener;

/// Chromecast, also known as Google Cast, is a casting device designed by Google.
SWIFT_PROTOCOL_NAMED("CastIntegration_Objc")
@protocol THEOplayerCastIntegration <THEOplayerIntegration>
/// Whether THEOplayer is casting to a chromecast and has control over the current chromecast session.
@property (nonatomic, readonly) BOOL casting;
/// The last error thrown by chromecast.
@property (nonatomic, readonly, strong) THEOplayerCastError * _Nullable error;
/// The name of the chromecast device that THEOplayer is casting to.
/// remark:
///
/// This value is nil if THEOplayer is not controlling the current chromecast session.
@property (nonatomic, readonly, copy) NSString * _Nullable receiverName;
/// Indicates the state of the casting process.
@property (nonatomic, readonly) enum THEOplayerPlayerCastState state;
/// The castButtonDelegate is used when the user presses the in-player Chromecast button.
@property (nonatomic, readonly, strong) id <GCKUICastButtonDelegate> _Nullable castButtonDelegate;
/// The castButtonDelegate to be used when the user presses the in-player Chromecast button.
- (void)setCastButtonDelegate:(id <GCKUICastButtonDelegate> _Nullable)delegate;
/// The ChromecastConnectionDelegate to be used when the Chromecast connection changes.
- (void)setConnectionDelegate:(id <THEOplayerChromecastConnectionDelegate> _Nullable)delegate;
/// Start casting to the chromecast. A dialog will prompt to choose the device.
- (void)start;
/// Stop casting to the chromecast.
- (void)stop;
/// Join an active chromecast session.
- (void)join;
/// Leave an active chromecast session without affecting other devices.
- (void)leave;
/// Adds the given event listener of the given <code>ChromecastEventType</code>.
/// remark:
///
/// When attaching a listener on the wrong object the application will crash.
/// \param type ChromecastEventType of the added event listener.
///
/// \param listener Closure called when event is dispatched.
///
///
/// returns:
/// EventListener that can be removed.
- (id <THEOplayerEventListener> _Nonnull)addEventListenerWithType:(NSString * _Nonnull)type listener:(void (^ _Nonnull)(THEOplayerChromeCastEvent * _Nonnull))listener;
/// Removes the given event listener of the given <code>ChromecastEventType</code>.
/// \param type ChromecastEventType of the removed event listener.
///
/// \param listener EventListener object that has been return on addEventListener.
///
- (void)removeEventListenerWithType:(NSString * _Nonnull)type listener:(id <THEOplayerEventListener> _Nonnull)listener;
@end

@class THEOplayer;
@class THEOplayerCastConfiguration;

SWIFT_CLASS_NAMED("GoogleCastIntegrationFactory")
@interface THEOplayerGoogleCastIntegrationFactory : NSObject
+ (id <THEOplayerCastIntegration> _Nonnull)createIntegrationOn:(THEOplayer * _Nonnull)player with:(THEOplayerCastConfiguration * _Nonnull)config SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef THEOPLAYERGOOGLECASTINTEGRATION_SWIFT_H
#define THEOPLAYERGOOGLECASTINTEGRATION_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import THEOplayerSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="THEOplayerGoogleCastIntegration",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

/// This class includes a default application ID to be used in a custom GCKCastOptions implementation and a function to set the GCKCastContext instance with a default GCKCastOptions.
SWIFT_CLASS_NAMED("CastIntegrationHelper")
@interface THEOplayerCastIntegrationHelper : NSObject
/// Default THEOplayer Chromecast receiver application identifier.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull theoplayerV2ReceiverApplicationID SWIFT_DEPRECATED_MSG("Please use CAF V3 receivers. Google deprecated V2 receivers and encourages the migration to V3. THEOplayer GoogleCastIntegration module officially supports CAF V3 receivers only.");)
+ (NSString * _Nonnull)theoplayerV2ReceiverApplicationID SWIFT_WARN_UNUSED_RESULT;
+ (void)setTheoplayerV2ReceiverApplicationID:(NSString * _Nonnull)value;
/// Default Google Chromecast receiver application identifier.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull defaultV3ReceiverApplicationID;)
+ (NSString * _Nonnull)defaultV3ReceiverApplicationID SWIFT_WARN_UNUSED_RESULT;
+ (void)setDefaultV3ReceiverApplicationID:(NSString * _Nonnull)value;
///  This function will set the GCKCastContext shared instance with a default implementation of GCKCastOptions that will set the THEOplayer chromecast receiver as the receiver and set the physicalVolumeButtonsWillControlDeviceVolume parameter to true.
/// note:
/// Call this method in -[application:didFinishLaunchingWithOptions:] application  lifecycle method
///         https://developers.google.com/cast/docs/ios_sender/integrate#initialize_the_cast_context
+ (void)setGCKCastContextSharedInstanceWithDefaultCastOptions;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;
@class THEOplayerCastError;
@protocol GCKUICastButtonDelegate;
@protocol THEOplayerChromecastConnectionDelegate;
@class THEOplayerChromeCastEvent;
@protocol THEOplayerEventListener;

/// Chromecast, also known as Google Cast, is a casting device designed by Google.
SWIFT_PROTOCOL_NAMED("CastIntegration_Objc")
@protocol THEOplayerCastIntegration <THEOplayerIntegration>
/// Whether THEOplayer is casting to a chromecast and has control over the current chromecast session.
@property (nonatomic, readonly) BOOL casting;
/// The last error thrown by chromecast.
@property (nonatomic, readonly, strong) THEOplayerCastError * _Nullable error;
/// The name of the chromecast device that THEOplayer is casting to.
/// remark:
///
/// This value is nil if THEOplayer is not controlling the current chromecast session.
@property (nonatomic, readonly, copy) NSString * _Nullable receiverName;
/// Indicates the state of the casting process.
@property (nonatomic, readonly) enum THEOplayerPlayerCastState state;
/// The castButtonDelegate is used when the user presses the in-player Chromecast button.
@property (nonatomic, readonly, strong) id <GCKUICastButtonDelegate> _Nullable castButtonDelegate;
/// The castButtonDelegate to be used when the user presses the in-player Chromecast button.
- (void)setCastButtonDelegate:(id <GCKUICastButtonDelegate> _Nullable)delegate;
/// The ChromecastConnectionDelegate to be used when the Chromecast connection changes.
- (void)setConnectionDelegate:(id <THEOplayerChromecastConnectionDelegate> _Nullable)delegate;
/// Start casting to the chromecast. A dialog will prompt to choose the device.
- (void)start;
/// Stop casting to the chromecast.
- (void)stop;
/// Join an active chromecast session.
- (void)join;
/// Leave an active chromecast session without affecting other devices.
- (void)leave;
/// Adds the given event listener of the given <code>ChromecastEventType</code>.
/// remark:
///
/// When attaching a listener on the wrong object the application will crash.
/// \param type ChromecastEventType of the added event listener.
///
/// \param listener Closure called when event is dispatched.
///
///
/// returns:
/// EventListener that can be removed.
- (id <THEOplayerEventListener> _Nonnull)addEventListenerWithType:(NSString * _Nonnull)type listener:(void (^ _Nonnull)(THEOplayerChromeCastEvent * _Nonnull))listener;
/// Removes the given event listener of the given <code>ChromecastEventType</code>.
/// \param type ChromecastEventType of the removed event listener.
///
/// \param listener EventListener object that has been return on addEventListener.
///
- (void)removeEventListenerWithType:(NSString * _Nonnull)type listener:(id <THEOplayerEventListener> _Nonnull)listener;
@end

@class THEOplayer;
@class THEOplayerCastConfiguration;

SWIFT_CLASS_NAMED("GoogleCastIntegrationFactory")
@interface THEOplayerGoogleCastIntegrationFactory : NSObject
+ (id <THEOplayerCastIntegration> _Nonnull)createIntegrationOn:(THEOplayer * _Nonnull)player with:(THEOplayerCastConfiguration * _Nonnull)config SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
