// 函数: sub_140a7ac00
// 地址: 0x140a7ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
sub_142a50520(arg1 + 8, arg1 + 8, &var_88)
int32_t rdi = 0
int16_t* var_e8 = nullptr
int16_t* r12 = nullptr
int32_t var_dc = 0
int32_t r13 = 0
int32_t rbx_1
int32_t var_7c

if (var_80 s< 0)
    rbx_1 = var_7c
else
    rbx_1 = sx.d(var_80) s>> 5

if (rbx_1 s>= 1)
    int32_t var_e0_1
    
    if (rbx_1 + 1 s> 0)
        var_e0_1 = rbx_1 + 1
        sub_140594770(&var_e8)
        r12 = var_e8
        r13 = var_e0_1
    else if (rbx_1 + 1 s< 0 && rbx_1 != 0xffffffff)
        var_e0_1 = rbx_1 + 1
        sub_1405a50a0(&var_e8)
        r12 = var_e8
        r13 = var_e0_1
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
    
    memcpy(r12, rdx_2, rbx_1 * 2)
    r12[sx.q(rbx_1)] = 0

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_c0 = 2
sub_142a50c60(arg1 + 8, arg1 + 8, &var_c8)
int16_t* r14_1 = nullptr
int16_t* var_d8 = nullptr
int32_t r15 = 0
int32_t var_cc = 0
int32_t rbx_4
int32_t var_bc

if (var_c0 s< 0)
    rbx_4 = var_bc
else
    rbx_4 = sx.d(var_c0) s>> 5
int32_t rcx_8

if (rbx_4 s>= 1)
    int32_t var_d0_1
    
    if (rbx_4 + 1 s> 0)
        var_d0_1 = rbx_4 + 1
        sub_140594770(&var_d8)
        r14_1 = var_d8
        r15 = var_d0_1
    else if (rbx_4 + 1 s< 0 && rbx_4 != 0xffffffff)
        var_d0_1 = rbx_4 + 1
        sub_1405a50a0(&var_d8)
        r14_1 = var_d8
        r15 = var_d0_1
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
    
    rcx_8 = memcpy(r14_1, rdx_5, rbx_4 * 2)
    r14_1[sx.q(rbx_4)] = 0

if (rbx_4 s< 1 || r15 s<= 1)
    *arg2 = r12
    arg2[1].d = r13
    *(arg2 + 0xc) = var_dc
    
    if (r14_1 != 0)
        int64_t* rcx_23 = data_143ddb3f0
        
        if (rcx_23 == 0)
            sub_140a750a0()
            rcx_23 = data_143ddb3f0
        
        (*(*rcx_23 + 0x30))(rcx_23, r14_1)
    
    sub_142a47ff0(&var_c8)
else
    var_e8 = nullptr
    sub_1405a4c70(&var_e8, sbb.d(rcx_8, rcx_8, r13 != 0) + 3 + r13, 0)
    memcpy(var_e8, r12, r13 * 2)
    sub_140a20ba0(&var_e8, &data_142d8adc4, 2)
    int16_t* rbx_6 = var_e8
    var_e8 = nullptr
    int32_t var_e0_2
    var_e0_2.q = 0
    
    if (r13 s> 1)
        int32_t r15_1
        
        if (r15 == 0)
            r15_1 = 0
        else
            r15_1 = r15 - 1
        
        if (r13 == 0 && r15_1 != 0)
            rdi = 1
        
        var_d8 = rbx_6
        int32_t rdx_13 = rdi + r13 + r15_1
        
        if (rdx_13 s> var_dc)
            sub_1405947f0(&var_d8, rdx_13)
        
        sub_140a20ba0(&var_d8, r14_1, r15_1)
        *arg2 = var_d8
        arg2[1].d = r13
        *(arg2 + 0xc) = var_dc
    else
        *arg2 = nullptr
        arg2[1].d = r15
        
        if (r15 != 0)
            sub_1405a4c70(arg2, r15, 0)
            memcpy(*arg2, r14_1, r15 * 2)
        else
            *(arg2 + 0xc) = 0
        
        if (rbx_6 != 0)
            int64_t* rcx_16 = data_143ddb3f0
            
            if (rcx_16 == 0)
                sub_140a750a0()
                rcx_16 = data_143ddb3f0
            
            (*(*rcx_16 + 0x30))(rcx_16, rbx_6)
    
    if (r14_1 != 0)
        int64_t* rcx_19 = data_143ddb3f0
        
        if (rcx_19 == 0)
            sub_140a750a0()
            rcx_19 = data_143ddb3f0
        
        (*(*rcx_19 + 0x30))(rcx_19, r14_1)
    
    sub_142a47ff0(&var_c8)
    
    if (r12 != 0)
        int64_t* rcx_21 = data_143ddb3f0
        
        if (rcx_21 != 0)
            int64_t r8_9 = *rcx_21
            (*(r8_9 + 0x30))(rcx_21, r12, r8_9)
        else
            sub_140a750a0()
            int64_t* rcx_22 = data_143ddb3f0
            (*(*rcx_22 + 0x30))(rcx_22, r12)

sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_108)
return arg2
