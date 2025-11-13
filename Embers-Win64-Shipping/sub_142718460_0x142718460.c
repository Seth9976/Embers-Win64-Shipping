// 函数: sub_142718460
// 地址: 0x142718460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_8
char arg_a

if (arg1[0x20] != 0)
    int64_t* rcx = arg1[0x1d]
    
    if (rcx != 0)
        void* rax = rcx[0x16]
        float var_1a8
        float var_1a4
        int64_t var_188
        int32_t* rax_1
        float zmm1[0x4]
        
        if (rax == 0)
            int32_t var_180_1 = data_143b58090
            rax_1 = &var_188
            var_188 = data_143b58088
        else
            zmm1 = *(rax + 0x1d0)
            var_1a8 = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            temp0_2[0] = temp0_2[0] f- *(rax + 0x114)
            var_1a4 = temp0_1[0]
            rax_1 = &var_1a8
            float var_1a0_1 = temp0_2[0]
        
        int32_t rax_3 = rax_1[2]
        int64_t var_178 = *rax_1
        int32_t var_170 = rax_3
        char rax_5 = (*(*rcx + 0x528))()
        void* rcx_1 = arg1[0x20]
        int64_t r14
        r14.b = rax_5 != 0
        uint32_t result = *(rcx_1 + 0x98)
        
        if ((result.b & 2) == 0 || *(rcx_1 + 0x30) s<= 1 || (result.b & 1) == 0)
            result u>>= 8
            
            if ((result.b & 1) == 0)
                arg_a = 3
                arg_8 = data_143b58116 | 0x20
                return (*(*arg1 + 0x440))(arg1, &arg_8)
            
            if ((*(arg1 + 0x1ba) & 1) != 0 && r14.b != 0 && arg1[0x37].b == 3)
                result = (*(*arg1 + 0x4f8))(arg1, &var_178)
                
                if (result.b != 0)
                    (*(*arg1 + 0x448))(arg1)
                    result = (*(*arg1 + 0x4c8))(arg1, zx.q(*(arg1 + 0x1e4)))
        
        int64_t* rsi
        
        if (*(arg1 + 0x1b9) s>= 0)
            rsi = nullptr
        else
            int64_t* rbx_1 = arg1[0x20]
            int32_t* rcx_6
            
            if (rbx_1[0xe].d != data_143b580b8)
                rcx_6 = rbx_1[0xf]
                
                if (rcx_6 != 0)
                    result = sub_14268a5a0(rcx_6, &data_143b580b8)
            
            if (rbx_1[0xe].d == data_143b580b8 || (rcx_6 != 0 && result.b != 0))
                result.b = 1
                rsi = rbx_1
            else
                rsi = nullptr
                result.b = 0
        
        int32_t rbx_2 = arg1[0x47].d
        
        if (r14.b != 0 && arg1[0x37].b == 3)
            int32_t r13_1 = *(arg1 + 0x1e4)
            int32_t r14_2 = *(arg1[0x20] + 0x30) - 1
            int32_t rcx_7
            
            if (rsi != 0)
                rcx_7 = rsi[0x2a].d
            
            int64_t r15
            
            if (rsi != 0 && (rsi[0x2c].d != rcx_7 - 1 || rcx_7 s<= 0))
                r15.b = 0
            else
                r15.b = 1
            
            char rax_14
            float zmm12[0x4]
            float zmm13[0x4]
            int128_t zmm14
            float zmm15[0x4]
            
            if ((*(arg1 + 0x1b9) & 0x10) == 0 && r13_1 s> *(arg1 + 0x1b4))
                rax_14, arg2, arg3, arg4, arg5, arg6, arg7, zmm12, zmm13, zmm14, zmm15 =
                    sub_142703550(arg1, &var_178)
            
            float var_198[0x4]
            int64_t var_168
            float var_158[0x4]
            int64_t r8_1
            
            if ((*(arg1 + 0x1b9) & 0x10) != 0 || (r13_1 s> *(arg1 + 0x1b4) && rax_14 != 0))
                (*(*arg1 + 0x448))(arg1)
                arg_8 = data_143b58110
                arg_a = 0
                result, r8_1 = (*(*arg1 + 0x440))(arg1, &arg_8)
            else if (r13_1 s< r14_2 || (*(arg1 + 0x1b9) & 4) == 0 || r15.b == 0)
                result, r8_1 = (*(*arg1 + 0x4f8))(arg1, &var_178)
                
                if (result.b != 0)
                    (*(*arg1 + 0x448))(arg1)
                    result, r8_1 = (*(*arg1 + 0x4c8))(arg1, zx.q(*(arg1 + 0x1e4)))
            else
                if (sub_140d3e110(&arg1[0x27]) != 0 && ((*(arg1[0x20] + 0x98) u>> 2).b & 1) == 0)
                    int64_t* rcx_14 = arg1[0x28]
                    float var_48_1[0x4] = arg3
                    int128_t var_88_1 = arg7
                    float var_98_1[0x4] = zmm12
                    float var_a8_1[0x4] = zmm13
                    int128_t var_b8_1 = zmm14
                    float var_c8_1[0x4] = zmm15
                    int64_t* rax_21
                    
                    if (rcx_14 == 0)
                        void* rcx_16 = *(sub_140d3c6e0(&arg1[0x27]) + 0x130)
                        float var_1a0_2
                        
                        if (rcx_16 == 0)
                            var_1a8.q = data_143dbb1f8.q
                            var_1a0_2 = data_143dbb200
                        else
                            zmm1 = *(rcx_16 + 0x1d0)
                            var_1a8 = zmm1[0]
                            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            var_1a0_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                            var_1a4 = temp0_3[0]
                        
                        float var_160_1 = var_1a0_2
                        rax_21 = &var_168
                        var_168 = var_1a8.q
                    else
                        rax_21 = (*(*rcx_14 + 0x18))(rcx_14, &var_198)
                    
                    float rax_25 = rax_21[1].d
                    var_1a8.q = *rax_21
                    void* rcx_18 = *(sub_140d3c6e0(&arg1[0x27]) + 0x130)
                    float zmm0[0x4]
                    
                    if (rcx_18 == 0)
                        zmm0 = data_142d3f660
                    else
                        zmm0 = *(rcx_18 + 0x1c0)
                    
                    var_198 = zmm0
                    zmm12 = var_198
                    var_198[3] = 0x3f800000
                    zmm12[0] = zmm12[0] * 2f
                    int32_t var_11c_1 = 0x3f800000
                    int32_t var_14c_1 = 0
                    int32_t var_13c_1 = 0
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    temp0_5[0] = temp0_5[0] * 2f
                    int32_t var_12c_1 = 0
                    float zmm3 = temp0_6[0] * 2f
                    var_168 = 0
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                    zmm12[0] = zmm12[0] * zmm12[0]
                    int32_t var_160_2 = 0
                    temp0_6[0] = temp0_6[0] * zmm3
                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                    temp0_7[0] = temp0_7[0] * zmm12[0]
                    temp0_7[0] = temp0_7[0] * temp0_5[0]
                    temp0_5[0] = temp0_5[0] + temp0_6[0]
                    zmm12[0] = zmm12[0] * zmm3
                    temp0_6[0] = temp0_6[0] + zmm12[0]
                    zmm12[0] = zmm12[0] * temp0_5[0]
                    temp0_5[0] = temp0_5[0] + zmm12[0]
                    temp0_7[0] = temp0_7[0] * zmm3
                    zmm14.d = 1f - temp0_5[0]
                    arg_8.d = zmm12[0]
                    zmm13 = zmm12
                    zmm0 = arg_8.d
                    zmm13[0] = zmm13[0] - temp0_7[0]
                    zmm0[0] = zmm0[0] - temp0_7[0]
                    temp0_6[0] = temp0_6[0] * temp0_5[0]
                    float zmm2[0x4] = *(arg1 + 0x194)
                    temp0_7[0] = temp0_7[0] + zmm12[0]
                    zmm1 = arg1[0x32].d
                    temp0_7[0] = temp0_7[0] + zmm12[0]
                    arg3 = var_1a8
                    arg_8.d = zmm0[0]
                    zmm12 = 0x3f800000
                    arg7.d = 1f - temp0_6[0]
                    float zmm5_1[0x4] = var_198
                    zmm5_1[0] = (*(arg1 + 0x18c))[0]
                    zmm12[0] = 1f - temp0_5[0]
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
                    temp0_6[0] = temp0_6[0] - temp0_7[0]
                    float var_128[0x4]
                    var_128[0] = arg3[0]
                    temp0_7[0] = temp0_7[0] + temp0_6[0]
                    temp0_8[0] = zmm1[0]
                    float temp0_9[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
                    float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
                    temp0_9[0] = var_1a4[0]
                    temp0_10[0] = zmm2[0]
                    float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
                    float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
                    temp0_11[0] = rax_25
                    var_198 = temp0_12
                    float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xff)
                    float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
                    float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_14)
                    float var_128_1[0x4] = temp0_14
                    float var_138[0x4]
                    var_138[0] = temp0_7[0]
                    float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa)
                    float temp0_17[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
                    temp0_17[0] = temp0_6[0]
                    float temp0_18[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x55)
                    float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
                    temp0_19[0] = arg7.d
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
                    float temp0_22[0x4] = _mm_mul_ps(temp0_16, temp0_21)
                    float var_138_1[0x4] = temp0_21
                    float var_148[0x4]
                    var_148[0] = zmm13[0]
                    float temp0_23[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
                    float temp0_24[0x4] = _mm_add_ps(temp0_15, temp0_22)
                    temp0_23[0] = zmm12[0]
                    float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
                    temp0_25[0] = temp0_7[0]
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)
                    float temp0_27[0x4] = _mm_mul_ps(temp0_18, temp0_26)
                    float var_148_1[0x4] = temp0_26
                    zmm0 = var_158
                    zmm0[0] = zmm14.d
                    float temp0_28[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    temp0_28[0] = temp0_7[0]
                    zmm1 = arg_8.d
                    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc6)
                    temp0_29[0] = zmm1[0]
                    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
                    float temp0_31[0x4] = _mm_mul_ps(temp0_20, temp0_30)
                    var_158 = temp0_30
                    float temp0_33[0x4] = _mm_add_ps(temp0_24, _mm_add_ps(temp0_27, temp0_31))
                    var_188.d = temp0_33[0]
                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x55)
                    float var_180_2 = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)[0]
                    var_188:4.d = temp0_34[0]
                    int512_t zmm6
                    int512_t zmm7
                    int512_t zmm8
                    int512_t zmm9
                    int512_t zmm10
                    int512_t zmm11
                    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 =
                        sub_141ead1f0(&arg1[0x29], nullptr, &var_188)
                    zmm11.o = var_88_1
                    zmm10.o = arg6
                    zmm9.o = arg5
                    zmm8.o = arg4
                    zmm7.o = var_48_1
                    zmm6.o = arg2
                
                result, r8_1 = sub_142717810(arg1)
            
            if (arg1[0x37].b == 3 && rbx_2 == arg1[0x47].d)
                if (rsi != 0)
                    r8_1.b = 1
                    (*(*rsi + 0x70))(rsi, &var_178, r8_1)
                
                result = (*(*arg1 + 0x4e8))(arg1)
                
                if (result.b != 0)
                    result = sub_1427040e0(arg1)
                    
                    if (result.b != 0)
                        int32_t r8_3 = *(arg1 + 0x1e4)
                        
                        if (r8_3 s>= 0)
                            void* rbx_3 = arg1[0x20]
                            int32_t rcx_27 = *(rbx_3 + 0x30)
                            
                            if (r8_3 s< rcx_27)
                                int32_t rax_32 = arg1[0x3c].d
                                
                                if (rax_32 s>= 0 && rax_32 s< rcx_27)
                                    void var_108
                                    sub_141e912d0(sub_14265a8f0(rbx_3, &var_108, r8_3), &var_198)
                                    sub_141e912d0(sub_14265a8f0(rbx_3, &var_158, arg1[0x3c].d), 
                                        &var_168)
                        
                        arg_8 = data_143b58112
                        arg_a = 1
                        return (*(*arg1 + 0x440))(arg1, &arg_8)
        
        return result

arg_a = 3
arg_8 = data_143b58116 | 0x20
return (*(*arg1 + 0x440))(arg1, &arg_8)
