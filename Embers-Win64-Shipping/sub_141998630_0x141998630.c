// 函数: sub_141998630
// 地址: 0x141998630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2)

if (arg4 == 0x19)
    return (zx.q(arg1) u>> 3) * r10

uint64_t r9 = zx.q(arg4) * 0x28
int64_t r8_1 = zx.q(divu.dp.d(0:arg1, *(r9 + 0x1439c85e8)))
    * zx.q(divu.dp.d(0:(r10.d), *(r9 + &data_1439c85ec)))

if (arg3 == 0)
    return sx.q((&data_1439c85f4)[zx.q(arg4) * 0xa]) * r8_1

return zx.q(divu.dp.d(0:arg3, *(r9 + 0x1439c85f0))) * sx.q((&data_1439c85f4)[zx.q(arg4) * 0xa])
    * r8_1
