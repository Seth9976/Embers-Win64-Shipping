// 函数: sub_1427f2270
// 地址: 0x1427f2270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t var_100
int128_t zmm0
int128_t zmm1

if (arg6 == 0)
    zmm1 = arg1[0xa]
    int32_t zmm2 = arg1[0xb]
    *arg5 = arg1[9].d
    *(arg5 + 4) = zmm1.d
    *(arg5 + 8) = zmm2
    zmm1 = arg1[0xb]
    var_100 = (arg1[9] ^ 0x80000000).d
    zmm0 = arg1[0xa]
else
    zmm1 = *(arg5 + 8)
    var_100 = (*arg5 ^ 0x80000000).d
    zmm0 = *(arg5 + 4)

int32_t var_fc = (zmm0 ^ 0x80000000).d
int32_t var_f8 = (zmm1 ^ 0x80000000).d
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
int128_t zmm14
int128_t zmm15
zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_1427f0b10(arg1, &var_100)
*arg4 = arg1[0xc]
int128_t var_128 = *arg1
int128_t var_118 = *(arg1 + 0x10)
int32_t var_108 = arg1[8].d
int32_t* result = physx::PxDiagonalize(&var_100, &var_128)
*arg2 = *result
bool cond:1 = 0f f>= *arg2
arg2[1] = result[1]
float zmm1_1 = result[2]
arg2[2] = zmm1_1

if (cond:1 || 0f f>= arg2[1] || not(zmm1_1 > 0f))
    int128_t var_18_1 = zmm6
    int128_t var_38_1 = zmm8
    int128_t var_48_1 = zmm9
    int128_t var_58_1 = zmm10
    int128_t var_68_1 = zmm11
    int128_t var_78_1 = zmm12
    int128_t var_88_1 = zmm13
    int128_t var_98_1 = zmm14
    int128_t var_a8_1 = zmm15
    int64_t var_130_1 = arg8
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 2, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtRigidBodyExt.cpp", 
        0x58, 
        "%s: inertia tensor has negative components (ill-conditioned input expected). Approximation for "
    "inertia tensor will be used instead.")
    uint32_t var_e8
    (*(*arg7 + 0x48))(arg7, &var_e8, 1.00999999f)
    int32_t var_c8
    (*(*arg7 + 0xa0))(arg7, &var_c8)
    zmm13 = var_c8
    int32_t var_c0
    zmm11 = var_c0
    int32_t var_c4
    zmm10 = var_c4
    int32_t var_b8
    zmm9.d = (var_b8 ^ zmm7).d f* 2f
    int32_t var_b4
    zmm6.d = (var_b4 ^ zmm7).d f* 2f
    int32_t var_b0
    int128_t zmm5_1
    zmm5_1.d = (var_b0 ^ zmm7).d f* 2f
    int128_t zmm0_1
    zmm0_1.d = zmm13.d f* zmm9.d
    zmm15 = zmm13 ^ zmm7
    zmm14 = zmm10 ^ zmm7
    float zmm4_1 = zmm10.d f* zmm6.d f+ zmm0_1.d
    zmm12 = zmm11 ^ zmm7
    int32_t var_bc
    zmm7 = var_bc
    zmm0_1.d = zmm11.d f* zmm6.d
    zmm8.d = zmm7.d f* zmm7.d
    zmm4_1 = zmm4_1 + zmm11.d f* zmm5_1.d
    zmm8.d = zmm8.d f- 0.5f
    zmm1_1 = zmm10.d f* zmm5_1.d f- zmm0_1.d
    zmm0_1.d = zmm13.d f* zmm4_1
    float zmm3_1 = zmm8.d f* zmm9.d - zmm1_1 f* zmm7.d f+ zmm0_1.d
    zmm0_1.d = zmm13.d f* zmm5_1.d
    float zmm2_1 = zmm8.d f* zmm6.d - (zmm11.d f* zmm9.d f- zmm0_1.d) f* zmm7.d
    zmm8.d = zmm8.d f* zmm5_1.d
    zmm13.d = zmm13.d f* zmm6.d
    zmm0_1.d = zmm10.d f* zmm4_1
    zmm11.d = zmm11.d f* zmm4_1
    zmm10.d = zmm10.d f* zmm9.d
    var_128.d = zmm15.d
    var_128:4.d = zmm14.d
    zmm13.d = zmm13.d f- zmm10.d
    var_128:8.d = zmm12.d
    var_128:0xc.d = zmm7.d
    var_118.d = zmm3_1
    var_118:4.d = zmm2_1 f+ zmm0_1.d
    zmm13.d = zmm13.d f* zmm7.d
    zmm8.d = zmm8.d f- zmm13.d
    zmm8.d = zmm8.d f+ zmm11.d
    var_118:8.d = zmm8.d
    uint32_t* rax_6
    int512_t zmm6_1
    int512_t zmm8_1
    int512_t zmm9_1
    int512_t zmm10_1
    int512_t zmm11_1
    int512_t zmm12_1
    int512_t zmm13_1
    int512_t zmm14_1
    int512_t zmm15_1
    rax_6, zmm6_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        sub_1427f4750(&var_100, &var_128, &var_e8)
    zmm15_1.o = var_a8_1
    zmm14_1.o = var_98_1
    zmm13_1.o = var_88_1
    uint32_t zmm0_2 = *rax_6
    zmm12_1.o = var_78_1
    zmm11_1.o = var_68_1
    zmm10_1.o = var_58_1
    zmm9_1.o = var_48_1
    zmm8_1.o = var_38_1
    zmm6_1.o = var_18_1
    var_e8 = zmm0_2
    float zmm1_2 = rax_6[1]
    float var_e4_1 = zmm1_2
    float zmm2_2 = rax_6[2]
    float var_e0_1 = zmm2_2
    float zmm5_2 = rax_6[3]
    float var_dc_1 = zmm5_2
    float zmm3_2 = rax_6[4]
    float var_d8_1 = zmm3_2
    float zmm4_2 = rax_6[5] f- zmm2_2
    zmm5_2 = (zmm5_2 f- zmm0_2) * 0.5f
    zmm2_2 = 1f
    zmm3_2 = (zmm3_2 - zmm1_2) * 0.5f
    zmm4_2 = zmm4_2 * 0.5f
    
    if (not(zmm5_2 == 0f))
        zmm2_2 = zmm5_2
    
    if (not(zmm3_2 == 0f))
        zmm2_2 = zmm2_2 * zmm3_2
    
    if (not(zmm4_2 == 0f))
        zmm2_2 = zmm2_2 * zmm4_2
    
    zmm2_2 = zmm2_2 * 8f
    zmm4_2 = zmm4_2 * zmm4_2
    zmm3_2 = zmm3_2 * zmm3_2
    zmm0_2 = zmm2_2 f* 0.333333343f
    zmm5_2 = zmm5_2 * zmm5_2
    zmm1_2 = (zmm4_2 + zmm3_2) f* zmm0_2
    zmm3_2 = (zmm3_2 + zmm5_2) f* zmm0_2
    zmm4_2 = (zmm4_2 + zmm5_2) f* zmm0_2
    zmm0_2 = *arg4 f/ zmm2_2
    *arg2 = zmm1_2 f* zmm0_2
    arg2[1] = zmm4_2 f* zmm0_2
    arg2[2] = zmm3_2 f* zmm0_2
    *arg3 = 0
    arg3[1].d = 0
    *(arg3 + 0xc) = 0x3f800000

result.b = 1
return result
