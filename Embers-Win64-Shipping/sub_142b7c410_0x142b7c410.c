// 函数: sub_142b7c410
// 地址: 0x142b7c410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t r11 = sx.q(arg2)
int32_t rdx = 0
uint64_t rbx = zx.q(r11.d)
void* r10 = *(arg1 + 0x10)
int16_t r9 = *(r10 + 8)
int64_t r8 = r11 * 2
uint64_t result

while (true)
    int32_t rax_3
    
    if (r9 s< 0)
        rax_3 = *(r10 + 0xc)
    else
        rax_3 = sx.d(r9) s>> 5
    
    char const* const rax_9
    
    if (rbx.d != rax_3)
        int16_t rcx = *(r10 + 8)
        int32_t rax_5
        
        if (rcx s< 0)
            rax_5 = *(r10 + 0xc)
        else
            rax_5 = sx.d(rcx) s>> 5
        
        int16_t rax_7
        
        if (rbx.d u>= rax_5)
            rax_7 = -1
        else
            void* rax_6 = r10 + 0xa
            
            if ((rcx.b & 2) == 0)
                rax_6 = *(r10 + 0x18)
            
            rax_7 = *(r8 + rax_6)
        
        rbx = zx.q(rbx.d + 1)
        r8 += 2
        
        if (rax_7 == 0x5b)
            rdx += 1
            continue
        else if (rax_7 != 0x5d)
            continue
        else
            int32_t temp0_1 = rdx
            rdx -= 1
            
            if (temp0_1 != 1)
                continue
            else
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
                sub_142b66fd0(arg3, sub_142a71620(r10, &var_78, r11.d, rbx.d), arg4)
                sub_142a47ff0(&var_78)
                
                if (*arg4 s> 0)
                    rax_9 = "not a valid UnicodeSet pattern"
                    goto label_142b7c56a
                
                rbx = sx.q(sub_142b7c9e0(arg1, rbx.d))
                void* rcx_5 = *(arg1 + 0x10)
                int16_t rax_11 = *(rcx_5 + 8)
                int32_t rax_13
                
                if (rax_11 s< 0)
                    rax_13 = *(rcx_5 + 0xc)
                else
                    rax_13 = sx.d(rax_11) s>> 5
                
                if (rbx.d != rax_13)
                    int16_t rdx_4 = *(rcx_5 + 8)
                    int32_t rax_15
                    
                    if (rdx_4 s< 0)
                        rax_15 = *(rcx_5 + 0xc)
                    else
                        rax_15 = sx.d(rdx_4) s>> 5
                    
                    if (rbx.d u< rax_15)
                        void* rcx_6
                        
                        if ((rdx_4.b & 2) == 0)
                            rcx_6 = *(rcx_5 + 0x18)
                        else
                            rcx_6 = rcx_5 + 0xa
                        
                        if (*(rcx_6 + (rbx << 1)) == 0x5d)
                            result = zx.q((rbx + 1).d)
                            break
                
                if (*arg4 s<= 0)
                    rax_9 = "missing option-terminating ']' after UnicodeSet pattern"
                    goto label_142b7c56a
    else if (*arg4 s<= 0)
        rax_9 = "unbalanced UnicodeSet pattern brackets"
    label_142b7c56a:
        *arg4 = 3
        *(arg1 + 0x30) = rax_9
        
        if (*(arg1 + 0x28) != 0)
            sub_142b7c7c0(arg1)
    result = zx.q(rbx.d)
    break

__security_check_cookie(rax_1 ^ &var_a8)
return result
