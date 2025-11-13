// 函数: sub_1408c29c0
// 地址: 0x1408c29c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408c2d10(arg1)
*(arg1 + 0x54) = 0
int32_t rax = rand()
void* rbx = *(arg1 + 0x278)
int32_t zmm8 = (zx.o(0)).d
uint128_t zmm9
zmm9.d = _mm_cvtepi32_ps(zx.o(rax)).d f* 3.05185094e-05f
*(arg1 + 0x198) = zmm9.d
uint128_t zmm0_1
float zmm6_1[0x4]

if (rbx != 0)
    zmm6_1 = *(arg1 + 0x54)
    *(arg1 + 0x28) = *(arg1 + 0xe8)
    int128_t zmm0_2
    float zmm6_2[0x4]
    int512_t zmm7_2
    int32_t zmm9_1
    zmm0_2, zmm6_2, zmm7_2, zmm9_1 = sub_1408bf070(rbx + 0x1810, zx.o(0), zx.o(0), zmm6_1, zmm9.d)
    zmm7_2.o = zmm0_2
    float zmm7_1
    zmm0_1, zmm7_1, zmm8 = sub_1408bf070(rbx + 0x1ff8, zx.o(0), zx.o(0), zmm6_2, zmm9_1)
    zmm0_1.d = zmm0_1.d f* *(arg1 + 0x58)
    zmm7_1 = zmm7_1 f* *(arg1 + 0x58)
    *(arg1 + 0x288) = zmm0_1.d
    *(arg1 + 0x284) = zmm7_1

uint32_t result = zx.d(*(arg1 + 0xe4))
uint128_t zmm1_1

if (result.b == 0)
    zmm1_1.d = (*(arg1 + 0x1a8)).d f+ *(arg1 + 0x284)
    zmm0_1.d = (*(arg1 + 0x1ac)).d f+ *(arg1 + 0x288)
    *(arg1 + 0x30) = zmm1_1.d
    *(arg1 + 0x34) = zmm0_1.d
else if (result.b == 1)
    uint128_t zmm5_1
    zmm5_1.d = (*(arg1 + 0xd4)).d f* 0.0174532924f
    zmm0_1.d = zmm5_1.d f* 0.159154937f
    
    if (zmm5_1.d f< zmm8)
        zmm0_1.d = zmm0_1.d f- 0.5f
    else
        zmm0_1.d = zmm0_1.d f+ 0.5f
    
    result = int.d(zmm0_1.d)
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 6.28318548f
    zmm5_1.d = zmm5_1.d f- zmm0_1.d
    
    if (not(zmm5_1.d f<= 1.57079637f))
        zmm6_1 = 0xbf800000
        zmm0_1.d = 3.14159274f f- zmm5_1.d
        zmm5_1 = zmm0_1
    else if (zmm5_1.d f>= -1.57079637f)
        zmm6_1 = 0x3f800000
    else
        zmm6_1 = 0xbf800000
        zmm0_1.d = -3.14159274f f- zmm5_1.d
        zmm5_1 = zmm0_1
    
    float zmm3_1[0x4] = *(arg1 + 0x1d0)
    uint128_t zmm2_1
    zmm2_1.d = zmm5_1.d f* zmm5_1.d
    zmm0_1.d = zmm2_1.d f* 2.60516146e-07f
    float zmm4_1 = 2.47604949e-05f f- zmm0_1.d
    zmm0_1.d = zmm2_1.d f* 2.3889859e-08f
    zmm1_1.d = 2.75255616e-06f f- zmm0_1.d
    zmm1_1.d = zmm1_1.d f* zmm2_1.d
    zmm1_1.d = zmm1_1.d f- 0.000198408743f
    zmm1_1.d = zmm1_1.d f* zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 0.00833333097f
    zmm4_1 = ((((zmm4_1 f* zmm2_1.d - 0.00138883782f) f* zmm2_1.d + 0.0416666381f) f* zmm2_1.d
        - 0.5f) f* zmm2_1.d + 1f) * zmm6_1[0] * zmm3_1[0] f+ *(arg1 + 0x284)
    zmm1_1.d = zmm1_1.d f* zmm2_1.d
    zmm1_1.d = zmm1_1.d f- 0.166666672f
    zmm1_1.d = zmm1_1.d f* zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 1f
    zmm1_1.d = zmm1_1.d f* zmm5_1.d
    zmm1_1.d = zmm1_1.d f* zmm3_1[0]
    zmm1_1.d = zmm1_1.d f+ *(arg1 + 0x288)
    *(arg1 + 0x30) = zmm4_1
    *(arg1 + 0x34) = zmm1_1.d
else if (result.b == 2)
    int128_t zmm0_3
    int512_t zmm6_3
    zmm0_3, zmm6_3 = sub_1408bf070(*(arg1 + 0x278) + 0x96b0, zx.o(0), zx.o(0), *(arg1 + 0x54), 
        (*(arg1 + 0x130)).d)
    zmm6_3.o = zmm0_3
    float zmm6_4
    zmm0_1, result, zmm6_4 = sub_1408bf070(*(arg1 + 0x278) + 0x8ec8, zx.o(0), zx.o(0), 
        *(arg1 + 0x54), (*(arg1 + 0x12c)).d)
    float zmm2_4 = *(arg1 + 0x58)
    float zmm1_4 = zmm2_4 f* zmm0_1.d
    zmm0_1.d = (*(arg1 + 0x1ac)).d f+ *(arg1 + 0x288)
    zmm0_1.d = zmm0_1.d f+ zmm2_4 * zmm6_4
    *(arg1 + 0x30) = *(arg1 + 0x1a8) f+ *(arg1 + 0x284) + zmm1_4
    *(arg1 + 0x34) = zmm0_1.d
*(arg1 + 0x1c8) = 0
*(arg1 + 0xd0) = 0x4479c000
*(arg1 + 0x2a8) = 1
*(arg1 + 0x2a0) = arg1
return result
