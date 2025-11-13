// 函数: sub_141eb0880
// 地址: 0x141eb0880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t r14 = sx.q(arg8)
float zmm12[0x4] = 0xff7fc99e
*arg1 = 0
arg1[1].d = 0x3f800000

if (r14 s> 0)
    int64_t rbx_1 = 0
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    
    do
        int32_t var_f8
        physx::PxMeshQuery::getTriangle(arg5, arg6, *(arg7 + (rbx_1 << 2)), &var_f8, nullptr, 
            nullptr)
        int32_t var_e8
        float zmm2[0x4] = var_e8
        int32_t var_e4
        zmm6 = var_e4
        int32_t var_ec
        zmm7 = var_ec
        int32_t var_f4
        zmm9 = var_f4
        int32_t var_f0
        zmm11 = var_f0
        zmm2[0] = zmm2[0] f- zmm9.d
        zmm6[0] = zmm6[0] f- zmm11.d
        zmm10 = var_f8
        float var_d8
        float zmm1 = var_d8 f- zmm11.d
        zmm7[0] = zmm7[0] f- zmm10.d
        int32_t var_e0
        float zmm4_1[0x4] = var_e0
        float var_dc
        float zmm3 = var_dc f- zmm9.d
        zmm8 = zmm2
        zmm4_1[0] = zmm4_1[0] f- zmm10.d
        zmm8[0] = zmm8[0] * zmm1
        zmm6[0] = zmm6[0] * zmm3
        zmm2[0] = zmm2[0] * zmm4_1[0]
        zmm8[0] = zmm8[0] - zmm6[0]
        zmm6[0] = zmm6[0] * zmm4_1[0]
        zmm7[0] = zmm7[0] * zmm3
        zmm7[0] = zmm7[0] * zmm1
        zmm7[0] = zmm7[0] - zmm2[0]
        zmm6[0] = zmm6[0] - zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm1 = zmm7[0] * zmm7[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] + zmm8[0]
        zmm6[0] = zmm6[0] + zmm1
        
        if (not(zmm6[0] == 1f))
            if (zmm6[0] >= 9.99999994e-09f)
                zmm4_1 = zx.o(0)
                zmm4_1[0] = 0x3f000000
                zmm3 = zmm6[0]
                float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3)
                zmm3 = zmm3 * 0.5f
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                zmm4_1[0] = zmm4_1[0] - zmm3 * temp0_1[0]
                temp0_1[0] = temp0_1[0] * zmm4_1[0]
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                zmm4_1[0] = 0.5f - zmm3 * temp0_1[0] * temp0_1[0]
                temp0_1[0] = temp0_1[0] * zmm4_1[0]
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                zmm8[0] = zmm8[0] * temp0_1[0]
                zmm6[0] = zmm6[0] * temp0_1[0]
                zmm7[0] = zmm7[0] * temp0_1[0]
            else
                zmm8 = data_143dbb1f8
                zmm6 = data_143dbb1fc
                zmm7 = data_143dbb200
        
        zmm9.d = zmm9.d f* zmm6[0]
        zmm6[0] = zmm6[0] f* *(arg4 + 0x14)
        zmm8[0] = zmm8[0] f* *(arg4 + 0x10)
        zmm1 = zmm7[0] f* *(arg4 + 0x18)
        zmm6[0] = zmm6[0] + zmm8[0]
        zmm10.d = zmm10.d f* zmm8[0]
        zmm11.d = zmm11.d f* zmm7[0]
        zmm9.d = zmm9.d f+ zmm10.d
        float var_108_1 = zmm8[0]
        zmm6[0] = zmm6[0] + zmm1
        float var_104_1 = zmm6[0]
        float var_100_1 = zmm7[0]
        zmm9.d = zmm9.d f+ zmm11.d
        zmm6[0] = zmm6[0] f- zmm9.d
        
        if (not(zmm6[0] <= zmm12[0]))
            zmm12 = zmm6
            *arg1 = var_108_1.q
            arg1[1].d = var_100_1
        
        rbx_1 += 1
    while (rbx_1 s< r14)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
