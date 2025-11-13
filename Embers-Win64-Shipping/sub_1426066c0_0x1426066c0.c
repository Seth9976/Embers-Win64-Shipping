// 函数: sub_1426066c0
// 地址: 0x1426066c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d)

if (arg3 s< result.d)
    result = zx.q(arg3)

int64_t r10 = sx.q(result.d)

if (result.d s> 0)
    result = 0
    int64_t r8 = 0
    
    do
        r8 += 0x20
        *(arg2 + (result << 3)) = *(r8 + *arg1 - 0x20)
        result += 1
    while (result s< r10)

return result
