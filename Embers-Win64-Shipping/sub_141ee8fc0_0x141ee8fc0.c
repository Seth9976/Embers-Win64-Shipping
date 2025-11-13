// 函数: sub_141ee8fc0
// 地址: 0x141ee8fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_798
int64_t rax_1 = __security_cookie ^ &var_798
char result = (*(*arg1 + 0x5c0))()

if (result != 0)
    char var_738
    
    if (arg1[0x2d].b != 6)
        float zmm0 = arg3[0] * *arg2
        float zmm1 = arg3[0] * arg2[1]
        arg3[0] = arg3[0] f* arg2[2]
        float var_768 = zmm0
        uint32_t var_760_1 = arg3[0]
        
        if (zmm0 != 0f || zmm1 != 0f || not(arg3[0] f== 0f))
            void var_3d8
            int512_t zmm1_2
            int512_t zmm2
            zmm1_2, zmm2 = sub_141f2db80(&var_3d8, arg1[0x16], zx.d(arg1[0x3e].b) u>> 7, 1)
            
            if ((*(*arg1 + 0x550))(arg1) == 0)
                memset(&var_738, 0, 0x88)
                int32_t var_730_1 = 0x3f800000
                char var_770_1 = 0
                int128_t zmm0_1 = *(arg1[0x16] + 0x1c0)
                char* var_778_1 = &var_738
                int128_t var_758 = zmm0_1
                sub_141f231f0(arg1, &var_768, &var_758, 1, zmm0_1.q, zmm1_2, zmm2, var_778_1, 
                    var_770_1)
                char rax_8 = var_738
                
                if ((rax_8 & 1) != 0 && (rax_8 & 2) == 0)
                    int128_t zmm8
                    int128_t var_58_1 = zmm8
                    uint32_t zmm9[0x4]
                    uint32_t var_68_1[0x4] = zmm9
                    
                    if ((*(*arg1 + 0x560))(arg1) == 0)
                    label_141ee92d3:
                        int128_t zmm7
                        zmm7.d = 1f f- var_730_1
                        zmm2.o = zmm7
                        void var_710
                        (*(*arg1 + 0x498))(arg1, &var_768, zmm2, &var_710, &var_738, 0)
                    else
                        if ((*(*arg1 + 0x6e0))(arg1, &var_738) == 0)
                            goto label_141ee92d3
                        
                        int32_t var_6fc
                        
                        if (__andps_xmmxud_memxud(var_6fc, data_142d3f770)[0] f>= 0.200000003f)
                            goto label_141ee92d3
                        
                        zmm8 = zmm1
                        zmm9 = var_768
                        zmm2.o = zmm8
                        uint32_t zmm6[0x4] = var_760_1
                        var_758:8.d = 0xbf800000
                        zmm1_2.o = zmm6
                        zmm2.d = zmm2.d f* zmm8.d
                        var_758.q = 0
                        zmm9[0] = zmm9[0] f* zmm9[0]
                        zmm1_2.d = zmm1_2.d f* zmm6[0]
                        zmm2.d = zmm2.d f+ zmm9[0]
                        zmm2.d = zmm2.d f+ zmm1_2.d
                        uint32_t zmm0_2[0x4]
                        
                        if (not(zmm2.d f!= 1f))
                            zmm0_2 = zmm6
                        else if (zmm2.d f>= 9.99999994e-09f)
                            zmm0_2 = zmm2.o
                            uint32_t zmm4_1[0x4] = _mm_rsqrt_ss(zmm0_2[0], zmm0_2[0])
                            zmm2.o = 0x3f000000
                            zmm0_2[0] = zmm0_2[0] f* 0.5f
                            zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
                            zmm1_2.o = zmm0_2
                            zmm1_2.d = zmm1_2.d f* zmm4_1[0]
                            zmm2.d = 0.5f f- zmm1_2.d
                            zmm4_1[0] = zmm4_1[0] f* zmm2.d
                            zmm4_1[0] = zmm4_1[0] f+ zmm4_1[0]
                            zmm1_2.o = zmm4_1
                            zmm1_2.d = zmm1_2.d f* zmm4_1[0]
                            zmm0_2[0] = zmm0_2[0] f* zmm1_2.d
                            zmm4_1[0] = zmm4_1[0] f* (0.5f f- zmm0_2[0])
                            zmm4_1[0] = zmm4_1[0] f+ zmm4_1[0]
                            zmm0_2 = zmm6
                            zmm0_2[0] = zmm0_2[0] f* zmm4_1[0]
                        else
                            zmm0_2 = data_143dbb200
                        
                        if (zmm0_2[0] f<= -0.5f || zmm0_2[0] f>= 0.200000003f)
                            goto label_141ee92d3
                        
                        int64_t rax_13 = *arg1
                        zmm0_2 = 0x3f800000
                        int64_t var_778_2 = 0
                        zmm0_2[0] = 1f f- var_730_1
                        zmm9[0] = zmm9[0] f* zmm0_2[0]
                        zmm8.d = zmm8.d f* zmm0_2[0]
                        zmm6[0] = zmm6[0] f* zmm0_2[0]
                        uint32_t var_748 = zmm9[0]
                        int32_t var_744_1 = zmm8.d
                        uint32_t var_740_1 = zmm6[0]
                        
                        if ((*(rax_13 + 0x6e8))(arg1, &var_758, &var_748, &var_738, var_778_2) == 0)
                            goto label_141ee92d3
            else
                zmm2.o = arg3
                (*(*arg1 + 0x868))(arg1, arg2, zmm2, arg4)
            
            result = sub_141f2f2c0(&var_3d8)
    else
        sub_141f2db80(&var_738, arg1[0x16], zx.d(arg1[0x3e].b) u>> 7, 1)
        int512_t zmm1_1
        zmm1_1.o = arg3
        (*(*arg1 + 0x850))(arg1, zmm1_1, 0)
        result = sub_141f2f2c0(&var_738)

__security_check_cookie(rax_1 ^ &var_798)
return result
