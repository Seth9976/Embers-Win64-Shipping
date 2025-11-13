// 函数: sub_140da08d0
// 地址: 0x140da08d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(arg4)
int128_t* rax = sub_140e15850(*(arg3 + 0x38))
float zmm2[0x4] = rax[2]
float zmm8[0x4] = *rax
uint128_t zmm7
zmm7.d = rax[3].q.d f- *(arg1 + 0xac)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm8[0] = zmm8[0] f* *(rax + 0x1c)
float temp0_1[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
zmm8[0] = zmm8[0] * zmm2[0]
temp0_1[0] = temp0_1[0] * temp0[0]
int64_t rcx_1 = *(arg6 + 0x38)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm8[0] = zmm8[0] f+ zmm7.d
temp0_1[0] = temp0_1[0] * temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
temp0_3[0] = temp0_3[0] f- *(arg1 + 0xa8)
temp0_1[0] = temp0_1[0] f+ zmm7.d
zmm8[0] = zmm8[0] + temp0_1[0]
zmm8[0] = zmm8[0] + temp0_3[0]
temp0_1[0] = temp0_1[0] + temp0_3[0]
float temp0_4[0x4] = _mm_max_ss(temp0_1[0], zmm8[0])
float temp0_5[0x4] = _mm_min_ss(temp0_1[0], zmm8[0])
zmm8[0] = zmm8[0] + temp0_1[0]
float temp0_6[0x4] = _mm_min_ss(temp0_1[0], zmm8[0])
float temp0_7[0x4] = _mm_max_ss(temp0_1[0], zmm8[0])
float temp0_8[0x4] = _mm_min_ss(temp0_5[0], zmm8[0])
float temp0_9[0x4] = _mm_max_ss(temp0_4[0], zmm8[0])
float temp0_10[0x4] = _mm_min_ss(temp0_6[0], zmm8[0])
float temp0_11[0x4] = _mm_max_ss(temp0_7[0], zmm8[0])
float temp0_12[0x4] = _mm_min_ss(temp0_8[0], zmm7.d)
float temp0_13[0x4] = _mm_max_ss(temp0_9[0], zmm7.d)
float temp0_14[0x4] = _mm_min_ss(temp0_10[0], temp0_3[0])
float temp0_15[0x4] = _mm_max_ss(temp0_11[0], temp0_3[0])
float (* rax_2)[0x4] = sub_140e15850(rcx_1)
zmm7 = rax_2[2]
float zmm6[0x4] = *rax_2
zmm8 = zx.o(rax_2[3][0].q)
zmm8[0] = zmm8[0] f- *(arg1 + 0xac)
float temp0_16[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float temp0_17[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float temp0_18[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
temp0_18[0] = temp0_18[0] * temp0_16[0]
temp0_18[0] = temp0_18[0] * temp0_17[0]
zmm6[0] = zmm6[0] * (*rax_2)[7]
zmm6[0] = zmm6[0] f* zmm7.d
zmm7.d = _mm_shuffle_ps(zmm7, zmm7, 0xff).d f- *(arg1 + 0xa8)
zmm8[0] = zmm8[0] + zmm6[0]
zmm2 = zmm7
zmm2[0] = zmm2[0] + zmm6[0]
zmm6 = zmm7
*arg2 = 0
zmm6[0] = zmm6[0] + temp0_18[0]
arg2[1] = 0
zmm8[0] = zmm8[0] + temp0_18[0]
zmm2[0] = zmm2[0] + temp0_18[0]
zmm8[0] = zmm8[0] + temp0_18[0]
float temp0_20[0x4] = _mm_max_ss(zmm6[0], zmm2[0])
float temp0_21[0x4] = _mm_min_ss(zmm6[0], zmm2[0])
float temp0_22[0x4] = _mm_max_ss(zmm8[0], zmm8[0])
float temp0_23[0x4] = _mm_min_ss(zmm8[0], zmm8[0])
float temp0_24[0x4] = _mm_max_ss(temp0_20[0], zmm2[0])
float temp0_25[0x4] = _mm_min_ss(temp0_21[0], zmm2[0])
float temp0_26[0x4] = _mm_max_ss(temp0_22[0], zmm8[0])
float temp0_27[0x4] = _mm_min_ss(temp0_23[0], zmm8[0])
float temp0_28[0x4] = _mm_max_ss(temp0_24[0], zmm7.d)
float temp0_29[0x4] = _mm_min_ss(temp0_25[0], zmm7.d)
float temp0_30[0x4] = _mm_max_ss(temp0_26[0], zmm8[0])
float temp0_31[0x4] = _mm_min_ss(temp0_27[0], zmm8[0])
float var_f8
float var_e8
void var_d8
int64_t* rax_5

if (rsi.b == 0)
    int32_t var_100_4 = arg7
    char var_108_4 = 0
    temp0_12[0] = temp0_12[0] + 0.5f
    char var_110_4 = 0
    temp0_13[0] = temp0_13[0] - 0.5f
    float var_e4_4 = temp0_12[0]
    float var_dc_4 = temp0_13[0]
    var_e8 = temp0_29[0]
    float var_e0_4 = temp0_28[0]
    var_f8 = temp0_14[0]
    float var_f4_4 = temp0_12[0]
    float var_f0_4 = temp0_15[0]
    float var_ec_4 = temp0_13[0]
    rax_5 = sub_140d8c6f0(arg1, &var_d8, &var_f8, &var_e8, 0, 0xffffffff, rsi.b, arg5, 0)
label_140da0d59:
    
    if (arg2 != rax_5)
        *arg2 = *rax_5
        *rax_5 = 0
        int64_t* rdi_1 = arg2[1]
        int64_t rcx_10 = rax_5[1]
        
        if (rcx_10 != rdi_1)
            rax_5[1] = 0
            arg2[1] = rcx_10
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_d0
    
    if (var_d0 != 0)
        var_d0[1].d -= 1
        
        if (var_d0[1].d == 1)
            (**var_d0)(var_d0)
            int32_t temp3_1 = *(var_d0 + 0xc)
            *(var_d0 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_d0 + 8))(var_d0, 1)
else
    if (rsi == 1)
        int32_t var_100_3 = arg7
        char var_108_3 = 0
        temp0_12[0] = temp0_12[0] + 0.5f
        char var_110_3 = 0
        temp0_13[0] = temp0_13[0] - 0.5f
        float var_e4_3 = temp0_12[0]
        float var_dc_3 = temp0_13[0]
        var_e8 = temp0_29[0]
        float var_e0_3 = temp0_28[0]
        var_f8 = temp0_14[0]
        float var_f4_3 = temp0_12[0]
        float var_f0_3 = temp0_15[0]
        float var_ec_3 = temp0_13[0]
        rax_5 = sub_140d8e730(arg1, &var_d8, &var_f8, &var_e8, 0, 1, rsi.b, arg5, 0)
        goto label_140da0d59
    
    if (rsi == 2)
        int32_t var_100_2 = arg7
        char var_108_2 = 0
        temp0_14[0] = temp0_14[0] + 0.5f
        char var_110_2 = 0
        temp0_15[0] = temp0_15[0] - 0.5f
        var_e8 = temp0_14[0]
        float var_e0_2 = temp0_15[0]
        float var_e4_2 = temp0_31[0]
        float var_dc_2 = temp0_30[0]
        var_f8 = temp0_14[0]
        float var_f4_2 = temp0_12[0]
        float var_f0_2 = temp0_15[0]
        float var_ec_2 = temp0_13[0]
        rax_5 = sub_140d8d1b0(arg1, &var_d8, &var_f8, &var_e8, 1, 0xffffffff, rsi.b, arg5, 0)
        goto label_140da0d59
    
    if (rsi == 3)
        int32_t var_100_1 = arg7
        char var_108_1 = 0
        temp0_14[0] = temp0_14[0] + 0.5f
        char var_110_1 = 0
        temp0_15[0] = temp0_15[0] - 0.5f
        var_f8 = temp0_14[0]
        float var_f4_1 = temp0_31[0]
        float var_f0_1 = temp0_15[0]
        float var_ec_1 = temp0_30[0]
        var_e8 = temp0_14[0]
        float var_e4_1 = temp0_12[0]
        float var_e0_1 = temp0_15[0]
        float var_dc_1 = temp0_13[0]
        rax_5 = sub_140d8dc70(arg1, &var_d8, &var_e8, &var_f8, rsi - 2, rsi - 2, rsi.b, arg5, 0)
        goto label_140da0d59
return arg2
