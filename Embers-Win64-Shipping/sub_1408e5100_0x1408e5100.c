// 函数: sub_1408e5100
// 地址: 0x1408e5100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x410))
    r8 = sx.q(arg2)
else
    r8 = sx.q(arg2)
    int64_t result = *(*(arg1 + 0x408) + (r8 << 3))
    
    if (result != 0)
        return result

void* rax_2 = *(arg1 + 0x430)

if (rax_2 != 0 && arg2 s>= 0 && arg2 s< *(rax_2 + 0x38))
    return *(*(rax_2 + 0x30) + (r8 << 3))

return 0
