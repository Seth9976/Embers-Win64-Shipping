// 函数: sub_142c70eb0
// 地址: 0x142c70eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t var_48 = __security_cookie ^ &var_88
int64_t var_58 = 0
int64_t* rbx = &var_58
int64_t var_50 = 0
int64_t* r12 = nullptr
char ch_1 = *arg1
char* rsi = arg1
int64_t result

if (ch_1 != 0x3a)
label_142c70f05:
    int64_t rbp_1 = 0
    int32_t r15_1 = 0
    char* var_68_1 = rsi
    int32_t ch = sx.d(ch_1)
    
    if (ch_1 != 0)
        void* r14_1 = &var_58:2
        
        while (true)
            rsi = &rsi[1]
            char const* const r13_1 = "0123456789abcdef"
            char* rax_2 = strchr("0123456789abcdef", ch)
            char* rcx = rax_2
            char* rax_3
            
            if (rax_2 == 0)
                r13_1 = "0123456789ABCDEF"
                rax_3 = strchr("0123456789ABCDEF", ch)
                rcx = rax_3
            
            if (rax_2 != 0 || rax_3 != 0)
                rbp_1 = (rcx - r13_1) | rbp_1 << 4
                r15_1 += 1
                
                if (r15_1 s> 4)
                    goto label_142c71098
                
            label_142c70fda:
                ch = sx.d(*rsi)
                
                if (ch != 0)
                    continue
                else if (r15_1 != 0)
                    if (rbx + 2 u> &var_48)
                        goto label_142c71098
                    
                    *rbx = (rbp_1 u>> 8).b
                    *(rbx + 1) = rbp_1.b
                    rbx += 2
            else
                if (ch == 0x3a)
                    var_68_1 = rsi
                    
                    if (r15_1 != 0)
                        if (r14_1 u> &var_48)
                            goto label_142c71098
                        
                        r14_1 += 2
                        r15_1 = 0
                        *rbx = (rbp_1 u>> 8).b
                        *(rbx + 1) = rbp_1.b
                        rbx += 2
                        rbp_1 = 0
                    else
                        if (r12 != 0)
                            goto label_142c71098
                        
                        r12 = rbx
                    
                    goto label_142c70fda
                
                if (ch != 0x2e)
                    goto label_142c71098
                
                if (rbx + 4 u> &var_48)
                    goto label_142c71098
                
                if (sub_142c70dd0(var_68_1, rbx) s<= 0)
                    goto label_142c71098
                
                rbx += 4
            
            if (r12 != 0)
                int64_t i_1 = rbx - r12
                
                if (rbx == &var_48)
                    break
                
                if (i_1 s>= 1)
                    void* rcx_3 = r12 - 1 + i_1
                    void* r8_2 = &var_48 - i_1 - r12
                    int64_t i
                    
                    do
                        *(r8_2 + rcx_3) = *rcx_3
                        *rcx_3 = 0
                        rcx_3 -= 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            else if (rbx != &var_48)
                break
            
            *arg2 = var_58.o
            result = 1
            goto label_142c710be
    
label_142c71098:
    result = 0
else
    ch_1 = rsi[1]
    rsi = &rsi[1]
    
    if (ch_1 == 0x3a)
        goto label_142c70f05
    
    result = 0

label_142c710be:
__security_check_cookie(var_48 ^ &var_88)
return result
