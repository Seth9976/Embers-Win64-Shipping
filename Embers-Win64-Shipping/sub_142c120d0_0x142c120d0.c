// 函数: sub_142c120d0
// 地址: 0x142c120d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
int64_t* rbx_2

if (r8 u>= *(arg1 + 8))
    *arg1 = 1
    rbx_2 = &data_144017550
    __builtin_memset(&data_144017550, 0, 0x20)
else
    *(arg1 + 4) = r8 + 1
    
    if (r8 u>= *(arg1 + 8))
        rbx_2 = &data_144017550
        __builtin_memset(&data_144017550, 0, 0x20)
    else
        rbx_2 = (zx.q(r8) << 5) + *(arg1 + 0x10)

rbx_2[1] = 0
char result = sub_142bfd0e0(&rbx_2[2], 0)

if (result != 0)
    rbx_2[2].d = 0

*rbx_2 = _mm_cvtepi32_pd(zx.q(arg2)) f* 1.52587890625e-05
return result
