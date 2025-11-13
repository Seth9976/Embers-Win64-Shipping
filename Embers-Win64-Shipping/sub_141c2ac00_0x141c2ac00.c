// 函数: sub_141c2ac00
// 地址: 0x141c2ac00
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
uint128_t zmm9 = 0x3ff0000000000000
zmm1.q = zmm1.q f/ zmm0.q
zmm0 = _mm_min_sd(arg2[5], zmm7.q)

if (not(zmm0.q f>= zmm9.q))
    zmm1.q = zmm1.q f/ zmm0.q

int32_t r14_1 = int.d(zmm1.q)
zmm1 = zx.o(arg1[1])
int32_t r14_3 = (r14_1 + 1) * rdx
uint128_t zmm6
zmm6.q = zmm1.q f- _mm_cvtepi32_pd(zx.q(int.d(zmm1.q))).q

if (not(zmm6.q f>= 0.0))
    zmm6.q = zmm6.q f+ zmm9.q

int32_t rcx = *(rbx + 0x44)
zmm1.q = zmm1.q f- zmm6.q
uint128_t zmm8
uint128_t var_38_1 = zmm8
uint128_t zmm10
uint128_t var_58_1 = zmm10
uint128_t zmm11
zmm11.q = zmm9.q f/ zmm7.q
zmm11.q = zmm11.q f+ 9.9999999999999995e-21
uint32_t zmm13[0x4]
uint32_t var_88_1[0x4] = zmm13
uint128_t zmm14
uint128_t var_98_1 = zmm14
uint128_t zmm15
uint128_t var_a8_1 = zmm15
int32_t temp1_1 = mods.dp.d(sx.q(int.d(zmm1.q) * rdx + *(rbx + 0x38)), rcx)
*(rbx + 0x38) = temp1_1
int32_t r8_1 = temp1_1

if (r9_2 s> 0)
    zmm15 = 0x40b0000000000000
    zmm8 = 0x3f30000000000000
    int32_t i
    
    do
        if (mods.dp.d(sx.q(rcx - r8_1 + *(rbx + 0x3c)), rcx) s<= r14_3)
            int32_t result = sub_141c2a3a0(rbx, arg2, r14_3)
            arg1[2].d = result
            
            if (result != 0)
                return result
            
            r8_1 = *(rbx + 0x38)
            *(rbx + 0x44)
            
            if (mods.dp.d(sx.q(*(rbx + 0x44) - r8_1 + *(rbx + 0x3c)), *(rbx + 0x44)) s<= r14_3)
                break
        
        int32_t rax_18 = *(rbx + 0x40)
        
        if (rax_18 s>= 0)
            zmm1.q = _mm_cvtepi32_pd(zx.q(r8_1)).q f+ zmm6.q
            zmm1.q = zmm1.q f+ zmm11.q
            
            if (zmm1.q f> _mm_cvtepi32_pd(zx.q(rax_18)).q)
                break
        
        int32_t rax_19 = *(rbx + 0x10)
        uint128_t zmm2
        
        if (rax_19 s> 0)
            zmm2 = zx.o(*arg1)
            zmm1 = zx.o(arg2[5])
            zmm0.q = zmm2.q f- zmm1.q
            
            if (not(_mm_and_ps(zmm0, 0x7fffffffffffffff).q f<= 0x3ddb7cdfd9d7bdbb))
                zmm7.q = zmm1.q f- zmm2.q
                zmm7.q = zmm7.q f* _mm_cvtepi32_pd(zx.q(*(rbx + 0x14))).q
                zmm7.q = zmm7.q f/ _mm_cvtepi32_pd(zx.q(rax_19)).q
                zmm7.q = zmm7.q f+ zmm2.q
        
        zmm10 = zx.o(*(rbx + 0x1c))
        int32_t r11_1 = *(rbx + 0x18)
        double temp0_11[0x2] = _mm_min_sd(zmm7[0], zmm9.q)
        int64_t r9_3 = *(rbx + 0x30)
        int32_t r11_2 = r11_1 << 0xc
        int64_t zmm4 = (zx.o(0)).q
        zmm10 = _mm_cvtepi32_pd(zmm10.q)
        temp0_11[0] = temp0_11[0] f* zmm10.q
        zmm1.q = zmm6.q f* temp0_11[0]
        zmm0.q = temp0_11.q f* zmm15.q
        zmm1.q = zmm1.q f* zmm15.q
        int32_t r10_1 = int.d(zmm0.q)
        int32_t rsi_1 = int.d(zmm1.q)
        int32_t temp0_13 = divs.dp.d(sx.q(r11_2 - rsi_1), r10_1)
        int32_t rcx_4 = temp0_13 * r10_1 + rsi_1
        void* rdx_11 = rbx + ((sx.q(r8_1 - temp0_13) + 0x212) << 2)
        int32_t temp38_1
        
        do
            int64_t rax_25 = sx.q(rcx_4) s>> 0xc
            zmm1 = *(r9_3 + (rax_25 << 2))
            zmm0.d = (*(r9_3 + (rax_25 << 2) + 4)).d f- zmm1.d
            zmm2.q = _mm_cvtps_pd(zmm0.q).q f* _mm_cvtepi32_pd(zx.q(rcx_4) & 0xfff).q
            zmm0 = _mm_cvtps_pd(zmm1.q)
            zmm1 = *rdx_11
            rdx_11 += 4
            temp38_1 = rcx_4
            rcx_4 -= r10_1
            zmm2.q = zmm2.q f* zmm8.q
            zmm2.q = zmm2.q f+ zmm0.q
            zmm2.q = zmm2.q f* _mm_cvtps_pd(zmm1.q).q
            zmm4 = zmm4 f+ zmm2.q
        while (temp38_1 - r10_1 s>= 0)
        double zmm3 = (zx.o(0)).q
        int32_t r8_5 = r10_1 - rsi_1
        int32_t temp0_18 = divs.dp.d(sx.q(r11_2 - r8_5), r10_1)
        int32_t j = r8_5 + temp0_18 * r10_1
        void* rcx_11 = rbx + ((sx.q(*(rbx + 0x38) + temp0_18) + 0x213) << 2)
        
        do
            int64_t rax_32 = sx.q(j) s>> 0xc
            zmm1 = *(r9_3 + (rax_32 << 2))
            zmm0.d = (*(r9_3 + (rax_32 << 2) + 4)).d f- zmm1.d
            int32_t rax_34 = j & 0xfff
            j -= r10_1
            zmm2.q = _mm_cvtps_pd(zmm0.q).q f* _mm_cvtepi32_pd(zx.q(rax_34)).q
            zmm0 = _mm_cvtps_pd(zmm1.q)
            zmm1 = *rcx_11
            rcx_11 -= 4
            zmm2.q = zmm2.q f* zmm8.q
            zmm2.q = zmm2.q f+ zmm0.q
            zmm2.q = zmm2.q f* _mm_cvtps_pd(zmm1.q).q
            zmm3 = zmm3 f+ zmm2.q
        while (j s> 0)
        
        int64_t rax_35 = arg2[1]
        int64_t rcx_12 = sx.q(*(rbx + 0x14))
        zmm1.q = zmm9.q f/ zmm7.q
        temp0_11[0] = temp0_11[0] f/ zmm10.q
        zmm1.q = zmm1.q f+ zmm6.q
        temp0_11[0] = temp0_11[0] * (zmm3 f+ zmm4)
        zmm0.d = fconvert.s(temp0_11[0])
        *(rax_35 + (rcx_12 << 2)) = zmm0.d
        i = *(rbx + 0x14) + 1
        *(rbx + 0x14) = i
        zmm6.q = zmm1.q f- _mm_cvtepi32_pd(zx.q(int.d(zmm1.q))).q
        
        if (not(zmm6.q f>= 0.0))
            zmm6.q = zmm6.q f+ zmm9.q
        
        rcx = *(rbx + 0x44)
        zmm1.q = zmm1.q f- zmm6.q
        int32_t temp1_5 = mods.dp.d(sx.q(int.d(zmm1.q) * *(rbx + 4) + *(rbx + 0x38)), rcx)
        *(rbx + 0x38) = temp1_5
        r8_1 = temp1_5
    while (i s< *(rbx + 0x10))

arg1[1] = zmm6.q
*arg1 = zmm7.q
arg2[3].d = divs.dp.d(sx.q(*(rbx + 0xc)), *(rbx + 4))
*(rbx + 4)
*(arg2 + 0x1c) = divs.dp.d(sx.q(*(rbx + 0x14)), *(rbx + 4))
return 0
