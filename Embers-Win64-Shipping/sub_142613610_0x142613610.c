// 函数: sub_142613610
// 地址: 0x142613610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg2 + 8)
int32_t r11 = *(r10 + 0x3c)
int64_t* rcx_1 = arg1[1]
uint64_t result = zx.q((1 << (*(*arg1 + 0xa0)).b).d - 1) & zx.q(arg3)
int32_t r8_1 = result.d - r11

if (rcx_1 != 0 && result.d s>= r11 && r8_1 s< *(r10 + 0x34)
        && *(*(arg2 + 0x48) + sx.q(r8_1) * 0x28 + 0x20) != 0)
    result = (*(*rcx_1 + 8))()
    
    if (result.b == 0)
        return result

result.b = 1
return result
