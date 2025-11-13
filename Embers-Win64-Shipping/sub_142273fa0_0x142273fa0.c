// 函数: sub_142273fa0
// 地址: 0x142273fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_78
sub_1424373a0(arg1, &var_78)
int32_t i_1
int32_t i = i_1
uint128_t zmm10 = arg5
uint128_t zmm6
uint128_t var_18 = zmm6

while (i s>= 0)
    int64_t* rdx_1 = var_78
    
    if (i s>= rdx_1[1].d)
        break
    
    int64_t* rax_1 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_1 != 0)
        int64_t* rcx_2 = rax_1[0x57]
        
        if (rcx_2 != 0)
            int32_t rdx_2 = arg3[1].d
            uint128_t zmm0 = zx.o(*arg3)
            uint64_t var_e8_1 = zmm0.q
            float var_d8
            int64_t* r8 = (*(*rcx_2 + 0x708))(zmm0, &var_d8)
            float var_d4
            float zmm2 = var_e8_1:4.d - var_d4
            float zmm1 = var_e8_1.d - var_d8
            int32_t var_d0
            zmm0.d = rdx_2.d f- var_d0
            zmm0.d = zmm0.d f* zmm0.d
            zmm2 = zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d
            
            if (arg4.d f>= zmm10.d)
                zmm0.d = arg4.d f* arg4.d
            else
                zmm0.d = zmm10.d f- arg4.d
                zmm1 = (_mm_sqrt_ss((zx.o(0)).d, zmm2) f- arg4.d) f/ zmm0.d
                
                if (zmm1 >= 0f)
                    zmm1 = _mm_min_ss(zmm1, 0x3f800000)
                else
                    zmm1 = (zx.o(0)).d
                
                zmm0.d = 1f - zmm1
                zmm0, r8 = powf(zmm0.d, arg6.d)
            
            int64_t* rax_6
            
            if (arg7 == 0 || rax_1[0x4a] == 0)
                int32_t var_90_1 = data_143dbb210
                uint64_t var_98
                rax_6 = &var_98
                var_98 = data_143dbb208
            else
                int64_t* rcx_3 = rax_1[0x57]
                int32_t var_c8
                r8 = (*(*rcx_3 + 0x708))(rcx_3, &var_c8)
                zmm0.d = (*arg3).d f- var_c8
                float var_c4
                zmm1 = *(arg3 + 4) - var_c4
                int32_t var_b8 = zmm0.d
                int32_t var_c0
                zmm0.d = arg3[1].d.d f- var_c0
                float var_b4_1 = zmm1
                int32_t var_b0_1 = zmm0.d
                void var_88
                int32_t* rax_4
                rax_4, zmm6 = sub_140adf3c0(&var_b8, &var_88)
                int32_t var_a0_1 = rax_4[2]
                int64_t var_a8
                rax_6 = &var_a8
                var_a8 = *rax_4
            
            int64_t* var_f8_1 = rax_6
            sub_1425694a0(rax_1, arg2, r8)
    
    i = i_1 + 1
    i_1 = i

return i
