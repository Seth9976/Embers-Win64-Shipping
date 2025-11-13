// 函数: sub_141f22d60
// 地址: 0x141f22d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *arg2
int32_t var_e0 = arg2[1].d
int64_t rax_1 = *arg1
int64_t var_e8 = zmm0
float var_f8
(*(rax_1 + 0x4e0))(zmm0, &var_f8, &var_e8)
int64_t zmm2 = var_f8
float var_f0
zmm0 = var_f0
float var_f4
float zmm1[0x4] = var_f4
uint64_t result

if (zmm2.d f!= 0f || zmm1[0] != 0f || not(zmm0.d f== 0f))
    int64_t* r15_1 = arg1[0x17]
    
    if (r15_1 == 0)
        result.b = 0
    else
        int64_t r12_1 = *(arg1[0x16] + 0xa0)
        
        if (r12_1 == 0)
            result.b = 0
        else
            zmm2.d = zmm2.d f+ *(arg3 + 0x40)
            zmm1[0] = zmm1[0] f+ *(arg3 + 0x44)
            zmm0.d = zmm0.d f+ *(arg3 + 0x48)
            int64_t rdi_1 = *arg1
            float var_108 = zmm2.d
            float var_104_1 = zmm1[0]
            int32_t var_100_1 = zmm0.d
            int64_t rax_3 = (*(*r15_1 + 0x720))(r15_1, &var_e8, data_143a2d744)
            int64_t rdx_2 = *r15_1
            
            if ((*(rdi_1 + 0x470))(arg1, &var_108, arg4, zx.q((*(rdx_2 + 0x4d8))(r15_1, rdx_2)), 
                    rax_3, r12_1, var_108, var_100_1) != 0)
                int32_t r15_2 = arg1[0x18].d
                arg1[0x18].d = r15_2 & 0xfffffffb
                char var_d8
                memset(&var_d8, 0, 0x88)
                int64_t r9_1
                r9_1.b = 1
                char* var_118_2 = &var_d8
                int32_t var_d0_1 = 0x3f800000
                char rax_10 = (*(*arg1 + 0x478))(arg1, &var_f8, arg4, r9_1, var_118_2, 1)
                char rbx_2 = rax_10
                
                if (rax_10 == 0)
                    int128_t zmm8
                    int128_t var_48_1 = zmm8
                    
                    if ((var_d8 & 2) == 0)
                    label_141f22ff8:
                        zmm1 = *(arg3 + 0x4c)
                        float zmm0_1 = *(arg3 + 0x54) f- *(arg3 + 0x48)
                        zmm2 = *(arg3 + 0x50)
                        zmm1[0] = zmm1[0] f- *(arg3 + 0x40)
                        zmm2.d = zmm2.d f- *(arg3 + 0x44)
                        float var_100_2 = zmm0_1
                        float var_e0_2 = var_100_2
                        int64_t rax_14 = *arg1
                        var_e8 = (_mm_unpacklo_ps(zmm1, zmm2)).q
                        (*(rax_14 + 0x4e0))(arg1, &var_108, &var_e8, arg5, var_118_2, 1)
                        zmm2 = var_108
                        zmm1 = var_104_1
                        
                        if (zmm2.d f!= 0f || zmm1[0] != 0f || not(var_100_2 == 0f))
                            zmm2.d = zmm2.d f+ var_f8
                            zmm1[0] = zmm1[0] + var_f4
                            int64_t r9_4
                            r9_4.b = 1
                            var_e8.d = zmm2.d
                            var_e8:4.d = zmm1[0]
                            float var_e0_3 = var_100_2 + var_f0
                            char rax_16
                            int64_t r9_5
                            rax_16, r9_5 = (*(*arg1 + 0x478))(arg1, &var_e8, arg4, r9_4, 0, 1)
                            rbx_2 = rax_16
                            
                            if (rax_16 == 0)
                                zmm2.d = var_104_1.d f* var_f4
                                zmm0_1 = var_108 * var_f8
                                zmm1 = var_100_2
                                zmm1[0] = zmm1[0] * var_f0
                                zmm2.d = zmm2.d f+ zmm0_1
                                zmm2.d = zmm2.d f+ zmm1[0]
                                
                                if (not(zmm2.d f<= 0f))
                                    r9_5.b = 1
                                    rbx_2 = (*(*arg1 + 0x478))(arg1, &var_108, arg4, r9_5, 0, 1)
                    else
                        int64_t r9_2 = *arg1
                        (*(r9_2 + 0x480))(arg1, &var_108, &var_d8, r9_2)
                        zmm1 = var_108
                        zmm8 = var_100_1
                        zmm2.d = zmm1[0].q.d f+ var_f8
                        arg5 = var_104_1 + var_f4
                        float zmm4_1 = zmm8.d + var_f0
                        var_e8.d = zmm2.d
                        var_e8:4.d = arg5
                        float var_e0_1 = zmm4_1
                        
                        if ((not(zmm1[0] != var_f8) && not(var_104_1 != var_f4)
                                && zmm8.d f== var_f0)
                                || (not(zmm2.d f!= 0f) && not(arg5 != 0f) && zmm4_1 == 0f))
                            goto label_141f22ff8
                        
                        int64_t r9_3
                        r9_3.b = 1
                        var_118_2 = nullptr
                        char rax_12 = (*(*arg1 + 0x478))(arg1, &var_e8, arg4, r9_3, 0, 1)
                        rbx_2 = rax_12
                        
                        if (rax_12 == 0)
                            goto label_141f22ff8
                
                arg1[0x18].d = r15_2
                return zx.q(rbx_2)
            
            (*(*arg1 + 0x478))(arg1, &var_f8, arg4, 0, 0, 1)
            result.b = 1
else
    result.b = 0

return result
