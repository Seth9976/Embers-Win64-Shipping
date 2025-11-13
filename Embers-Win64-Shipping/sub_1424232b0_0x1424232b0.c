// 函数: sub_1424232b0
// 地址: 0x1424232b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

float arg_10

if (*(arg2 + 0x30) == 0 || arg7 == 0)
    int16_t* i
    
    if (arg3[1].d == 0)
        i = &data_142d40450
    else
        i = *arg3
    
    int64_t rdi_2 = -1
    
    do
        rdi_2 += 1
    while (i[rdi_2] != 0)
    
    int32_t var_f4
    float var_f0
    uint128_t zmm6_1
    float zmm7_1
    float zmm8_1
    int32_t zmm9_1
    zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_142003d30(arg2, 0x30, &var_f4, &var_f0)
    
    if (not(var_f4 f!= zmm9_1))
        zmm6_1, zmm7_1, zmm8_1 = sub_142003d30(arg2, 0x41, &var_f4, &var_f0)
    
    int16_t* i_1 = nullptr
    
    if (*i != 0)
        uint128_t var_38_1 = zmm6_1
        
        while (i u< &i[sx.q(rdi_2.d)])
            int16_t rdi_3 = *i
            float var_f8
            uint128_t zmm9_2
            zmm7_1, zmm8_1, zmm9_2 = sub_142003d30(arg2, rdi_3, &arg_10, &var_f8)
            
            if (not(var_f8 f!= zmm9_2.d) && rdi_3 == 0xa)
                var_f8 = var_f0
            
            zmm6_1 = zmm9_2
            
            if (i_1 != 0)
                char rax_9
                rax_9, zmm7_1, zmm8_1 = sub_142003bb0(arg2, *i_1, rdi_3)
                zmm6_1 = _mm_cvtepi32_ps(zx.o(sx.d(rax_9)))
            
            int32_t rax_10 = iswspace(i[1])
            float zmm0_3
            
            if (rax_10 != 0 || i[1] == rax_10.w)
                zmm0_3 = arg_10
            else
                zmm0_3 = arg_10 f+ zmm6_1.d
                arg_10 = zmm0_3
            
            float zmm1_2 = var_f8
            zmm8_1 = zmm8_1 + zmm0_3
            
            if (not(zmm7_1 >= zmm1_2))
                zmm7_1 = zmm1_2
            
            bool cond:2_1 = i[1] != 0
            i_1 = i
            i = &i[1]
            
            if (not(cond:2_1))
                break
    
    *arg4 = zmm8_1
    *arg6 = zmm7_1
else
    int128_t zmm0 = data_14399f5e0
    int32_t r8 = *(arg2 + 0x13c)
    int32_t var_d8 = 0
    int16_t var_d4_1 = 0
    int128_t var_c8_1 = zmm0
    int64_t var_d0_1 = 0
    void var_b8
    sub_140d93a40(&var_b8, arg2, r8, arg2 + 0x140, &var_d8)
    int64_t* var_e8
    sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_e8)
    void* rax_2 = *(arg1 + 0x260)
    float zmm0_1
    
    if (*(rax_2 + 0x94) == 0)
        zmm0_1 = *(rax_2 + 0xa4)
    else
        zmm0_1 = 1f
    
    int64_t* rcx_3 = var_e8
    int128_t* var_108_1
    var_108_1.d = zmm0_1
    (*(*rcx_3 + 0x18))(rcx_3, &arg_10, arg3, &var_b8, var_108_1)
    *arg4 = arg_10
    *arg6 = arg5
    int64_t* var_e0
    
    if (var_e0 != 0)
        var_e0[1].d -= 1
        
        if (var_e0[1].d == 1)
            (**var_e0)(var_e0)
            int32_t temp2_1 = *(var_e0 + 0xc)
            *(var_e0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_e0 + 8))(var_e0, 1)
    
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp3_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_80 + 8))(var_80, 1)
