// 函数: sub_142ae7200
// 地址: 0x142ae7200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t* result

if (*(arg2 + 8) s<= 0)
label_142ae72a6:
    result.b = 1
else
    int64_t* r14_1 = nullptr
    
    while (true)
        int32_t rdi_1 = 0
        int64_t rbx_2 = *(r14_1 + *(arg2 + 0x10))
        
        if (*(arg1 + 0x20) == 0)
            int64_t rdx_2 = sx.q(*(arg1 + 8))
            int64_t rcx_1 = 0
            
            if (rdx_2 s> 0)
                result = *(arg1 + 0x10)
                
                while (rbx_2.d != *result)
                    rdi_1 += 1
                    rcx_1 += 1
                    result = &result[2]
                    
                    if (rcx_1 s>= rdx_2)
                        result.b = 0
                        goto label_142ae72c0
                
            label_142ae7296:
                
                if (rdi_1 s>= 0)
                    rbp += 1
                    r14_1 = &r14_1[1]
                    
                    if (rbp s>= *(arg2 + 8))
                        goto label_142ae72a6
                    
                    continue
        else if (*(arg1 + 8) s> 0)
            while ((*(arg1 + 0x20))(rbx_2, *(*(arg1 + 0x10) + (sx.q(rdi_1) << 3))).b == 0)
                rdi_1 += 1
                
                if (rdi_1 s>= *(arg1 + 8))
                    goto label_142ae726c
            
            goto label_142ae7296
        
    label_142ae726c:
        result.b = 0
        break

label_142ae72c0:
return result
