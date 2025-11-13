// 函数: sub_142093f10
// 地址: 0x142093f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0xb0)
*arg2 = 0
arg2[1].d = 0
rcx.b = sub_140b5b8a0(rcx, 0) == 0

if ((*(arg1 + 0xb4) != 0 | rcx.b) == 0)
    return arg2

int64_t* rbx_1 = *(arg3 + 0x20)

if (rbx_1 != 0)
    void* rax_2 = (*(*rbx_1 + 0x260))(rbx_1)
    void* rbx_2 = *(arg3 + 0x20)
    
    if (rbx_2 != 0)
        int64_t var_58
        int64_t* rax_4
        float zmm6_1[0x4]
        rax_4, zmm6_1 = sub_14208af70(*(rbx_2 + 0x20), sub_140b63b70(arg1 + 0xb0, &var_58))
        int64_t rcx_4 = var_58
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        if (rax_2 != 0 && rax_4 != 0 && (*(*rax_4 + 0x260))(rax_4) != 0)
            void* rax_8 = (*(*rax_4 + 0x260))(rax_4)
            void* rbx_5 = rax_8
            
            if (rax_8 != 0)
                void* rax_9 = sub_14256a090()
                void* rcx_7 = *(rbx_5 + 0x10)
                int64_t rdx_2 = sx.q(*(rax_9 + 0x38))
                
                if (rdx_2.d s<= *(rcx_7 + 0x38)
                        && *(*(rcx_7 + 0x30) + (rdx_2 << 3)) == rax_9 + 0x30)
                    void* rax_11 = *(rbx_5 + 0x250)
                    
                    if (rax_11 != 0)
                        rbx_5 = rax_11
            
            void* rax_12 = *(rax_2 + 0x130)
            float rcx_9 = data_143dbb200
            uint128_t zmm2_1 = zx.o(data_143dbb1f8.q)
            float var_50_1
            float zmm1_1[0x4]
            
            if (rax_12 == 0)
                var_58 = zmm2_1.q
                var_50_1 = rcx_9
            else
                zmm1_1 = *(rax_12 + 0x1d0)
                var_58.d = zmm1_1[0]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_50_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                var_58:4.d = temp0_1[0]
            
            void* rax_14 = *(rbx_5 + 0x130)
            int64_t var_68_1 = var_58
            float var_50_2
            
            if (rax_14 == 0)
                var_58 = zmm2_1.q
                var_50_2 = rcx_9
            else
                zmm1_1 = *(rax_14 + 0x1d0)
                var_58.d = zmm1_1[0]
                float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_50_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                var_58:4.d = temp0_3[0]
            
            float zmm0_1[0x4] = zx.o(var_58)
            zmm0_1[0] = zmm0_1[0] f- var_68_1.d
            var_58 = zmm0_1.q
            float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            temp0_5[0] = temp0_5[0] f- var_68_1:4.d
            float zmm8[0x4] = var_50_2
            zmm8[0] = zmm8[0] - var_50_1
            zmm2_1.d = zmm0_1.d f* zmm0_1[0]
            temp0_5[0] = temp0_5[0] * temp0_5[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm2_1.d = zmm2_1.d f+ temp0_5[0]
            zmm2_1.d = zmm2_1.d f+ zmm8[0]
            float var_78
            
            if (zmm2_1.d f!= 1f)
                if (zmm2_1.d f>= 9.99999994e-09f)
                    float zmm3[0x4] = zx.o(0)
                    zmm3[0] = zmm2_1[0]
                    float temp0_6[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    temp0_6[0] = temp0_6[0] * temp0_6[0]
                    zmm3[0] = zmm3[0] * temp0_6[0]
                    zmm2_1.d = 0.5f - zmm3[0]
                    temp0_6[0] = temp0_6[0] f* zmm2_1.d
                    temp0_6[0] = temp0_6[0] + temp0_6[0]
                    temp0_6[0] = temp0_6[0] * temp0_6[0]
                    zmm3[0] = zmm3[0] * temp0_6[0]
                    temp0_6[0] = temp0_6[0] * (0.5f - zmm3[0])
                    temp0_6[0] = temp0_6[0] + temp0_6[0]
                    zmm1_1 = temp0_6
                    temp0_6[0] = temp0_6[0] * zmm0_1[0]
                    temp0_6[0] = temp0_6[0] * zmm8[0]
                    var_78 = temp0_6[0]
                    zmm1_1[0] = zmm1_1[0] * temp0_5[0]
                    float var_70_3 = temp0_6[0]
                else
                    zmm1_1 = data_143dbb1fc
                    var_78 = data_143dbb1f8[0]
                    float var_70_2 = data_143dbb200[0]
                
                float var_74_2 = zmm1_1[0]
            else
                var_78 = zmm0_1[0]
                float var_74_1 = temp0_5[0]
                float var_70_1 = zmm8[0]
            
            int32_t* rax_16
            int512_t zmm6_2
            rax_16, zmm6_2 = sub_140adf3c0(&var_78, &var_58)
            zmm6_2.o = zmm6_1
            int32_t rax_17 = rax_16[2]
            *arg2 = *rax_16
            arg2[1].d = rax_17

return arg2
