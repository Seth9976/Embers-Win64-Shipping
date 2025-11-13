// 函数: sub_142294090
// 地址: 0x142294090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_538
int64_t rax_1 = __security_cookie ^ &var_538
double zmm4[0x2] = *arg3
int32_t r10 = arg2.d
uint128_t zmm3 = 0x3fd51eb851eb851f
double zmm0[0x2] = zx.o(0)
double (* r15)[0x2] = arg1
zmm0[0] = fconvert.d(zmm4[0].d)
int32_t i_20 = ((arg2 << 1) + -ffffffffffffffff).d
int32_t var_518 = arg2.d
zmm0[0] = zmm0[0] f- zmm3.q
float temp0[0x4] = _mm_cvtpd_ps(zmm0)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
temp0[0] = temp0[0] * temp0[0]
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
zmm0[0] = fconvert.d(zmm0[0].d)
temp0[0] = temp0[0] * temp0[0]
zmm0[0] = zmm0[0] f- zmm3.q
temp0[0] = temp0[0] * 100f
int128_t zmm13
zmm13.d = fconvert.s(zmm0[0])
temp0[0] = temp0[0] + 3.5f
zmm0 = zx.o(0)
zmm13.d = zmm13.d f* zmm13.d
zmm0[0] = fconvert.d(zmm4[0].d)
zmm13.d = zmm13.d f* zmm13.d
zmm0[0] = zmm0[0] f- zmm3.q
zmm13.d = zmm13.d f* 100f
float temp0_3[0x4] = _mm_cvtpd_ps(zmm0)
zmm13.d = zmm13.d f+ 3.5f
temp0_3[0] = temp0_3[0] * temp0_3[0]
temp0_3[0] = temp0_3[0] * temp0_3[0]
temp0_3[0] = temp0_3[0] * 100f
temp0_3[0] = temp0_3[0] + 3.5f
float zmm2[0x4]

zmm2 = i_20 s<= 0x14 ? 0x40000000 : 0x40400000

float zmm15[0x4] = 0x3f800000
int32_t i_11 = 0
int64_t i_19 = sx.q(i_20)
zmm3.d = zmm2.d f+ zmm2[0]
int32_t rax_2 = 0
double zmm8[0x2] = zx.o(0)
zmm3.d = zmm3.d f/ _mm_cvtepi32_ps(zx.o(i_20 - 1))[0].d
uint128_t var_4e8
uint128_t zmm1

if (i_20 s> 0)
    void* rcx = &var_4e8:0xc
    zmm4 = 0x3f800000
    int64_t i_15 = i_19
    zmm4[0].d = 1f / zmm2[0]
    int64_t i
    
    do
        zmm0 = _mm_cvtepi32_ps(zx.o(rax_2))
        zmm0[0].d = zmm0[0].d f* zmm3.d
        zmm0[0].d = zmm0[0].d f- zmm2[0]
        
        if (zmm0[0].d f>= 0f)
            zmm1 = zmm4
        else
            zmm1.d = -1f / zmm2[0]
        
        zmm0[0].d = zmm0[0].d f* zmm0[0].d
        rax_2 += 1
        zmm0[0].d = zmm0[0].d f* zmm1.d
        *rcx = zmm0[0].d
        rcx += 0x10
        i = i_15
        i_15 -= 1
    while (i != 1)

zmm0 = arg6
int32_t r12 = 0
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
double zmm9[0x2]
double var_78[0x2] = zmm9
zmm0[0].d = zmm0[0].d f/ arg5
arg6 = zmm0[0].d
uint128_t var_4f8

if (i_20 s> 0)
    int64_t r15_1 = 0
    void* rdi_1 = &var_4e8:0xc
    double zmm10[0x2]
    double var_88_1[0x2] = zmm10
    int96_t var_508_1 = (*arg4)[0].12
    var_4f8 = *arg3
    
    do
        zmm9 = *rdi_1
        
        if (r15_1 s<= 0)
            zmm0 = zmm8
        else
            zmm9[0].d = zmm9[0].d f- *(rdi_1 - 0x10)
            zmm0 = _mm_and_ps(zmm9, 0x7fffffff)
        
        if (r12 s>= i_20 - 1)
            zmm10 = zmm8
        else
            zmm9[0].d = zmm9[0].d f- *(rdi_1 + 0x10)
            zmm10 = _mm_and_ps(zmm9, 0x7fffffff)
        
        zmm10[0].d = zmm10[0].d f+ zmm0[0].d
        zmm1 = var_4f8.d
        zmm9 = _mm_and_ps(zmm9, 0x7fffffff)
        zmm9[0].d = zmm9[0].d f* arg6[0]
        zmm10[0].d = zmm10[0].d f* 0.5f
        int128_t zmm0_1
        int128_t zmm9_1
        float zmm10_1
        zmm0_1, zmm9_1, zmm10_1 = sub_142292e30(zmm9, zmm1, temp0[0], var_508_1.d)
        int128_t zmm0_2
        int128_t zmm9_2
        float zmm10_2
        zmm0_2, zmm9_2, zmm10_2 = sub_142292e30(zmm9_1, var_4f8:4.d, zmm13.d, var_508_1:4.d)
        zmm0, zmm6, zmm7, zmm8, zmm10 =
            sub_142292e30(zmm9_2, var_4f8:8.d, temp0_3[0], var_508_1:8.d)
        zmm0[0].d = zmm0[0].d f* zmm10[0].d
        r12 += 1
        r15_1 += 1
        *(rdi_1 - 0xc) = zmm7[0]
        *(rdi_1 - 8) = zmm6[0]
        *(rdi_1 - 4) = zmm0[0].d
        rdi_1 += 0x10
    while (r15_1 s< i_19)
    
    zmm15 = 0x3f800000
    r10 = var_518
    r15 = arg1

int32_t i_1 = 0
void var_4cc

if (i_20 s> 0 && i_20 u>= 8)
    int32_t rax_4 = i_20 & 0x80000007
    
    if (rax_4 s< 0)
        rax_4 = ((rax_4 - 1) | 0xfffffff8) + 1
    
    zmm4 = data_142d8c9e0
    int32_t var_4bc[0x4]
    int32_t (* rcx_1)[0x4] = &var_4bc
    int32_t rdx = 2
    
    do
        zmm1 = rcx_1[1][0]
        zmm0 = *rcx_1
        zmm2 = rcx_1[-1][0]
        zmm3 = rcx_1[-2][0]
        rcx_1 = &rcx_1[8]
        zmm3 = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0]), _mm_unpacklo_ps(zmm2, zmm1.q)[0].q), 
            zmm4)
        int64_t i_12 = sx.q(i_1)
        i_1 += 8
        *(&var_4e8:0xc + i_12 * 0x10) = zmm3.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        *(&var_4f8:0xc + sx.q(rdx) * 0x10) = zmm3.d
        zmm2 = rcx_1[-5][0]
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        *(&var_4e8:0xc + sx.q(rdx) * 0x10) = zmm3.d
        zmm0 = rcx_1[-4][0]
        *(&var_4cc + sx.q(rdx) * 0x10) = _mm_unpackhi_ps(zmm3, zmm3).d
        zmm3 = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(rcx_1[-6][0], zmm0[0]), 
                _mm_unpacklo_ps(zmm2, rcx_1[-3][0].q)[0].q), 
            zmm4)
        (&var_4bc)[sx.q(rdx)][0] = zmm3.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        int32_t var_4ac[0x4]
        (&var_4ac)[sx.q(rdx)][0] = zmm3.d
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        int32_t var_49c[0x4]
        (&var_49c)[sx.q(rdx)][0] = zmm3.d
        int64_t rax_20 = sx.q(rdx)
        rdx += 8
        int32_t var_48c[0x15]
        var_48c[rax_20 * 4] = _mm_unpackhi_ps(zmm3, zmm3).d
    while (i_1 s< i_20 - rax_4)

int64_t i_16 = sx.q(i_1)

if (i_16 s< i_19)
    if (i_19 - i_16 s>= 4)
        void* rcx_2 = &var_4cc + (i_16 << 4)
        int64_t i_13 = ((i_19 - i_16 - 4) u>> 2) + 1
        i_16 += i_13 << 2
        int64_t i_2
        
        do
            zmm0 = *(rcx_2 - 0x10)
            zmm1 = *rcx_2
            rcx_2 += 0x40
            zmm0[0].d = zmm0[0].d f* 4f
            zmm1.d = zmm1.d f* 4f
            *(rcx_2 - 0x50) = zmm0[0].d
            zmm0 = *(rcx_2 - 0x30)
            *(rcx_2 - 0x40) = zmm1.d
            zmm0[0].d = zmm0[0].d f* 4f
            zmm1.d = (*(rcx_2 - 0x20)).d f* 4f
            *(rcx_2 - 0x30) = zmm0[0].d
            *(rcx_2 - 0x20) = zmm1.d
            i_2 = i_13
            i_13 -= 1
        while (i_2 != 1)
    
    if (i_16 s< i_19)
        void* rcx_3 = &var_4e8:0xc + (i_16 << 4)
        int64_t i_14 = i_19 - i_16
        int64_t i_3
        
        do
            zmm0 = *rcx_3
            rcx_3 += 0x10
            zmm0[0].d = zmm0[0].d f* 4f
            *(rcx_3 - 0x10) = zmm0[0].d
            i_3 = i_14
            i_14 -= 1
        while (i_3 != 1)

int32_t temp0_23
int32_t temp1
temp0_23:temp1 = sx.q(i_20)
int64_t i_4 = sx.q((temp1 - temp0_23) s>> 1)
int64_t result = i_4 << 4
void* rcx_4 = &var_4e8 + result
zmm1 = *rcx_4

while (i_4 s> 0)
    zmm0 = *(rcx_4 - 0x10)
    i_4 -= 1
    rcx_4 -= 0x10
    *(rcx_4 + 0x10) = zmm0

var_4e8 = zmm1
zmm4 = zmm8
float zmm5[0x4] = zmm8
int32_t rdx_2 = 0
void var_4c8

if (i_20 s> 0 && i_20 u>= 8)
    zmm6 = zx.o(0)
    zmm7 = zx.o(0)
    zmm9 = zx.o(0)
    zmm8 = zx.o(0)
    int32_t rcx_6 = i_20 & 0x80000007
    
    if (rcx_6 s< 0)
        rcx_6 = ((rcx_6 - 1) | 0xfffffff8) + 1
    
    zmm5 = zx.o(0)
    zmm4 = zx.o(0)
    int64_t i_5 = 0
    result = &var_4c8
    
    do
        zmm1 = *(result + 0x10)
        rdx_2 += 8
        i_5 += 8
        zmm2 = *(result - 0x10)
        zmm3 = _mm_unpacklo_ps(*(result - 0x20), (*result)[0])
        zmm0 = *(result + 4)
        float temp0_25[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(result + 0x14)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_25[0].q)
        zmm2 = *(result - 0xc)
        zmm4 = _mm_add_ps(zmm4, zmm3)
        zmm3 = _mm_unpacklo_ps(*(result - 0x1c), zmm0[0])
        zmm0 = *(result + 8)
        float temp0_29[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(result + 0x18)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_29[0].q)
        zmm2 = *(result - 8)
        zmm5 = _mm_add_ps(zmm5, zmm3)
        zmm3 = _mm_unpacklo_ps(*(result - 0x18), zmm0[0])
        zmm0 = *(result + 0x40)
        float temp0_33[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(result + 0x50)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_33[0].q)
        zmm2 = *(result + 0x30)
        zmm6 = _mm_add_ps(zmm6, zmm3)
        zmm3 = _mm_unpacklo_ps(*(result + 0x20), zmm0[0])
        zmm0 = *(result + 0x44)
        float temp0_37[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(result + 0x54)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_37[0].q)
        zmm2 = *(result + 0x34)
        zmm8 = _mm_add_ps(zmm8, zmm3)
        zmm3 = _mm_unpacklo_ps(*(result + 0x24), zmm0[0])
        zmm0 = *(result + 0x48)
        float temp0_41[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(result + 0x58)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_41[0].q)
        zmm2 = *(result + 0x38)
        zmm9 = _mm_add_ps(zmm9, zmm3)
        zmm3 = *(result + 0x28)
        result -= -0x80
        zmm7 = _mm_add_ps(zmm7, 
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0]), _mm_unpacklo_ps(zmm2, zmm1.q)[0].q))
    while (i_5 s< sx.q(i_20 - rcx_6))
    
    zmm4 = _mm_add_ps(zmm4, zmm8)
    float temp0_49[0x4] = _mm_add_ps(zmm5, zmm9)
    float temp0_50[0x4] = _mm_add_ps(zmm6, zmm7)
    zmm4[0] = zmm4 u>> 0x40
    zmm8 = _mm_add_ps(zmm4, zmm4)
    zmm4 = temp0_49
    zmm4[0] = temp0_49 u>> 0x40
    zmm4 = _mm_add_ps(zmm4, temp0_49)
    temp0_50[0].q = temp0_50 u>> 0x40
    zmm5 = _mm_add_ps(temp0_50, temp0_50)
    zmm0 = _mm_shuffle_ps(zmm8, zmm8, 0xf5)
    zmm8[0].d = zmm8[0].d f+ zmm0[0].d
    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xf5)
    zmm4[0].d = zmm4[0].d f+ zmm0[0].d
    zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xf5)
    zmm5[0] = zmm5[0] f+ zmm0[0].d

int64_t rdx_3 = sx.q(rdx_2)

if (rdx_3 s< i_19)
    result = i_19 - rdx_3
    
    if (result s>= 4)
        void* rcx_9 = &var_4e8:4 + (rdx_3 << 4)
        result = ((i_19 - rdx_3 - 4) u>> 2) + 1
        rdx_3 += result << 2
        int64_t i_6
        
        do
            zmm8[0].d = zmm8[0].d f+ *(rcx_9 - 4)
            zmm4[0].d = zmm4[0].d f+ *rcx_9
            zmm5[0] = zmm5[0] f+ *(rcx_9 + 4)
            zmm8[0].d = zmm8[0].d f+ *(rcx_9 + 0xc)
            zmm4[0].d = zmm4[0].d f+ *(rcx_9 + 0x10)
            zmm5[0] = zmm5[0] f+ *(rcx_9 + 0x14)
            zmm8[0].d = zmm8[0].d f+ *(rcx_9 + 0x1c)
            zmm4[0].d = zmm4[0].d f+ *(rcx_9 + 0x20)
            zmm5[0] = zmm5[0] f+ *(rcx_9 + 0x24)
            zmm8[0].d = zmm8[0].d f+ *(rcx_9 + 0x2c)
            zmm4[0].d = zmm4[0].d f+ *(rcx_9 + 0x30)
            zmm5[0] = zmm5[0] f+ *(rcx_9 + 0x34)
            rcx_9 += 0x40
            i_6 = result
            result -= 1
        while (i_6 != 1)
    
    if (rdx_3 s< i_19)
        void* rcx_10 = &var_4e8:4 + (rdx_3 << 4)
        result = i_19 - rdx_3
        int64_t i_7
        
        do
            zmm8[0].d = zmm8[0].d f+ *(rcx_10 - 4)
            zmm4[0].d = zmm4[0].d f+ *rcx_10
            zmm5[0] = zmm5[0] f+ *(rcx_10 + 4)
            rcx_10 += 0x10
            i_7 = result
            result -= 1
        while (i_7 != 1)

zmm1 = zmm8
zmm2 = zmm4
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
zmm3 = zmm5
float temp0_58[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
int32_t i_8 = 0
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)

if (i_20 s> 0 && i_20 u>= 8)
    int32_t rax_51 = i_20 & 0x80000007
    
    if (rax_51 s< 0)
        rax_51 = ((rax_51 - 1) | 0xfffffff8) + 1
    
    float temp0_60[0x4] = _mm_rcp_ps(zmm1)
    int32_t rdi_2 = 4
    void* r9_2 = &var_4c8
    float temp0_61[0x4] = _mm_rcp_ps(temp0_58)
    zmm0 = _mm_mul_ps(temp0_60, temp0_60)
    float temp0_63[0x4] = _mm_add_ps(temp0_60, temp0_60)
    zmm9 = _mm_rcp_ps(zmm3)
    float temp0_66[0x4] = _mm_sub_ps(temp0_63, _mm_mul_ps(zmm0, zmm1))
    zmm0 = _mm_mul_ps(temp0_61, temp0_61)
    float temp0_70[0x4] = _mm_sub_ps(_mm_add_ps(temp0_61, temp0_61), _mm_mul_ps(zmm0, temp0_58))
    zmm0 = _mm_mul_ps(zmm9, zmm9)
    zmm9 = _mm_sub_ps(_mm_add_ps(zmm9, zmm9), _mm_mul_ps(zmm0, zmm3))
    
    do
        zmm1 = *(r9_2 + 0x10)
        zmm2 = *(r9_2 - 0x10)
        zmm3 = _mm_unpacklo_ps(*(r9_2 - 0x20), (*r9_2)[0])
        zmm0 = *(r9_2 + 4)
        float temp0_76[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(r9_2 + 0x14)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_76[0].q)
        zmm2 = *(r9_2 - 0xc)
        zmm3 = _mm_mul_ps(zmm3, temp0_66)
        float temp0_79[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        int64_t r8_2 = sx.q(i_8) * 2
        zmm1 = *(r9_2 + 0x18)
        *(&var_4e8 + (r8_2 << 3)) = zmm3.d
        int64_t rdx_6 = (sx.q(rdi_2) - 3) * 2
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        int64_t rcx_13 = (sx.q(rdi_2) - 2) * 2
        int64_t rax_55 = sx.q(rdi_2) * 2
        *(&var_4e8 + (rdx_6 << 3)) = zmm3.d
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        *(&var_4e8 + (rcx_13 << 3)) = zmm3.d
        *(&var_4f8 + (rax_55 << 3)) = _mm_unpackhi_ps(zmm3, zmm3).d
        zmm3 = _mm_unpacklo_ps(*(r9_2 - 0x1c), zmm0[0])
        zmm0 = *(r9_2 + 8)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_79[0].q)
        zmm2 = *(r9_2 - 8)
        zmm3 = _mm_mul_ps(zmm3, temp0_70)
        float temp0_86[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(r9_2 + 0x50)
        *(&var_4e8:4 + (r8_2 << 3)) = zmm3.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        *(&var_4e8:4 + (rdx_6 << 3)) = zmm3.d
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        *(&var_4e8:4 + (rcx_13 << 3)) = zmm3.d
        *(&var_4f8:4 + (rax_55 << 3)) = _mm_unpackhi_ps(zmm3, zmm3).d
        zmm3 = _mm_unpacklo_ps(*(r9_2 - 0x18), zmm0[0])
        zmm0 = *(r9_2 + 0x40)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_86[0].q)
        zmm2 = *(r9_2 + 0x30)
        zmm3 = _mm_mul_ps(zmm3, zmm9)
        float temp0_93[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        *(&var_4e8:8 + (r8_2 << 3)) = zmm3.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        *(&var_4e8:8 + (rdx_6 << 3)) = zmm3.d
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        *(&var_4e8:8 + (rcx_13 << 3)) = zmm3.d
        *(&var_4f8:8 + (rax_55 << 3)) = _mm_unpackhi_ps(zmm3, zmm3).d
        zmm3 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(*(r9_2 + 0x20), zmm0[0]), temp0_93[0].q), 
            temp0_66)
        int64_t r8_4 = sx.q(rdi_2) * 2
        int64_t rdx_9 = (sx.q(rdi_2) + 1) * 2
        *(&var_4e8 + (r8_4 << 3)) = zmm3.d
        int64_t rcx_16 = (sx.q(rdi_2) + 2) * 2
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        result = (sx.q(rdi_2) + 3) * 2
        *(&var_4e8 + (rdx_9 << 3)) = zmm3.d
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        *(&var_4e8 + (rcx_16 << 3)) = zmm3.d
        *(&var_4e8 + (result << 3)) = _mm_unpackhi_ps(zmm3, zmm3).d
        zmm1 = *(r9_2 + 0x54)
        i_8 += 8
        zmm0 = *(r9_2 + 0x44)
        rdi_2 += 8
        zmm2 = *(r9_2 + 0x34)
        zmm3 = *(r9_2 + 0x24)
        r9_2 += 0x80
        zmm3 = _mm_unpacklo_ps(zmm3, zmm0[0])
        zmm0 = *(r9_2 - 0x38)
        float temp0_104[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        zmm1 = *(r9_2 - 0x28)
        zmm3 = _mm_unpacklo_ps(zmm3, temp0_104[0].q)
        zmm2 = *(r9_2 - 0x48)
        zmm3 = _mm_mul_ps(zmm3, temp0_70)
        float temp0_107[0x4] = _mm_unpacklo_ps(zmm2, zmm1.q)
        *(&var_4e8:4 + (r8_4 << 3)) = zmm3.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        *(&var_4e8:4 + (rdx_9 << 3)) = zmm3.d
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        *(&var_4e8:4 + (rcx_16 << 3)) = zmm3.d
        *(&var_4e8:4 + (result << 3)) = _mm_unpackhi_ps(zmm3, zmm3).d
        zmm3 = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(r9_2 - 0x58), zmm0[0]), temp0_107[0].q), zmm9)
        *(&var_4e8:8 + (r8_4 << 3)) = zmm3.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
        *(&var_4e8:8 + (rdx_9 << 3)) = zmm3.d
        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
        *(&var_4e8:8 + (rcx_16 << 3)) = zmm3.d
        *(&var_4e8:8 + (result << 3)) = _mm_unpackhi_ps(zmm3, zmm3).d
    while (i_8 s< i_20 - rax_51)

int64_t i_17 = sx.q(i_8)

if (i_17 s< i_19)
    result = i_19 - i_17
    
    if (result s>= 4)
        void* rcx_17 = &var_4e8:4 + (i_17 << 4)
        result = ((i_19 - i_17 - 4) u>> 2) + 1
        zmm15[0] = zmm15[0] f/ zmm8[0].d
        i_17 += result << 2
        zmm3.d = zmm15.d f/ zmm4[0].d
        zmm15[0] = zmm15[0] / zmm5[0]
        int64_t i_9
        
        do
            rcx_17 += 0x40
            zmm0 = zmm15
            zmm0[0].d = zmm0[0].d f* *(rcx_17 - 0x44)
            zmm1.d = zmm3.d f* *(rcx_17 - 0x40)
            *(rcx_17 - 0x44) = zmm0[0].d
            zmm0 = zmm15
            zmm0[0].d = zmm0[0].d f* *(rcx_17 - 0x3c)
            *(rcx_17 - 0x40) = zmm1.d
            zmm1.d = zmm15.d f* *(rcx_17 - 0x34)
            *(rcx_17 - 0x3c) = zmm0[0].d
            zmm0 = zmm3
            zmm0[0].d = zmm0[0].d f* *(rcx_17 - 0x30)
            *(rcx_17 - 0x34) = zmm1.d
            zmm1.d = zmm15.d f* *(rcx_17 - 0x2c)
            *(rcx_17 - 0x30) = zmm0[0].d
            zmm0 = zmm15
            zmm0[0].d = zmm0[0].d f* *(rcx_17 - 0x24)
            *(rcx_17 - 0x2c) = zmm1.d
            zmm1.d = zmm3.d f* *(rcx_17 - 0x20)
            *(rcx_17 - 0x24) = zmm0[0].d
            zmm0 = zmm15
            zmm0[0].d = zmm0[0].d f* *(rcx_17 - 0x1c)
            *(rcx_17 - 0x20) = zmm1.d
            zmm1.d = zmm15.d f* *(rcx_17 - 0x14)
            *(rcx_17 - 0x1c) = zmm0[0].d
            zmm0 = zmm3
            zmm0[0].d = zmm0[0].d f* *(rcx_17 - 0x10)
            *(rcx_17 - 0x14) = zmm1.d
            zmm1.d = zmm15.d f* *(rcx_17 - 0xc)
            *(rcx_17 - 0x10) = zmm0[0].d
            *(rcx_17 - 0xc) = zmm1.d
            i_9 = result
            result -= 1
        while (i_9 != 1)
    
    if (i_17 s< i_19)
        result = i_17 << 4
        void* rcx_18 = &var_4e8:4 + result
        int64_t i_18 = i_19 - i_17
        zmm15[0] = zmm15[0] f/ zmm8[0].d
        zmm3.d = zmm15.d f/ zmm4[0].d
        zmm15[0] = zmm15[0] / zmm5[0]
        int64_t i_10
        
        do
            rcx_18 += 0x10
            zmm0 = zmm15
            zmm0[0].d = zmm0[0].d f* *(rcx_18 - 0x14)
            zmm1.d = zmm3.d f* *(rcx_18 - 0x10)
            *(rcx_18 - 0x14) = zmm0[0].d
            zmm0 = zmm15
            zmm0[0].d = zmm0[0].d f* *(rcx_18 - 0xc)
            *(rcx_18 - 0x10) = zmm1.d
            *(rcx_18 - 0xc) = zmm0[0].d
            i_10 = i_18
            i_18 -= 1
        while (i_10 != 1)

*r15 = var_4e8

if (r10 != 1)
    double* rdx_10 = &r15[1]
    
    do
        uint64_t rcx_19 = zx.q(r10 + i_11)
        i_11 += 1
        rdx_10 = &rdx_10[2]
        *(rdx_10 - 0x10) = (&var_4e8)[rcx_19]
    while (i_11 u< r10 - 1)

__security_check_cookie(rax_1 ^ &var_538)
return result
