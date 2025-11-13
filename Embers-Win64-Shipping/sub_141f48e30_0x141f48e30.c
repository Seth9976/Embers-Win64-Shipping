// 函数: sub_141f48e30
// 地址: 0x141f48e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(arg2[1].q)
uint128_t zmm0 = zx.o(arg1[0x36])
int32_t result = arg1[0x37].d

if (zmm0.d f!= zmm1.d || zmm0.q:4.d.d f!= zmm1.q:4.d || not(result.d f== *(arg2 + 0x18)))
    if ((*(arg1 + 0x14c) & 1) == 0)
        result = sub_1405c6ac0(arg1, 0, 0)
    
    *(arg1 + 0x1a0) = *arg2
    *(arg1 + 0x1b0) = arg2[1]

return result
