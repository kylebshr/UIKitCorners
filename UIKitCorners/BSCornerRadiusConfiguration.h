//
//  Foo.h
//  UIKitCorners
//
//  Created by Kyle Bashour on 10/24/20.
//

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying> {

    double _topLeft;
    double _bottomLeft;
    double _bottomRight;
    double _topRight;
}
@property (nonatomic,readonly) BOOL isCongruent;
@property (nonatomic,readonly) double topLeft;                      //@synthesize topLeft=_topLeft - In the implementation block
@property (nonatomic,readonly) double bottomLeft;                   //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (nonatomic,readonly) double bottomRight;                  //@synthesize bottomRight=_bottomRight - In the implementation block
@property (nonatomic,readonly) double topRight;                     //@synthesize topRight=_topRight - In the implementation block
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)topLeft;
-(double)topRight;
-(double)bottomLeft;
-(double)bottomRight;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isEqualToCornerRadiusConfiguration:(id)arg1 ;
-(id)initWithCornerRadius:(double)arg1 ;
-(id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4 ;
-(BOOL)isCongruent;
@end
