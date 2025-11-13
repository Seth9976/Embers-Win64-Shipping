// 函数: sub_142ae8520
// 地址: 0x142ae8520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* r14 = *(arg1 + 0x48)
int64_t rdi = arg2
uint64_t result = (*(*r14 + 0x38))(r14)
int64_t rsi = sx.q(result.d)

if (rdi s< 0)
    rdi = 0
else if (rdi s> rsi)
    rdi = rsi

if (arg3 == 0)
    int64_t rcx_2 = *(arg1 + 0x20)
    result = sx.q(rdi.d)
    
    if (result s> rcx_2 && result s<= *(arg1 + 0x10))
        *(arg1 + 0x28) = rdi.d - rcx_2.d
        result.b = 1
    else if (rdi.d != 0 || rcx_2 != 0)
        int32_t rax_5 = (rdi - 9).d
        int64_t rcx_3 = sx.q(rax_5)
        
        if (rax_5 s< 0)
            rcx_3 = 0
        
        int64_t rdx = sx.q((rdi + 1).d)
        *(arg1 + 0x20) = rcx_3
        
        if (rdx s> rsi)
            rdx = rsi
        
        *(arg1 + 0x10) = rdx
    label_142ae8612:
        int16_t* rbp_1 = *(arg1 + 0x40)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
        sub_142a47d50(&var_68, rbp_1, 0, 0xa)
        (*(*r14 + 0x10))(r14, zx.q(*(arg1 + 0x20)), zx.q(*(arg1 + 0x10)), &var_68)
        int32_t rdi_3 = rdi.d - *(arg1 + 0x20)
        int32_t rdx_4 = *(arg1 + 0x10) - *(arg1 + 0x20)
        int64_t r8_1 = *(arg1 + 0x10)
        *(arg1 + 0x30) = rbp_1
        *(arg1 + 0x2c) = rdx_4
        *(arg1 + 0x28) = rdi_3
        
        if (r8_1 s< rsi && (zx.d(rbp_1[sx.q(rdx_4 - 1)]) & 0xfffffc00) == 0xd800)
            *(arg1 + 0x2c) = rdx_4 - 1
            
            if (rdi_3 s> rdx_4 - 1)
                rdi_3 = rdx_4 - 1
            
            *(arg1 + 0x10) = r8_1 - 1
            *(arg1 + 0x28) = rdi_3
        
        int64_t rcx_8 = *(arg1 + 0x20)
        
        if (rcx_8 s> 0 && (zx.d(*rbp_1) & 0xfffffc00) == 0xdc00)
            *(arg1 + 0x2c) -= 1
            *(arg1 + 0x28) -= 1
            *(arg1 + 0x30) = &rbp_1[1]
            *(arg1 + 0x20) = rcx_8 + 1
        
        int64_t rdx_6 = sx.q(*(arg1 + 0x28))
        int64_t r8_2 = *(arg1 + 0x30)
        
        if ((zx.d(*(r8_2 + (rdx_6 << 1))) & 0xfffffc00) == 0xdc00 && rdx_6.d s> 0)
            int32_t rax_15 = *(arg1 + 0x28)
            
            if ((zx.d(*(r8_2 + (sx.q(rdx_6.d - 1) << 1))) & 0xfffffc00) == 0xd800)
                rax_15 = rdx_6.d - 1
            
            *(arg1 + 0x28) = rax_15
        
        *(arg1 + 0x1c) = *(arg1 + 0x2c)
        sub_142a47ff0(&var_68)
        result.b = 1
    else
        *(arg1 + 0x28) = 0
        result.b = 0
else
    int64_t rcx_1 = sx.q(rdi.d)
    
    if (rcx_1 s< *(arg1 + 0x20) || rcx_1 s>= *(arg1 + 0x10))
        if (rdi.d s< result.d || *(arg1 + 0x10) != rsi)
            int64_t rax_3 = rdi + 9
            
            if (rax_3 s> rsi)
                rax_3 = rsi
            
            *(arg1 + 0x10) = rax_3
            *(arg1 + 0x20) = rax_3 - 0xa
            
            if (rax_3 - 0xa s< 0)
                *(arg1 + 0x20) = 0
            
            goto label_142ae8612
        
        *(arg1 + 0x28) = result.d - *(arg1 + 0x20)
        result.b = 0
    else
        *(arg1 + 0x28) = rdi.d - *(arg1 + 0x20)
        result.b = 1

__security_check_cookie(rax_1 ^ &var_88)
return result
