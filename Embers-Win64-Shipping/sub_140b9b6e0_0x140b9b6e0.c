// 函数: sub_140b9b6e0
// 地址: 0x140b9b6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x78))
int32_t r11 = 0

if (rax.d s> 0)
    uint64_t* r9_1 = *(arg1 + 0x70)
    int64_t r10_1 = 0
    
    while (*(*r9_1 + 0x14) != *(arg2 + 0x14))
        r11 += 1
        r10_1 += 1
        r9_1 = &r9_1[1]
        
        if (r10_1 s>= rax)
            goto label_140b9b723

uint64_t result

if (rax.d s<= 0 || r11 == 0xffffffff)
label_140b9b723:
    result = *(arg2 + 0x50)
    
    if (result == 0 || *(result + 0x329) == 0)
        sub_140b9a630(arg1, arg2 + 0x14, arg3)
    else if (arg1 != arg2)
        result.b = 0
        return result

result.b = 1
return result
