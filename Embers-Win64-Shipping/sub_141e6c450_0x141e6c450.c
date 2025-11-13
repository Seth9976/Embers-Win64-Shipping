// 函数: sub_141e6c450
// 地址: 0x141e6c450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
int64_t r9 = *arg1
int64_t r8 = result * 9

if (arg2 == 0)
    result = zx.q(*(r9 + (r8 << 3) - 0x34))
    *(r9 + (r8 << 3) - 4) = result.d
else
    if (arg2 == 2)
        *(r9 + (r8 << 3) - 4) = 0x40000000
        return result
    
    if (arg2 == 3)
        result = zx.q(*(r9 + (r8 << 3) - 0x34))
        *(r9 + (r8 << 3) - 4) = result.d

return result
