// 函数: sub_141efd6b0
// 地址: 0x141efd6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
uint64_t result = (*(*arg1 + 0x5c0))()

if (result.b != 0)
    int64_t* rcx = arg1[0x29]
    int64_t* rbx_1 = rcx[2]
    void* r14_1 = rbx_1[0x23]
    
    if (r14_1 == 0)
        (*(*rbx_1 + 0x390))(rbx_1)
        rcx = arg1[0x29]
        r14_1 = rbx_1[0x23]
    
    void* rdx = rcx[0x52]
    int128_t zmm2 = *(rdx + 0x420)
    int128_t zmm8 = *(*(r14_1 + 0x290) + 0x420)
    
    if (zmm2.d f!= zmm8.d)
        void* rax_6 = arg1[0x16]
        zmm8.d = zmm8.d f- zmm2.d
        float zmm7[0x4] = *(rdx + 0x1e0)
        int128_t zmm9
        int128_t var_68_1 = zmm9
        float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
        zmm7 = __andps_xmmxud_memxud(zmm7, data_143f3a9d0)
        int128_t zmm6
        zmm6.d = zmm2.d f* temp0_1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
        float zmm10[0x4]
        float var_78_1[0x4] = zmm10
        zmm7 = _mm_min_ps(_mm_min_ps(zmm7, temp0_3), temp0_4)
        float zmm1[0x4] = *(rax_6 + 0x1d0)
        float var_208 = zmm1[0]
        float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_200_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_204_1 = temp0_7[0]
        zmm7[0] = zmm7[0] f* zmm8.d
        
        if (arg2 != 0)
            *(arg1 + 0x1f1) |= 0x10
        label_141efdd32:
            void* rax_20 = *(r14_1 + 0x290)
            int512_t zmm1_3
            int512_t zmm2_1
            zmm1_3, zmm2_1 =
                sub_141ef53a0(rcx[0x52], (*(rax_20 + 0x424))[0], (*(rax_20 + 0x420)).d, 1)
            (*(*arg1 + 0x8f0))(arg1)
            int64_t* rcx_25 = arg1[0x29]
            zmm2_1.o = zmm7
            zmm1_3.o = zmm8
            result = (*(*rcx_25 + 0x818))(rcx_25, zmm1_3, zmm2_1)
            
            if (arg2 != 0)
                result = arg1[0x29]
            
            if (arg2 != 0 && *(result + 0xf0) == 1)
            label_141efddb6:
                result = sub_141ee5d40(arg1)
                
                if (result != 0)
                    zmm7[0] = zmm7[0] f+ *(result + 0xb8)
                    *(result + 0xb8) = zmm7[0]
                    int32_t rcx_28 = *(result + 0xb8)
                    *(result + 0xa4) = *(result + 0xb0)
                    *(result + 0xac) = rcx_28
            else
                int64_t* rcx_26 = arg1[0x14]
                
                if (rcx_26 != 0)
                    result, zmm7 = sub_141dcdc50(rcx_26)
                    
                    if (result.d == 2)
                        result = arg1[0x29]
                        
                        if (*(result + 0x5f) == 2)
                            goto label_141efddb6
        else
            void* rax_7 = sub_1405be820(arg1)
            TEB* gsbase
            
            if (data_143f3acf0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f3acf0)
                
                if (data_143f3acf0 == 0xffffffff)
                    zmm6 = sub_140b58170(&data_143f3ace8, "CrouchTrace", 1)
                    _Init_thread_footer(&data_143f3acf0)
            
            void var_1f8
            void var_f8
            sub_141eb54c0(&var_f8, data_143f3ace8, &var_1f8, 0, arg1[0x29])
            void var_1a8
            sub_142259c00(&var_1a8)
            sub_142277d10(&var_1a8, 2)
            (*(*arg1 + 0x468))(arg1, &var_f8, &var_1a8)
            void* rcx_9 = *(arg1[0x29] + 0x290)
            float zmm3[0x4] = *(rcx_9 + 0x1e0)
            float zmm1_1 = *(rcx_9 + 0x424)
            zmm2 = *(rcx_9 + 0x420)
            int64_t* rcx_10 = arg1[0x16]
            float temp0_10[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm3, zmm3, 0x55)[0], zmm3[0])
            int32_t var_1e8 = 3
            float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            temp0_11[0] = temp0_11[0] f* zmm2.d
            temp0_10[0] = temp0_10[0] * zmm1_1
            float var_1e4_1 = _mm_max_ss(temp0_10[0], 0x3a83126e)[0]
            float zmm0_1[0x4] = 0xba83126e
            zmm0_1[0] = -0.000999999931f - zmm7[0]
            temp0_11[0] = temp0_11[0] - zmm0_1[0]
            float var_1e0_1 = _mm_max_ss(temp0_11[0], 0x3a83126e)[0]
            int32_t rax_12 = (*(*rcx_10 + 0x4d8))(rcx_10)
            void* var_238_1 = &var_1a8
            void* var_240_1 = &var_f8
            int32_t* var_248_2 = &var_1e8
            int64_t var_b8
            int64_t var_98
            float var_218
            float var_1f4
            int128_t var_1b8
            char rbx_2
            
            if ((arg1[0x71].b & 0x20) != 0)
                var_218 = var_208[0]
                zmm0_1 = var_1e0_1
                zmm0_1[0] = zmm0_1[0] f- zmm6.d
                zmm0_1[0] = zmm0_1[0] + var_200_1
                float var_210_3 = zmm0_1[0]
                char rax_17
                rax_17, zmm7, zmm8, zmm9 = sub_141ec83d0(rax_7, &var_218, &data_14399f720, rax_12, 
                    var_248_2, var_240_1, var_238_1)
                rbx_2 = rax_17
                int128_t zmm0_6
                
                if (rax_17 != 0)
                    result = (*(*arg1 + 0x550))(arg1)
                    
                    if (result.b != 0 && (arg1[0x5e].b & 1) != 0)
                        zmm1 = *(arg1 + 0x2f4)
                        
                        if (not(zmm1[0] f<= zmm9.d))
                            zmm1[0] = zmm1[0] f- zmm9.d
                            zmm0_6.d = var_210_3.d f- zmm1[0]
                            var_210_3 = zmm0_6.d
                            result, zmm7, zmm8 = sub_141ec83d0(rax_7, &var_218, &data_14399f720, 
                                rax_12, &var_1e8, &var_f8, &var_1a8)
                            rbx_2 = result.b
                
                if (rax_17 == 0 || rbx_2 == 0)
                    zmm1 = var_218
                    zmm1[0] = zmm1[0] - var_208
                    int64_t* rcx_20 = arg1[0x16]
                    var_238_1.b = 1
                    var_240_1.d = 0
                    int64_t var_248_7 = 0
                    zmm0_6 = *(rcx_20 + 0x1c0)
                    var_1f4 = zmm1[0]
                    zmm1 = var_210_3
                    zmm1[0] = zmm1[0] - var_200_1
                    var_1b8 = zmm0_6
                    zmm0_6.d = var_204_1.d f- var_204_1
                    float var_1ec_2 = zmm1[0]
                    int32_t var_1f0_2 = zmm0_6.d
                    result = (*(*rcx_20 + 0x470))(rcx_20, &var_1f4, &var_1b8, 0, var_248_7, 
                        var_240_1, var_238_1)
                    *(arg1 + 0x1f1) |= 8
                label_141efdcf8:
                    
                    if (rbx_2 == 0)
                        goto label_141efdb99
            else
                result, zmm7, zmm8, zmm9 = sub_141ec83d0(rax_7, &var_208, &data_14399f720, rax_12, 
                    var_248_2, var_240_1, var_238_1)
                rbx_2 = result.b
                
                if (result.b == 0)
                    goto label_141efdb99
                
                if (zmm7[0] <= 0f)
                    goto label_141efdcf8
                
                void* rbx_3 = arg1[0x29]
                void* rax_13 = *(rbx_3 + 0x290)
                zmm1 = *(rax_13 + 0x1e0)
                float temp0_14[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                temp0_14[0] = temp0_14[0] f* *(rax_13 + 0x420)
                float temp0_16[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0], zmm1[0])
                float zmm6_1 = temp0_14[0]
                temp0_16[0] = temp0_16[0] f* *(rax_13 + 0x424)
                zmm6_1 = zmm6_1 - temp0_16[0]
                temp0_14[0] = temp0_14[0] - zmm6_1
                char var_188
                memset(&var_188, 0, 0x88)
                float var_180_1 = 1f
                void* rax_14 = *(rbx_3 + 0x290)
                float zmm3_1[0x4] = *(rax_14 + 0x1e0)
                zmm1 = *(rax_14 + 0x424)
                zmm2 = *(rax_14 + 0x420)
                float temp0_18[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)[0], zmm3_1[0])
                uint64_t var_228_1 = &data_143f3a660
                float temp0_19[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                void* var_230_1 = &var_f8
                temp0_19[0] = temp0_19[0] f* zmm2.d
                int32_t var_1d8
                int32_t* var_238_2 = &var_1d8
                temp0_18[0] = temp0_18[0] * zmm1[0]
                var_240_1.d = rax_12
                temp0_19[0] = temp0_19[0] - zmm6_1
                float var_214_1 = var_204_1[0]
                float temp0_20[0x4] = _mm_max_ss(temp0_18[0], zmm9.d)
                var_1d8 = 3
                int128_t* var_248_3 = &data_14399f720
                float temp0_21[0x4] = _mm_max_ss(temp0_19[0], zmm9.d)
                float var_1d4_1 = temp0_20[0]
                var_218 = var_208[0]
                float zmm0_3[0x4] = var_200_1
                zmm0_3[0] = zmm0_3[0] - temp0_14[0]
                float var_1d0_1 = temp0_21[0]
                float var_210_1 = zmm0_3[0]
                result, zmm10 = sub_141ecd380(rax_7, &var_188, &var_208, &var_218, var_248_3, 
                    var_240_1.b, var_238_2, var_230_1, var_228_1)
                
                if ((var_188 & 2) == 0)
                    void* var_238_3 = &var_1a8
                    var_218 = var_208
                    float zmm1_2 =
                        var_200_1 - (var_180_1 * zmm10[0] + var_1d0_1) + var_1e0_1 + 0.950999975f
                    result, zmm7, zmm8 = sub_141ec83d0(rax_7, &var_218, &data_14399f720, rax_12, 
                        &var_1e8, &var_f8, var_238_3)
                    
                    if (result.b == 0)
                        zmm1 = var_218
                        zmm1[0] = zmm1[0] - var_208
                        int64_t* rcx_15 = arg1[0x16]
                        var_238_3.b = 1
                        void* var_240_2
                        var_240_2.d = 0
                        int64_t var_248_5 = 0
                        int128_t zmm0_5 = *(rcx_15 + 0x1c0)
                        var_1f4 = zmm1[0]
                        zmm1 = zmm1_2
                        zmm1[0] = zmm1[0] - var_200_1
                        var_1b8 = zmm0_5
                        zmm0_5.d = var_204_1.d f- var_204_1
                        float var_1ec_1 = zmm1[0]
                        int32_t var_1f0_1 = zmm0_5.d
                        (*(*rcx_15 + 0x470))(rcx_15, &var_1f4, &var_1b8, 0, var_248_5, var_240_2, 
                            var_238_3)
                    label_141efdb99:
                        void* rax_16 = arg1[0x29]
                        *(rax_16 + 0x330) &= 0xfffffffe
                        
                        if (var_98 != 0)
                            sub_140a74f90(var_98)
                        
                        if (var_b8 != 0)
                            sub_140a74f90(var_b8)
                        
                        rcx = arg1[0x29]
                        goto label_141efdd32
            
            if (var_98 != 0)
                result = sub_140a74f90(var_98)
            
            if (var_b8 != 0)
                result = sub_140a74f90(var_b8)
    else
        if (arg2 == 0)
            rcx[0x66].d &= 0xfffffffe
            rcx = arg1[0x29]
        
        result = (*(*rcx + 0x818))(rcx, zx.o(0), zx.o(0))

__security_check_cookie(rax_1 ^ &var_268)
return result
