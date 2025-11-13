// 函数: sub_141a35c10
// 地址: 0x141a35c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(arg2 + 0x90)).q
int64_t result_1 = result
int64_t zmm0 = (*(arg3 + 0x90)).q
int64_t arg_18 = zmm0
int64_t* rcx_1
char rdx_2

if (result.b != 2)
    if (zmm0.b == 2)
        rcx_1 = &arg_18
        goto label_141a35c86
    
    uint32_t rcx_2 = (zmm0 u>> 0x20).d
    uint32_t rdx_1 = (result u>> 0x20).d
    
    if (rdx_1 s>= rcx_2)
        if (rdx_1 s<= rcx_2)
            rcx_1 = &result_1
            
            if (result.b != 1)
                rcx_1 = &arg_18
        else
            rcx_1 = &arg_18
        
        goto label_141a35c86
    
    rcx_1 = &result_1
    rdx_2 = result.b
label_141a35c8d:
    
    if (rdx_2 == 2 || *(rcx_1 + 4) == (result u>> 0x20).d)
        result.b = 1
        return result
else
    rcx_1 = &result_1
label_141a35c86:
    rdx_2 = *rcx_1
    
    if (rdx_2 == result.b)
        goto label_141a35c8d
result.b = 0
return result
