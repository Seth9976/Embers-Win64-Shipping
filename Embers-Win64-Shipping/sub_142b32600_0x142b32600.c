// 函数: sub_142b32600
// 地址: 0x142b32600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rdx = *arg1
int32_t rax_2 = rdx.d

if (rdx s> 0)
    rax_2 = -7

int16_t var_e8
int16_t var_e0
int16_t var_d8
void* rax_9

if (rax_2 + 6 u> 5)
    sub_142b35480(arg2, rdx)
    
    if (arg1[1].d != 0xa)
        var_e8 = 0x2f
        sub_142a48d70(arg2, &var_e8, 0, 1)
        sub_142b35480(arg2, sx.q(arg1[1].d))
    
    int32_t i_2 = sx.d(sub_142b33820(arg1)) - sx.d(*(arg1 + 0xc))
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            var_e8 = 0x3e
            sub_142a48d70(arg2, &var_e8, 0, 1)
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    switch (rax_2)
        case 0xfffffffa
            sub_142a48d70(arg2, &data_14366bff0, 0, 3)
        case 0xfffffffb
            sub_142a48d70(arg2, &data_14366bfe8, 0, 3)
        case 0xfffffffc
            int16_t rax_11 = *(arg1 + 0xe)
            
            if (rax_11 == 0)
                rax_11 = 0x2e
            
            var_d8 = rax_11
            var_e8 = 0x78
            rax_9 = sub_142a48d70(arg2, &var_e8, 0, 1)
            var_e0 = 0x30
            goto label_142b3273d
        case 0xfffffffd
            int16_t rax_8 = *(arg1 + 0xe)
            
            if (rax_8 == 0)
                rax_8 = 0x2e
            
            var_d8 = rax_8
            var_e8 = 0x30
            rax_9 = sub_142a48d70(arg2, &var_e8, 0, 1)
            var_e0 = 0x78
        label_142b3273d:
            sub_142a48d70(sub_142a48d70(rax_9, &var_d8, 0, 1), &var_e0, 0, 1)
        case 0xfffffffe
            int16_t rax_5 = *(arg1 + 0xe)
            
            if (rax_5 == 0)
                rax_5 = 0x2e
            
            var_d8 = rax_5
            var_e0 = 0x78
            void* rax_6 = sub_142a48d70(arg2, &var_e0, 0, 1)
            var_e8 = 0x78
            sub_142a48d70(sub_142a48d70(rax_6, &var_d8, 0, 1), &var_e8, 0, 1)
        case 0xffffffff
            sub_142a48d70(arg2, &data_14366bfe0, 0, 2)
var_e8 = 0x3a
sub_142a48d70(arg2, &var_e8, 0, 1)
var_e8 = 0x20
sub_142a48d70(arg2, &var_e8, 0, 1)
int16_t rcx_18 = arg1[3].w
int32_t rax_15

if (rcx_18 s< 0)
    rax_15 = *(arg1 + 0x1c)
else
    rax_15 = sx.d(rcx_18) s>> 5

if (rax_15 != 0)
    void* rax_16 = arg1 + 0x1a
    
    if ((2 & rcx_18.b) == 0)
        rax_16 = arg1[5]
    
    if (*rax_16 == 0x20)
        void* rax_17 = arg1[0xa]
        
        if (rax_17 == 0 || *(rax_17 + 8) != 0)
            var_e8 = 0x27
            sub_142a48d70(arg2, &var_e8, 0, 1)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_70 = 2
sub_142a48aa0(&var_78, &arg1[2], 0)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_b0 = 2
int64_t* rcx_21 = arg1[0xb]
int32_t var_ac

if (rcx_21 != 0)
    (*(*rcx_21 + 0x20))(rcx_21, &var_b8)
    int32_t rax_22
    
    if (var_b0 s< 0)
        rax_22 = var_ac
    else
        rax_22 = sx.d(var_b0) s>> 5
    
    sub_142a49310(&var_78, *(arg1[0xb] + 8), 0, &var_b8, 0, rax_22)

int64_t* rcx_23 = arg1[0xa]

if (rcx_23 != 0)
    (*(*rcx_23 + 0x20))(rcx_23, &var_b8)
    int32_t rax_27
    
    if (var_b0 s< 0)
        rax_27 = var_ac
    else
        rax_27 = sx.d(var_b0) s>> 5
    
    sub_142a49310(&var_78, *(arg1[0xa] + 8), 0, &var_b8, 0, rax_27)

int32_t r9_5
int32_t var_6c

if (var_70 s< 0)
    r9_5 = var_6c
else
    r9_5 = sx.d(var_70) s>> 5
sub_142a48d00(arg2, &var_78, 0, r9_5)
var_e8 = 0x3b
sub_142a48d70(arg2, &var_e8, 0, 1)
sub_142a47ff0(&var_b8)
sub_142a47ff0(&var_78)
__security_check_cookie(rax_1 ^ &var_118)
return &icu_64::UObject::`vftable'
