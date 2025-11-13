// 函数: sub_141edeb10
// 地址: 0x141edeb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* result = (*(*arg1 + 0x5c0))()

if (result.b != 0)
    if (arg2 == 0)
        result = (*(*arg1 + 0x7a0))(arg1)
    
    if (arg2 != 0 || result.b != 0)
        int64_t* rcx_1 = arg1[0x29]
        int32_t zmm2 = *(arg1 + 0x1d4)
        
        if ((*(rcx_1[0x52] + 0x420))[0] f!= zmm2)
            int64_t* rax_6 = rcx_1
            
            if (arg2 != 0 && rcx_1[0x1e].b == 1)
                void* rcx_3 = *(sub_141db59c0(rcx_1[2]) + 0x290)
                sub_141ef53a0(*(arg1[0x29] + 0x290), (*(rcx_3 + 0x424))[0], *(rcx_3 + 0x420), 1)
                *(arg1 + 0x1f1) |= 0x10
                rax_6 = arg1[0x29]
                zmm2 = *(arg1 + 0x1d4)
            
            int64_t* rcx_5 = rax_6[0x52]
            float zmm10[0x4] = *(rcx_5 + 0x424)
            float zmm7[0x4] = __andps_xmmxud_memxud(*(rcx_5 + 0x1e0), data_143f3a9d0)
            float zmm6[0x4] = rcx_5[0x84].d
            float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
            float temp0_4[0x4] = _mm_min_ps(zmm7, temp0_2)
            float temp0_5[0x4] = _mm_max_ss(zmm10[0], 0)
            zmm7 = _mm_min_ps(temp0_4, temp0_3)
            float zmm8[0x4] = _mm_max_ss(temp0_5[0], zmm2)
            sub_141ef53a0(rcx_5, zmm10[0], zmm8[0], 1)
            float zmm9[0x4] = zmm7
            zmm6[0] = zmm6[0] - zmm8[0]
            zmm9[0] = zmm9[0] * zmm6[0]
            
            if (arg2 != 0)
                goto label_141edeec9
            
            int64_t var_124
            float var_118[0x4]
            
            if (zmm8[0] <= zmm6[0])
            label_141edee66:
                
                if ((arg1[0x71].b & 0x20) != 0)
                    int64_t* rcx_22 = arg1[0x16]
                    char var_138_1 = 1
                    int32_t var_140_1 = 0
                    int64_t var_148_3 = 0
                    var_118 = *(rcx_22 + 0x1c0)
                    float var_11c_2 = (zmm9 ^ data_142d3f780)[0]
                    var_124 = 0
                    (*(*rcx_22 + 0x470))(rcx_22, &var_124, &var_118, 1, var_148_3, var_140_1, 
                        var_138_1)
                
                void* rax_19 = arg1[0x29]
                *(rax_19 + 0x330) |= 1
            label_141edeec9:
                *(arg1 + 0x1f1) |= 8
                int64_t* rbx_2 = *(arg1[0x29] + 0x10)
                void* rax_21 = rbx_2[0x23]
                
                if (rax_21 == 0)
                    (*(*rbx_2 + 0x390))(rbx_2)
                    rax_21 = rbx_2[0x23]
                
                zmm6 = *(*(rax_21 + 0x290) + 0x420)
                int64_t rax_24 = *arg1
                zmm6[0] = zmm6[0] - zmm8[0]
                (*(rax_24 + 0x8f0))(arg1)
                int64_t* rcx_25 = arg1[0x29]
                float zmm1_1 = zmm6[0]
                zmm7[0] = zmm7[0] * zmm6[0]
                result = (*(*rcx_25 + 0x820))(rcx_25, zmm1_1, zmm7)
                
                if (arg2 != 0)
                    result = arg1[0x29]
                
                if (arg2 != 0 && *(result + 0xf0) == 1)
                label_141edef6f:
                    result = sub_141ee5d40(arg1)
                    
                    if (result != 0)
                        float zmm0_1[0x4] = *(result + 0xb8)
                        zmm0_1[0] = zmm0_1[0] - zmm9[0]
                        *(result + 0xb8) = zmm0_1[0]
                        int32_t rcx_28 = *(result + 0xb8)
                        *(result + 0xa4) = *(result + 0xb0)
                        *(result + 0xac) = rcx_28
                else
                    int64_t* rcx_26 = arg1[0x14]
                    
                    if (rcx_26 != 0)
                        result = sub_141dcdc50(rcx_26)
                        
                        if (result.d == 2)
                            result = arg1[0x29]
                            
                            if (*(result + 0x5f) == 2)
                                goto label_141edef6f
            else
                TEB* gsbase
                
                if (data_143f3ace0 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143f3ace0)
                    
                    if (data_143f3ace0 == 0xffffffff)
                        sub_140b58170(&data_143f3acd8, "CrouchTrace", 1)
                        _Init_thread_footer(&data_143f3ace0)
                
                void var_128
                void var_d8
                sub_141eb54c0(&var_d8, data_143f3acd8, &var_128, 0, arg1[0x29])
                void var_100
                sub_142259c00(&var_100)
                sub_142277d10(&var_100, 2)
                (*(*arg1 + 0x468))(arg1, &var_d8, &var_100)
                void* rcx_12 = *(arg1[0x29] + 0x290)
                float zmm2_1[0x4] = *(rcx_12 + 0x1e0)
                float zmm1_2[0x4] = *(rcx_12 + 0x424)
                float temp0_9[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0], zmm2_1[0])
                float temp0_10[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                temp0_10[0] = temp0_10[0] f* *(rcx_12 + 0x420)
                int64_t* rcx_13 = arg1[0x16]
                var_118[0] = 3
                temp0_9[0] = temp0_9[0] * zmm1_2[0]
                var_118[2] = temp0_10[0]
                var_118[1] = temp0_9[0]
                zmm1_2 = *(rcx_13 + 0x1d0)
                var_124.d = zmm1_2[0]
                float temp0_11[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                float temp0_12[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                temp0_12[0] = temp0_12[0] - zmm9[0]
                var_124:4.d = temp0_11[0]
                float var_11c_1 = temp0_12[0]
                int32_t rax_15 = (*(*rcx_13 + 0x4d8))()
                char var_138
                var_138.q = &var_100
                int32_t var_140
                var_140.q = &var_d8
                char rax_17
                float zmm10_1
                rax_17, zmm6, zmm7, zmm8, zmm9, zmm10_1 = sub_141ec83d0(sub_1405be820(arg1), 
                    &var_124, &data_14399f720, rax_15, &var_118, var_140, var_138)
                int64_t var_98
                int64_t var_78
                
                if (rax_17 == 0)
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    if (var_98 != 0)
                        sub_140a74f90(var_98)
                    
                    goto label_141edee66
                
                result = sub_141ef53a0(*(arg1[0x29] + 0x290), zmm10_1, zmm6[0], 1)
                
                if (var_78 != 0)
                    result = sub_140a74f90(var_78)
                
                if (var_98 != 0)
                    result = sub_140a74f90(var_98)
        else
            if (arg2 == 0)
                rcx_1[0x66].d |= 1
                rcx_1 = arg1[0x29]
            
            result = (*(*rcx_1 + 0x820))(rcx_1, zx.o(0), (zx.o(0)).d)

__security_check_cookie(rax_1 ^ &var_168)
return result
