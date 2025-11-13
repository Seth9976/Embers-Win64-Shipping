// 函数: sub_142ad4b50
// 地址: 0x142ad4b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm10
zmm10.q = sub_142a4b9b0(arg1 - 0.5).q f+ 0.5
uint128_t zmm6
zmm6.q = zmm10.q f- 1721425.5
uint128_t zmm0
zmm0.q = zmm6.q f/ 146097.0
uint128_t zmm9 = sub_142a4b9b0(zmm0.q)
zmm6 = _mm_cvtepi32_pd(zx.q(int.d(sub_142a4b9b0(zmm6.q)) s% 0x23ab1))
uint128_t zmm8 = sub_142a4b9b0(zmm6.q / 36524.0)
zmm6 = _mm_cvtepi32_pd(zx.q(int.d(sub_142a4b9b0(zmm6.q)) s% 0x8eac))
uint128_t zmm7 = sub_142a4b9b0(zmm6.q / 1461.0)
double zmm0_7 =
    sub_142a4b9b0(_mm_cvtepi32_pd(zx.q(int.d(sub_142a4b9b0(zmm6.q)) s% 0x5b5)).q / 365.0)
double zmm2 = 4.0
zmm8.q f- zmm2
zmm9.q = zmm9.q f* 400.0
zmm7.q = zmm7.q f* zmm2
int32_t rdi = int.d(zmm8.q * 100.0 f+ zmm9.q f+ zmm7.q + zmm0_7)

if (is_unordered.q(zmm8.q, zmm2) || not(zmm8.q f== zmm2))
    zmm0_7 - zmm2
    
    if (is_unordered.q(zmm0_7, zmm2) || not(zmm0_7 == zmm2))
        rdi += 1

sub_142ad44e0(rdi, 1, 1)
double zmm0_9
double zmm6_2
zmm0_9, zmm6_2 = sub_142ad44e0(rdi, 3, 1)
int32_t rax_9

if (zmm0_9 f<= zmm10.q)
    int32_t rax_11 = rdi & 0x80000003
    
    if (rax_11 s< 0)
        rax_11 = ((rax_11 - 1) | 0xfffffffc) + 1
    
    int32_t rdx_11
    int32_t rdx_15
    
    if (rax_11 == 0)
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = muls.dp.d(0x51eb851f, rdi)
        rdx_11 = temp6_1 s>> 5
        
        if (rdi == rdi s/ 0x64 * 0x64)
            int32_t temp9_1
            int32_t temp10_1
            temp9_1:temp10_1 = muls.dp.d(0x51eb851f, rdi)
            rdx_15 = temp9_1 s>> 7
    
    int32_t rax_14
    
    if (rax_11 != 0 || (rdi == (rdx_11 + (rdx_11 u>> 0x1f)) * 0x64
            && rdi != (rdx_15 + (rdx_15 u>> 0x1f)) * 0x190))
        rax_14 = 0
    else
        rax_14.b = 1
    
    char temp8_1 = rax_14.b
    rax_14.b = neg.b(rax_14.b)
    rax_9 = sbb.d(rax_14, rax_14, temp8_1 != 0) + 2
else
    rax_9 = 0

int32_t rbx =
    int.d(sub_142a4b9b0(((_mm_cvtepi32_pd(zx.q(rax_9)).q + zmm6_2) * 12.0 + 373.0) / 367.0))
zmm10.q = zmm10.q f- sub_142ad44e0(rdi, rbx, 1)
arg2[1] = rbx
*arg2 = rdi
arg2[2] = int.d(zmm10.q) + 1
return arg2
