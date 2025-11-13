// 函数: sub_1429233c0
// 地址: 0x1429233c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)

if (result.d s< *(arg1 + 0xc))
    int64_t r8_1 = result << 3
    
    do
        r8_1 += 8
        result = zx.q(result.d + 1)
        *(r8_1 + *arg1 - 8) = 0
    while (result.d s< *(arg1 + 0xc))

return result
