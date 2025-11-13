// 函数: sub_141a56940
// 地址: 0x141a56940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_3

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
label_141a569b5:
    rcx_3 = nullptr
else
    int64_t r11_1 = sx.q(*arg3)
    void* r10_1 = arg1 + 0xd8
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & r11_1) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141a569b5_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax_1) * 0xc0 + *(arg1 + 0xa0)
            
            if (*rcx_3 == r11_1.d)
                break
            
            rax_1 = rcx_3[0x2e]
            
            if (rax_1 == 0xffffffff)
                goto label_141a569b5_2
        
        if (rax_1 == 0xffffffff)
        label_141a569b5_2:
            rcx_3 = nullptr

void* result = &rcx_3[2]

if (rcx_3 == 0)
    result = nullptr

if (result == 0)
    return result

return sub_141a569e0(result, arg2)
