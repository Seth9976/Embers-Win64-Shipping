// 函数: sub_140a7a700
// 地址: 0x140a7a700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
sub_142a506e0(arg1 + 8, arg1 + 8, &var_88)
int64_t var_f8 = 0
int64_t r15 = 0
int32_t var_ec = 0
int32_t r13 = 0
int32_t rbx_1
int32_t var_7c

if (var_80 s< 0)
    rbx_1 = var_7c
else
    rbx_1 = sx.d(var_80) s>> 5

if (rbx_1 s>= 1)
    int32_t var_f0_1
    
    if (rbx_1 + 1 s> 0)
        var_f0_1 = rbx_1 + 1
        sub_140594770(&var_f8)
        r15 = var_f8
        r13 = var_f0_1
    else if (rbx_1 + 1 s< 0 && rbx_1 != 0xffffffff)
        var_f0_1 = rbx_1 + 1
        sub_1405a50a0(&var_f8)
        r15 = var_f8
        r13 = var_f0_1
    char rax_4 = var_80.b
    void* rdx_2
    
    if ((rax_4 & 0x11) == 0)
        void var_7e
        rdx_2 = &var_7e
        void* var_70
        
        if ((rax_4 & 2) == 0)
            rdx_2 = var_70
    else
        rdx_2 = nullptr
    
    int64_t rbx_2 = sx.q(rbx_1) * 2
    memcpy(r15, rdx_2, rbx_2.d)
    *(rbx_2 + r15) = 0

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_c0 = 2
sub_142a50a40(arg1 + 8, arg1 + 8, &var_c8)
int64_t r14 = 0
int64_t var_e8 = 0
int32_t rsi_1 = 0
int32_t var_dc = 0
int32_t rbx_4
int32_t var_bc

if (var_c0 s< 0)
    rbx_4 = var_bc
else
    rbx_4 = sx.d(var_c0) s>> 5
int32_t rcx_8

if (rbx_4 s>= 1)
    int32_t var_e0_1
    
    if (rbx_4 + 1 s> 0)
        var_e0_1 = rbx_4 + 1
        sub_140594770(&var_e8)
        r14 = var_e8
        rsi_1 = var_e0_1
    else if (rbx_4 + 1 s< 0 && rbx_4 != 0xffffffff)
        var_e0_1 = rbx_4 + 1
        sub_1405a50a0(&var_e8)
        r14 = var_e8
        rsi_1 = var_e0_1
    char rax_8 = var_c0.b
    void* rdx_5
    
    if ((rax_8 & 0x11) == 0)
        void var_be
        rdx_5 = &var_be
        void* var_b0
        
        if ((rax_8 & 2) == 0)
            rdx_5 = var_b0
    else
        rdx_5 = nullptr
    
    int64_t rbx_5 = sx.q(rbx_4) * 2
    rcx_8 = memcpy(r14, rdx_5, rbx_5.d)
    *(rbx_5 + r14) = 0

if (rbx_4 s< 1 || rsi_1 s<= 1)
    *arg2 = r15
    arg2[1].d = r13
    *(arg2 + 0xc) = var_ec
    
    if (r14 != 0)
        int64_t* rcx_25 = data_143ddb3f0
        
        if (rcx_25 == 0)
            sub_140a750a0()
            rcx_25 = data_143ddb3f0
        
        (*(*rcx_25 + 0x30))(rcx_25, r14)
    
    sub_142a47ff0(&var_c8)
else
    var_e8 = 0
    sub_1405a4c70(&var_e8, sbb.d(rcx_8, rcx_8, r13 != 0) + 3 + r13, 0)
    memcpy(var_e8, r15, r13 * 2)
    sub_140a20ba0(&var_e8, &data_142e62d08, 2)
    int64_t r13_1 = var_e8
    var_e8 = 0
    int32_t var_e0_2
    var_e0_2.q = 0
    int64_t var_d8
    int32_t rax_12
    int64_t rbx_6
    
    if (r13 s> 1)
        int32_t rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = rsi_1 - 1
        
        int32_t rax_13
        
        if (r13 == 0)
            rax_13 = r13 + 1
        
        if (r13 != 0 || rsi_2 == 0)
            rax_13 = 0
        
        var_f8 = r13_1
        int32_t rdx_12 = rax_13 + r13 + rsi_2
        r13_1 = 0
        
        if (rdx_12 s> var_dc)
            sub_1405947f0(&var_f8, rdx_12)
        
        sub_140a20ba0(&var_f8, r14, rsi_2)
        rax_12 = var_dc
        rbx_6 = var_f8
        rsi_1 = r13
        int32_t var_f0_2
        var_f0_2.q = 0
        var_f8 = 0
    else
        rbx_6 = 0
        var_d8 = 0
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_d8, rsi_1, 0)
            rbx_6 = var_d8
            memcpy(rbx_6, r14, rsi_1 * 2)
            int32_t var_cc
            rax_12 = var_cc
        else
            rax_12 = 0
    
    var_d8 = rbx_6
    int32_t rdi
    rdi.b = rsi_1 == 0
    int32_t rdx_15 = rdi + 1 + rsi_1
    
    if (rdx_15 s> rax_12)
        sub_1405947f0(&var_d8, rdx_15)
    
    sub_140a20ba0(&var_d8, &data_142da76f4, 1)
    *arg2 = var_d8
    arg2[1].d = rsi_1
    *(arg2 + 0xc) = rax_12
    
    if (r13_1 != 0)
        int64_t* rcx_20 = data_143ddb3f0
        
        if (rcx_20 == 0)
            sub_140a750a0()
            rcx_20 = data_143ddb3f0
        
        (*(*rcx_20 + 0x30))(rcx_20, r13_1)
    
    if (r14 != 0)
        int64_t* rcx_21 = data_143ddb3f0
        
        if (rcx_21 == 0)
            sub_140a750a0()
            rcx_21 = data_143ddb3f0
        
        (*(*rcx_21 + 0x30))(rcx_21, r14)
    
    sub_142a47ff0(&var_c8)
    
    if (r15 != 0)
        int64_t* rcx_23 = data_143ddb3f0
        
        if (rcx_23 != 0)
            int64_t r8_10 = *rcx_23
            (*(r8_10 + 0x30))(rcx_23, r15, r8_10)
        else
            sub_140a750a0()
            int64_t* rcx_24 = data_143ddb3f0
            (*(*rcx_24 + 0x30))(rcx_24, r15)

sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_118)
return arg2
