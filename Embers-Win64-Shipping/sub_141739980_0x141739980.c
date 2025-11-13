// 函数: sub_141739980
// 地址: 0x141739980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm5
zmm5.d = (*(arg4 + 8)).d f- arg3[2]
float zmm6[0x4] = *(arg4 + 4)
zmm6[0] = zmm6[0] f- arg3[1]
float zmm7[0x4] = *arg4
zmm7[0] = zmm7[0] f- *arg3
int64_t zmm1
zmm1.d = zmm5.d f* zmm5.d
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm13
int128_t var_a8 = zmm13
zmm6[0] = zmm6[0] * zmm6[0]
int64_t rax = *arg1
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] f+ zmm1.d
float arg_8 = _mm_sqrt_ss(0, zmm6[0])[0]
int64_t zmm3 = zmm6[0].q
float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3.d)
float zmm2[0x4] = 0x3f000000
zmm3.d = zmm3.d f* 0.5f
temp0_1[0] = temp0_1[0] * temp0_1[0]
zmm1.d = zmm3.d f* temp0_1[0]
zmm2[0] = 0.5f f- zmm1.d
temp0_1[0] = temp0_1[0] * zmm2[0]
temp0_1[0] = temp0_1[0] + temp0_1[0]
zmm1.d = temp0_1[0].q.d f* temp0_1[0]
zmm3.d = zmm3.d f* zmm1.d
temp0_1[0] = temp0_1[0] * (0.5f f- zmm3.d)
temp0_1[0] = temp0_1[0] + temp0_1[0]
float zmm11[0x4] = temp0_1
float arg_18 = temp0_1[0]
float zmm12[0x4] = temp0_1
zmm11[0] = zmm11[0] * zmm7[0]
zmm12[0] = zmm12[0] * zmm6[0]
arg_18 = zmm11[0]
temp0_1[0] = temp0_1[0] f* zmm5.d
float arg_20 = zmm12[0]
int32_t var_e8
(*(rax + 0x20))(arg1, arg4, &var_e8)
float var_f0 = arg3[2]
int64_t rax_2 = *arg1
int64_t var_f8 = *arg3
int32_t var_d8
(*(rax_2 + 0x20))(arg1, &var_f8, &var_d8)
zmm6 = arg5
float zmm8[0x4] = temp0_1
zmm6[0] = zmm6[0] + 9.99999975e-05f
float rax_4
float zmm0[0x4]

if (temp0_1[0] <= zmm6[0])
label_141739cd8:
    
    if (not(zmm8[0] >= zmm6[0]))
        zmm1 = var_f8.d
        zmm6[0] = zmm6[0] - zmm8[0]
        zmm0 = var_d8
        zmm0[0] = zmm0[0] * zmm6[0]
        zmm1.d = zmm1.d f+ zmm0[0]
        int32_t var_d4
        zmm0 = var_d4
        zmm0[0] = zmm0[0] * zmm6[0]
        var_f8.d = zmm1.d
        zmm1.d = var_f8:4.d.d f+ zmm0[0]
        int32_t var_d0
        zmm0 = var_d0
        zmm0[0] = zmm0[0] * zmm6[0]
        var_f8:4.d = zmm1.d
        zmm1.d = var_f0.d f+ zmm0[0]
        var_f0 = zmm1.d
    
    zmm0 = zx.o(var_f8)
    rax_4 = var_f0
else
    while (true)
        zmm0 = data_1439b8d40
        zmm3 = zmm11[0].q
        zmm11 = *arg3
        float zmm4_1[0x4] = zmm12
        zmm12 = arg3[1]
        zmm13 = arg3[2]
        zmm8[0] = zmm8[0] - zmm6[0]
        zmm3.d = zmm3.d f* zmm8[0]
        zmm4_1[0] = zmm4_1[0] * zmm8[0]
        zmm3.d = zmm3.d f* zmm0[0]
        zmm4_1[0] = zmm4_1[0] * zmm0[0]
        zmm3.d = zmm3.d f+ var_f8.d
        temp0_1[0] = temp0_1[0] * zmm8[0]
        zmm4_1[0] = zmm4_1[0] f+ var_f8:4.d
        temp0_1[0] = temp0_1[0] * zmm0[0]
        zmm1.d = zmm3.d f- zmm11[0]
        var_f8.d = zmm3.d
        var_f8:4.d = zmm4_1[0]
        temp0_1[0] = temp0_1[0] + var_f0
        zmm4_1[0] = zmm4_1[0] - zmm12[0]
        zmm1.d = zmm1.d f* zmm1.d
        var_f0 = temp0_1[0]
        temp0_1[0] = temp0_1[0] f- zmm13.d
        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
        zmm4_1[0] = zmm4_1[0] f+ zmm1.d
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm4_1[0] = zmm4_1[0] + temp0_1[0]
        zmm0 = _mm_sqrt_ss(0, zmm4_1[0])
        
        if (not(zmm0[0] > arg_8))
            if (not(zmm8[0] >= 0.00999999978f))
                zmm2 = arg_18
                zmm1.d = arg_20.d f* 0.00999999978f
                temp0_1[0] = temp0_1[0] * 0.00999999978f
                zmm1.d = zmm1.d f+ zmm4_1[0]
                zmm2[0] = zmm2[0] * 0.00999999978f
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                zmm2[0] = zmm2[0] f+ zmm3.d
                var_f8:4.d = zmm1.d
                zmm1.d = zmm1.d f- zmm12[0]
                var_f0 = temp0_1[0]
                temp0_1[0] = temp0_1[0] f- zmm13.d
                var_f8.d = zmm2[0]
                zmm2[0] = zmm2[0] - zmm11[0]
                zmm1.d = zmm1.d f* zmm1.d
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                zmm2[0] = zmm2[0] * zmm2[0]
                zmm1.d = zmm1.d f+ zmm2[0]
                zmm1.d = zmm1.d f+ temp0_1[0]
                zmm0 = _mm_sqrt_ss(0, zmm1.d)
            
            if (zmm8[0] >= 0.00999999978f || not(zmm0[0] > arg_8))
                (*(*arg1 + 0x20))(arg1, &var_f8, &var_d8)
                
                if (not(zmm0[0] >= zmm8[0]))
                    zmm8 = zmm0
                    
                    if (zmm0[0] <= zmm6[0])
                        goto label_141739cd8
                    
                    zmm11 = arg_18
                    zmm12 = arg_20
                    continue
            
            if (not(temp0_1[0] >= zmm6[0]))
                zmm6[0] = zmm6[0] - temp0_1[0]
                zmm2 = zmm6
                zmm2[0] = zmm2[0] f* var_e8
                goto label_141739c73
        else if (not(temp0_1[0] >= zmm6[0]))
            zmm2 = var_e8
            zmm6[0] = zmm6[0] - temp0_1[0]
            zmm2[0] = zmm2[0] * zmm6[0]
        label_141739c73:
            int32_t var_e0
            zmm0 = var_e0
            zmm2[0] = zmm2[0] f+ *arg4
            zmm0[0] = zmm0[0] * zmm6[0]
            int32_t var_e4
            zmm1.d = var_e4.d f* zmm6[0]
            zmm0[0] = zmm0[0] f+ *(arg4 + 8)
            zmm1.d = zmm1.d f+ *(arg4 + 4)
            rax_4 = zmm0[0]
            zmm0 = _mm_unpacklo_ps(zmm2, zmm1)
            break
        
        int32_t var_d0_2 = 0
        rax_4 = 0f
        zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
        *(arg2 + 0xc) = 0
        goto label_141739d79

*(arg2 + 0xc) = 1
label_141739d79:
*arg2 = zmm0.q
arg2[1].d = rax_4
return arg2
