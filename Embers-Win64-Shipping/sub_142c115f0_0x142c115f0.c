// 函数: sub_142c115f0
// 地址: 0x142c115f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
__builtin_memset(&arg1[4], 0, 0x14)
uint64_t result = sub_142bfd170(&arg1[8], 0x201)

if (result.b != 0)
    uint64_t rcx_1 = zx.q(*(arg1 + 8))
    
    if (rcx_1.d u< 0x201)
        result = memset((rcx_1 << 5) + *(arg1 + 0x10), 0, zx.q(0x201 - rcx_1.d) << 5)
    
    *(arg1 + 8) = 0x201

int32_t i = 0

if (*(arg1 + 8) u<= 0)
    return result

if (0 u>= *(arg1 + 8))
    result = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)
    goto label_142c11686

do
    result = (zx.q(i) << 5) + *(arg1 + 0x10)
label_142c11686:
    *result = 0
    i += 1
    *(result + 0x10) = 0
    *(result + 0x18) = 0
while (i u< *(arg1 + 8))

return result
