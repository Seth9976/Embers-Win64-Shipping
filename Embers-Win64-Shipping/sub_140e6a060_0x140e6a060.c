// 函数: sub_140e6a060
// 地址: 0x140e6a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int32_t* rcx_3

if (*(arg1 + 0x138) == *(arg1 + 0x164))
label_140e6a0d2:
    rcx_3 = nullptr
else
    void* r10_1 = arg1 + 0x168
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x178)) - 1) & r11) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140e6a0d2_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax_1) * 0x30 + *(arg1 + 0x130)
            
            if (*rcx_3 == r11.d)
                break
            
            rax_1 = rcx_3[0xa]
            
            if (rax_1 == 0xffffffff)
                goto label_140e6a0d2_2
        
        if (rax_1 == 0xffffffff)
        label_140e6a0d2_2:
            rcx_3 = nullptr

void* result = &rcx_3[2]

if (rcx_3 == 0)
    result = nullptr

if (result != 0 && *(result + 8) s> 0)
    result.b = 1
    return result

result.b = 0
return result
