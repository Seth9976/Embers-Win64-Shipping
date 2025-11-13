// 函数: sub_142294ca0
// 地址: 0x142294ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
int32_t r9 = arg2.d
uint128_t* r14 = arg1
int32_t i_13 = ((arg2 << 1) + -ffffffffffffffff).d
int32_t var_4c8 = arg2.d
float zmm2[0x4]

zmm2 = i_13 s<= 0x14 ? 0x40000000 : 0x40400000

float zmm10[0x4] = 0x3f800000
int32_t i_8 = 0
int64_t i_12 = sx.q(i_13)
zmm2[0] = zmm2[0] + zmm2[0]
int32_t rax_2 = 0
float zmm6[0x4] = zx.o(0)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(i_13 - 1))
zmm2[0] = zmm2[0] f/ zmm0.d
float var_498[0x4]
float zmm1[0x4]
float zmm4[0x4]

if (i_13 s> 0)
    void* rcx = &var_498[3]
    zmm4 = 0x3f800000
    int64_t i_9 = i_12
    zmm4[0] = 1f / zmm2[0]
    int64_t i
    
    do
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* zmm2[0]
        zmm0.d = zmm0.d f- zmm2[0]
        
        if (zmm0.d f>= 0f)
            zmm1 = zmm4
        else
            zmm1 = 0xbf800000
            zmm1[0] = -1f / zmm2[0]
        
        zmm0.d = zmm0.d f* zmm0.d
        rax_2 += 1
        zmm0.d = zmm0.d f* zmm1[0]
        *rcx = zmm0.d
        rcx += 0x10
        i = i_9
        i_9 -= 1
    while (i != 1)

int32_t r12 = 0
float zmm7[0x4]
float var_58[0x4] = zmm7
uint32_t zmm8[0x4]
uint32_t var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float var_4a8

if (i_13 s> 0)
    void* rbx_1 = &var_498[3]
    int64_t r14_1 = 0
    zmm8 = 0x7fffffff
    zmm9 = 0x3f000000
    uint128_t var_4b8 = *arg4
    
    do
        zmm1 = *rbx_1
        
        if (r14_1 s<= 0)
            zmm0 = zmm6
        else
            zmm0.d = zmm1.d f- *(rbx_1 - 0x10)
            zmm0 = _mm_and_ps(zmm0, zmm8)
        
        if (r12 s>= i_13 - 1)
            zmm7 = zmm6
        else
            zmm1[0] = zmm1[0] f- *(rbx_1 + 0x10)
            zmm7 = _mm_and_ps(zmm1, zmm8)
        
        zmm7[0] = zmm7[0] f+ zmm0.d
        zmm7[0] = zmm7[0] * zmm9[0]
        float* rax_3
        rax_3, zmm6, zmm7, zmm8, zmm9, zmm10 = sub_1422aae30(&var_4a8, zmm1, &var_4b8)
        r12 += 1
        r14_1 += 1
        zmm7[0] = zmm7[0] * *rax_3
        zmm0.d = zmm7.d f* rax_3[1]
        zmm7[0] = zmm7[0] * rax_3[2]
        *(rbx_1 - 0xc) = zmm7[0]
        *(rbx_1 - 8) = zmm0.d
        *(rbx_1 - 4) = zmm7[0]
        rbx_1 += 0x10
    while (r14_1 s< i_12)
    
    r9 = var_4c8
    r14 = arg1

int32_t temp0_4
int32_t temp1
temp0_4:temp1 = sx.q(i_13)
int64_t i_1 = sx.q((temp1 - temp0_4) s>> 1)
int64_t result = i_1 << 4
void* rcx_2 = &var_498 + result
zmm1 = *rcx_2

while (i_1 s> 0)
    zmm0 = *(rcx_2 - 0x10)
    i_1 -= 1
    rcx_2 -= 0x10
    *(rcx_2 + 0x10) = zmm0

var_498 = zmm1
zmm4 = zmm6
float zmm5[0x4] = zmm6
int32_t rdx_1 = 0
void var_478
float zmm3[0x4]

if (i_13 s> 0 && i_13 u>= 8)
    zmm7 = zx.o(0)
    zmm8 = zx.o(0)
    zmm9 = zx.o(0)
    zmm6 = zx.o(0)
    int32_t rcx_4 = i_13 & 0x80000007
    
    if (rcx_4 s< 0)
        rcx_4 = ((rcx_4 - 1) | 0xfffffff8) + 1
    
    zmm5 = zx.o(0)
    zmm4 = zx.o(0)
    int64_t i_2 = 0
    result = &var_478
    
    do
        zmm1 = *(result + 0x10)
        rdx_1 += 8
        i_2 += 8
        zmm2 = *(result - 0x10)
        float temp0_5[0x4] = _mm_unpacklo_ps(*(result - 0x20), (*result).q)
        zmm0 = *(result + 4)
        float temp0_6[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(result + 0x14)
        float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
        zmm2 = *(result - 0xc)
        zmm4 = _mm_add_ps(zmm4, temp0_7)
        float temp0_9[0x4] = _mm_unpacklo_ps(*(result - 0x1c), zmm0.q)
        zmm0 = *(result + 8)
        float temp0_10[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(result + 0x18)
        float temp0_11[0x4] = _mm_unpacklo_ps(temp0_9, temp0_10[0].q)
        zmm2 = *(result - 8)
        zmm5 = _mm_add_ps(zmm5, temp0_11)
        float temp0_13[0x4] = _mm_unpacklo_ps(*(result - 0x18), zmm0.q)
        zmm0 = *(result + 0x40)
        float temp0_14[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(result + 0x50)
        float temp0_15[0x4] = _mm_unpacklo_ps(temp0_13, temp0_14[0].q)
        zmm2 = *(result + 0x30)
        zmm7 = _mm_add_ps(zmm7, temp0_15)
        float temp0_17[0x4] = _mm_unpacklo_ps(*(result + 0x20), zmm0.q)
        zmm0 = *(result + 0x44)
        float temp0_18[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(result + 0x54)
        float temp0_19[0x4] = _mm_unpacklo_ps(temp0_17, temp0_18[0].q)
        zmm2 = *(result + 0x34)
        zmm6 = _mm_add_ps(zmm6, temp0_19)
        float temp0_21[0x4] = _mm_unpacklo_ps(*(result + 0x24), zmm0.q)
        zmm0 = *(result + 0x48)
        float temp0_22[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(result + 0x58)
        float temp0_23[0x4] = _mm_unpacklo_ps(temp0_21, temp0_22[0].q)
        zmm2 = *(result + 0x38)
        zmm9 = _mm_add_ps(zmm9, temp0_23)
        zmm3 = *(result + 0x28)
        result -= -0x80
        zmm8 = _mm_add_ps(zmm8, 
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q))
    while (i_2 s< sx.q(i_13 - rcx_4))
    
    float temp0_29[0x4] = _mm_add_ps(zmm4, zmm6)
    float temp0_30[0x4] = _mm_add_ps(zmm5, zmm9)
    float temp0_31[0x4] = _mm_add_ps(zmm7, zmm8)
    temp0_29[0].q = temp0_29 u>> 0x40
    zmm6 = _mm_add_ps(temp0_29, temp0_29)
    temp0_30[0].q = temp0_30 u>> 0x40
    zmm4 = _mm_add_ps(temp0_30, temp0_30)
    temp0_31[0].q = temp0_31 u>> 0x40
    zmm5 = _mm_add_ps(temp0_31, temp0_31)
    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xf5)
    zmm6[0] = zmm6[0] f+ zmm0.d
    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xf5)
    zmm4[0] = zmm4[0] f+ zmm0.d
    zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xf5)
    zmm5[0] = zmm5[0] f+ zmm0.d

int64_t rdx_2 = sx.q(rdx_1)

if (rdx_2 s< i_12)
    result = i_12 - rdx_2
    
    if (result s>= 4)
        void* rcx_7 = &var_498[1 + rdx_2 * 4]
        result = ((i_12 - rdx_2 - 4) u>> 2) + 1
        rdx_2 += result << 2
        int64_t i_3
        
        do
            zmm6[0] = zmm6[0] f+ *(rcx_7 - 4)
            zmm4[0] = zmm4[0] f+ *rcx_7
            zmm5[0] = zmm5[0] f+ *(rcx_7 + 4)
            zmm6[0] = zmm6[0] f+ *(rcx_7 + 0xc)
            zmm4[0] = zmm4[0] f+ *(rcx_7 + 0x10)
            zmm5[0] = zmm5[0] f+ *(rcx_7 + 0x14)
            zmm6[0] = zmm6[0] f+ *(rcx_7 + 0x1c)
            zmm4[0] = zmm4[0] f+ *(rcx_7 + 0x20)
            zmm5[0] = zmm5[0] f+ *(rcx_7 + 0x24)
            zmm6[0] = zmm6[0] f+ *(rcx_7 + 0x2c)
            zmm4[0] = zmm4[0] f+ *(rcx_7 + 0x30)
            zmm5[0] = zmm5[0] f+ *(rcx_7 + 0x34)
            rcx_7 += 0x40
            i_3 = result
            result -= 1
        while (i_3 != 1)
    
    if (rdx_2 s< i_12)
        void* rcx_8 = &var_498[1 + rdx_2 * 4]
        result = i_12 - rdx_2
        int64_t i_4
        
        do
            zmm6[0] = zmm6[0] f+ *(rcx_8 - 4)
            zmm4[0] = zmm4[0] f+ *rcx_8
            zmm5[0] = zmm5[0] f+ *(rcx_8 + 4)
            rcx_8 += 0x10
            i_4 = result
            result -= 1
        while (i_4 != 1)

float temp0_38[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_39[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
int32_t i_5 = 0
float temp0_40[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)

if (i_13 s> 0 && i_13 u>= 8)
    int32_t rax_22 = i_13 & 0x80000007
    
    if (rax_22 s< 0)
        rax_22 = ((rax_22 - 1) | 0xfffffff8) + 1
    
    float temp0_41[0x4] = _mm_rcp_ps(temp0_38)
    int32_t rbx_2 = 4
    void* r10_1 = &var_478
    zmm8 = _mm_rcp_ps(temp0_39)
    zmm0 = _mm_mul_ps(temp0_41, temp0_41)
    float temp0_44[0x4] = _mm_add_ps(temp0_41, temp0_41)
    float temp0_45[0x4] = _mm_rcp_ps(temp0_40)
    float temp0_47[0x4] = _mm_sub_ps(temp0_44, _mm_mul_ps(zmm0, temp0_38))
    zmm0 = _mm_mul_ps(zmm8, zmm8)
    zmm8 = _mm_sub_ps(_mm_add_ps(zmm8, zmm8), _mm_mul_ps(zmm0, temp0_39))
    zmm0 = _mm_mul_ps(temp0_45, temp0_45)
    float temp0_55[0x4] = _mm_sub_ps(_mm_add_ps(temp0_45, temp0_45), _mm_mul_ps(zmm0, temp0_40))
    
    do
        zmm1 = *(r10_1 + 0x10)
        zmm2 = *(r10_1 - 0x10)
        float temp0_56[0x4] = _mm_unpacklo_ps(*(r10_1 - 0x20), (*r10_1).q)
        zmm0 = *(r10_1 + 4)
        float temp0_57[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(r10_1 + 0x14)
        float temp0_58[0x4] = _mm_unpacklo_ps(temp0_56, temp0_57[0].q)
        zmm2 = *(r10_1 - 0xc)
        float temp0_59[0x4] = _mm_mul_ps(temp0_58, temp0_47)
        float temp0_60[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        int64_t r8_3 = sx.q(i_5) * 2
        zmm1 = *(r10_1 + 0x18)
        var_498[r8_3 * 2] = temp0_59[0]
        int64_t rdx_5 = (sx.q(rbx_2) - 3) * 2
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xe5)
        int64_t rcx_11 = (sx.q(rbx_2) - 2) * 2
        int64_t rax_26 = sx.q(rbx_2) * 2
        var_498[rdx_5 * 2] = temp0_61[0]
        float temp0_62[0x4] = _mm_unpackhi_ps(temp0_61, temp0_61)
        var_498[rcx_11 * 2] = temp0_62[0]
        (&var_4a8)[rax_26 * 2] = _mm_unpackhi_ps(temp0_62, temp0_62)[0]
        float temp0_64[0x4] = _mm_unpacklo_ps(*(r10_1 - 0x1c), zmm0.q)
        zmm0 = *(r10_1 + 8)
        float temp0_65[0x4] = _mm_unpacklo_ps(temp0_64, temp0_60[0].q)
        zmm2 = *(r10_1 - 8)
        float temp0_66[0x4] = _mm_mul_ps(temp0_65, zmm8)
        float temp0_67[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(r10_1 + 0x50)
        var_498[1 + r8_3 * 2] = temp0_66[0]
        float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xe5)
        var_498[1 + rdx_5 * 2] = temp0_68[0]
        float temp0_69[0x4] = _mm_unpackhi_ps(temp0_68, temp0_68)
        var_498[1 + rcx_11 * 2] = temp0_69[0]
        void var_4a4
        *(&var_4a4 + (rax_26 << 3)) = _mm_unpackhi_ps(temp0_69, temp0_69)[0]
        float temp0_71[0x4] = _mm_unpacklo_ps(*(r10_1 - 0x18), zmm0.q)
        zmm0 = *(r10_1 + 0x40)
        float temp0_72[0x4] = _mm_unpacklo_ps(temp0_71, temp0_67[0].q)
        zmm2 = *(r10_1 + 0x30)
        float temp0_73[0x4] = _mm_mul_ps(temp0_72, temp0_55)
        float temp0_74[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        var_498[2 + r8_3 * 2] = temp0_73[0]
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xe5)
        var_498[2 + rdx_5 * 2] = temp0_75[0]
        float temp0_76[0x4] = _mm_unpackhi_ps(temp0_75, temp0_75)
        var_498[2 + rcx_11 * 2] = temp0_76[0]
        void var_4a0
        *(&var_4a0 + (rax_26 << 3)) = _mm_unpackhi_ps(temp0_76, temp0_76)[0]
        float temp0_80[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(r10_1 + 0x20), zmm0.q), temp0_74[0].q), temp0_47)
        int64_t r8_5 = sx.q(rbx_2) * 2
        int64_t rdx_8 = (sx.q(rbx_2) + 1) * 2
        var_498[r8_5 * 2] = temp0_80[0]
        int64_t rcx_14 = (sx.q(rbx_2) + 2) * 2
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xe5)
        result = (sx.q(rbx_2) + 3) * 2
        var_498[rdx_8 * 2] = temp0_81[0]
        float temp0_82[0x4] = _mm_unpackhi_ps(temp0_81, temp0_81)
        var_498[rcx_14 * 2] = temp0_82[0]
        var_498[result * 2] = _mm_unpackhi_ps(temp0_82, temp0_82)[0]
        zmm1 = *(r10_1 + 0x54)
        i_5 += 8
        zmm0 = *(r10_1 + 0x44)
        rbx_2 += 8
        zmm2 = *(r10_1 + 0x34)
        zmm3 = *(r10_1 + 0x24)
        r10_1 += 0x80
        float temp0_84[0x4] = _mm_unpacklo_ps(zmm3, zmm0.q)
        zmm0 = *(r10_1 - 0x38)
        float temp0_85[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        zmm1 = *(r10_1 - 0x28)
        float temp0_86[0x4] = _mm_unpacklo_ps(temp0_84, temp0_85[0].q)
        zmm2 = *(r10_1 - 0x48)
        float temp0_87[0x4] = _mm_mul_ps(temp0_86, zmm8)
        float temp0_88[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
        var_498[1 + r8_5 * 2] = temp0_87[0]
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xe5)
        var_498[1 + rdx_8 * 2] = temp0_89[0]
        float temp0_90[0x4] = _mm_unpackhi_ps(temp0_89, temp0_89)
        var_498[1 + rcx_14 * 2] = temp0_90[0]
        var_498[1 + result * 2] = _mm_unpackhi_ps(temp0_90, temp0_90)[0]
        float temp0_94[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(r10_1 - 0x58), zmm0.q), temp0_88[0].q), temp0_55)
        var_498[2 + r8_5 * 2] = temp0_94[0]
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0xe5)
        var_498[2 + rdx_8 * 2] = temp0_95[0]
        float temp0_96[0x4] = _mm_unpackhi_ps(temp0_95, temp0_95)
        var_498[2 + rcx_14 * 2] = temp0_96[0]
        var_498[2 + result * 2] = _mm_unpackhi_ps(temp0_96, temp0_96)[0]
    while (i_5 s< i_13 - rax_22)

int64_t i_10 = sx.q(i_5)

if (i_10 s< i_12)
    result = i_12 - i_10
    
    if (result s>= 4)
        void* rcx_15 = &var_498[1 + i_10 * 4]
        result = ((i_12 - i_10 - 4) u>> 2) + 1
        zmm10[0] = zmm10[0] / zmm6[0]
        i_10 += result << 2
        zmm10[0] = zmm10[0] / zmm4[0]
        zmm10[0] = zmm10[0] / zmm5[0]
        int64_t i_6
        
        do
            rcx_15 += 0x40
            zmm0.d = zmm10.d f* *(rcx_15 - 0x44)
            zmm10[0] = zmm10[0] f* *(rcx_15 - 0x40)
            *(rcx_15 - 0x44) = zmm0.d
            zmm0.d = zmm10.d f* *(rcx_15 - 0x3c)
            *(rcx_15 - 0x40) = zmm10[0]
            zmm10[0] = zmm10[0] f* *(rcx_15 - 0x34)
            *(rcx_15 - 0x3c) = zmm0.d
            zmm0.d = zmm10.d f* *(rcx_15 - 0x30)
            *(rcx_15 - 0x34) = zmm10[0]
            zmm10[0] = zmm10[0] f* *(rcx_15 - 0x2c)
            *(rcx_15 - 0x30) = zmm0.d
            zmm0.d = zmm10.d f* *(rcx_15 - 0x24)
            *(rcx_15 - 0x2c) = zmm10[0]
            zmm10[0] = zmm10[0] f* *(rcx_15 - 0x20)
            *(rcx_15 - 0x24) = zmm0.d
            zmm0.d = zmm10.d f* *(rcx_15 - 0x1c)
            *(rcx_15 - 0x20) = zmm10[0]
            zmm10[0] = zmm10[0] f* *(rcx_15 - 0x14)
            *(rcx_15 - 0x1c) = zmm0.d
            zmm0.d = zmm10.d f* *(rcx_15 - 0x10)
            *(rcx_15 - 0x14) = zmm10[0]
            zmm10[0] = zmm10[0] f* *(rcx_15 - 0xc)
            *(rcx_15 - 0x10) = zmm0.d
            *(rcx_15 - 0xc) = zmm10[0]
            i_6 = result
            result -= 1
        while (i_6 != 1)
    
    if (i_10 s< i_12)
        result = i_10 << 4
        void* rcx_16 = &var_498[1] + result
        int64_t i_11 = i_12 - i_10
        zmm10[0] = zmm10[0] / zmm6[0]
        zmm10[0] = zmm10[0] / zmm4[0]
        zmm10[0] = zmm10[0] / zmm5[0]
        int64_t i_7
        
        do
            rcx_16 += 0x10
            zmm0.d = zmm10.d f* *(rcx_16 - 0x14)
            zmm10[0] = zmm10[0] f* *(rcx_16 - 0x10)
            *(rcx_16 - 0x14) = zmm0.d
            zmm0.d = zmm10.d f* *(rcx_16 - 0xc)
            *(rcx_16 - 0x10) = zmm10[0]
            *(rcx_16 - 0xc) = zmm0.d
            i_7 = i_11
            i_11 -= 1
        while (i_7 != 1)

*r14 = var_498

if (r9 != 1)
    void* rdx_9 = &r14[1]
    
    do
        uint64_t rcx_17 = zx.q(r9 + i_8)
        i_8 += 1
        rdx_9 += 0x10
        *(rdx_9 - 0x10) = (&var_498)[rcx_17]
    while (i_8 u< r9 - 1)

__security_check_cookie(rax_1 ^ &var_4e8)
return result
