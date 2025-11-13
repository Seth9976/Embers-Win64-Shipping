// 函数: sub_142c0d9a0
// 地址: 0x142c0d9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x24)
int128_t* rdx = &data_144017550
uint128_t var_18 = *(arg1 + 0xb0)
double* r9

if (rax == 0)
    *(arg1 + 0x20) = 1
    r9 = &data_144017550
    data_144017550.q = 0
else
    *(arg1 + 0x24) = rax - 1
    
    if (rax - 1 u>= *(arg1 + 0x28))
        r9 = &data_144017550
        data_144017550.q = 0
    else
        r9 = *(arg1 + 0x30) + (zx.q(rax - 1) << 3)

int32_t rax_3 = *(arg1 + 0x24)
int64_t result

if (rax_3 == 0)
    *(arg1 + 0x20) = 1
    result = 0
    data_144017550.q = 0
else
    *(arg1 + 0x24) = rax_3 - 1
    
    if (rax_3 - 1 u>= *(arg1 + 0x28))
        result = 0
        data_144017550.q = 0
    else
        result = *(arg1 + 0x30)
        rdx = result + (zx.q(rax_3 - 1) << 3)

uint128_t zmm0
zmm0.q = var_18.q f+ *rdx
int64_t zmm1 = var_18:8.q f+ *r9
*arg2 = 0
*(arg1 + 0xb0) = _mm_unpacklo_pd(zmm0, zmm1)
return result
