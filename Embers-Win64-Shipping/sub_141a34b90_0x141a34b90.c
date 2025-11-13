// 函数: sub_141a34b90
// 地址: 0x141a34b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
uint64_t result

if (i_1 != arg2[1].d)
label_141a34c00:
    result.b = 0
    return result

int32_t* r8_1 = *arg2

if (i_1 != 0)
    void* rdx_1 = *arg1 + 4
    int32_t i
    
    do
        if (*r8_1 f!= *(rdx_1 - 4))
            goto label_141a34c00
        
        int64_t rcx = *(r8_1 + 4)
        result = *rdx_1
        
        if (result.d != rcx.d)
            goto label_141a34c00
        
        if (result:4.d f!= rcx:4.d)
            goto label_141a34c00
        
        if (*(rdx_1 + 8) != r8_1[3])
            goto label_141a34c00
        
        if (*(rdx_1 + 0xc) != r8_1[4])
            goto label_141a34c00
        
        r8_1 = &r8_1[5]
        rdx_1 += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
