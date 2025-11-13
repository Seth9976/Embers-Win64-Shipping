// 函数: sub_141abb1f0
// 地址: 0x141abb1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, arg1[1].d)
int128_t zmm9 = zx.o(0)
int32_t i_2 = temp0 + (temp0 u>> 0x1f)
int64_t i_1 = sx.q(i_2)

if (i_2 s> 0)
    uint32_t zmm0[0x4] = data_143dbb210
    int128_t zmm1 = data_143dbb208:4.d
    uint32_t zmm2[0x4] = data_143dbb208.d
    int32_t rdi_1 = 3
    uint32_t zmm6[0x4]
    uint32_t var_38_1[0x4] = zmm6
    int64_t rbx_1 = 8
    int128_t zmm7
    int128_t var_48_1 = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_58_1[0x4] = zmm8
    uint32_t r13_1 = zx.d(arg3)
    int64_t i
    
    do
        zmm6 = zx.o(0)
        
        if (r13_1 == 0)
            float zmm3 = zmm2[0]
            zmm6 = zmm2
            float zmm5 = zmm1.d
            zmm7 = zmm1
            float zmm4 = zmm0[0]
            zmm8 = zmm0
            
            if (arg2[1].d s>= rdi_1)
                float* rax_8 = *arg2
                zmm4 = *(rax_8 + rbx_1 - 8)
                zmm3 = *(rax_8 + rbx_1 - 4)
                zmm5 = *(rax_8 + rbx_1)
            
            if (arg1[1].d s>= rdi_1)
                int128_t* rax_9 = *arg1
                zmm8 = *(rax_9 + rbx_1 - 8)
                zmm6 = *(rax_9 + rbx_1 - 4)
                zmm7 = *(rax_9 + rbx_1)
            
            zmm6[0] = zmm6[0] f* 0.0174532924f
            zmm3 = zmm3 * 0.0174532924f f- zmm6[0]
            zmm8[0] = zmm8[0] f* 0.0174532924f
            zmm7.d = zmm7.d f* 0.0174532924f
            zmm4 = zmm4 * 0.0174532924f f- zmm8[0]
            zmm5 = zmm5 * 0.0174532924f f- zmm7.d
            zmm6 = _mm_sqrt_ss(0, zmm3 * zmm3 + zmm4 * zmm4 + zmm5 * zmm5)
        else if (r13_1 == 1)
            uint32_t var_158 = zmm2[0]
            int32_t var_154_1 = zmm1.d
            uint32_t var_150_1 = zmm0[0]
            
            if (arg2[1].d s>= rdi_1)
                int128_t* rax_6 = *arg2
                uint32_t var_150_2 = (*(rax_6 + rbx_1 - 8))[0]
                var_158 = (*(rax_6 + rbx_1 - 4)).d
                uint32_t var_154_2 = (*(rax_6 + rbx_1))[0]
            
            void var_c8
            sub_140ade170(&var_158, &var_c8)
            int32_t zmm1_3 = data_143dbb208:4.d
            int32_t var_14c = data_143dbb208.d
            int32_t var_144_1 = data_143dbb210
            int32_t var_148_1 = zmm1_3
            
            if (arg1[1].d s>= rdi_1)
                int32_t* rax_7 = *arg1
                int32_t var_144_2 = *(rax_7 + rbx_1 - 8)
                var_14c = *(rax_7 + rbx_1 - 4)
                int32_t var_148_2 = *(rax_7 + rbx_1)
            
            float var_b8[0x4]
            sub_140ade170(&var_14c, &var_b8)
            zmm0 = sub_141a95ba0(&var_b8, &var_c8)
        label_141abb5c9:
            zmm6 = zmm0
        label_141abb5cc:
            zmm0 = data_143dbb210
            zmm1 = data_143dbb208:4.d
            zmm2 = data_143dbb208.d
        else
            if (r13_1 == 2)
            label_141abb2ef:
                uint32_t var_170 = zmm2[0]
                int32_t var_16c_1 = zmm1.d
                uint32_t var_168_1 = zmm0[0]
                
                if (arg2[1].d s>= rdi_1)
                    int128_t* rax_2 = *arg2
                    uint32_t var_168_2 = (*(rax_2 + rbx_1 - 8))[0]
                    var_170 = (*(rax_2 + rbx_1 - 4)).d
                    uint32_t var_16c_2 = (*(rax_2 + rbx_1))[0]
                
                void var_d8
                sub_140ade170(&var_170, &var_d8)
                int32_t zmm1_1 = data_143dbb208:4.d
                int32_t var_164 = data_143dbb208.d
                int32_t var_15c_1 = data_143dbb210
                int32_t var_160_1 = zmm1_1
                
                if (arg1[1].d s>= rdi_1)
                    int32_t* rax_3 = *arg1
                    int32_t var_15c_2 = *(rax_3 + rbx_1 - 8)
                    var_164 = *(rax_3 + rbx_1 - 4)
                    int32_t var_160_2 = *(rax_3 + rbx_1)
                
                void var_f8
                sub_140ade170(&var_164, &var_f8)
                float var_128
                float var_e8[0x4]
                sub_140ae2000(&var_f8, arg4, &var_128, &var_e8)
                float var_138
                sub_140ae2000(&var_d8, arg4, &var_138, &var_e8)
                int32_t var_134
                zmm2 = var_134
                int32_t var_124
                zmm2[0] = zmm2[0] f* var_124
                int32_t var_130
                int32_t var_120
                zmm1.d = var_130.d f* var_120
                zmm2[0] = zmm2[0] f+ var_138 * var_128
                zmm2[0] = zmm2[0] f+ zmm1.d
                float var_12c
                float var_11c
                zmm2[0] = zmm2[0] f+ var_12c * var_11c
                float zmm0_2 = (zmm2[0] f+ zmm2[0]) f* zmm2[0] - 1f
                
                if (zmm0_2 >= -1f)
                    zmm0 = acosf(_mm_min_ss(zmm0_2, 0x3f800000))
                else
                    zmm0 = acosf(-1f)
                
                goto label_141abb5c9
            
            if (r13_1 == 3)
                uint32_t var_188 = zmm2[0]
                int32_t var_184_1 = zmm1.d
                uint32_t var_180_1 = zmm0[0]
                
                if (arg2[1].d s>= rdi_1)
                    int128_t* rax_4 = *arg2
                    uint32_t var_180_2 = (*(rax_4 + rbx_1 - 8))[0]
                    var_188 = (*(rax_4 + rbx_1 - 4)).d
                    uint32_t var_184_2 = (*(rax_4 + rbx_1))[0]
                
                void var_108
                sub_140ade170(&var_188, &var_108)
                int32_t zmm1_2 = data_143dbb208:4.d
                int32_t var_17c = data_143dbb208.d
                int32_t var_174_1 = data_143dbb210
                int32_t var_178_1 = zmm1_2
                
                if (arg1[1].d s>= rdi_1)
                    int32_t* rax_5 = *arg1
                    int32_t var_174_2 = *(rax_5 + rbx_1 - 8)
                    var_17c = *(rax_5 + rbx_1 - 4)
                    int32_t var_178_2 = *(rax_5 + rbx_1)
                
                void var_118
                sub_140ade170(&var_17c, &var_118)
                int128_t zmm0_4
                int512_t zmm6_1
                zmm0_4, zmm6_1 = sub_140ad8820(&var_118, arg4)
                zmm6_1.o = zmm0_4
                zmm0, zmm6 = sub_140ad8820(&var_108, arg4)
                zmm6[0] = zmm6[0] f- zmm0[0]
                zmm6 = _mm_and_ps(zmm6, 0x7fffffff)
                goto label_141abb5cc
            
            if (r13_1 == 4)
                goto label_141abb2ef
        
        zmm6[0] = zmm6[0] f* zmm6[0]
        rdi_1 += 3
        rbx_1 += 0xc
        zmm9.d = zmm9.d f+ zmm6[0]
        i = i_1
        i_1 -= 1
    while (i != 1)

return _mm_sqrt_ss(0, zmm9.d)
