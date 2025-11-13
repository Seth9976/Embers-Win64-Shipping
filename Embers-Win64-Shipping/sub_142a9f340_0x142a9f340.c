// 函数: sub_142a9f340
// 地址: 0x142a9f340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg2 + 0x1c))
int32_t result = (temp1 - temp0) s>> 1

if (result s<= 0)
label_142a9f3e9:
    void* rdx_1 = *(arg2 + 0x50)
    
    if (rdx_1 != 0 && *(rdx_1 + 8) != 0)
        void* rcx_3 = *(arg1 + 0x50)
        
        if (rcx_3 != 0)
            result = sub_142ae7200(rcx_3, rdx_1)
        
        if (rcx_3 == 0 || result.b == 0)
            return 0
    
    result.b = 1
else
    void* rsi_1 = *(arg2 + 0x10)
    int64_t r11_1 = 0
    int32_t* r10_1 = *(arg1 + 0x10)
    int64_t result_2 = sx.q(result)
    int32_t* rbx_1 = rsi_1 + 4
    
    while (true)
        int32_t r9_1 = *(rsi_1 + (r11_1 << 3))
        int32_t result_1
        
        if (r9_1 s>= *r10_1)
            int32_t result_3 = 0
            result_1 = *(arg1 + 0x1c) - 1
            
            if (result_1 s> 0 && r9_1 s< r10_1[sx.q(result_1 - 1)])
                result = result_1 s>> 1
                
                if (result != 0)
                    do
                        if (r9_1 s>= r10_1[sx.q(result)])
                            result_3 = result
                        else
                            result_1 = result
                        
                        result = (result_1 + result_3) s>> 1
                    while (result != result_3)
        else
            result_1 = 0
        
        if ((result_1.b & 1) == 0 || *rbx_1 - 1 s>= r10_1[sx.q(result_1)])
            result.b = 0
            break
        
        r11_1 += 1
        rbx_1 = &rbx_1[2]
        
        if (r11_1 s>= result_2)
            goto label_142a9f3e9
        
        continue

return result
