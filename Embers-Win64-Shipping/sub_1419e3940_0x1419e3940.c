// 函数: sub_1419e3940
// 地址: 0x1419e3940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = j_sub_140a82f30(0x60)
int64_t* result = result_2

if (result_2 == 0)
    result = nullptr
else
    *result_2 = 0
    result_2[1].d = 0
    result_2[2] = 0
    result_2[3].d = 0
    *(result_2 + 0x1c) = 0x3f800000
    *(result_2 + 0x24) = 0
    *(result_2 + 0x2c) = 0
    result_2[6].d = 0x3f800000
    result_2[7] = 0
    result_2[8].b = 0
    result_2[9] = 0
    result_2[0xa].b = 1

*result = *arg2
result[1].d = arg2[1].d
int32_t var_60 = 0
int32_t rcx_1 = (*(arg1 + 0x144) u>> 0x20).d * 0xbb38435 + 0x3619636b
*(arg1 + 0x148) = rcx_1
int64_t zmm0
zmm0.d = (rcx_1 u>> 9 | 0x3f800000).d f- 1f
int32_t rax_6
rax_6.b = (*(arg4 + 0xb4)).b & 1
char temp0 = rax_6.b
rax_6.b = neg.b(rax_6.b)
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(sbb.d(rax_6, rax_6, temp0 != 0)) & 0x168).d f* zmm0.d
zmm0.d = ((rcx_1 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
int32_t var_64 = zmm1.d
zmm0.d = zmm0.d f* *(arg4 + 0xb8)
int32_t var_68 = zmm0.d
float var_58
float (* rax_13)[0x4]
int64_t zmm6_1
float zmm7_1
rax_13, zmm6_1, zmm7_1 = sub_140ade170(&var_68, &var_58)
*(result + 0x10) = *rax_13
result[7] = arg4
result[6].d = zmm7_1
*(result + 0x2c) = arg5
result[4] = (_mm_unpacklo_ps(zx.o(0), zmm6_1)).q
int32_t var_50 = 0x3f800000
result[5].d = 0x3f800000
result[8].b = arg6
float zmm2_1 = *result
float zmm0_1[0x4] = *(result + 4)
float zmm3 = _mm_max_ss(zmm7_1 f* *(arg4 + 0x29c), zmm7_1 f* *(arg4 + 0x298)).d
float zmm4 = zmm2_1 - zmm3

if (not(zmm4 f> *(arg1 + 0x120)))
    zmm2_1 = zmm2_1 + zmm3
    
    if (not(zmm2_1 f< *(arg1 + 0x118)))
        float zmm1_1 = zmm0_1[0] - zmm3
        
        if (not(zmm1_1 f> *(arg1 + 0x124)))
            zmm0_1[0] = zmm0_1[0] + zmm3
            
            if (not(zmm0_1[0] f< *(arg1 + 0x11c)))
                var_58 = zmm4
                float var_54 = zmm1_1
                float var_50_1 = zmm2_1
                float var_4c = zmm0_1[0]
                int64_t* result_1 = result
                char var_48 = 1
                sub_1419e3480(arg1 + 0xe8, &result_1, &var_58)
                
                if (sub_1419e30d0(arg1, result) != 0)
                    return result
                
                return nullptr

return 0
