// 函数: sub_142b889c0
// 地址: 0x142b889c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_140 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* rbx = arg1 + 0xf8

if (sub_142a45d30(rbx, sub_142a46510()) != 0)
    rbx = arg1 + 0x1e0

sub_142a45c20(arg1 + 8, rbx)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_b0 = 2
int32_t var_168 = 0
int32_t var_15c = 0
void* rax_4 = sub_142a951b0(*(arg1 + 0xf0), *(arg1 + 0x120), "localeDisplayPattern", nullptr, 
    "separator", &var_15c, &var_168)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_3 = &var_b8

if (var_168 s> 0)
    sub_142a4ab40(rcx_3)
else
    int32_t rbx_1 = var_15c
    sub_142a4afe0(rcx_3)
    int32_t r8_2
    int32_t var_ac
    
    if (var_b0 s< 0)
        r8_2 = var_ac
    else
        r8_2 = sx.d(var_b0) s>> 5
    int32_t* var_180
    var_180.d = rbx_1
    char* var_188
    var_188.d = 0
    sub_142a49390(&var_b8, 0, r8_2, rax_4, var_188.d, var_180.d)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78

if ((var_b0.b & 1) != 0)
    sub_142a48050(&var_b8, sub_142a47e10(&var_78, "{0}, {1}", 0xffffffff))
    sub_142a47ff0(&var_78)

int32_t var_160 = 0
sub_142b62570(arg1 + 0x2c0, &var_b8, 2, 2, &var_160)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_130 = 2
var_15c = 0
var_168 = 0
void* rax_6 = sub_142a951b0(*(arg1 + 0xf0), *(arg1 + 0x120), "localeDisplayPattern", nullptr, 
    "pattern", &var_168, &var_15c)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_11 = &var_138
int32_t* var_180_1
int32_t var_12c

if (var_15c s> 0)
    sub_142a4ab40(rcx_11)
else
    int32_t rbx_2 = var_168
    sub_142a4afe0(rcx_11)
    int32_t r8_4
    
    if (var_130 s< 0)
        r8_4 = var_12c
    else
        r8_4 = sx.d(var_130) s>> 5
    
    var_180_1.d = rbx_2
    char* var_188_2
    var_188_2.d = 0
    sub_142a49390(&var_138, 0, r8_4, rax_6, var_188_2.d, var_180_1.d)

if ((var_130.b & 1) != 0)
    sub_142a48050(&var_138, sub_142a47e10(&var_78, "{0} ({1})", 0xffffffff))
    sub_142a47ff0(&var_78)

sub_142b62570(arg1 + 0x300, &var_138, 2, 2, &var_160)
int32_t r9_6

if (var_130 s< 0)
    r9_6 = var_12c
else
    r9_6 = sx.d(var_130) s>> 5

int32_t* var_188_3
int16_t rax_13

if (sub_142a491f0(&var_138, 0xff08, 0, r9_6) s< 0)
    var_168.w = 0x28
    sub_142a4afe0(arg1 + 0x390)
    int16_t rax_14 = *(arg1 + 0x398)
    int32_t r8_12
    
    if (rax_14 s< 0)
        r8_12 = *(arg1 + 0x39c)
    else
        r8_12 = sx.d(rax_14) s>> 5
    
    var_180_1.d = 1
    var_188_3.d = 0
    sub_142a49390(arg1 + 0x390, 0, r8_12, &var_168, var_188_3.d, var_180_1.d)
    var_168.w = 0x5b
    sub_142a4afe0(arg1 + 0x3d0)
    int16_t rax_15 = *(arg1 + 0x3d8)
    int32_t r8_14
    
    if (rax_15 s< 0)
        r8_14 = *(arg1 + 0x3dc)
    else
        r8_14 = sx.d(rax_15) s>> 5
    
    var_180_1.d = 1
    var_188_3.d = 0
    sub_142a49390(arg1 + 0x3d0, 0, r8_14, &var_168, var_188_3.d, var_180_1.d)
    var_168.w = 0x29
    sub_142a4afe0(arg1 + 0x410)
    int16_t rax_16 = *(arg1 + 0x418)
    int32_t r8_16
    
    if (rax_16 s< 0)
        r8_16 = *(arg1 + 0x41c)
    else
        r8_16 = sx.d(rax_16) s>> 5
    
    var_180_1.d = 1
    var_188_3.d = 0
    sub_142a49390(arg1 + 0x410, 0, r8_16, &var_168, var_188_3.d, var_180_1.d)
    rax_13 = 0x5d
else
    var_168.w = 0xff08
    sub_142a4afe0(arg1 + 0x390)
    int16_t rax_10 = *(arg1 + 0x398)
    int32_t r8_6
    
    if (rax_10 s< 0)
        r8_6 = *(arg1 + 0x39c)
    else
        r8_6 = sx.d(rax_10) s>> 5
    
    var_180_1.d = 1
    var_188_3.d = 0
    sub_142a49390(arg1 + 0x390, 0, r8_6, &var_168, var_188_3.d, var_180_1.d)
    var_168.w = 0xff3b
    sub_142a4afe0(arg1 + 0x3d0)
    int16_t rax_11 = *(arg1 + 0x3d8)
    int32_t r8_8
    
    if (rax_11 s< 0)
        r8_8 = *(arg1 + 0x3dc)
    else
        r8_8 = sx.d(rax_11) s>> 5
    
    var_180_1.d = 1
    var_188_3.d = 0
    sub_142a49390(arg1 + 0x3d0, 0, r8_8, &var_168, var_188_3.d, var_180_1.d)
    var_168.w = 0xff09
    sub_142a4afe0(arg1 + 0x410)
    int16_t rax_12 = *(arg1 + 0x418)
    int32_t r8_10
    
    if (rax_12 s< 0)
        r8_10 = *(arg1 + 0x41c)
    else
        r8_10 = sx.d(rax_12) s>> 5
    
    var_180_1.d = 1
    var_188_3.d = 0
    sub_142a49390(arg1 + 0x410, 0, r8_10, &var_168, var_188_3.d, var_180_1.d)
    rax_13 = -0xc3

var_168.w = rax_13
sub_142a4afe0(arg1 + 0x450)
int16_t rax_17 = *(arg1 + 0x458)
int32_t r8_18

if (rax_17 s< 0)
    r8_18 = *(arg1 + 0x45c)
else
    r8_18 = sx.d(rax_17) s>> 5

var_180_1.d = 1
var_188_3.d = 0
sub_142a49390(arg1 + 0x450, 0, r8_18, &var_168, var_188_3.d, var_180_1.d)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_f0 = 2
var_15c = 0
var_168 = 0
void* rax_18 = sub_142a951b0(*(arg1 + 0xf0), *(arg1 + 0x120), "localeDisplayPattern", nullptr, 
    "keyTypePattern", &var_168, &var_15c)
int32_t rbx_3

if (var_15c s<= 0)
    rbx_3 = var_168

if (var_15c s> 0 || rbx_3 s<= 0)
    sub_142a48aa0(&var_f8, sub_142a47e10(&var_78, "keyTypePattern", 0xffffffff), 0)
    sub_142a47ff0(&var_78)
else
    sub_142a4afe0(&var_f8)
    int32_t r8_20
    int32_t var_ec
    
    if (var_f0 s< 0)
        r8_20 = var_ec
    else
        r8_20 = sx.d(var_f0) s>> 5
    int32_t* var_180_2
    var_180_2.d = rbx_3
    char* var_188_4
    var_188_4.d = 0
    sub_142a49390(&var_f8, 0, r8_20, rax_18, var_188_4.d, var_180_2.d)

if ((var_f0.b & 1) != 0)
    sub_142a48050(&var_f8, sub_142a47e10(&var_78, "{0}={1}", 0xffffffff))
    sub_142a47ff0(&var_78)

sub_142b62570(arg1 + 0x340, &var_f8, 2, 2, &var_160)
*(arg1 + 0x494) = 0
*(arg1 + 0x498) = 0

if (*(arg1 + 0x380) - 0x103 u<= 1)
    char** rax_23 = sub_142a641c0(nullptr, *(arg1 + 0x30), &var_160)
    
    if (var_160 s> 0)
        goto label_142b89071
    
    struct icu_64::ResourceSink::icu_64::LocaleDisplayNamesImpl::CapitalizationContextSink::VTable* 
        const var_158 = &icu_64::LocaleDisplayNamesImpl::CapitalizationContextSink::`vftable'{for `icu_64::ResourceSink'}
    char var_150_1 = 0
    void* var_148_1 = arg1
    sub_142a61e60(rax_23, "contextTransforms", &var_158, &var_160)
    int32_t rax_24 = var_160
    
    if (rax_24 != 2)
        if (rax_24 s<= 0)
            goto label_142b8904e
        
        var_158 = &icu_64::LocaleDisplayNamesImpl::CapitalizationContextSink::`vftable'{for `icu_64::ResourceSink'}
        sub_142ac3f40(&var_158)
    label_142b89071:
        
        if (rax_23 != 0)
            sub_142a5f860(rax_23)
    else
        var_160 = 0
    label_142b8904e:
        var_158 = &icu_64::LocaleDisplayNamesImpl::CapitalizationContextSink::`vftable'{for `icu_64::ResourceSink'}
        sub_142ac3f40(&var_158)
        
        if (rax_23 != 0)
            sub_142a5f860(rax_23)
        
        if (var_150_1 != 0 || *(arg1 + 0x380) == 0x102)
            goto label_142b8908c
else if (*(arg1 + 0x380) == 0x102)
label_142b8908c:
    var_160 = 0
    int64_t* rax_25 = sub_142a55490(arg1 + 8, &var_160)
    *(arg1 + 0x388) = rax_25
    
    if (var_160 s> 0)
        if (rax_25 != 0)
            int64_t r8_23 = *rax_25
            (*r8_23)(rax_25, 1, r8_23)
        
        *(arg1 + 0x388) = 0

sub_142a47ff0(&var_f8)
sub_142a47ff0(&var_138)
sub_142a47ff0(&var_b8)
__security_check_cookie(rax_1 ^ &var_1a8)
return &icu_64::UObject::`vftable'
