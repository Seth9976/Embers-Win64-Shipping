// 函数: sub_142011d70
// 地址: 0x142011d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg1 + 0x428))()

if (result == 0)
    int512_t zmm1
    int512_t zmm2_1
    int128_t zmm6_1
    result, zmm1, zmm2_1, zmm6_1 = sub_141f29460(arg1, arg2, zx.q(arg3), arg4)
    void* rdi_1 = arg1[0x26]
    
    if (rdi_1 != 0 && arg1[0x16] != 0)
        int64_t* rdi_2 = *(rdi_1 + 0x258)
        
        if (rdi_2 != 0)
            result = (*(*rdi_2 + 0x6a8))(rdi_2)
            
            if (result != 0)
                int128_t var_18_1 = zmm6_1
                char rax_3
                
                if ((*(rdi_2 + 0x294) & 2) != 0)
                    rax_3 = (*(*rdi_2 + 0x6a8))(rdi_2)
                
                char rax_5
                
                if ((*(rdi_2 + 0x294) & 2) == 0 || rax_3 == 0)
                    rax_5 = (*(rdi_2[0x44] + 0x48))(&rdi_2[0x44])
                
                if (((*(rdi_2 + 0x294) & 2) != 0 && rax_3 != 0) || rax_5 == 0
                        || (*(arg1 + 0x124) & 2) != 0)
                    zmm1.o = arg2
                    (*(*arg1 + 0x588))(arg1, zmm1)
                else
                    zmm1.o = arg1[0x27].d
                    
                    if ((*(*arg1 + 0x418))(arg1, zmm1) == 1)
                        zmm6_1 = *(arg1 + 0xcc)
                        zmm1.o = zmm6_1
                        zmm1.d = zmm1.d f* zmm6_1.d
                        float zmm7[0x4] = *(arg1 + 0xc4)
                        zmm2_1.o = zmm7
                        float zmm8[0x4] = arg1[0x19].d
                        zmm2_1.d = zmm2_1.d f* zmm7[0]
                        zmm8[0] = zmm8[0] * zmm8[0]
                        zmm2_1.d = zmm2_1.d f+ zmm8[0]
                        zmm2_1.d = zmm2_1.d f+ zmm1.d
                        int128_t zmm3_1 = zmm2_1.o
                        float temp0_1[0x4] = _mm_rsqrt_ss(zmm2_1.o[0], zmm3_1.d)
                        zmm2_1.o = 0x3f000000
                        zmm3_1.d = zmm3_1.d f* 0.5f
                        temp0_1[0] = temp0_1[0] * temp0_1[0]
                        zmm1.o = zmm3_1
                        zmm1.d = zmm1.d f* temp0_1[0]
                        zmm2_1.d = 0.5f f- zmm1.d
                        temp0_1[0] = temp0_1[0] f* zmm2_1.d
                        temp0_1[0] = temp0_1[0] + temp0_1[0]
                        zmm1.o = temp0_1
                        zmm1.d = zmm1.d f* temp0_1[0]
                        zmm3_1.d = zmm3_1.d f* zmm1.d
                        zmm1.o = arg1[0x27].d
                        temp0_1[0] = temp0_1[0] * (0.5f f- zmm3_1.d)
                        temp0_1[0] = temp0_1[0] + temp0_1[0]
                        zmm7[0] = zmm7[0] * temp0_1[0]
                        zmm8[0] = zmm8[0] * temp0_1[0]
                        zmm7[0] = zmm7[0] f* zmm1.d
                        zmm8[0] = zmm8[0] f* zmm1.d
                        zmm6_1.d = zmm6_1.d f* temp0_1[0]
                        zmm6_1.d = zmm6_1.d f* zmm1.d
                        *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
                        int96_t var_f8
                        var_f8:8.d = zmm6_1.d
                        *(arg1 + 0xcc) = var_f8:8.d
                
                (*(*arg1 + 0x590))(arg1, zmm1)
                arg1[0x29].d &= 0xfffffffe
                arg2[0] = arg2[0] f* *(arg1 + 0xc4)
                zmm2_1.o = arg2
                zmm2_1.d = zmm2_1.d f* arg1[0x19].d
                zmm1.o = arg2
                zmm1.d = zmm1.d f* *(arg1 + 0xcc)
                float var_108 = arg2[0]
                int32_t var_104_1 = zmm2_1.d
                int32_t var_100_1 = zmm1.d
                
                if (_mm_and_ps(arg2, 0x7fffffff)[0] > 9.99999997e-07f)
                label_142011fd7:
                    void* rax_11 = arg1[0x16]
                    zmm1.o = *(rax_11 + 0x1c0)
                    int96_t var_f8_1 = (*(rax_11 + 0x1d0))[0].12
                    int128_t var_e8 = zmm1.o
                    int32_t var_d0_1 = 0x3f800000
                    char var_d8
                    sub_141f231f0(arg1, &var_108, &var_e8, 1, memset(&var_d8, 0, 0x88), zmm1, 
                        zmm2_1, &var_d8, 0)
                    char rax_12 = var_d8
                    
                    if ((rax_12 & 1) != 0 && (rax_12 & 2) == 0)
                        zmm2_1.o = arg2
                        (*(*arg1 + 0x458))(arg1, &var_d8, zmm2_1, &var_108)
                        zmm2_1.o = 0x3f800000
                        zmm2_1.d = 1f f- var_d0_1
                        void var_b0
                        (*(*arg1 + 0x498))(arg1, &var_108, zmm2_1, &var_b0, &var_d8, 1)
                    
                    if ((arg1[0x29].b & 1) == 0)
                        zmm6_1.d = 1f / arg2[0]
                        zmm2_1.o = *(arg1[0x16] + 0x1d0)
                        float zmm0_3[0x4] = zmm2_1.o
                        zmm1.o = zmm2_1.o
                        zmm0_3[0] = zmm0_3[0] f- var_f8_1.d
                        zmm1.o = _mm_shuffle_ps(zmm1.o, zmm2_1.o, 0x55)
                        zmm1.d = zmm1.d f- var_f8_1:4.d
                        zmm2_1.o = _mm_shuffle_ps(zmm2_1.o, zmm2_1.o, 0xaa)
                        zmm2_1.d = zmm2_1.d f- var_f8_1:8.d
                        zmm0_3[0] = zmm0_3[0] f* zmm6_1.d
                        zmm1.d = zmm1.d f* zmm6_1.d
                        zmm2_1.d = zmm2_1.d f* zmm6_1.d
                        *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm0_3, zmm1.q)).q
                        var_f8_1:8.d = zmm2_1.d
                        *(arg1 + 0xcc) = var_f8_1:8.d
                else
                    zmm2_1.o = _mm_and_ps(zmm2_1.o, 0x7fffffff)
                    
                    if (zmm2_1.d f> 9.99999997e-07f)
                        goto label_142011fd7
                    
                    zmm1.o = _mm_and_ps(zmm1.o, 0x7fffffff)
                    
                    if (not(zmm1.d f<= 9.99999997e-07f))
                        goto label_142011fd7
                
                result = (*(*arg1 + 0x460))(arg1, zmm1, zmm2_1)

return result
