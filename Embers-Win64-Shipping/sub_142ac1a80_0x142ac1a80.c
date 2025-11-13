// 函数: sub_142ac1a80
// 地址: 0x142ac1a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_2d0 = -2
uint128_t var_68 = arg5
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t* result = arg1
int32_t* var_2c8 = arg1
int32_t* var_2e8 = arg7
int32_t var_2f4 = 0
sub_142a5b060(arg1)
int32_t var_2f4_1 = 1
struct icu_64::UObject::icu_64::Locale::VTable* var_158
sub_142a5d0b0(arg3, &var_158)
sub_142ab8470(&result[0x11], arg3)
void* rcx_2 = arg2[6]

if (rcx_2 != 0)
    result[0x19] = sub_1405948b0(rcx_2)

void* rdx_2 = arg2[6]
int64_t* rsi

if (rdx_2 != 0)
    rsi = &arg4[0x22]
    sub_142ac22a0(rsi, rdx_2, arg2, arg7)
    *(arg4 + 0x109) = 1
else
    arg4[0xef].b = 1
    sub_142ac2430(arg4, arg2, arg7)
    rsi = arg4

result[0x18] = rsi
char rax_4

if (arg2[1].b != 0 && arg2[6] == 0 && arg2[7].b != 0)
    rax_4 = (*(*rsi + 0x20))(rsi)

if (arg2[1].b == 0 || arg2[6] != 0 || arg2[7].b == 0 || rax_4 != 0)
    rsi.b = 1
else
    rsi.b = 0

char var_308 = rsi.b
void var_260
sub_142b46420(&var_260, arg2, &var_158, arg7)
int32_t rax_5

if (arg2[7].b == 0)
    rax_5 = *(arg2 + 0x3c)
else
    rax_5 = 0

if (rsi.b != 0)
    sub_142ab6090(&result[2], &var_260)

int32_t var_2c0
void var_238
sub_142b46180(&var_238, sub_142ab6700(&var_2c0, &var_260), &var_158, arg3, arg7)
sub_142ab6910(&arg4[0xf0], &var_238)
int64_t var_218
sub_142a8cb00(&arg4[0xf4], &var_218)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1d8
sub_142a48050(&arg4[0xfc], &var_1d8)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_198
sub_142a48050(&arg4[0x104], &var_198)
sub_142a47ff0(&var_198)
sub_142a47ff0(&var_1d8)
char var_20c

if (var_20c != 0)
    sub_142a7dcd0(var_218)

sub_142ab6900(&var_238)
result[0x1a] = &arg4[0xf0]
int32_t r15_1 = arg2[0xb].d
int32_t r12_1 = *(arg2 + 0x6c)
int32_t rsi_1 = *(arg2 + 0x54)
int32_t var_2e0 = rsi_1
int32_t r14_2 = *(arg2 + 0x64)
var_2c0 = r14_2
int32_t rax_7 = arg2[0xe].d
int32_t var_300 = rax_7
int32_t rcx_18 = *(arg2 + 0x5c)
int32_t var_304 = rcx_18
arg5 = zx.o(arg2[0x5c])
int32_t var_2f8

if (arg2[0x5d].b == 0)
    var_2f8 = *(arg2 + 0x2ec)
else
    var_2f8 = 4

char var_306_1

if (r14_2 == 0xffffffff)
    var_306_1 = 0

if (r14_2 != 0xffffffff || rsi_1 != r14_2)
    var_306_1 = 1

char var_307_1

if (rax_7 == 0xffffffff)
    var_307_1 = 0

if (rax_7 != 0xffffffff || rcx_18 != rax_7)
    var_307_1 = 1

char r8_4 = var_308

if (r8_4 != 0 && (r14_2 == 0xffffffff || rsi_1 == 0xffffffff))
    int16_t var_248[0x8]
    int32_t rax_8 = sub_142aaa5b0(&var_248, rax_5, var_2e8)
    int32_t var_2f0 = rax_8
    r8_4 = var_308
    
    if (r14_2 != 0xffffffff)
        int32_t* rax_10 = &var_2f0
        
        if (r14_2 s>= rax_8)
            rax_10 = &var_2c0
        
        rsi_1 = *rax_10
    else if (rsi_1 != r14_2)
        int32_t* rax_9 = &var_2f0
        
        if (rax_8 s>= rsi_1)
            rax_9 = &var_2e0
        
        r14_2 = *rax_9
    else
        r14_2 = rax_8
        rsi_1 = rax_8
    
    rax_7 = var_300
    rcx_18 = var_304

if (r12_1 != 0 || rsi_1 == 0)
    if (r14_2 s< 0)
        r14_2 = 0
    
    if (rsi_1 s< 0)
        rsi_1 = -1
    else if (rsi_1 s< r14_2)
        rsi_1 = r14_2
    
    if (r12_1 s<= 0)
        r12_1 = 1
    else if (r12_1 s> 0x3e7)
        r12_1 = 1
    
    if (r15_1 s>= 0)
        if (r15_1 s>= r12_1)
            goto label_142ac1de9
        
        r15_1 = r12_1
    else
        r15_1 = -1
else
    if (r14_2 s<= 0)
        r14_2 = 1
    
    if (rsi_1 s< 0)
        rsi_1 = -1
    else if (rsi_1 s< r14_2)
        rsi_1 = r14_2
    
    r12_1 = 0
    
    if (r15_1 s>= 0)
    label_142ac1de9:
        
        if (r15_1 s> 0x3e7)
            r15_1 = -1
    else
        r15_1 = -1

int32_t var_2a0 = 0
int64_t zmm6 = (zx.o(0)).q
uint128_t var_290
void var_280
int32_t* rax_12

if (arg2[7].b != 0)
    arg5.q f- zmm6
    
    if (is_unordered.q(arg5.q, zmm6) || arg5.q f!= zmm6)
        int32_t* rcx_26 = &var_280
        
        if (sub_142ac0110(arg5.q, rsi_1) == 0)
            rax_12 = sub_142b45840(rcx_26, arg5)
        else
            rax_12 = sub_142b457f0(rcx_26, r14_2.w)
        
        goto label_142ac1ec6
    
    if (var_307_1 != 0)
        if (rax_7 s< 1)
            rax_7 = 1
        else if (rax_7 s> 0x3e7)
            rax_7 = 0x3e7
        
        var_300 = rax_7
        
        if (rcx_18 s< 0)
            rcx_18 = 0x3e7
        else if (rcx_18 s< rax_7)
            rcx_18 = rax_7
        else if (rcx_18 s> 0x3e7)
            rcx_18 = 0x3e7
        
        var_304 = rcx_18
        rax_12 = sub_142b45900(&var_280)
        goto label_142ac1ec6
    
    if (var_306_1 != 0)
        rax_12 = sub_142b457f0(&var_280, r14_2.w)
        goto label_142ac1ec6
    
    if (r8_4 != 0)
        rax_12 = sub_142b457c0(&var_280, rax_5)
        goto label_142ac1ec6
else
    rax_12 = sub_142b45d40(sub_142b457c0(&var_2c0, rax_5), &var_280, &var_260)
label_142ac1ec6:
    uint128_t zmm0_1 = *rax_12
    var_2a0.o = zmm0_1
    var_290 = *(rax_12 + 0x10)
    
    if (zmm0_1.d != 0)
        var_290:8.d = var_2f8
        *(result + 0x40) = zmm0_1
        *(result + 0x50) = var_290
int16_t* rax_16 = sub_142b4a710(&var_2c0, r12_1.w, r15_1.w, *(arg2 + 0x43))
*(result + 0x7c) = *rax_16
*(result + 0x84) = *(rax_16 + 8)
int16_t* rax_18
int32_t r8_12
rax_18, r8_12 = sub_142b3bef0(&var_2c0, arg2)
*(result + 0x64) = *rax_18
*(result + 0x6c) = *(rax_18 + 8)

if (*(arg2 + 0x44) s> 0)
    int32_t* rax_20
    rax_20, r8_12 = sub_142b4a910(&var_2c0, arg2)
    result[0xe] = *rax_20
    result[0xf].d = rax_20[2]

int32_t rax_22
rax_22.b = *(arg2 + 0x41) != 0
result[0x14].d = rax_22
int32_t rax_23
rax_23.b = *(arg2 + 0x2f4) != 0
*(result + 0x9c) = rax_23

if (arg2[0xc].d != 0xffffffff)
    int64_t* rax_24
    
    if (r15_1 s> 8)
        r15_1 = r12_1
        rax_24 = sub_142b4a860(&var_2c0, r12_1)
        r8_12 = r12_1
    label_142ac1fca:
        int64_t* rax_25 = sub_142b4a7f0(rax_24, &var_2e0, r8_12, rax_24.d)
        *(result + 0x7c) = *rax_25
        *(result + 0x84) = rax_25[1].d
    else if (r15_1 s> r12_1 && r12_1 s> 1)
        r12_1 = 1
        rax_24 = sub_142b4a860(&var_2c0, 1)
        r8_12 = r15_1
        goto label_142ac1fca
    int32_t rcx_33 = r15_1
    
    if (r15_1 s< 0)
        rcx_33 = -1
    
    int32_t rax_27
    rax_27.b = *(arg2 + 0x42) != 0
    r8_12.b = rcx_33 == r12_1
    int32_t* var_318
    var_318.d = rax_27
    arg2[0xc].w
    int32_t* rax_28 = sub_142b4a5c0(&var_2c0, rcx_33.b, r8_12)
    *result = *rax_28
    result[1].d = rax_28[2]
    
    if (result[8].d == 2)
        int32_t rax_30 = *(arg2 + 0x6c)
        int32_t* rax_31
        
        if (rax_30 != 0)
            if (arg2[0xb].d s<= rax_30)
                rax_31 = sub_142b45900(&var_280)
            else
                rax_31 = sub_142b45900(&var_280)
        else if (*(arg2 + 0x54) == 0)
            rax_31 = sub_142b45d10(&var_280)
        else if (*(arg2 + 0x64) != 0 && arg2[0xb].d s> rax_30)
            rax_31 = sub_142b45900(&var_280)
        else
            rax_31 = sub_142b45900(&var_280)
        
        *(result + 0x40) = *rax_31
        *(result + 0x50) = *(rax_31 + 0x10)
        result[0xb].d = var_2f8

if (*arg2 == 0)
    int32_t* rcx_38 = &var_2c0
    int32_t* rax_33
    
    if (*(arg2 + 4) != 1)
        rax_33 = sub_142b4a630(rcx_38)
    else
        rax_33 = sub_142b4a610(rcx_38)
    
    *result = *rax_33
    result[1].d = rax_33[2]
    result[0x18] = 0

int32_t* rax_35
int64_t zmm6_1
int512_t zmm7
rax_35, zmm6_1, zmm7 = sub_142abe770(&var_2c0, arg2)
sub_142ab6bb0(&result[0x15], rax_35)
sub_142ab6b80(&var_2c0)

if (arg6 != 0)
    sub_142ab6910(arg6 + 0x10, &var_260)
    *(arg6 + 8) = 0
    *(arg6 + 0x2ec) = var_2f8
    *(arg6 + 0x2e8) = 0
    *(arg6 + 0x6c) = r12_1
    
    if (r15_1 == 0xffffffff)
        r15_1 = 0x7fffffff
    
    *(arg6 + 0x58) = r15_1
    int128_t zmm0_3
    int16_t zmm1_2
    
    if (var_2a0 != 8)
        zmm0_3 = var_2a0.o
        zmm1_2 = var_290.w
    else
        int128_t* rax_37
        rax_37, zmm6_1, zmm7 = sub_142b45e30(&var_2a0, &var_280, &var_260, var_2e8)
        zmm0_3 = *rax_37
        zmm1_2 = (rax_37[1]).w
    
    var_2c0.o = zmm0_3
    int32_t rcx_44 = var_2c0
    int32_t rax_43
    int32_t rdx_34
    int64_t var_2b8
    
    if (rcx_44 == 2)
        r14_2 = sx.d(var_2b8.w)
        rsi_1 = sx.d((var_2b8 u>> 0x10).w)
        rdx_34 = var_300
        rax_43 = var_304
    else if (rcx_44 - 5 u<= 2)
        zmm6_1 = var_2b8
        r14_2 = sx.d(zmm1_2)
        rsi_1 = r14_2
        rdx_34 = var_300
        rax_43 = var_304
    else if (rcx_44 != 3)
        rdx_34 = var_300
        rax_43 = var_304
    else
        rdx_34 = sx.d((var_2b8 u>> 0x20).w)
        rax_43 = sx.d((var_2b8 u>> 0x30).w)
    *(arg6 + 0x64) = r14_2
    *(arg6 + 0x54) = rsi_1
    *(arg6 + 0x70) = rdx_34
    *(arg6 + 0x5c) = rax_43
    *(arg6 + 0x2e0) = zmm6_1

sub_142ab6900(&var_260)
sub_142a45a20(&var_158)
__security_check_cookie(rax_1 ^ &var_338)
zmm7.o = var_68
return result
