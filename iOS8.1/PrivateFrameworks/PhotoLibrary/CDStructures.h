//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct NSObject {
    Class _field1;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct entryList {
    struct lruEntry *tqh_first;
    struct lruEntry **tqh_last;
};

struct lruEntry {
    id _field1;
    int _field2;
    struct {
        struct lruEntry *_field1;
        struct lruEntry **_field2;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    float _field6;
    int _field7;
} CDStruct_3421d26a;

typedef struct {
    int version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_304912e7;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

