// 函数: sub_142c0e460
// 地址: 0x142c0e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0xb0)
int32_t rax = *(arg1 + 0x24)
int64_t* result

if (rax == 0)
    *(arg1 + 0x20) = 1
    data_144017550.q = 0
    result = &data_144017550
else
    *(arg1 + 0x24) = rax - 1
    
    if (rax - 1 u>= *(arg1 + 0x28))
        data_144017550.q = 0
        result = &data_144017550
    else
        result = *(arg1 + 0x30) + (zx.q(rax - 1) << 3)

zmm0.q = zmm0:8.q f+ *result
*arg2 = 0
uint128_t var_18
var_18:8.q = zmm0.q
*(arg1 + 0xb0) = var_18
return result
