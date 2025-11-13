// 函数: sub_141bab090
// 地址: 0x141bab090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6

if (sub_140d3e110(arg1 + 0x18) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t rax_1 = sub_140d3c6e0(arg1 + 0x18)
    
    if (rax_1 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        void* rax_2
        float zmm7_1[0x4]
        float zmm8_1[0x4]
        rax_2, zmm7_1, zmm8_1 = sub_1423dd9f0(data_143f5b298, rax_1, 0)
        
        if (rax_2 == 0)
            *arg2 = 0
            arg2[1] = 0
        else
            int64_t* rdx_1 = *(rax_2 + 0x30)
            
            if (rdx_1 == 0)
                *arg2 = 0
                arg2[1] = 0
            else
                float zmm3_1[0x4] = *(arg3 + 0x1c)
                float zmm4_1[0x4] = *(arg3 + 0x20)
                zmm3_1[0] = zmm3_1[0] f* *(arg3 + 0x28)
                zmm4_1[0] = zmm4_1[0] f* *(arg3 + 0x24)
                float zmm5_1[0x4] = arg4.d
                zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
                float var_48_1[0x4] = zmm8_1
                float zmm9[0x4] = 0x3f800000
                zmm9[0] = 1f / zmm3_1[0]
                zmm9[0] = zmm9[0] f* *(arg3 + 0x24)
                zmm9[0] = zmm9[0] f* *(arg3 + 0x28)
                zmm8_1 = zmm9 ^ 0x80000000
                zmm9[0] = zmm9[0] * zmm4_1[0]
                zmm4_1 = *(arg3 + 0x2c) ^ 0x80000000
                zmm9[0] = zmm9[0] * zmm3_1[0]
                float zmm1_1[0x4] = zmm9 ^ 0x80000000
                zmm3_1 = *(arg3 + 0x30) ^ 0x80000000
                zmm5_1[0] = zmm5_1[0] * zmm1_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm9[0]
                float zmm2_1 = zmm4_1[0] * zmm1_1[0]
                zmm1_1 = arg4:4.d
                zmm3_1[0] = zmm3_1[0] * zmm9[0]
                zmm4_1[0] = zmm4_1[0] * zmm9[0]
                zmm2_1 = zmm2_1 + zmm3_1[0]
                zmm1_1[0] = zmm1_1[0] * zmm9[0]
                zmm1_1[0] = zmm1_1[0] * zmm8_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm1_1[0]
                zmm8_1[0] = zmm8_1[0] * zmm3_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm1_1[0]
                zmm4_1[0] = zmm4_1[0] + zmm8_1[0]
                zmm5_1[0] = zmm5_1[0] + zmm2_1
                zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] f* *(arg3 + 8)
                zmm5_1[0] = zmm5_1[0] f* *(arg3 + 8)
                int64_t* rax_3
                int512_t zmm7_2
                int512_t zmm8_2
                rax_3, zmm7_2, zmm8_2 =
                    sub_141badbe0(arg1, rdx_1, _mm_unpacklo_ps(zmm5_1, zmm5_1[0].q)[0].q)
                zmm8_2.o = var_48_1
                zmm7_2.o = zmm7_1
                
                if (rax_3 == 0)
                    *arg2 = 0
                    arg2[1] = 0
                else
                    void* rax_4 = sub_141c20480()
                    void* rcx_4 = rax_3[2]
                    int64_t rdx_2 = sx.q(*(rax_4 + 0x38))
                    
                    if (rdx_2.d s> *(rcx_4 + 0x38)
                            || *(*(rcx_4 + 0x30) + (rdx_2 << 3)) != rax_4 + 0x30
                            || *(rax_3 + 0x46c) == 0)
                        *arg2 = 0
                        arg2[1] = 0
                    else if (_mm_cvtepi32_ps(zx.o(rax_3[0x8b].d)).d f== 0f)
                        *arg2 = 0
                        arg2[1] = 0
                    else if (_mm_cvtepi32_ps(zx.o((rax_3[0x8b] u>> 0x20).d)).d f== 0f)
                        *arg2 = 0
                        arg2[1] = 0
                    else
                        float var_80
                        zmm6 = sub_141f133e0(rax_3, &var_80)
                        int64_t zmm0_3
                        zmm0_3.d = (*(arg1 + 0x50)).d f- *(arg1 + 0x74)
                        float var_7c
                        float zmm3_2 = var_7c f* zmm0_3.d
                        zmm0_3.d = var_80.d f* (*(arg1 + 0x4c) f- *(arg1 + 0x70))
                        float var_78
                        zmm3_2 = zmm3_2 f+ zmm0_3.d + var_78 * (*(arg1 + 0x54) f- *(arg1 + 0x78))
                        
                        if (zmm3_2 >= zmm6[0])
                            *arg2 = 0
                            arg2[1] = 0
                        else
                            int32_t var_60_1 = *(arg1 + 0x48)
                            int64_t rax_9 = *rax_3
                            int64_t var_68 = *(arg1 + 0x40)
                            int64_t arg_8
                            (*(rax_9 + 0x8c0))(rax_3, &var_68, &arg_8, zmm3_2)
                            sub_141badc80(rax_3, arg2, arg_8, arg5, zmm6[0])

return arg2
