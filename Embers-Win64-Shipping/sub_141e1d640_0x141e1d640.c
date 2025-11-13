// 函数: sub_141e1d640
// 地址: 0x141e1d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
int64_t* rcx = arg1[3]

if (rcx != 0)
    (*(*rcx + 0x18))(rcx)
else if (arg2[8].b == 0)
    arg3, arg4 = sub_141e0ba30(&arg2[1])
else
    arg3, arg4 = sub_141e47c50(&arg2[1], arg4)

(*(*arg1 + 0xe0))(arg1, arg2)
uint32_t result = zx.d(data_143de5480)
zmm6 = arg3
int64_t rbp = data_143f395e8
int64_t rcx_3

if (result.b == 0)
    rcx_3 = 0
else
    bool cond:1_1 = GetCurrentThreadId() != data_143de5470
    result = zx.d(data_143de5480)
    rcx_3.b = cond:1_1

if (*(rbp + (rcx_3 << 2)) != 0)
    if (not(zmm6[0] <= 9.99999994e-09f) && arg1[5].d s> 0)
        arg3 = zx.o(0)
        
        if (*(arg1 + 0x39) == 2)
            int64_t rcx_9
            int64_t rbp_1
            
            if (not(0f f>= *(arg1 + 0x44)))
                rbp_1 = data_143f396e8
                
                if (result.b == 0)
                    rcx_9 = 0
                else
                    rcx_9.b = GetCurrentThreadId() != data_143de5470
            
            if (0f f>= *(arg1 + 0x44) || *(rbp_1 + (rcx_9 << 2)) != 0)
                result.b = 0
            else
                result.b = 1
            
            arg3 = arg1[8].d
            arg3[0] = arg3[0] f- *(arg1 + 0x3c)
            *(arg1 + 0x44) = arg3[0]
            
            if (result.b == 0)
                arg3 = zx.o(0)
            else
                arg3 = _mm_min_ss(arg3[0], zmm6[0])
        
        zmm6[0] = zmm6[0] - arg3[0]
        *(arg1 + 0x39) = 1
        *(arg1 + 0x3c) = 0
        arg1[8].d = zmm6[0]
    
    if (*(arg1 + 0x39) != 0)
        arg4.o = arg1[6].d
        arg3 = arg4.o
        arg3[0] = arg3[0] f+ *(arg1 + 0x3c)
        bool cond:4_1 = arg3[0] f< arg1[8].d
        *(arg1 + 0x3c) = arg3[0]
        
        if (cond:4_1)
            arg3 = *(arg1 + 0x44)
            arg4.o = _mm_min_ss(arg4.d, arg3[0])
            arg3[0] = arg3[0] f- arg4.d
            *(arg1 + 0x44) = arg3[0]
        else
            *(arg1 + 0x39) = 0
            *(arg1 + 0x3c) = 0
            *(arg1 + 0x44) = 0
    
    void* rcx_10 = *arg2
    zmm6 = *(rcx_10 + 0x10)
    float zmm10[0x4] = *(rcx_10 + 0x20)
    float zmm7[0x4] = *(rcx_10 + 0x30)
    void* rcx_11 = *(rcx_10 + 0xb8)
    float var_98[0x4] = zmm6
    float var_88_1[0x4] = zmm10
    float var_78_1[0x4] = zmm7
    float zmm0[0x4] = sub_141f3d600(rcx_11)
    uint64_t r8_1 = sx.q(arg1[5].d)
    
    if (r8_1.d s> 0 && not(zmm0[0] <= 0f))
        int64_t rcx_12 = arg1[4]
        uint64_t rdx_2 = r8_1 * 0x12
        float zmm2[0x4] = *(arg2[1] + 0x10)
        void* rax_5 = *(rcx_12 + (rdx_2 << 3) - 0x60)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        arg4.o = zmm2
        arg4.o = _mm_shuffle_ps(arg4.o, zmm2, 0x55)
        float temp0_5[0x4] = _mm_unpacklo_ps(zmm2, temp0_3[0].q)
        arg4.o = _mm_unpacklo_ps(arg4.o, 0)
        float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, arg4.q)
        arg4.o = zmm6
        arg4.o = _mm_shuffle_ps(arg4.o, zmm6, 0xd2)
        float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm7)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xc9), arg4.o)
        float temp0_16[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xd2), temp0_10), temp0_13)
        float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
        float temp0_18[0x4] = _mm_mul_ps(temp0_11, temp0_17)
        float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), arg4.o)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
        float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_9)
        zmm2 = *(rax_5 + 0x10)
        float zmm4_1[0x4] = *(rcx_12 + (rdx_2 << 3) - 0x90)
        arg4.o = zmm2
        arg4.o = _mm_shuffle_ps(arg4.o, zmm2, 0x55)
        float temp0_24[0x4] = _mm_mul_ps(temp0_21, temp0_10)
        arg4.o = _mm_unpacklo_ps(arg4.o, 0)
        float temp0_26[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_27[0x4] = _mm_sub_ps(temp0_24, temp0_20)
        float temp0_28[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_29[0x4] = _mm_add_ps(temp0_27, temp0_22)
        float temp0_31[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm2, temp0_28[0].q), arg4.q)
        arg4.o = zmm4_1
        float temp0_32[0x4] = __mulps_xmmps_memps(temp0_31, *(rcx_12 + (rdx_2 << 3) - 0x70))
        arg4.o = _mm_shuffle_ps(arg4.o, zmm4_1, 0xd2)
        float temp0_34[0x4] = _mm_add_ps(temp0_29, zmm10)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xc9), arg4.o)
        float temp0_40[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd2), temp0_26), temp0_37)
        float temp0_41[0x4] = _mm_add_ps(temp0_40, temp0_40)
        float temp0_42[0x4] = _mm_mul_ps(temp0_35, temp0_41)
        float temp0_43[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xc9)
        float temp0_44[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xd2)
        float temp0_45[0x4] = _mm_mul_ps(temp0_43, arg4.o)
        float temp0_46[0x4] = _mm_mul_ps(temp0_44, temp0_26)
        float temp0_47[0x4] = _mm_add_ps(temp0_42, temp0_32)
        float temp0_50[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_46, temp0_45), temp0_47), *(rcx_12 + (rdx_2 << 3) - 0x80))
        arg4.o = temp0_50
        arg4.d = arg4.d f- temp0_34[0]
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0x55)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
        temp0_51[0] = temp0_51[0] - temp0_52[0]
        float temp0_53[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
        temp0_53[0] = temp0_53[0] - temp0_54[0]
        arg4.d = arg4.d f* arg4.d
        zmm0[0] = zmm0[0] * zmm0[0]
        temp0_51[0] = temp0_51[0] * temp0_51[0]
        temp0_53[0] = temp0_53[0] * temp0_53[0]
        temp0_51[0] = temp0_51[0] f+ arg4.d
        temp0_51[0] = temp0_51[0] + temp0_53[0]
        
        if (not(temp0_51[0] <= zmm0[0]))
            if (*(arg1 + 0x39) == 1)
                *(arg1 + 0x39) = 0
                *(arg1 + 0x3c) = 0
                *(arg1 + 0x44) = 0
            
            arg1[6].d = 0
    
    int64_t rbp_2 = data_143f396d0
    int64_t rcx_13
    
    if (data_143de5480 == 0)
        rcx_13 = 0
    else
        uint32_t rax_6 = GetCurrentThreadId()
        r8_1 = zx.q(arg1[5].d)
        rcx_13.b = rax_6 != data_143de5470
    
    if (*(rbp_2 + (rcx_13 << 2)) != 0)
        arg1[6].d = 0
    
    char rax_7 = *(arg1 + 0x39)
    void* var_a0
    
    if (rax_7 == 1)
        int32_t rcx_14 = (r8_1 - 2).d
        int32_t rax_8 = 0
        var_a0 = &arg1[9]
        
        if (rcx_14 s>= 0)
            rax_8 = rcx_14
        
        (*(*arg1 + 0xe8))(arg1, arg2, sx.q((r8_1 - 1).d) * 0x90 + arg1[4], 
            sx.q(rax_8) * 0x90 + arg1[4], arg1[8].d[0], var_a0)
        *(arg1 + 0x39) = 2
        (*(*arg1 + 0xf0))(arg1, arg2, &arg1[9], *(arg1 + 0x3c), arg1[8].d[0], var_a0)
    else if (rax_7 == 2)
        (*(*arg1 + 0xf0))(arg1, arg2, &arg1[9], *(arg1 + 0x3c), arg1[8].d[0], var_a0)
    
    void* rax_12 = *arg2
    int64_t arg_8 = 0
    void* rcx_19 = *(*(rax_12 + 0xb8) + 0xa0)
    
    if (rcx_19 != 0)
        void* rax_13 = sub_141dc5a00(rcx_19)
        
        if (rax_13 != 0)
            arg_8 = *(rax_13 + 0x18)
    
    int128_t* rcx_24
    
    if (arg1[5].d s>= 2)
        char* rcx_25 = arg1[4]
        sub_140a4bff0(rcx_25, &rcx_25[0x90], 0x90)
        rcx_24 = arg1[4] + 0x90
    else
        int64_t rbp_4 = sx.q(arg1[5].d)
        int32_t rax_15 = (rbp_4 + 1).d
        arg1[5].d = rax_15
        
        if (rax_15 s> *(arg1 + 0x2c))
            sub_140dbc660(&arg1[4])
        
        rcx_24 = rbp_4 * 0x90 + arg1[4]
        *rcx_24 = data_143dbb0c0
        arg4.o = data_143dbb0d0
        rcx_24[1] = arg4.o
        rcx_24[2] = data_143dbb0e0
        __builtin_memset(&rcx_24[3], 0, 0x3b)
        __builtin_memset(&rcx_24[7], 0, 0x1c)
    
    var_a0.d = arg1[6].d[0]
    float var_a8
    var_a8.q = &arg_8
    result = Concurrency::details::_Concurrent_vector_base_v4::_Internal_copy(rcx_24, &arg2[1], 
        &arg2[4], &var_98, var_a8, var_a0.d)
else
    *(arg1 + 0x39) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x44) = 0
    
    if (*(arg1 + 0x2c) s< 0)
        result = sub_141e1c4b0(&arg1[4], 0)
    else
        int32_t i_1 = arg1[5].d
        
        if (i_1 != 0)
            void* rsi_2 = arg1[4] + 0x50
            int32_t i
            
            do
                int64_t rcx_4 = *(rsi_2 + 0x20)
                
                if (rcx_4 != 0)
                    result = sub_140a74f90(rcx_4)
                
                int64_t rcx_5 = *rsi_2
                
                if (rcx_5 != 0)
                    result = sub_140a74f90(rcx_5)
                
                int64_t rcx_6 = *(rsi_2 - 0x10)
                
                if (rcx_6 != 0)
                    result = sub_140a74f90(rcx_6)
                
                int64_t rcx_7 = *(rsi_2 - 0x20)
                
                if (rcx_7 != 0)
                    result = sub_140a74f90(rcx_7)
                
                rsi_2 += 0x90
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        arg1[5].d = 0

arg1[6].d = 0
arg1[7].b = 0
return result
