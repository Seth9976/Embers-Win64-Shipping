// 函数: sub_142b04870
// 地址: 0x142b04870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(*(arg1 + 8) + 0x10)
int16_t count_1 = *arg1
uint32_t count = zx.d(count_1)

if (count_1 u>= 0x38)
    count = 0x38

int16_t var_48
uint64_t result = memcpy(&var_48, arg1, count)
int64_t r14 = *(arg1 + 0x10)
var_48 = count.w
uint64_t result_6 = *(rsi + 0x50)
uint64_t result_1 = result_6

if (*(rsi + 0x68) != 0)
    goto label_142b048e8

while (true)
    if (*arg2 s> 0)
        return result
    
    int64_t rcx_2 = *(arg1 + 0x18)
    uint64_t result_3 = *(arg1 + 0x10)
    
    if (result_3 u>= rcx_2)
        return result
    
    result = result_3
    
    while (*result != 0x1b)
        result += 1
        
        if (result u>= rcx_2)
            break
    
    uint64_t result_2 = result
    
    if (result_3 != result)
        void* rdx_2 = *(arg1 + 8)
        char rax_1 = *(rdx_2 + 0x40)
        
        if (rax_1 s> 0)
            memcpy(result_6 + 0x41, rdx_2 + 0x41, sx.d(rax_1))
            result_6 = result_1
        
        *(result_6 + 0x40) = *(*(arg1 + 8) + 0x40)
        int64_t r15
        sub_142af8080(&var_48, arg2, r15)
        int32_t* rcx_6 = *(arg1 + 0x30)
        int64_t r8_3
        int64_t var_28
        
        if (rcx_6 == 0 || r14 == *(arg1 + 0x10))
            r8_3 = var_28
        else
            int64_t i = *(arg1 + 0x20)
            int32_t r9_1 = *(arg1 + 0x10) - r14.d
            
            for (r8_3 = var_28; i u< r8_3; i += 2)
                int32_t rax_3 = *rcx_6
                
                if (rax_3 s>= 0)
                    *rcx_6 = rax_3 + r9_1
                    r8_3 = var_28
                
                rcx_6 = &rcx_6[1]
        *(arg1 + 0x10) = result_3
        int64_t var_18
        *(arg1 + 0x30) = var_18
        uint64_t result_4 = result_1
        *(arg1 + 0x20) = r8_3
        char rcx_7 = *(result_4 + 0x40)
        
        if (rcx_7 s> 0)
            memcpy(*(arg1 + 8) + 0x41, result_4 + 0x41, sx.d(rcx_7))
            result_4 = result_1
        
        result = zx.q(*(result_4 + 0x40))
        *(*(arg1 + 8) + 0x40) = result.b
        
        if (*arg2 == 0xf)
            uint64_t result_5 = result_1
            char rcx_11 = *(result_5 + 0x5d)
            
            if (rcx_11 s> 0)
                memcpy(*(arg1 + 8) + 0x90, result_5 + 0x90, sx.d(rcx_11))
                result_5 = result_1
            
            *(*(arg1 + 8) + 0x5d) = *(result_5 + 0x5d)
            result = result_1
            *(result + 0x5d) = 0
    
    if (*arg2 s> 0)
        return result
    
    result = *(arg1 + 0x18)
    
    if (*(arg1 + 0x10) == result)
        return result
    
label_142b048e8:
    result = sub_142b04a80(*(arg1 + 8), &arg1[8], *(arg1 + 0x18), 2, arg2)
    result_6 = result_1
