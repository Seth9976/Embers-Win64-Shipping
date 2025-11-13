// 函数: sub_141c2b3e0
// 地址: 0x141c2b3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[4]

if (rbx == 0)
    return (rbx + 5).d

int32_t rdx = *(rbx + 4)
*(rbx + 8) = arg2[2].d * rdx
int32_t r9_2 = *(arg2 + 0x14) * rdx
*(rbx + 0x14) = 0
*(rbx + 0xc) = 0
*(rbx + 0x10) = r9_2
uint128_t zmm7 = zx.o(*arg1)

if (zmm7.q f< 0.00390625 || zmm7.q f> 256.0)
    return 0x16

uint128_t zmm1
zmm1.q = float.d(*(rbx + 0x18))
uint128_t zmm0
zmm0.q = float.d(*(rbx + 0x1c))
zmm1.q = zmm1.q f+ 2.0
uint128_t zmm8 = 0x3ff0000000000000
zmm1.q = zmm1.q f/ zmm0.q
zmm0 = _mm_min_sd(arg2[5], zmm7.q)

if (not(zmm0.q f>= zmm8.q))
    zmm1.q = zmm1.q f/ zmm0.q

int32_t rsi_1 = int.d(zmm1.q)
zmm1 = zx.o(arg1[1])
int32_t rsi_3 = (rsi_1 + 1) * rdx
uint128_t zmm6
zmm6.q = zmm1.q f- _mm_cvtepi32_pd(zx.q(int.d(zmm1.q))).q

if (not(zmm6.q f>= 0.0))
    zmm6.q = zmm6.q f+ zmm8.q

int32_t rcx = *(rbx + 0x44)
zmm1.q = zmm1.q f- zmm6.q
uint32_t zmm10[0x4]
uint32_t var_58_1[0x4] = zmm10
uint128_t zmm9
zmm9.q = zmm8.q f/ zmm7.q
zmm9.q = zmm9.q f+ 9.9999999999999995e-21
uint128_t zmm11
uint128_t var_68_1 = zmm11
uint128_t zmm13
uint128_t var_88_1 = zmm13
int32_t temp1_1 = mods.dp.d(sx.q(int.d(zmm1.q) * rdx + *(rbx + 0x38)), rcx)
*(rbx + 0x38) = temp1_1
int32_t r8_1 = temp1_1

if (r9_2 s> 0)
    zmm13 = 0x40b0000000000000
    int32_t i
    
    do
        if (mods.dp.d(sx.q(rcx - r8_1 + *(rbx + 0x3c)), rcx) s<= rsi_3)
            int32_t result = sub_141c2a3a0(rbx, arg2, rsi_3)
            arg1[2].d = result
            
            if (result != 0)
                return result
            
            r8_1 = *(rbx + 0x38)
            *(rbx + 0x44)
            
            if (mods.dp.d(sx.q(*(rbx + 0x44) - r8_1 + *(rbx + 0x3c)), *(rbx + 0x44)) s<= rsi_3)
                break
        
        int32_t rax_18 = *(rbx + 0x40)
        
        if (rax_18 s>= 0)
            zmm1.q = _mm_cvtepi32_pd(zx.q(r8_1)).q f+ zmm6.q
            zmm1.q = zmm1.q f+ zmm9.q
            
            if (zmm1.q f>= _mm_cvtepi32_pd(zx.q(rax_18)).q)
                break
        
        int32_t rax_19 = *(rbx + 0x10)
        
        if (rax_19 s> 0)
            uint128_t zmm2 = zx.o(*arg1)
            zmm1 = zx.o(arg2[5])
            zmm0.q = zmm2.q f- zmm1.q
            
            if (not(_mm_and_ps(zmm0, 0x7fffffffffffffff).q f<= 0x3ddb7cdfd9d7bdbb))
                zmm7.q = zmm1.q f- zmm2.q
                zmm7.q = zmm7.q f* _mm_cvtepi32_pd(zx.q(*(rbx + 0x14))).q
                zmm7.q = zmm7.q f/ _mm_cvtepi32_pd(zx.q(rax_19)).q
                zmm7.q = zmm7.q f+ zmm2.q
        
        zmm0 = zx.o(*(rbx + 0x1c))
        int64_t rcx_2 = sx.q(*(rbx + 0x14))
        zmm1 = _mm_min_sd(zmm7.q, zmm8.q)
        int64_t rax_20 = arg2[1]
        zmm0 = _mm_cvtepi32_pd(zmm0.q)
        zmm1.q = zmm1.q f* zmm0.q
        double zmm3[0x2] = zmm1
        zmm3[0] = zmm3[0] f/ zmm0.q
        zmm0.q = zmm6.q f* zmm1.q
        zmm1.q = zmm1.q f* zmm13.q
        zmm0.q = zmm0.q f* zmm13.q
        zmm6, zmm7, zmm8, zmm9 =
            sub_141c29cc0(rbx, int.d(zmm1.q), int.d(zmm0.q), zmm3, rax_20 + (rcx_2 << 2))
        zmm1.q = zmm8.q f/ zmm7.q
        i = *(rbx + 0x14) + 4
        *(rbx + 0x14) = i
        zmm1.q = zmm1.q f+ zmm6.q
        zmm6.q = zmm1.q f- _mm_cvtepi32_pd(zx.q(int.d(zmm1.q))).q
        
        if (not(zmm6.q f>= 0.0))
            zmm6.q = zmm6.q f+ zmm8.q
        
        rcx = *(rbx + 0x44)
        zmm1.q = zmm1.q f- zmm6.q
        int32_t temp1_4 = mods.dp.d(sx.q(int.d(zmm1.q) * *(rbx + 4) + *(rbx + 0x38)), rcx)
        *(rbx + 0x38) = temp1_4
        r8_1 = temp1_4
    while (i s< *(rbx + 0x10))

arg1[1] = zmm6.q
*arg1 = zmm7.q
arg2[3].d = divs.dp.d(sx.q(*(rbx + 0xc)), *(rbx + 4))
*(rbx + 4)
*(arg2 + 0x1c) = divs.dp.d(sx.q(*(rbx + 0x14)), *(rbx + 4))
return 0
