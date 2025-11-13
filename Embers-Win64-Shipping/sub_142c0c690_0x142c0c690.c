// 函数: sub_142c0c690
// 地址: 0x142c0c690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
__builtin_memset(&arg1[4], 0, 0x14)
uint64_t result = sub_142bfcfc0(&arg1[8], 0xa)

if (result.b != 0)
    uint64_t rcx_1 = zx.q(*(arg1 + 8))
    
    if (rcx_1.d u< 0xa)
        result = memset(*(arg1 + 0x10) + rcx_1 * 0x28, 0, zx.q(0xa - rcx_1.d) * 0x28)
    
    *(arg1 + 8) = 0xa

int32_t i = 0

if (*(arg1 + 8) u<= 0)
    return result

if (0 u>= *(arg1 + 8))
    result = &data_144017550
    int128_t zmm1 = data_14369a5e0.o
    data_144017550 = data_14369a5d0
    data_144017570 = 0
    data_144017560.o = zmm1
    goto label_142c0c73b

do
    result = *(arg1 + 0x10) + zx.q(i) * 0x28
label_142c0c73b:
    *(result + 8) = 0
    i += 1
    *(result + 0x10) = 0
    *(result + 0x18) = 0
    *(result + 0x1c) = 0
    *(result + 0x20) = 0
while (i u< *(arg1 + 8))

return result
