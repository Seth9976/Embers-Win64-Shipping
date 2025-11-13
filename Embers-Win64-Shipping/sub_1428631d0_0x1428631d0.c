// 函数: sub_1428631d0
// 地址: 0x1428631d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t rbx = 0
int64_t* rsi = arg3
int32_t var_58 = 0
int32_t var_54 = 0
int64_t result

if (arg1 == 0 || *arg3 == 0x34 || arg2 s> 0x27)
    result = 0
else
    int64_t rdi_1 = sx.q(arg2)
    char string[0x28]
    memcpy(&string, arg1, rdi_1.d)
    
    if (rdi_1 u>= 0x28)
        __report_rangecheckfailure()
        noreturn
    
    string[rdi_1] = 0
    char* rax_2 = strchr(&string, 0x2b)
    
    if (rax_2 != 0)
        *rax_2 = 0
        
        if (rax_2[1] == 0)
            result = 0
        else
            sub_142862e00(&var_58, &var_54, &string)
            sub_142862e00(&var_58, &var_54, &rax_2[1])
            int32_t rcx_7 = var_58
            
            if (rcx_7 == 0)
                result = 0
            else
                int32_t rax_5 = var_54
                
                if (rax_5 == 0)
                    result = 0
                else
                    int64_t i = 0
                    char const (** const r8_4)[0x17] = &data_1434dc750
                    
                    do
                        if (*(r8_4 + 0xc) == rax_5 && *(r8_4 + 0x14) == rcx_7)
                            *(rsi + (*rsi << 1) + 8) = r8_4[1].w
                            *rsi += 1
                            break
                        
                        i += 1
                        r8_4 = &r8_4[5]
                    while (i u< 0x1a)
                    
                    if (i != 0x1a)
                        goto label_142863345
                    
                    result = 0
    else
        int64_t i_1 = 0
        char const (** const r8_1)[0x17] = &data_1434dc750
        
        do
            char const (* r9_1)[0x17] = *r8_1
            
            if (r9_1 != 0)
                void* rax_3 = &string
                uint32_t j
                uint32_t rdx_1
                
                do
                    rdx_1 = zx.d(*rax_3)
                    j = zx.d(*(rax_3 + r9_1 - &string))
                    
                    if (rdx_1 != j)
                        break
                    
                    rax_3 += 1
                while (j != 0)
                
                if (rdx_1 - j == 0)
                    *(rsi + (*rsi << 1) + 8) = r8_1[1].w
                    *rsi += 1
                    break
            
            i_1 += 1
            r8_1 = &r8_1[5]
        while (i_1 u< 0x1a)
        
        if (i_1 != 0x1a)
        label_142863345:
            int64_t rcx_9 = *rsi
            
            if (rcx_9 == 1)
            label_142863368:
                result = 1
            else
                void* rax_7 = &rsi[1]
                
                while (*rax_7 != *(rsi + ((rcx_9 - 1) << 1) + 8))
                    rbx += 1
                    rax_7 += 2
                    
                    if (rbx u>= rcx_9 - 1)
                        goto label_142863368
                
                *rsi = rcx_9 - 1
                result = 0
        else
            result = 0

__security_check_cookie(rax_1 ^ &var_78)
return result
