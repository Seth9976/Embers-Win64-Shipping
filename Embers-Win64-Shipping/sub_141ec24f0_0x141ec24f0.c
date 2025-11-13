// 函数: sub_141ec24f0
// 地址: 0x141ec24f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[3].b u>> 1 & 1) != 0)
    int64_t* rcx = arg2[1]
    int64_t var_d8 = 3
    int64_t var_d0_1 = 0
    (*(*rcx + 0x48))(rcx, &var_d8)
    float var_c8
    sub_141ecfe50(&var_c8, arg2[1], *arg2, arg5)
    int32_t var_bc
    int128_t zmm7_1 = var_bc
    float zmm8_1 = var_c8
    float zmm5_1 = arg2[5].d
    float zmm4_1 = *(arg2 + 0x2c)
    zmm5_1 = zmm5_1 + zmm5_1
    float zmm2 = arg2[6].d
    zmm4_1 = zmm4_1 + zmm4_1
    zmm2 = zmm2 + zmm2
    int128_t zmm14
    zmm14.d = zmm7_1.d f* zmm7_1.d
    zmm14.d = zmm14.d f- 0.5f
    int128_t zmm15
    zmm15.d = zmm14.d f* zmm4_1
    int128_t zmm9_1
    zmm9_1.d = zmm14.d f* zmm2
    float var_c4
    float var_c0
    float zmm3_1 = var_c4 * zmm4_1 + zmm8_1 * zmm5_1 + var_c0 * zmm2
    float zmm6_1 =
        zmm14.d * zmm5_1 - (var_c4 * zmm2 - var_c0 * zmm4_1) f* zmm7_1.d + zmm8_1 * zmm3_1
    float zmm0_1 = zmm8_1 * zmm2
    zmm2 = arg3[2]
    zmm15.d = zmm15.d f- (var_c0 * zmm5_1 - zmm0_1) f* zmm7_1.d
    float zmm1_1 = zmm8_1 * zmm4_1
    zmm4_1 = arg3[1]
    zmm15.d = zmm15.d f+ var_c4 * zmm3_1
    zmm0_1 = var_c4 * zmm5_1
    zmm5_1 = *arg3
    zmm9_1.d = zmm9_1.d f- (zmm1_1 - zmm0_1) f* zmm7_1.d
    zmm9_1.d = zmm9_1.d f+ var_c0 * zmm3_1
    int32_t arg_10 = zmm9_1.d
    zmm5_1 = zmm5_1 + zmm5_1
    zmm4_1 = zmm4_1 + zmm4_1
    zmm2 = zmm2 + zmm2
    zmm9_1.d = zmm14.d f* zmm5_1
    int128_t zmm10_1
    zmm10_1.d = zmm14.d f* zmm4_1
    int128_t zmm13
    zmm13.d = zmm14.d f* zmm2
    zmm3_1 = var_c4 * zmm4_1 + zmm8_1 * zmm5_1 + var_c0 * zmm2
    zmm9_1.d = zmm9_1.d f- (var_c4 * zmm2 - var_c0 * zmm4_1) f* zmm7_1.d
    zmm9_1.d = zmm9_1.d f+ zmm8_1 * zmm3_1
    zmm10_1.d = zmm10_1.d f- (var_c0 * zmm5_1 - zmm8_1 * zmm2) f* zmm7_1.d
    zmm10_1.d = zmm10_1.d f+ var_c4 * zmm3_1
    zmm0_1 = var_c4 * zmm5_1
    zmm5_1 = zmm15.d
    zmm1_1 = (zmm8_1 * zmm4_1 - zmm0_1) f* zmm7_1.d
    zmm7_1 = arg_10
    zmm13.d = zmm13.d f- zmm1_1
    zmm13.d = zmm13.d f+ var_c0 * zmm3_1
    zmm0_1 = 3.40282347e+38f
    
    if (zmm6_1 <= 9.99999975e-05f)
        if (not(zmm6_1 >= -9.99999975e-05f))
            zmm9_1 ^= 0x80000000
            
            if (not(zmm9_1.d f>= 3.40282347e+38f))
                zmm6_1 = -1f
                goto label_141ec27e1
    else if (not(zmm9_1.d f>= 3.40282347e+38f))
        zmm6_1 = 1f
    label_141ec27e1:
        zmm7_1 = zx.o(0)
        zmm5_1 = (zx.o(0)).d
        zmm0_1 = zmm9_1.d
    
    if (zmm15.d f<= 9.99999975e-05f)
        if (not(zmm15.d f>= -9.99999975e-05f))
            zmm10_1 ^= 0x80000000
            
            if (not(zmm10_1.d f>= zmm0_1))
                zmm5_1 = -1f
                goto label_141ec2813
    else if (not(zmm10_1.d f>= zmm0_1))
        zmm5_1 = 1f
    label_141ec2813:
        zmm6_1 = (zx.o(0)).d
        zmm7_1 = zx.o(0)
        zmm0_1 = zmm10_1.d
    
    zmm9_1 = arg_10
    
    if (zmm9_1.d f<= 9.99999975e-05f)
        if (not(zmm9_1.d f>= -9.99999975e-05f) && not((zmm13 ^ 0x80000000).d f>= zmm0_1))
            zmm7_1 = 0xbf800000
            zmm6_1 = (zx.o(0)).d
            zmm5_1 = (zx.o(0)).d
    else if (not(zmm13.d f>= zmm0_1))
        zmm7_1 = 0x3f800000
        zmm6_1 = (zx.o(0)).d
        zmm5_1 = (zx.o(0)).d
    
    zmm7_1.d = zmm7_1.d f* 2f
    zmm6_1 = zmm6_1 + zmm6_1
    zmm5_1 = zmm5_1 * 2f
    zmm9_1 = var_bc
    zmm4_1 = var_c4 * zmm5_1 + zmm8_1 * zmm6_1 + var_c0 f* zmm7_1.d
    zmm3_1 = (var_c4 f* zmm7_1.d - var_c0 * zmm5_1) f* zmm9_1.d + zmm14.d * zmm6_1 + zmm8_1 * zmm4_1
    zmm0_1 = zmm14.d
    zmm14.d = zmm14.d f* zmm7_1.d
    *arg1 = zmm3_1
    arg1[1].d = (zmm8_1 * zmm5_1 - var_c4 * zmm6_1) f* zmm9_1.d f+ zmm14.d + var_c0 * zmm4_1
    *(arg1 + 4) =
        (var_c0 * zmm6_1 - zmm8_1 f* zmm7_1.d) f* zmm9_1.d + zmm0_1 * zmm5_1 + var_c4 * zmm4_1
else
    int32_t rax_1 = arg4[1].d
    *arg1 = *arg4
    arg1[1].d = rax_1

return arg1
