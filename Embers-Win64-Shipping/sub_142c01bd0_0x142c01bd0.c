// 函数: sub_142c01bd0
// 地址: 0x142c01bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
__builtin_memset(&arg1[4], 0, 0x14)
uint64_t result = sub_142bfd0e0(&arg1[8], 0x201)

if (result.b != 0)
    uint64_t rcx_1 = zx.q(*(arg1 + 8))
    
    if (rcx_1.d u< 0x201)
        result = memset(*(arg1 + 0x10) + (rcx_1 << 3), 0, zx.q(0x201 - rcx_1.d) << 3)
    
    *(arg1 + 8) = 0x201

int32_t i = 0

if (*(arg1 + 8) u<= 0)
    return result

if (0 u>= *(arg1 + 8))
    data_144017550.q = 0
    result = &data_144017550
    goto label_142c01c58

do
    result = *(arg1 + 0x10) + (zx.q(i) << 3)
label_142c01c58:
    i += 1
    *result = 0
while (i u< *(arg1 + 8))

return result
