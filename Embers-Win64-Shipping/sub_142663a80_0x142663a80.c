// 函数: sub_142663a80
// 地址: 0x142663a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg2 + 0x38))(arg2) != 0)
    int64_t* rax_3 = (*(*arg2 + 0x38))(arg2)
    int64_t rdx = *rax_3
    (*(rdx + 0x150))(rax_3, rdx)
    (*(*arg1 + 0x150))(arg1)

int64_t r10 = sx.q((*(*arg2 + 0x28))(arg2))
int32_t rcx_5 = arg1[0x61].d
int32_t var_c8 = r10.d
int32_t var_a0

if (rcx_5 != *(arg1 + 0x334))
    void* rdx_1 = arg1[0x68]
    void* r9_1 = &arg1[0x67]
    
    if (rdx_1 != 0)
        r9_1 = rdx_1
    
    int32_t i = *(r9_1 + (((sx.q(arg1[0x69].d) - 1) & r10) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_2 = arg1[0x60]
        
        do
            int32_t* rcx_7 = sx.q(i) << 5
            
            if (*(rcx_7 + rdx_2) == r10.d)
                if (i != 0xffffffff)
                    int32_t rax_7 = data_143b51508
                    var_c8 = rax_7
                    data_143b51508 = rax_7 + 1
                    (*(*arg2 + 0x30))(arg2, zx.q(rax_7))
                    void* rax_11 = (*(*arg2 + 0x38))(arg2)
                    void* const rdi_1 = rax_11
                    
                    if (rax_11 == 0)
                        rdi_1 = nullptr
                    else
                        void* rax_12 = sub_142459c10()
                        void* rdx_4 = *(rdi_1 + 0x10)
                        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                        
                        if (rax_13.d s> *(rdx_4 + 0x38)
                                || *(*(rdx_4 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                            void* rax_15 = sub_142452380()
                            void* rdx_5 = *(rdi_1 + 0x10)
                            int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                            
                            if (rax_16.d s> *(rdx_5 + 0x38)
                                    || *(*(rdx_5 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                                rdi_1 = nullptr
                        else
                            rdi_1 = *(rdi_1 + 0xa0)
                    
                    if (rdi_1 != 0)
                        int64_t rax_18 = *arg2
                        int32_t var_90 = 0
                        int32_t var_88
                        (*(rax_18 + 0x10))(arg2, &var_88, &var_a0, &var_90)
                        void* rax_19 = *(rdi_1 + 0x130)
                        int128_t* rax_20
                        
                        if (rax_19 == 0)
                            rax_20 = &data_143dbb0c0
                        else
                            rax_20 = rax_19 + 0x1c0
                        
                        float zmm7[0x4] = *rax_20
                        int32_t var_84
                        int32_t var_80
                        float temp0_4[0x4] = __mulps_xmmps_memps(
                            _mm_unpacklo_ps(_mm_unpacklo_ps(var_88, var_80[0].q), 
                                _mm_unpacklo_ps(var_84, 0)[0].q), 
                            rax_20[2])
                        char var_a8_1 = 1
                        float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
                        float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                        float temp0_7[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                        float temp0_9[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
                        float temp0_12[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_6), temp0_9)
                        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
                        float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
                        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
                        float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
                        float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_4)
                        float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_5)
                        arg4 = var_a0
                        float temp0_20[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_15, temp0_6), temp0_18)
                        int32_t var_98
                        float temp0_21[0x4] = _mm_unpacklo_ps(arg4, var_98[0].q)
                        float temp0_22[0x4] = _mm_add_ps(temp0_20, temp0_17)
                        int32_t var_9c
                        float temp0_25[0x4] = __mulps_xmmps_memps(
                            _mm_unpacklo_ps(temp0_21, _mm_unpacklo_ps(var_9c, 0)[0].q), rax_20[2])
                        float temp0_26[0x4] = __addps_xmmps_memps(temp0_22, rax_20[1])
                        float temp0_28[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xc9), temp0_5)
                        float temp0_30[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xd2), temp0_6)
                        int96_t var_58_1 = temp0_26[0].12
                        float temp0_31[0x4] = _mm_sub_ps(temp0_30, temp0_28)
                        float temp0_32[0x4] = _mm_add_ps(temp0_31, temp0_31)
                        float temp0_33[0x4] = _mm_mul_ps(temp0_7, temp0_32)
                        float temp0_35[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd2), temp0_6)
                        float temp0_36[0x4] = _mm_add_ps(temp0_33, temp0_25)
                        float temp0_41[0x4] = __addps_xmmps_memps(
                            _mm_add_ps(
                                _mm_sub_ps(temp0_35, 
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xc9), temp0_5)), 
                                temp0_36), 
                            rax_20[1])
                        int96_t var_78_1 = temp0_41[0].12
                        float var_c0_1
                        
                        if (temp0_26[0] > temp0_41[0])
                            var_c0_1 = temp0_41[0]
                        else
                            var_c0_1 = temp0_26[0]
                        
                        float zmm0[0x4] = var_58_1:4.d
                        arg5 = var_78_1:4.d
                        
                        if (zmm0[0] > arg5[0])
                            float var_bc_2 = arg5[0]
                        else
                            float var_bc_1 = zmm0[0]
                        
                        arg3 = var_58_1:8.d
                        arg4 = var_78_1:8.d
                        
                        if (arg3[0] > arg4[0])
                            float var_b8_2 = arg4[0]
                        else
                            float var_b8_1 = arg3[0]
                        
                        if (temp0_26[0] < temp0_41[0])
                            float var_b4_2 = temp0_41[0]
                        else
                            float var_b4_1 = temp0_26[0]
                        
                        float var_b0_1
                        
                        if (zmm0[0] < arg5[0])
                            var_b0_1 = arg5[0]
                        else
                            var_b0_1 = zmm0[0]
                        
                        if (arg3[0] < arg4[0])
                            float var_ac_2 = arg4[0]
                        else
                            float var_ac_1 = arg3[0]
                        
                        if ((arg1[0x6d].b & 1) != 0)
                            int64_t r14_1 = sx.q(arg1[0x6c].d)
                            int32_t var_60_1 = var_a8_1.d
                            int32_t rax_22 = (r14_1 + 1).d
                            int64_t var_68_1 = var_b0_1.q
                            int32_t var_5c_1 = 2
                            arg1[0x6c].d = rax_22
                            
                            if (rax_22 s> *(arg1 + 0x364))
                                sub_1405c4e40(&arg1[0x6b])
                            
                            int64_t rax_23 = arg1[0x6b]
                            int64_t rdx_9 = r14_1 << 5
                            *(rdx_9 + rax_23) = var_c0_1.o
                            *(rdx_9 + rax_23 + 0x10) = var_68_1.o
                
                break
            
            i = *(rcx_7 + rdx_2 + 0x18)
        while (i != 0xffffffff)

int64_t rax_24 = *arg2
var_a0 = 0xffffffff
int32_t var_9c_1 = 0
int64_t* var_98_1 = arg2
sub_140d3a3a0(&var_a0, (*(rax_24 + 0x38))(arg2, arg5, arg3, arg4))
return sub_14263f060(&arg1[0x60], &var_c8, &var_a0)
