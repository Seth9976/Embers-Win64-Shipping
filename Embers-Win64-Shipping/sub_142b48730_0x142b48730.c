// 函数: sub_142b48730
// 地址: 0x142b48730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rbx

if ((*(arg1 + 0x18) & 0xffe0) == 0)
    rbx = -1
else
    rbx = sub_142b465e0(arg2, arg1 + 0x10)

int64_t rdi
rdi.b = rbx == sub_142b467c0(arg2)
int16_t rax_4 = *(arg1 + 0x18)
int32_t rax_6

if (rax_4 s< 0)
    rax_6 = *(arg1 + 0x1c)
else
    rax_6 = sx.d(rax_4) s>> 5

int32_t rdx_9

if (rbx != rax_6)
    if ((*(arg1 + 0x58) & 0xffe0) == 0)
        rbx = -1
    else
        rbx = sub_142b46670(arg2, arg1 + 0x50)
    
    int32_t rax_8
    
    if (rdi.b == 0)
        rax_8 = sub_142b467c0(arg2)
    
    if (rdi.b != 0 || rbx == rax_8)
        rdi.b = 1
    
    int16_t rax_9 = *(arg1 + 0x58)
    int32_t rax_11
    
    if (rax_9 s< 0)
        rax_11 = *(arg1 + 0x5c)
    else
        rax_11 = sx.d(rax_9) s>> 5
    
    if (rbx == rax_11)
        *(arg3 + 0xd0) = *(arg1 + 8)
        *(arg3 + 0xd4) = *(arg1 + 0xc)
        goto label_142b487c5
    
    if (*(arg1 + 0x90) == 0)
        int32_t rsi_1 = 0
        void* rbx_1 = arg1 + 0xa0
        int64_t i_1 = 6
        int64_t i
        
        do
            int32_t rax_14 = sub_142b46670(arg2, rbx_1 - 8)
            int16_t rcx_14 = *rbx_1
            int32_t rdx_8
            
            if (rcx_14 s< 0)
                rdx_8 = *(rbx_1 + 4)
            else
                rdx_8 = sx.d(rcx_14) s>> 5
            
            if (rax_14 == rdx_8)
                int32_t rax_16
                
                if (rcx_14 s< 0)
                    rax_16 = *(rbx_1 + 4)
                else
                    rax_16 = sx.d(rcx_14) s>> 5
                
                if (rax_16 s> rsi_1)
                    if (rcx_14 s< 0)
                        rsi_1 = *(rbx_1 + 4)
                    else
                        rsi_1 = sx.d(rcx_14) s>> 5
            
            if (rdi.b != 0 || rax_14 s> 0)
                rdi.b = 1
            
            rbx_1 += 0x40
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (rsi_1 s> 0)
            *(arg3 + 0xd0) = *(arg1 + 8)
            *(arg3 + 0xd4) = *(arg1 + 0xc)
            rdx_9 = rsi_1
            goto label_142b4897e
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        sub_142b46920(arg2, &var_98)
        struct icu_64::UObject::icu_64::ParsePosition::VTable* var_b0 =
            &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
        int32_t var_a8_1 = 0
        int32_t var_a4_1 = 0xffffffff
        int32_t var_b8 = 0
        sub_142aaab90(*(arg1 + 0x298), &var_98, &var_b0, 0, &var_b8, arg3 + 0xd0, arg4)
        int32_t rax_13
        
        if (rdi.b == 0)
            rax_13 = sub_142b467c0(arg2)
        
        if (rdi.b != 0 || var_b8 == rax_13)
            rdi.b = 1
        
        if (*arg4 s<= 0 && var_a8_1 != 0)
            sub_142b464f0(arg2, var_a8_1)
            sub_142ab9940(arg3, arg2)
        
        sub_142aa8450(&var_b0)
        sub_142a47ff0(&var_98)
else
    *(arg3 + 0xd0) = *(arg1 + 8)
    *(arg3 + 0xd4) = *(arg1 + 0xc)
label_142b487c5:
    rdx_9 = rbx
label_142b4897e:
    *(arg3 + 0xd6) = 0
    sub_142b464f0(arg2, rdx_9)
    sub_142ab9940(arg3, arg2)
__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rdi.b)
