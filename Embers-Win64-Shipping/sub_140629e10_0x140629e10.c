// 函数: sub_140629e10
// 地址: 0x140629e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
*arg2 = 0
void* result

if (arg3 == 0)
    result = nullptr
else if (sub_140d23de0(arg3) == 0 || arg1 == 0)
    result = nullptr
else
    void* rax_3 = sub_1423de540(data_143f5b298, arg1, 0)
    
    if (rax_3 == 0)
        result = nullptr
    else
        int64_t* rsi_1 = *(arg3 + 0x10)
        void var_d8
        sub_142427eb0(&var_d8)
        void* rcx_4 = *(arg3 + 0x130)
        int64_t rbx_1 = 0
        char var_af
        char var_af_1 = var_af & 0xfb
        char var_b0_1 = 1
        void* var_c8_1 = arg3
        int64_t var_c0_1 = 0
        int64_t var_138
        int64_t var_128
        int64_t* rax_8
        float zmm1_1[0x4]
        
        if (rcx_4 == 0)
            int32_t var_120_1 = data_143dbb210
            rax_8 = &var_128
            var_128 = data_143dbb208
        else
            zmm1_1 = *(rcx_4 + 0x1c0)
            void* rbx_2 = rcx_4 + 0x180
            float var_a8[0x4] = zmm1_1
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1_1, *rbx_2, 4)) != 0)
                *rbx_2 = zmm1_1
                void var_98
                int32_t* rax_5 = sub_140adf5d0(&var_a8, &var_98)
                *(rbx_2 + 0x10) = *rax_5
                *(rbx_2 + 0x18) = rax_5[2]
                rcx_4 = *(arg3 + 0x130)
            
            rbx_1 = 0
            int32_t var_130_1 = *(rbx_2 + 0x18)
            rax_8 = &var_138
            var_138 = *(rbx_2 + 0x10)
        
        int32_t rax_10 = rax_8[1].d
        int64_t var_e8 = *rax_8
        int32_t var_e0_1 = rax_10
        float var_130_2
        
        if (rcx_4 == 0)
            float rax_11 = data_143dbb200
            var_138 = data_143dbb1f8.q
            var_130_2 = rax_11
        else
            zmm1_1 = *(rcx_4 + 0x1d0)
            var_138.d = zmm1_1[0]
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_130_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            var_138:4.d = temp0_3[0]
        
        zmm1_1 = zx.o(var_138)
        var_128:4.d = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)[0]
        float zmm0_1[0x4] = var_130_2
        zmm0_1[0] = zmm0_1[0] + 512f
        var_128.d = zmm1_1[0]
        var_138 = zmm1_1.q
        float var_120_2 = zmm0_1[0]
        void* result_1
        int128_t zmm6_1
        result_1, zmm6_1 = sub_1420efae0(rax_3, rsi_1, &var_128, &var_e8, &var_d8)
        
        if (result_1 == 0)
            result = nullptr
        else
            void* rax_13 = *(arg3 + 0x130)
            int128_t* r13_1 = &data_143dbb0c0
            int128_t* rdx_3 = rax_13 + 0x1c0
            
            if (rax_13 == 0)
                rdx_3 = &data_143dbb0c0
            
            int64_t* var_148_1
            var_148_1.b = 0
            sub_141dd7250(result_1, rdx_3, 0, nullptr, var_148_1.b)
            int64_t* rcx_8 = *(result_1 + 0x220)
            (*(*rcx_8 + 0x4e0))(rcx_8, 2)
            int64_t* rcx_9 = *(result_1 + 0x220)
            (*(*rcx_9 + 0x8a0))(rcx_9, *(*(arg3 + 0x220) + 0x440))
            int64_t* rcx_10 = *(arg3 + 0x220)
            int64_t var_118 = 0
            int32_t var_110_1 = 0
            (*(*rcx_10 + 0x680))(rcx_10, &var_118, 0)
            int64_t r15_1 = sx.q(var_110_1)
            int32_t rdi_2 = 0
            
            if (r15_1 s> 0)
                do
                    int64_t* rcx_11 = *(result_1 + 0x220)
                    (*(*rcx_11 + 0x550))(rcx_11, zx.q(rdi_2), *(var_118 + (rbx_1 << 3)))
                    rdi_2 += 1
                    rbx_1 += 1
                while (rbx_1 s< r15_1)
            
            int64_t* rcx_12 = *(arg3 + 0x220)
            var_138 = 0
            char rax_19
            int64_t rdx_9
            rax_19, rdx_9 = (*(*rcx_12 + 0x3e8))(rcx_12, var_138)
            
            if (rax_19 != 0)
                int64_t* rcx_13 = *(result_1 + 0x220)
                rdx_9.b = 1
                (*(*rcx_13 + 0x588))(rcx_13, rdx_9)
            
            void* rax_21 = *(arg3 + 0x130)
            float var_130_4
            float zmm1_2[0x4]
            
            if (rax_21 == 0)
                float rax_22 = data_143dbb200
                var_138 = data_143dbb1f8.q
                var_130_4 = rax_22
            else
                zmm1_2 = *(rax_21 + 0x1d0)
                var_138.d = zmm1_2[0]
                float temp0_6[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                var_130_4 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
                var_138:4.d = temp0_6[0]
            
            var_148_1.b = 0
            uint128_t zmm2_1 = zx.o(var_138)
            float zmm0_2[0x4] = zmm2_1
            zmm0_2[0] = zmm0_2[0] f+ *arg4
            zmm1_2 = zmm2_1
            float temp0_8[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            temp0_8[0] = temp0_8[0] f+ arg4[1]
            var_138 = zmm2_1.q
            float var_108 = zmm0_2[0]
            zmm0_2 = var_130_4
            zmm0_2[0] = zmm0_2[0] f+ arg4[2]
            float var_104_1 = temp0_8[0]
            float var_100_1 = zmm0_2[0]
            sub_141dd67f0(result_1, &var_108, 0, nullptr, var_148_1.b)
            void* rax_24 = *(result_1 + 0x130)
            
            if (rax_24 != 0)
                r13_1 = rax_24 + 0x1c0
            
            uint32_t var_88[0x4] = *r13_1
            int128_t var_78_1 = r13_1[1]
            uint32_t var_68_1[0x4] = r13_1[2]
            float (* rax_25)[0x4] = sub_140ade170(arg5, &var_138)
            float zmm2_2[0x4] = var_88
            uint32_t zmm5_1[0x4] = data_143cdbda0
            float temp0_9[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            float zmm3_1[0x4] = *rax_25
            var_148_1.b = 0
            float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b), temp0_9)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
            float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm3_1)
            float temp0_15[0x4] = __mulps_xmmps_memps(temp0_11, data_143cdbdd0)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
            float temp0_17[0x4] = _mm_add_ps(temp0_15, temp0_14)
            float temp0_19[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55))
            float temp0_21[0x4] = _mm_mul_ps(temp0_16, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa))
            float temp0_22[0x4] = __mulps_xmmps_memps(temp0_19, data_143cdbdc0)
            float temp0_23[0x4] = __mulps_xmmps_memps(temp0_21, data_143cdbdb0)
            float temp0_25[0x4] = _mm_add_ps(_mm_add_ps(temp0_17, temp0_22), temp0_23)
            float temp0_26[0x4] = _mm_mul_ps(temp0_25, temp0_25)
            float temp0_28[0x4] = _mm_add_ps(temp0_26, _mm_shuffle_ps(temp0_26, temp0_26, 0x4e))
            float temp0_30[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x39), temp0_28)
            float temp0_31[0x4] = _mm_rsqrt_ps(temp0_30)
            float temp0_32[0x4] = _mm_mul_ps(temp0_30, zmm5_1)
            float temp0_37[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_31, temp0_31), temp0_32)), 
                    temp0_31), 
                temp0_31)
            zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_37, temp0_37), temp0_32))
            float temp0_41[0x4] = _mm_cmpeq_ps(data_143cdbe10, temp0_30, 2)
            var_88 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_37), temp0_37), temp0_25)
                    ^ data_143cdbd90, 
                temp0_41) ^ data_143cdbd90
            sub_141dd7250(result_1, &var_88, 0, nullptr, var_148_1.b)
            int64_t rcx_17 = var_118
            int512_t zmm6_3
            zmm6_3.o = zmm6_1
            *arg2 = 1
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            result = result_1

__security_check_cookie(rax_1 ^ &var_168)
return result
