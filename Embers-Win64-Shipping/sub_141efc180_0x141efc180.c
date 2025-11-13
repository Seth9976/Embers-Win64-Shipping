// 函数: sub_141efc180
// 地址: 0x141efc180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm12[0x4]
float var_98[0x4] = zmm12
int128_t zmm13
int128_t var_a8 = zmm13
int128_t zmm14
int128_t var_b8 = zmm14
int128_t zmm15
int128_t var_c8 = zmm15
void var_658
int64_t rax_1 = __security_cookie ^ &var_658
uint64_t result

if ((*(*arg1 + 0x6e0))(arg1, arg4).b == 0)
    result.b = 0
else
    zmm7 = *(arg1 + 0x154)
    
    if (zmm7[0] <= 0f)
        result.b = 0
    else
        zmm14 = *(arg4 + 0x24)
        zmm12 = *(arg1[0x16] + 0x1d0)
        result = arg1[0x29]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        void* rcx = *(result + 0x290)
        float zmm1[0x4] = *(rcx + 0x1e0)
        float temp0_3[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0], zmm1[0])
        float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_4[0] = temp0_4[0] f* *(rcx + 0x420)
        temp0_3[0] = temp0_3[0] f* *(rcx + 0x424)
        
        if (zmm14.d f> temp0_4[0] - temp0_3[0] + temp0_1[0])
            result.b = 0
        else
            float zmm2 = *arg2
            
            if (zmm2 != 0f || 0f f!= arg2[1] || not(0f f== arg2[2]))
                float zmm0 = *(arg4 + 0x38) f* arg2[1]
                temp0_1[0] = temp0_1[0] - temp0_4[0]
                zmm8 = zmm7
                zmm13.d = (*(arg4 + 0x3c)).d f* arg2[2]
                zmm9 = temp0_1
                zmm13.d = (zmm13 ^ 0x80000000).d f- (zmm0 + zmm2 f* *(arg4 + 0x34))
                int512_t zmm3
                
                if ((*(*arg1 + 0x550))(arg1).b != 0)
                    int32_t rcx_2 = arg1[0x5e].d
                    
                    if ((rcx_2 & 3).b == 3)
                        if ((rcx_2.b & 4) == 0)
                            zmm0 = *(arg1 + 0x2f4)
                        else
                            zmm0 = arg1[0x5f].d
                        
                        zmm8 = *(arg1 + 0x154)
                        float temp0_5 = _mm_max_ss(zmm0, 0)
                        int64_t rax_6 = *arg1
                        zmm8[0] = zmm8[0] + 4.80000019f
                        zmm3.o = temp0_3
                        zmm7[0] = zmm7[0] - temp0_5
                        temp0_1[0] = temp0_1[0] - temp0_5
                        zmm7 = _mm_max_ss(zmm7[0], 0)
                        result.b = (*(rax_6 + 0x898))(arg1, arg4 + 0x10, arg4 + 0x1c, zmm3).b == 0
                        
                        if ((arg1[0x5e].b & 4) != 0 || result.b != 0)
                            zmm9[0] = zmm9[0] f- *(arg1 + 0x2f4)
                        else
                            zmm9 = arg1[0x64].d
                
                if (zmm14.d f<= temp0_1[0])
                    result.b = 0
                else
                    void var_438
                    sub_141f2db80(&var_438, arg1[0x16], 1, 1)
                    char var_4c8
                    memset(&var_4c8, 0, 0x88)
                    void* rax_7 = arg1[0x16]
                    zmm10 = 0x3f800000
                    int32_t var_4c0_1 = 0x3f800000
                    zmm7[0] = zmm7[0] f* *arg2
                    int64_t r9_1
                    r9_1.b = 1
                    char var_630_1 = 0
                    int64_t rax_8 = *arg1
                    float var_618[0x4] = *(rax_7 + 0x1c0)
                    char* var_638_1 = &var_4c8
                    zmm7[0] = zmm7[0] f* arg2[1]
                    zmm7[0] = zmm7[0] f* arg2[2]
                    float var_628 = (zmm7 ^ 0x80000000)[0]
                    float var_624_1 = (zmm7 ^ 0x80000000)[0]
                    (*(rax_8 + 0x478))(arg1, &var_628, &var_618, r9_1, var_638_1, var_630_1, 
                        var_628, (zmm7 ^ 0x80000000)[0], var_618)
                    
                    if ((var_4c8 & 2) != 0)
                    label_141efc7d2:
                        sub_141f46750(&var_438)
                        sub_141f2f2c0(&var_438)
                        result = 0
                    else
                        char var_568
                        int64_t r9_2
                        float zmm0_2[0x4]
                        r9_2, zmm0_2 = memset(&var_568, 0, 0x88)
                        r9_2.b = 1
                        int32_t var_560_1 = 0x3f800000
                        (*(*arg1 + 0x478))(arg1, arg3, &var_618, r9_2, &var_568, 0)
                        char rax_10 = var_568
                        int64_t r9_3
                        
                        if ((rax_10 & 1) == 0)
                        label_141efc54d:
                            void* rax_18 = arg1[0x16]
                            char var_630_4 = 0
                            zmm8[0] = zmm8[0] f* *arg2
                            char* var_638_4 = &var_568
                            r9_3.b = 1
                            int64_t rax_19 = *arg1
                            float var_4d8[0x4] = *(rax_18 + 0x1c0)
                            zmm8[0] = zmm8[0] f* arg2[1]
                            zmm8[0] = zmm8[0] f* arg2[2]
                            float var_624_2 = zmm8[0]
                            var_628 = zmm8[0]
                            (*(rax_19 + 0x478))(arg1, &var_628, &var_4d8, r9_3, var_638_4, 
                                var_630_4, var_628, zmm8[0])
                            char rsi_1 = var_568
                            
                            if ((rsi_1 & 2) != 0)
                                goto label_141efc7d2
                            
                            zmm0_2 = data_1430219f0
                            int32_t var_608
                            int32_t var_608_1 = var_608 & 0xfffffffe
                            int32_t var_604 = var_604 & 0xfffffff8
                            int64_t var_584_1 = 0
                            int64_t var_57c_1 = 0
                            int64_t var_600_1 = 0
                            int32_t var_588_1 = 0xffffffff
                            float var_5f8[0x4]
                            memset(&var_5f8, 0, 0x88)
                            int32_t var_5f0_1 = 0x3f800000
                            
                            if ((rsi_1 & 1) == 0)
                                goto label_141efc73b
                            
                            int32_t var_544
                            zmm7 = var_544
                            zmm7[0] = zmm7[0] - zmm9[0]
                            
                            if (zmm7[0] f> *(arg1 + 0x154))
                                goto label_141efc7d2
                            
                            char rax_21 = (*(*arg1 + 0x820))(arg1, &var_568)
                            float zmm0_3[0x4]
                            float zmm1_1[0x4]
                            float zmm2_1
                            
                            if (rax_21 == 0)
                                float var_530
                                zmm2_1 = var_530 f* arg3[1]
                                int32_t var_534
                                zmm0_3 = var_534
                                zmm0_3[0] = zmm0_3[0] f* *arg3
                                int32_t var_52c
                                zmm1_1 = var_52c
                                zmm1_1[0] = zmm1_1[0] f* arg3[2]
                            
                            int32_t var_550
                            
                            if (rax_21 == 0 && (zmm2_1 + zmm0_3[0] + zmm1_1[0] < 0f
                                    || var_550[0] > temp0_1[0]))
                                goto label_141efc7d2
                            
                            zmm3.o = temp0_3
                            void var_558
                            void var_54c
                            
                            if ((*(*arg1 + 0x898))(arg1, &var_558, &var_54c, zmm3) == 0)
                                goto label_141efc7d2
                            
                            char rax_25
                            
                            if (not(zmm7[0] <= 0f))
                                rax_25 = (*(*arg1 + 0x6e0))(arg1, &var_568)
                            
                            if (not(zmm7[0] <= 0f) && rax_25 == 0)
                                goto label_141efc7d2
                            
                            if (arg5 != 0)
                                char* var_638_5 = &var_568
                                zmm1_1 = *(arg1[0x16] + 0x1d0)
                                int64_t rax_27 = *arg1
                                float temp0_7[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                var_628 = zmm1_1[0]
                                float var_620_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                                float var_624_3 = temp0_7[0]
                                (*(rax_27 + 0x8a0))(arg1, &var_628, &var_604, 0, var_638_5)
                                
                                if (not(var_550[0] <= temp0_1[0]) && (var_604.b & 1) == 0
                                        && zmm13.d f< 0.0799999982f)
                                    goto label_141efc7d2
                                
                                var_608_1 |= 1
                            label_141efc73b:
                                
                                if (arg5 != 0)
                                    zmm1_1 = var_5f8
                                    *arg5 = var_608_1.o
                                    arg5[1] = zmm1_1
                                    float var_5e8[0x4]
                                    arg5[2] = var_5e8
                                    float var_5d8[0x4]
                                    arg5[3] = var_5d8
                                    float var_5c8[0x4]
                                    arg5[4] = var_5c8
                                    float var_5b8[0x4]
                                    arg5[5] = var_5b8
                                    float var_5a8[0x4]
                                    arg5[6] = var_5a8
                                    arg5[7] = zmm0_2
                                    arg5[8] = var_588_1.o
                                    arg5[9][0].q = var_57c_1
                            
                            char rax_28 = *(arg1 + 0x387)
                            *(arg1 + 0x387) =
                                (((not.b(rax_28) << 5 | rax_28) ^ rax_28) & 0x20) ^ rax_28
                            sub_141f2f2c0(&var_438)
                            result = 1
                        else
                            if ((rax_10 & 2) != 0)
                                goto label_141efc7d2
                            
                            if ((rax_10 & var_4c8 & 1) != 0)
                                (*(*arg1 + 0x458))(arg1, &var_4c8, (zx.o(0)).d, &data_143dbb1f8)
                            
                            (*(*arg1 + 0x458))(arg1, &var_568, (zx.o(0)).d, &data_143dbb1f8)
                            
                            if ((*(*arg1 + 0x548))(arg1) == 0)
                                zmm7 = var_560_1
                                int64_t rax_15 = *arg1
                                zmm10[0] = 1f - zmm7[0]
                                void var_540
                                (*(rax_15 + 0x498))(arg1, arg3, zmm10[0], &var_540, &var_568, 1)
                                char rax_17
                                rax_17, r9_3 = (*(*arg1 + 0x548))(arg1)
                                
                                if (rax_17 != 0 || (not(zmm7[0] != 0f) && zmm0_2[0] == 0f))
                                    goto label_141efc7d2
                                
                                goto label_141efc54d
                            
                            sub_141f2f2c0(&var_438)
                            result = 1
            else
                result.b = 0

__security_check_cookie(rax_1 ^ &var_658)
return result
