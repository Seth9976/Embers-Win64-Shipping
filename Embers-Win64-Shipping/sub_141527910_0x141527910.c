// 函数: sub_141527910
// 地址: 0x141527910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int64_t result = *(*(arg1 + 0xa0) + (rbx << 3)) + (sx.q(*(*(arg1 + 0x40) + (rbx << 2)) * arg3) << 2)
*(arg1 + 0xb8) = result

if (rbx s> 0)
    result = 0
    
    do
        *((*(arg1 + 0xa8))[sx.q(arg2)] + (result << 2)) = *(*(arg1 + 0xb8) + (result << 2))
        result += 1
    while (result s< rbx)

return result
