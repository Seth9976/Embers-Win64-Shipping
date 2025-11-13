// 函数: sub_142ae4d60
// 地址: 0x142ae4d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a0 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t var_1b8 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_198 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_190 = 2
int32_t rax_3 = (*(*arg1 + 0xc8))(arg1, 1, &var_1b8)
int32_t rcx = var_1b8
int32_t rbx

if (rcx s<= 0)
    int64_t* rax_5 = (*(*arg2 + 0x10))(arg2)
    sub_142a6c1a0(rax_5, j_sub_142a4bbc0(), &var_1b8)
    rbx = sub_142a695b0(arg2, 0x14, &var_1b8) - sub_142a695b0(rax_5, 0x14, &var_1b8)
    
    if (rax_5 != 0)
        (**rax_5)(rax_5, 1)
    
    rcx = var_1b8
else
    rbx = 0

int32_t rsi_2 = 0
int64_t rbx_2

if (rcx s> 0 || rbx + 2 s< 0 || rbx + 2 s>= arg1[0x5b].d)
    rbx_2 = 0
else
    int64_t rax_11 = sx.q(rbx + 2) << 4
    int64_t rdx = arg1[0x5c]
    
    if (*(rax_11 + rdx) != rbx)
        rbx_2 = 0
    else
        rbx_2 = *(rax_11 + rdx + 8)
        
        if (rbx_2 == 0)
            rbx_2 = 0
        else
            rsi_2 = *(rax_11 + rdx + 4)

int32_t var_1c8
int32_t var_1c0
int32_t var_18c

if (rcx s<= 0 && rbx_2 != 0)
    sub_142a4afe0(&var_198)
    int32_t r8_5
    
    if (var_190 s< 0)
        r8_5 = var_18c
    else
        r8_5 = sx.d(var_190) s>> 5
    
    var_1c0 = rsi_2
    var_1c8 = 0
    sub_142a49390(&var_198, 0, r8_5, rbx_2, var_1c8, var_1c0)

int32_t rax_15

if (var_190 s< 0)
    rax_15 = var_18c
else
    rax_15 = sx.d(var_190) s>> 5

uint64_t rdx_2

if (rax_15 s<= 0 || (arg1[0x2e].w & 0xffe0) == 0
        || ((arg1[0x36].w & 0xffe0) != 0 && arg1[0x3d] != 0 && arg1[0x5d].b == 0))
    rdx_2 = zx.q(rax_3)
else
    if (sub_142a54720(sub_142a486d0(&var_198, 0)) != 0)
        struct icu_64::BreakIterator::icu_64::WholeStringBreakIterator::VTable** rdx_1 = arg1[0x5e]
        
        if (rdx_1 != 0)
            if (rax_3 == 0x102)
                sub_142b2d520(&var_198, rdx_1, &arg1[0x3f], 0x300)
            else if (rax_3 != 0x103)
                if (rax_3 == 0x104 && *(arg1 + 0x2eb) != 0)
                    sub_142b2d520(&var_198, rdx_1, &arg1[0x3f], 0x300)
            else if (*(arg1 + 0x2ea) != 0)
                sub_142b2d520(&var_198, rdx_1, &arg1[0x3f], 0x300)
    
    rdx_2 = 0x100

int64_t* rcx_11 = arg1[0x2c]
(*(*rcx_11 + 0xc0))(rcx_11, rdx_2, &var_1b8)

if ((arg1[0x2e].w & 0xffe0) == 0)
    int64_t* rcx_12 = arg1[0x2c]
    (*(*rcx_12 + 0xf8))(rcx_12, &arg1[0x35])
    int64_t* rcx_13 = arg1[0x2c]
    (*(*rcx_13 + 0x40))(rcx_13, arg2, arg3, arg4, var_1c8, var_1c0)
else if ((arg1[0x36].w & 0xffe0) == 0 || arg1[0x3d] == 0)
    int32_t r9_5 = var_18c
    int32_t rcx_28
    
    if (var_190 s< 0)
        rcx_28 = r9_5
    else
        rcx_28 = sx.d(var_190) s>> 5
    
    if (rcx_28 s<= 0)
        int64_t* rcx_30 = arg1[0x2c]
        int64_t r8_12 = *rcx_30
        (*(r8_12 + 0xf8))(rcx_30, &arg1[0x2d], r8_12)
        int64_t* rcx_31 = arg1[0x2c]
        (*(*rcx_31 + 0x40))(rcx_31, arg2, arg3, arg4, var_1c8, var_1c0)
    else
        if (var_190 s>= 0)
            r9_5 = sx.d(var_190) s>> 5
        
        sub_142a48d00(arg3, &var_198, 0, r9_5)
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_150_1 = 2
    int32_t rax_23
    
    if (var_190 s< 0)
        rax_23 = var_18c
    else
        rax_23 = sx.d(var_190) s>> 5
    
    void* rdx_8
    
    if (rax_23 s<= 0)
        rdx_8 = &arg1[0x2d]
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_24 =
            sub_142a47a60(&var_98, 1, &data_143655278, 2)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
        sub_142a58a40(&var_198, sub_142a47a60(&var_d8, 1, &data_143655a58, 1), rax_24)
        sub_142a47ff0(&var_d8)
        sub_142a47ff0(&var_98)
        int16_t var_1b0 = 0x27
        sub_142a49390(&var_198, 0, 0, &var_1b0, 0, 1)
        var_1b0 = 0x27
        sub_142a48d70(&var_198, &var_1b0, 0, 1)
        rdx_8 = &var_198
    
    sub_142a48aa0(&var_158, rdx_8, 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_110_1 = 2
    var_1c8.q = &var_1b8
    sub_142b62a90(arg1[0x3d], &arg1[0x35], &var_158, &var_118, var_1c8)
    int64_t* rcx_23 = arg1[0x2c]
    (*(*rcx_23 + 0xf8))(rcx_23, &var_118)
    int64_t* rcx_24 = arg1[0x2c]
    (*(*rcx_24 + 0x40))(rcx_24, arg2, arg3, arg4)
    sub_142a47ff0(&var_118)
    sub_142a47ff0(&var_158)

sub_142a47ff0(&var_198)
__security_check_cookie(rax_1 ^ &var_1e8)
return arg3
