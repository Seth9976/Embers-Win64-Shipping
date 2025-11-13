// 函数: sub_1428d0a80
// 地址: 0x1428d0a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = zx.d(arg1[0xf]) + 1
arg1[0xf] = rdx.b
uint32_t rdx_2 = (rdx u>> 8) + zx.d(arg1[0xe])
arg1[0xe] = rdx_2.b
uint32_t rdx_4 = (rdx_2 u>> 8) + zx.d(arg1[0xd])
arg1[0xd] = rdx_4.b
uint32_t rdx_6 = (rdx_4 u>> 8) + zx.d(arg1[0xc])
arg1[0xc] = rdx_6.b
uint32_t rdx_8 = (rdx_6 u>> 8) + zx.d(arg1[0xb])
arg1[0xb] = rdx_8.b
uint32_t rdx_10 = (rdx_8 u>> 8) + zx.d(arg1[0xa])
arg1[0xa] = rdx_10.b
uint32_t rdx_12 = (rdx_10 u>> 8) + zx.d(arg1[9])
arg1[9] = rdx_12.b
uint32_t rdx_14 = (rdx_12 u>> 8) + zx.d(arg1[8])
arg1[8] = rdx_14.b
uint32_t rdx_16 = (rdx_14 u>> 8) + zx.d(arg1[7])
arg1[7] = rdx_16.b
uint32_t rdx_18 = (rdx_16 u>> 8) + zx.d(arg1[6])
arg1[6] = rdx_18.b
uint32_t rdx_20 = (rdx_18 u>> 8) + zx.d(arg1[5])
arg1[5] = rdx_20.b
uint32_t rdx_22 = (rdx_20 u>> 8) + zx.d(arg1[4])
arg1[4] = rdx_22.b
uint32_t rdx_24 = (rdx_22 u>> 8) + zx.d(arg1[3])
arg1[3] = rdx_24.b
uint32_t rdx_26 = (rdx_24 u>> 8) + zx.d(arg1[2])
arg1[2] = rdx_26.b
uint32_t result = zx.d(arg1[1])
uint32_t rdx_28 = (rdx_26 u>> 8) + result
arg1[1] = rdx_28.b
*arg1 += (rdx_28 u>> 8).b
return result
