//
//  LxDBAnything.h
//  LxDBAnythingDemo
//
//  Created by DeveloperLx on 15/10/24.
//  Copyright © 2015年 DeveloperLx. All rights reserved.
//

#ifndef LxDBAnything_h
#define LxDBAnything_h

#if TARGET_OS_IPHONE
    #define LxEdgeInsets    UIEdgeInsets
    #define LxOffset        UIOffset
    #define valueWithLxOffset   valueWithUIOffset
    #define valueWithLxEdgeInsets   valueWithUIEdgeInsets
#elif TARGET_OS_MAC
    #define LxEdgeInsets    NSEdgeInsets
    #define LxOffset        NSOffset
    #define valueWithLxOffset   valueWithNSOffset
    #define valueWithLxEdgeInsets   valueWithNSEdgeInsets
#endif

#define LxBox(value) _LxBox(@encode(__typeof__((value))), (value))

#ifdef DEBUG
    #define LxPrintf(fmt, ...)  printf("🎈%s L.%d📍 %s\n", __PRETTY_FUNCTION__, __LINE__, [[NSString stringWithFormat:fmt, ##__VA_ARGS__]UTF8String])
    #define LxDBAnyVar(any)     LxPrintf(@"%s = %@", #any, LxBox(any))
    #define LxPrintAnyMark(x)   printf("🎈%s L.%d📍 %s\n", __PRETTY_FUNCTION__, __LINE__, #x)
#else
    #define LxPrintf(fmt, ...)
    #define LxDBAnyVar(any)
    #define LxPrintAnyMark(x)
#endif

static inline id _LxBox(const char * type, ...)
{
    va_list parameter_list;
    va_start(parameter_list, type);
    
    id object = nil;
    
    if (strcmp(type, @encode(id)) == 0) {
        id value = va_arg(parameter_list, id);
        object = value;
    }
    else if (strcmp(type, @encode(CGPoint)) == 0) {
        CGPoint value = (CGPoint)va_arg(parameter_list, CGPoint);
        object = [NSValue valueWithCGPoint:value];
    }
    else if (strcmp(type, @encode(CGSize)) == 0) {
        CGSize value = (CGSize)va_arg(parameter_list, CGSize);
        object = [NSValue valueWithCGSize:value];
    }
    else if (strcmp(type, @encode(CGVector)) == 0) {
        CGVector value = (CGVector)va_arg(parameter_list, CGVector);
        object = [NSValue valueWithCGVector:value];
    }
    else if (strcmp(type, @encode(CGRect)) == 0) {
        CGRect value = (CGRect)va_arg(parameter_list, CGRect);
        object = [NSValue valueWithCGRect:value];
    }
    else if (strcmp(type, @encode(NSRange)) == 0) {
        NSRange value = (NSRange)va_arg(parameter_list, NSRange);
        object = [NSValue valueWithRange:value];
    }
    else if (strcmp(type, @encode(CFRange)) == 0) {
        CFRange value = (CFRange)va_arg(parameter_list, CFRange);
        object = [NSValue value:&value withObjCType:type];
    }
    else if (strcmp(type, @encode(CGAffineTransform)) == 0) {
        CGAffineTransform value = (CGAffineTransform)va_arg(parameter_list, CGAffineTransform);
        object = [NSValue valueWithCGAffineTransform:value];
    }
    else if (strcmp(type, @encode(CATransform3D)) == 0) {
        CATransform3D value = (CATransform3D)va_arg(parameter_list, CATransform3D);
        object = [NSValue valueWithCATransform3D:value];
    }
    else if (strcmp(type, @encode(SEL)) == 0) {
        SEL value = (SEL)va_arg(parameter_list, SEL);
        object = NSStringFromSelector(value);
    }
    else if (strcmp(type, @encode(Class)) == 0) {
        Class value = (Class)va_arg(parameter_list, Class);
        object = NSStringFromClass(value);
    }
    else if (strcmp(type, @encode(LxOffset)) == 0) {
        LxOffset value = (LxOffset)va_arg(parameter_list, LxOffset);
        object = [NSValue valueWithLxOffset:value];
    }
    else if (strcmp(type, @encode(LxEdgeInsets)) == 0) {
        LxEdgeInsets value = (LxEdgeInsets)va_arg(parameter_list, LxEdgeInsets);
        object = [NSValue valueWithLxEdgeInsets:value];
    }
    else if (strcmp(type, @encode(short)) == 0) {
        short value = (short)va_arg(parameter_list, int);
        object = @(value);
    }
    else if (strcmp(type, @encode(int)) == 0) {
        int value = (int)va_arg(parameter_list, int);
        object = @(value);
    }
    else if (strcmp(type, @encode(long)) == 0) {
        long value = (long)va_arg(parameter_list, long);
        object = @(value);
    }
    else if (strcmp(type, @encode(long long)) == 0) {
        long long value = (long long)va_arg(parameter_list, long long);
        object = @(value);
    }
    else if (strcmp(type, @encode(float)) == 0) {
        float value = (float)va_arg(parameter_list, double);
        object = @(value);
    }
    else if (strcmp(type, @encode(double)) == 0) {
        double value = (double)va_arg(parameter_list, double);
        object = @(value);
    }
    else if (strcmp(type, @encode(BOOL)) == 0) {
        BOOL value = (BOOL)va_arg(parameter_list, int);
        object = value ? @"YES" : @"NO";
    }
    else if (strcmp(type, @encode(bool)) == 0) {
        bool value = (bool)va_arg(parameter_list, int);
        object = value ? @"true" : @"false";
    }
    else if (strcmp(type, @encode(char)) == 0) {
        char value = (char)va_arg(parameter_list, int);
        object = [NSString stringWithFormat:@"%c", value];
    }
    else if (strcmp(type, @encode(unsigned short)) == 0) {
        unsigned short value = (unsigned short)va_arg(parameter_list, unsigned int);
        object = @(value);
    }
    else if (strcmp(type, @encode(unsigned int)) == 0) {
        unsigned int value = (unsigned int)va_arg(parameter_list, unsigned int);
        object = @(value);
    }
    else if (strcmp(type, @encode(unsigned long)) == 0) {
        unsigned long value = (unsigned long)va_arg(parameter_list, unsigned long);
        object = @(value);
    }
    else if (strcmp(type, @encode(unsigned long long)) == 0) {
        unsigned long long value = (unsigned long long)va_arg(parameter_list, unsigned long long);
        object = @(value);
    }
    else if (strcmp(type, @encode(unsigned char)) == 0) {
        unsigned char value = (unsigned char)va_arg(parameter_list, unsigned int);
        object = [NSString stringWithFormat:@"%c", value];
    }
    
    va_end(parameter_list);
    
    return object;
}

#endif /* LxDBAnything_h */
