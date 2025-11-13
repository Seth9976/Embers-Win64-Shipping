// 函数: sub_140f6bf30
// 地址: 0x140f6bf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0
float zmm9_1[0x4]
zmm0, zmm9_1 = sub_140f01250(arg1 + 0x68)
float zmm0_1 = sub_140eec280(zmm0)

if (*(arg1 + 0x628) != 0)
    int64_t* rcx_1 = *(arg1 + 0x620)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
        int64_t* rcx_2
        
        if (*(arg1 + 0x628) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg1 + 0x620)
        
        (*(*rcx_2 + 0x48))(rcx_2)
        *(arg1 + 0x618) = zmm0_1

float zmm6 = *(arg1 + 0x618)
float zmm3[0x4]

if (sub_140f07390(*(arg1 + 0x48)) == 0 || *(arg1 + 0x58) == 0)
    float arg_8
    sub_140f030e0(*(arg1 + 0x48), &arg_8)
    void arg_20
    
    if (not(zmm6 <= 0f) && not(arg_8[0] <= zmm6))
        arg_8.q = *sub_140f058d0(*(arg1 + 0x48), &arg_20)
    zmm6 = arg_8
    zmm3 = arg3
else
    int128_t* rax_5 = sub_140eff690(arg1 + 0x660)
    char var_108_1 = 1
    int64_t var_100 = 0
    int32_t var_f8_1 = 0
    int128_t zmm0_2 = *rax_5
    int128_t var_128_1 = zmm0_2
    zmm0_2.d = zmm0_2.d f+ zmm0_1
    int32_t var_118 = zmm0_2.d
    float var_110_1 = var_128_1:8.d + zmm0_1
    float var_10c_1 = var_128_1:0xc.d
    int32_t var_114_1 = var_128_1:4.d.d
    sub_1405d9400()
    int64_t var_f0 = data_143cd6fd8
    int64_t* rcx_6 = data_143cd6fe0
    
    if (rcx_6 != 0)
        rcx_6[1].d += 1
    
    int32_t var_e0_1 = data_143cd6fe8
    char var_d8_1 = 1
    void* var_c0 = arg1 + 0x580
    int64_t* var_b8_1 = &var_f0
    void* var_a8_1 = arg1 + 0x630
    char var_a0_1 = *(arg1 + 0x648)
    char var_9f_1 = *(arg1 + 0x649)
    int64_t var_d0 = 0
    int32_t var_c8_1 = 0
    float* var_b0_1 = arg1 + 0x618
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    int32_t zmm0_3 = sub_1407473e0(&var_98, arg1 + 0x650)
    int32_t* var_88_1 = &var_118
    void* var_80_1 = arg1 + 0x6a0
    void* var_78_1 = arg1 + 0x688
    float arg_10
    zmm6 = sub_140f6c1f0(*(arg1 + 0x58), &arg_10, &var_c0, zmm9_1, zmm0_3, arg1 + 0x2c8)
    sub_140745b20(&var_98)
    sub_140745b20(&var_d0)
    
    if (rcx_6 != 0)
        rcx_6[1].d -= 1
        
        if (rcx_6[1].d == 1)
            (**rcx_6)(rcx_6)
            int32_t rsi_1 = *(rcx_6 + 0xc)
            *(rcx_6 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rcx_6 + 8))(rcx_6, zx.q(rsi_1))
    
    sub_140745b20(&var_100)
    
    if (not(zmm6 > 0f))
        zmm6 = arg_10
    
    zmm3 = arg4

float zmm2_1[0x4] = *(*(arg1 + 0x48) + 0x98)
float zmm1_2 = zmm2_1[0] + _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
temp0_4[0] = temp0_4[0] + temp0_5[0]
float temp0_6 = _mm_max_ss(zmm1_2, zmm6)
float temp0_7[0x4] = _mm_max_ss(temp0_4[0], zmm3[0])
*arg2 = temp0_6
arg2[1] = _mm_max_ss(temp0_7[0], zmm0)[0]
return arg2
