// 函数: sub_142c6a240
// 地址: 0x142c6a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
int64_t rax_1 = __security_cookie ^ &var_48

if (arg2 == 0)
    __security_check_cookie(rax_1 ^ &var_48)
    return 0

int64_t* rbx = &var_48
int64_t* rdi = &var_48
int64_t var_40 = 0
var_48 = 0

while (true)
    int64_t rax_3 = *arg1
    int64_t rcx_2 = arg2[4]
    
    if (rax_3 s>= rcx_2)
        if (rax_3 s> rcx_2)
        label_142c6a2bf:
            int64_t** rcx_4 = arg2[1]
            void* r8_2 = &arg2[1]
            
            if (rcx_4 == 0)
                break
            
            int64_t r9_2 = rcx_4[4]
            
            if (rax_3 s>= r9_2)
                if (rax_3 s> r9_2)
                label_142c6a2f7:
                    *r8_2 = *rcx_4
                    r8_2 = &rcx_4[1]
                    bool cond:5_1 = *r8_2 == 0
                    *rcx_4 = arg2
                    arg2 = rcx_4
                    
                    if (cond:5_1)
                        break
                else
                    int32_t r9_3 = arg1[1].d
                    int32_t r10_1 = rcx_4[5].d
                    
                    if (r9_3 u>= r10_1)
                        int32_t rax_4
                        rax_4.b = r9_3 u> r10_1
                        
                        if (rax_4 s> 0)
                            goto label_142c6a2f7
            
            rdi[1] = arg2
            rdi = arg2
            arg2 = *r8_2
            continue
        else
            int32_t r8_1 = arg1[1].d
            int32_t r9_1 = arg2[5].d
            
            if (r8_1 u>= r9_1)
                int32_t rcx_3
                rcx_3.b = r8_1 u> r9_1
                
                if (rcx_3 s>= 0)
                    if (rcx_3 s<= 0)
                        break
                    
                    goto label_142c6a2bf
    
    int64_t* rcx_5 = *arg2
    
    if (rcx_5 == 0)
        break
    
    int64_t r8_3 = rcx_5[4]
    
    if (rax_3 s< r8_3)
    label_142c6a349:
        *arg2 = rcx_5[1]
        bool cond:1_1 = *rcx_5 == 0
        rcx_5[1] = arg2
        arg2 = rcx_5
        
        if (cond:1_1)
            break
    else if (rax_3 s<= r8_3)
        int32_t r8_4 = arg1[1].d
        int32_t r9_4 = rcx_5[5].d
        
        if (r8_4 u< r9_4)
            goto label_142c6a349
        
        int32_t rax_6
        rax_6.b = r8_4 u> r9_4
        
        if (rax_6 s< 0)
            goto label_142c6a349
    
    *rbx = arg2
    rbx = arg2
    arg2 = *arg2

rdi[1] = *arg2
*rbx = arg2[1]
*arg2 = var_40
arg2[1] = var_48
__security_check_cookie(rax_1 ^ &var_48)
return arg2
