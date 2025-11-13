// 函数: sub_142ad42e0
// 地址: 0x142ad42e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (arg1 + 0x4e) & 0x80000003

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1

int32_t rdx_1
int32_t rdx_5

if (rax_1 == 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x51eb851f, arg1 + 0x4e)
    rdx_1 = temp0_1 s>> 5
    
    if (arg1 + 0x4e == (arg1 + 0x4e) s/ 0x64 * 0x64)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x51eb851f, arg1 + 0x4e)
        rdx_5 = temp2_1 s>> 7

int32_t rsi
int32_t r8

if (rax_1 != 0 || (arg1 + 0x4e == (rdx_1 + (rdx_1 u>> 0x1f)) * 0x64
        && arg1 + 0x4e != (rdx_5 + (rdx_5 u>> 0x1f)) * 0x190))
    rsi = 0x1e
    r8 = 0x16
else
    rsi = 0x1f
    r8 = 0x15

double zmm1 = sub_142ad44e0(arg1 + 0x4e, 3, r8)
double zmm0

if (arg2 != 1)
    int32_t rax_8 = arg2 - 2
    zmm0 = _mm_cvtepi32_pd(zx.q(rsi)).q
    
    if (rax_8 s> 5)
        rax_8 = 5
    
    zmm0 = zmm0 + zmm1 + _mm_cvtepi32_pd(zx.q(rax_8 * 0x1f)).q
    
    if (arg2 s>= 8)
        zmm0 = zmm0 + _mm_cvtepi32_pd(zx.q((arg2 - 7) * 0x1e)).q
    
    zmm1 = _mm_cvtepi32_pd(zx.q(arg3 - 1)).q
else
    zmm0 = _mm_cvtepi32_pd(zx.q(arg3 - 1)).q

return zmm0 + zmm1
