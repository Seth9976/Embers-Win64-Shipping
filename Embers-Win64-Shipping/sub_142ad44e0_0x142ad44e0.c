// 函数: sub_142ad44e0
// 地址: 0x142ad44e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi

if (arg2 s> 2)
    int32_t rax_2 = arg1 & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    int32_t rdx_1
    int32_t rdx_4
    
    if (rax_2 == 0)
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = muls.dp.d(0x51eb851f, arg1)
        rdx_1 = temp8_1 s>> 5
        
        if (arg1 == arg1 s/ 0x64 * 0x64)
            int32_t temp11_1
            int32_t temp12_1
            temp11_1:temp12_1 = muls.dp.d(0x51eb851f, arg1)
            rdx_4 = temp11_1 s>> 7
    
    char rax_8
    
    if (rax_2 != 0 || (arg1 == (rdx_1 + (rdx_1 u>> 0x1f)) * 0x64
            && arg1 != (rdx_4 + (rdx_4 u>> 0x1f)) * 0x190))
        rax_8 = 0
    else
        rax_8 = 1
    
    int32_t rdi_1
    rdi_1.b = rax_8 != 0
    rdi = rdi_1 - 2
else
    rdi = 0

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1 - 1)
uint128_t zmm7 = sub_142a4b9b0(_mm_cvtepi32_pd(zx.q((temp1 + (temp0 & 3)) s>> 2)).q)
uint128_t zmm0_1
zmm0_1.q = _mm_cvtepi32_pd(zx.q(arg1 * 0x16d - 0x16d)).q f+ 1721424.5
zmm7.q = zmm7.q f+ zmm0_1.q
zmm7.q = zmm7.q f- sub_142a4b9b0(_mm_cvtepi32_pd(zx.q((arg1 - 1) s/ 0x64)).q)
uint128_t zmm6
zmm6.q = sub_142a4b9b0(_mm_cvtepi32_pd(zx.q((arg1 - 1) s/ 0x190)).q).q f+ zmm7.q
return sub_142a4b9b0(_mm_cvtepi32_pd(zx.q((arg2 * 0x16f - 0x16a) s/ 0xc + rdi + arg3)).q) f+ zmm6.q
