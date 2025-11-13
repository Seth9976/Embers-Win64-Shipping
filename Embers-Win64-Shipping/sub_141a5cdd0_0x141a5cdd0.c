// 函数: sub_141a5cdd0
// 地址: 0x141a5cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141a53830(arg1)

if (result.b == 0 && arg1[0x8c] != 0)
    int128_t zmm7 = zx.o(0)
    int64_t* rax_1 = (*(arg1[5] + 0x78))(&arg1[5])
    
    if (rax_1 != 0)
        int64_t rdx_1 = *rax_1
        void* rax_2 = (*(rdx_1 + 0x150))(rax_1, rdx_1)
        
        if (rax_2 != 0)
            void* rax_3 = *(rax_2 + 0x38)
            
            if (rax_3 != 0)
                void* rcx_3 = *(rax_3 + 0x88)
                
                if (rcx_3 != 0)
                    void* rax_4 = *(rcx_3 + 0x30)
                    
                    if (rax_4 != 0)
                        void* rcx_4 = *(rax_4 + 0x228)
                        
                        if (rcx_4 != 0)
                            if ((*(arg1 + 0x45c) & 1) == 0)
                                zmm7 = 0x3f800000
                            else
                                zmm7 = 0xbf800000
                            
                            zmm7.d = zmm7.d f* *(rcx_4 + 0x238)
    
    char r12_1 = arg1[0x106].b
    char rcx_5 = arg1[0x8b].b
    char r11_1
    
    if (r12_1 != 1 || rcx_5 == r12_1)
        r11_1 = 0
    else
        r11_1 = r12_1
    
    void* r10_1 = *(arg1 + 0x7d4)
    void* r8_1 = arg1[0x105]
    char r9_1
    
    if (r8_1.d != r10_1.d || r8_1:4.d[0].d f!= r10_1:4.d)
        r9_1 = 1
    else
        r9_1 = 0
    
    int64_t rax_5 = arg1[0xf8]
    zmm7.d = zmm7.d f* 0.00100000005f
    int64_t zmm5_1 = float.d(rax_5.d)
    result = rax_5 u>> 0x20
    double zmm1[0x2] = _mm_cvtps_pd(zmm7.q)
    zmm1[0] = zmm1[0] f* zmm5_1
    int128_t zmm9
    zmm9.q = float.d(result.d)
    zmm1[0] = zmm1[0] f/ zmm9.q
    int64_t rdx_2 = int.q(zmm1[0])
    double zmm0_1[0x2] = zmm1
    double zmm2[0x2]
    
    if (rdx_2 != -0x8000000000000000)
        zmm2 = zx.o(0)
        zmm2[0] = float.d(rdx_2)
        
        if (not(zmm2[0] == zmm1[0]))
            uint32_t temp0_3 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
            zmm0_1 = zx.o(0)
            result = zx.q(temp0_3) & 1
            zmm0_1[0] = float.d(rdx_2 - result)
    
    zmm1[0] = zmm1[0] - zmm0_1[0]
    int32_t rdi_1 = int.d(zmm0_1[0])
    
    if (not(zmm1[0] <= 0.0))
        zmm1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff)[0], zmm1[0])
    
    zmm0_1 = _mm_cvtpd_ps(zmm1)
    void* result_1
    result_1.d = rdi_1
    
    if (zmm0_1[0].d f>= 0f)
        result_1:4.d = _mm_min_ss(zmm0_1[0].d, 0x3f7fffff)[0].d
    else
        result_1:4.d = 0
    
    zmm0_1 = data_1439d2848
    zmm0_1[0].d = zmm0_1[0].d f* 0.00100000005f
    zmm1 = _mm_cvtps_pd(zmm0_1[0])
    zmm1[0] = zmm1[0] f* zmm5_1
    zmm1[0] = zmm1[0] f/ zmm9.q
    int64_t rdx_4 = int.q(zmm1[0])
    zmm0_1 = zmm1
    
    if (rdx_4 != -0x8000000000000000)
        zmm2 = zx.o(0)
        zmm2[0] = float.d(rdx_4)
        
        if (not(zmm2[0] == zmm1[0]))
            uint32_t temp0_10 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
            zmm0_1 = zx.o(0)
            result = zx.q(temp0_10) & 1
            zmm0_1[0] = float.d(rdx_4 - result)
    
    zmm1[0] = zmm1[0] - zmm0_1[0]
    int32_t rbx_1 = int.d(zmm0_1[0])
    
    if (not(zmm1[0] <= 0.0))
        zmm1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff)[0], zmm1[0])
    
    zmm0_1 = _mm_cvtpd_ps(zmm1)
    void* result_2
    result_2.d = rbx_1
    
    if (zmm0_1[0].d f>= 0f)
        zmm0_1 = _mm_min_ss(zmm0_1[0].d, 0x3f7fffff)
        result_2:4.d = zmm0_1[0].d
    else
        result_2:4.d = 0
    
    if (r12_1 != rcx_5 || r9_1 != 0)
        if (r11_1 == 0)
            void* var_88
            
            if (r9_1 != 0)
                if (rcx_5 == 1)
                    void* result_6 = result_1
                    int32_t r15_2 = *(arg1 + 0x45c) & 1
                    int32_t r9_7 = *(arg1 + 0x834) - arg1[0x8e].d
                    zmm2 = result_6:4.d
                    var_88 = r8_1
                    zmm2[0].d = zmm2[0].d f+ var_88:4.d
                    void* arg_20
                    arg_20:4.d = 0
                    zmm2[0].d = zmm2[0].d f+ zmm2[0].d
                    int32_t r9_9 =
                        r9_7 * (((zx.q(r15_2) ^ 1) << 1) + -ffffffffffffffff).d * *(arg1 + 0x46c)
                    zmm2[0].d = zmm2[0].d f- 0.5f
                    arg_20.d = r9_9
                    zmm1 = zmm2
                    int32_t r11_5 = (int.d(zmm2[0].d) s>> 1) + r8_1.d + rdi_1
                    int32_t rcx_15 = int.d(zmm1[0].d)
                    result_1.d = r11_5
                    
                    if (rcx_15 != 0x80000000
                            && not(_mm_cvtepi32_ps(zx.o(rcx_15))[0].d f== zmm1[0].d))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_15
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0])) & 1)))
                    
                    zmm2[0].d = zmm2[0].d f- zmm1[0].d
                    
                    if (zmm2[0].d f>= 0f)
                        result_1:4.d = _mm_min_ss(zmm2[0].d, 0x3f7fffff)[0].d
                    else
                        result_1:4.d = 0
                    
                    zmm2 = arg_20:4.d
                    zmm2[0].d = zmm2[0].d f+ result_1:4.d
                    zmm2[0].d = zmm2[0].d f+ zmm2[0].d
                    zmm2[0].d = zmm2[0].d f- 0.5f
                    zmm1 = zmm2
                    int32_t r9_11 = r9_9 + (int.d(zmm2[0].d) s>> 1) + r11_5
                    int32_t rcx_17 = int.d(zmm1[0].d)
                    result_1.d = r9_11
                    
                    if (rcx_17 != 0x80000000
                            && not(_mm_cvtepi32_ps(zx.o(rcx_17))[0].d f== zmm1[0].d))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_17
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0])) & 1)))
                    
                    zmm2[0].d = zmm2[0].d f- zmm1[0].d
                    
                    if (zmm2[0].d f>= 0f)
                        result_1:4.d = _mm_min_ss(zmm2[0].d, 0x3f7fffff)[0].d
                    else
                        result_1:4.d = 0
                    
                    zmm2 = r10_1:4.d
                    zmm2[0].d = zmm2[0].d f- result_1:4.d
                    zmm2[0].d = zmm2[0].d f+ zmm2[0].d
                    zmm2[0].d = zmm2[0].d f- 0.5f
                    int32_t rcx_20 = int.d(zmm2[0].d) s>> 1
                    int32_t rax_36 = r10_1.d - r9_11 + rcx_20
                    result_1.d = rax_36
                    zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_20))
                    zmm2[0].d = zmm2[0].d f- zmm0_1[0].d
                    
                    if (zmm2[0].d f>= 0f)
                        result_1:4.d = _mm_min_ss(zmm2[0].d, 0x3f7fffff)[0].d
                    else
                        result_1:4.d = 0
                    
                    void* result_4 = result_1
                    
                    if (rax_36 s<= 0)
                        if (rax_36 == 0)
                            zmm0_1 = result_4:4.d
                        
                        if (rax_36 != 0 || not(zmm0_1[0].d f>= 0f))
                            zmm0_1 = result_4:4.d
                            
                            if (zmm0_1[0].d f!= 0f)
                                int128_t zmm6
                                zmm6.d = 1f f- zmm0_1[0].d
                                result_1.d = not.d(rax_36)
                                
                                if (zmm6.d f>= 0f)
                                    result_1:4.d = _mm_min_ss(zmm6.d, 0x3f7fffff).d
                                else
                                    result_1:4.d = 0
                            else
                                result_1:4.d = 0
                                result_1.d = neg.d(rax_36)
                            
                            result_4 = result_1
                    
                    zmm2 = result_6:4.d
                    
                    if (r12_1 != rcx_5)
                        goto label_141a5d592
                    
                    zmm2[0].d = zmm2[0].d f+ result_2:4.d
                    zmm2[0].d = zmm2[0].d f+ zmm2[0].d
                    zmm2[0].d = zmm2[0].d f- 0.5f
                    zmm1 = zmm2
                    int32_t r11_9 = (int.d(zmm2[0].d) s>> 1) + rbx_1 + rdi_1
                    int32_t r9_12 = int.d(zmm1[0].d)
                    result_1.d = r11_9
                    
                    if (r9_12 != 0x80000000)
                        zmm0_1 = _mm_cvtepi32_ps(zx.o(r9_12))
                        
                        if (not(zmm0_1[0].d f== zmm1[0].d))
                            zmm1 = _mm_cvtepi32_ps(zx.o(r9_12
                                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0])) & 1)))
                    
                    zmm2[0].d = zmm2[0].d f- zmm1[0].d
                    
                    if (zmm2[0].d f>= 0f)
                        result_1:4.d = _mm_min_ss(zmm2[0].d, 0x3f7fffff)[0].d
                    else
                        result_1:4.d = 0
                    
                    result = result_1
                    
                    if (result_4.d s> r11_9)
                    label_141a5d562:
                        
                        if (r15_2 != 0)
                            if (r8_1.d s< r10_1.d
                                    || (r8_1.d == r10_1.d && not(r8_1:4.d[0].d f>= r10_1:4.d)))
                                goto label_141a5d589
                            
                            goto label_141a5d621
                        
                        if (r8_1.d s> r10_1.d || (r8_1.d == r10_1.d && r8_1:4.d[0].d f> r10_1:4.d))
                        label_141a5d589:
                            zmm2 = result_6:4.d
                        label_141a5d592:
                            zmm2[0].d = zmm2[0].d f+ r8_1:4.d
                            zmm2[0].d = zmm2[0].d f+ zmm2[0].d
                            zmm2[0].d = zmm2[0].d f- 0.5f
                            zmm1 = zmm2
                            int32_t rcx_21 = int.d(zmm1[0].d)
                            result_1.d = (int.d(zmm2[0].d) s>> 1) + r8_1.d + rdi_1
                            
                            if (rcx_21 != 0x80000000
                                    && not(_mm_cvtepi32_ps(zx.o(rcx_21))[0].d f== zmm1[0].d))
                                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_21
                                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0])) & 1)))
                            
                            zmm2[0].d = zmm2[0].d f- zmm1[0].d
                            
                            if (zmm2[0].d f>= 0f)
                                result_1:4.d = _mm_min_ss(zmm2[0].d, 0x3f7fffff)[0].d
                                result, zmm0_1 = sub_141a5b970(arg1, result_1)
                            else
                                result_1:4.d = 0
                                result, zmm0_1 = sub_141a5b970(arg1, result_1)
                        else
                        label_141a5d621:
                            zmm2 = result_6:4.d
                            zmm2[0].d = zmm2[0].d f+ r8_1:4.d
                            zmm2[0].d = zmm2[0].d f+ zmm2[0].d
                            zmm2[0].d = zmm2[0].d f- 0.5f
                            zmm1 = zmm2
                            int32_t rcx_24 = int.d(zmm1[0].d)
                            result_1.d = (int.d(zmm2[0].d) s>> 1) + r8_1.d + rdi_1
                            
                            if (rcx_24 != 0x80000000
                                    && not(_mm_cvtepi32_ps(zx.o(rcx_24))[0].d f== zmm1[0].d))
                                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_24
                                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0])) & 1)))
                            
                            zmm2[0].d = zmm2[0].d f- zmm1[0].d
                            
                            if (zmm2[0].d f>= 0f)
                                result_1:4.d = _mm_min_ss(zmm2[0].d, 0x3f7fffff)[0].d
                                result, zmm0_1 = sub_141a58410(arg1, result_1)
                            else
                                result_1:4.d = 0
                                result, zmm0_1 = sub_141a58410(arg1, result_1)
                    else if (result_4.d == r11_9)
                        zmm0_1 = result_4:4.d
                        
                        if (not(zmm0_1[0].d f<= result:4.d))
                            goto label_141a5d562
                else if (rcx_5 == 0)
                    result, zmm0_1 = sub_141a58410(arg1, r8_1)
                else if (rcx_5 == 3)
                    result, zmm0_1 = sub_141a656e0(arg1, r8_1)
            
            if (r12_1 != rcx_5)
                uint32_t rcx_31 = zx.d(arg1[0x106].b)
                
                if (rcx_31 == 1)
                    *(arg1 + 0x45c) &= 0xfffffffe
                    return sub_141a5b300(arg1, zmm0_1)
                
                if (rcx_31 == 3)
                    if (arg1[0x8c] != 0 && (sub_140d3c6e0(&arg1[0x94]) == 0 || arg1[0x95] == 0))
                        sub_141a54260(&arg1[0x94], arg1[0x8c], &arg1[5])
                    
                    int64_t* rbx_2 = arg1[0x109]
                    var_88 = *(arg1 + 0x7d4)
                    int64_t var_80_1 = arg1[0xf8]
                    arg1[0x8b].b = 3
                    (*(*rbx_2 + 0x18))(rbx_2, &var_88)
                    
                    if (rbx_2[3].b != 0)
                        rbx_2[3].b = 0
                    
                    result = sub_141a53830(arg1)
                    
                    if (result.b != 0)
                        arg1[0x105] = *(arg1 + 0x7d4)
                        arg1[0x106].b = arg1[0x8b].b
                        result = zx.q(arg1[0x8e].d)
                        *(arg1 + 0x834) = result.d
                else if (rcx_31 == 6)
                    return sub_141a5b0b0(arg1)
        else
            float zmm6_1
            int32_t zmm8_1
            zmm6_1, zmm8_1 = sub_141a5b300(arg1, zmm0_1)
            void* result_5 = result_1
            void* r8_2 = arg1[0x105]
            float zmm2_1[0x4] = result_5:4.d
            zmm2_1[0] = zmm2_1[0] f+ r8_2:4.d
            zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
            zmm2_1[0] = zmm2_1[0] - 0.5f
            float zmm1_1[0x4] = zmm2_1
            int32_t r9_5 = (int.d(zmm2_1[0]) s>> 1) + r8_2.d + rdi_1
            int32_t rcx_7 = int.d(zmm1_1[0])
            result_1.d = r9_5
            
            if (rcx_7 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_7)).d f== zmm1_1[0]))
                zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_7
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)) & 1)))
            
            zmm2_1[0] = zmm2_1[0] - zmm1_1[0]
            
            if (zmm2_1[0] f>= zmm8_1)
                result_1:4.d = _mm_min_ss(zmm2_1[0], 0x3f7fffff)[0]
            else
                result_1:4.d = 0
            
            void* rax_11 = *(arg1 + 0x7d4)
            zmm2_1 = rax_11:4.d
            zmm2_1[0] = zmm2_1[0] f- result_1:4.d
            zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
            zmm2_1[0] = zmm2_1[0] - 0.5f
            int32_t rcx_10 = int.d(zmm2_1[0]) s>> 1
            int32_t rax_13 = rax_11.d - r9_5 + rcx_10
            result_1.d = rax_13
            uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_10))
            zmm2_1[0] = zmm2_1[0] f- zmm0_2.d
            
            if (zmm2_1[0] f>= zmm8_1)
                result_1:4.d = _mm_min_ss(zmm2_1[0], 0x3f7fffff)[0]
            else
                result_1:4.d = 0
            
            void* result_3 = result_1
            
            if (rax_13 s<= 0 && (rax_13 != 0 || not(result_3:4.d.d f>= 0f)))
                zmm0_2 = result_3:4.d
                
                if (zmm0_2.d f!= zmm8_1)
                    zmm6_1 = zmm6_1 f- zmm0_2.d
                    result_1.d = not.d(rax_13)
                    
                    if (zmm6_1 f>= zmm8_1)
                        result_1:4.d = _mm_min_ss(zmm6_1, 0x3f7fffff)
                    else
                        result_1:4.d = 0
                else
                    result_1:4.d = 0
                    result_1.d = neg.d(rax_13)
                
                result_3 = result_1
            
            result = result_2
            
            if (result_3.d s> rbx_1)
            label_141a5d1f8:
                zmm2_1 = result_5:4.d
                zmm2_1[0] = zmm2_1[0] f+ r8_2:4.d
                zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] - 0.5f
                zmm1_1 = zmm2_1
                int32_t rcx_11 = int.d(zmm1_1[0])
                result_1.d = (int.d(zmm2_1[0]) s>> 1) + r8_2.d + rdi_1
                
                if (rcx_11 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_11)).d f== zmm1_1[0]))
                    zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_11
                        - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)) & 1)))
                
                zmm2_1[0] = zmm2_1[0] - zmm1_1[0]
                
                if (zmm2_1[0] f>= zmm8_1)
                    result_1:4.d = _mm_min_ss(zmm2_1[0], 0x3f7fffff)[0]
                    return sub_141a5b970(arg1, result_1)
                
                result_1:4.d = 0
                return sub_141a5b970(arg1, result_1)
            
            if (result_3.d == rbx_1 && not(result_3:4.d.d f<= result:4.d))
                goto label_141a5d1f8

return result
