// 函数: sub_142aad3b0
// 地址: 0x142aad3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t var_18 = rdi
int64_t var_e0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* var_e8 = arg2
void var_b0
(*(*arg3 + 0x50))(arg3, &var_b0, arg4)
int32_t r12 = 0
char i

for (i = sub_142ac2da0(&var_b0, 0, &var_e8, arg3); i != 0; 
        i = sub_142ac2da0(&var_b0, r12, &var_e8, arg3))
    void* rax_3 = var_e8
    void* rcx_2 = rax_3
    uint32_t j
    uint32_t r8_2
    
    do
        r8_2 = zx.d(*rcx_2)
        j = zx.d(*(rcx_2 + "beforeCurrency" - rax_3))
        
        if (r8_2 != j)
            break
        
        rcx_2 += 1
    while (j != 0)
    
    if (r8_2 - j != 0)
        int64_t r8_4 = "afterCurrency" - rax_3
        uint32_t j_1
        uint32_t rdx_1
        
        do
            rdx_1 = zx.d(*rax_3)
            j_1 = zx.d(*(rax_3 + r8_4))
            
            if (rdx_1 != j_1)
                break
            
            rax_3 += 1
        while (j_1 != 0)
        
        if (rdx_1 - j_1 == 0)
            rdi.b = 0
            *(arg1 + 0x11) = 1
            goto label_142aad4a0
    else
        rdi.b = 1
        *(arg1 + 0x10) = 1
    label_142aad4a0:
        void var_d8
        (*(*arg3 + 0x50))(arg3, &var_d8, arg4)
        int32_t rsi_1 = 0
        
        if (sub_142ac2da0(&var_d8, 0, &var_e8, arg3) != 0)
            char j_2
            
            do
                void* rcx_5 = var_e8
                void* rax_6 = rcx_5
                uint32_t k
                uint32_t r8_7
                
                do
                    r8_7 = zx.d(*rax_6)
                    k = zx.d(*(rax_6 + "currencyMatch" - rcx_5))
                    
                    if (r8_7 != k)
                        break
                    
                    rax_6 += 1
                while (k != 0)
                
                int32_t rbx_1
                
                if (r8_7 - k != 0)
                    void* rax_7 = rcx_5
                    uint32_t r8_10
                    uint32_t k_1
                    
                    do
                        uint32_t r8_9 = zx.d(*rax_7)
                        k_1 = zx.d(*(rax_7 + "surroundingMatch" - rcx_5))
                        r8_10 = r8_9 - k_1
                        
                        if (r8_9 != k_1)
                            break
                        
                        rax_7 += 1
                    while (k_1 != 0)
                    
                    if (r8_10 == 0)
                        rbx_1 = r8_10 + 1
                        goto label_142aad54e
                    
                    int64_t r8_11 = "insertBetween" - rcx_5
                    uint32_t rdx_5
                    uint32_t k_2
                    
                    do
                        uint32_t rdx_4 = zx.d(*rcx_5)
                        k_2 = zx.d(*(rcx_5 + r8_11))
                        rdx_5 = rdx_4 - k_2
                        
                        if (rdx_4 != k_2)
                            break
                        
                        rcx_5 += 1
                    while (k_2 != 0)
                    
                    if (rdx_5 == 0)
                        rbx_1 = rdx_5 + 2
                        goto label_142aad54e
                else
                    rbx_1 = 0
                label_142aad54e:
                    void* rcx_6 = *(arg1 + 8)
                    void* rax_8
                    
                    if (*arg4 s<= 0)
                        int64_t rax_10 = zx.q(rbx_1) << 6
                        void* rax_11
                        
                        if (rdi.b == 0)
                            rax_11 = rax_10 + 0xa38
                        else
                            rax_11 = rax_10 + 0x978
                        
                        rax_8 = rax_11 + rcx_6
                    else
                        rax_8 = rcx_6 + 0x708
                    
                    if ((*(rax_8 + 8) & 0xffe0) == 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_12 =
                            sub_142a9c7e0(arg3, &var_88)
                        void* r8_13 = *(arg1 + 8)
                        void* rcx_10
                        
                        if (rdi.b == 0)
                            rcx_10 = r8_13 + 0xa38 + (zx.q(rbx_1) << 6)
                        else
                            rcx_10 = (zx.q(rbx_1) << 6) + r8_13 + 0x978
                        
                        sub_142a48100(rcx_10, rax_12)
                        sub_142a47ff0(&var_88)
                rsi_1 += 1
                j_2 = sub_142ac2da0(&var_d8, rsi_1, &var_e8, arg3)
            while (j_2 != 0)
    
    r12 += 1

__security_check_cookie(rax_1 ^ &var_108)
return i
