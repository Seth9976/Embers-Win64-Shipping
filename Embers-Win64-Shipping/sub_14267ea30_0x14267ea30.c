// 函数: sub_14267ea30
// 地址: 0x14267ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
float* rdi_1 = *(arg1 + 8) + 0x30
void* r13 = arg1 + 0x20
float var_68[0x4] = arg7
(*(*arg2 + 0x260))(arg2)
TEB* gsbase

if (data_143f71978 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f71978)
    
    if (data_143f71978 == 0xffffffff)
        data_143f71968 = 0
        data_143f71970 = 0
        atexit(&data_142d123e0)
        _Init_thread_footer(&data_143f71978)

float var_48[0x4] = arg5
float var_58[0x4] = arg6
uint32_t var_168[0x4]
int32_t arg_8
uint64_t i_5
float zmm0_1[0x4]

if (*sub_142230430(r15, &arg_8, arg4) == 3)
    int64_t* rcx_3 = r15[0x1a]
    int64_t* var_118_1 = rcx_3
    void* rax_5 = &rcx_3[sx.q(r15[0x1b].d)]
    
    if (rcx_3 != rax_5)
        do
            int64_t* r15_1 = *rcx_3
            char* rax_7 = (*(*r15_1 + 0x58))(r15_1, &arg_8)
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = muls.dp.d(0x55555556, *(arg1 + 0x18))
            int64_t rax_8 = *(*r15_1 + 0x30)
            int32_t r12_3 = (temp3_1 u>> 0x1f) + temp3_1
            float zmm4_1[0x4]
            
            if ((*rax_7 & 2) == 0)
                int64_t rax_31 = rax_8(r15_1)
                int64_t rdx_19 = *r15_1
                int32_t rax_32 = (*(rdx_19 + 0x48))(r15_1, rdx_19)
                int64_t rdx_20 = *r15_1
                i_5.d = rax_32
                int64_t rax_33 = (*(rdx_20 + 0x50))(r15_1, rdx_20)
                int64_t r15_6 = rax_33
                int64_t var_1a8_2 = rax_33
                uint32_t rax_35 = i_5.d * 3
                int32_t rdx_22 = *(arg1 + 0x18) + rax_35
                
                if (rdx_22 s> *(arg1 + 0x1c))
                    sub_1405dadb0(arg1 + 0x10, rdx_22)
                
                int32_t rdx_24 = *(arg1 + 0x28) + rax_35
                
                if (rdx_24 s> *(arg1 + 0x2c))
                    sub_1405dadb0(r13, rdx_24)
                
                zmm0_1 = arg3[2]
                uint64_t i_8 = zx.q(i_5.d)
                arg4.o = zmm0_1
                arg4.o = _mm_shuffle_ps(arg4.o, zmm0_1, 0x55)
                arg4.d = arg4.d f* zmm0_1[0]
                int64_t var_198_2 = 0
                int32_t var_190_2 = 0
                arg4.d = arg4.d f* _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)[0]
                
                if (i_8.d != 0)
                    arg4.d f- 0f
                    uint64_t i_4 = i_8
                    i_5.d = r12_3 + 1
                    int32_t rax_37 = 1
                    
                    if (arg4.d f< 0f)
                        rax_37 = -1
                    
                    int32_t rax_38 = -1
                    
                    if (arg4.d f< 0f)
                        rax_38 = 1
                    
                    uint64_t i
                    
                    do
                        for (int64_t j = 0; j s< 3; )
                            bool cond:5_1 = rdi_1[6].b == 0
                            zmm4_1 = *arg3
                            uint64_t rax_39 = zx.q(*(r15_6 + (j << 2)))
                            arg4.o = zmm4_1
                            arg4.o = _mm_shuffle_ps(arg4.o, zmm4_1, 0xc9)
                            uint64_t rcx_27 = rax_39 * 3
                            float temp0_39[0x4] = __mulps_xmmps_memps(
                                _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(*(rax_31 + (rcx_27 << 2)), 
                                        (*(rax_31 + (rcx_27 << 2) + 8))[0].q), 
                                    _mm_unpacklo_ps(*(rax_31 + (rcx_27 << 2) + 4), 0)[0].q), 
                                arg3[2])
                            float temp0_40[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                            float temp0_41[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                            float temp0_43[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc9), temp0_40)
                            float temp0_46[0x4] = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd2), arg4.o), 
                                temp0_43)
                            float temp0_47[0x4] = _mm_add_ps(temp0_46, temp0_46)
                            float temp0_48[0x4] = _mm_mul_ps(temp0_41, temp0_47)
                            float temp0_50[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd2), arg4.o)
                            float temp0_51[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc9)
                            float temp0_52[0x4] = _mm_add_ps(temp0_48, temp0_39)
                            float temp0_56[0x4] = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(temp0_50, _mm_mul_ps(temp0_51, temp0_40)), 
                                    temp0_52), 
                                arg3[1])
                            var_168[0] = temp0_56[0]
                            float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
                            float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
                            var_168[1] = temp0_57[0]
                            var_168[2] = temp0_58[0]
                            
                            if (cond:5_1)
                                arg4.o = zx.o(var_168[0].q)
                                uint32_t rax_40 = var_168[2]
                                *(rdi_1 + 0xc) = (arg4.o).q
                                *rdi_1 = (arg4.o).q
                                rdi_1[5] = rax_40
                                rdi_1[2] = rax_40
                                rdi_1[6].b = 1
                            else
                                zmm0_1 = *rdi_1
                                arg4.o = temp0_57
                                arg4.o = __minss_xmmss_memss(arg4.d, rdi_1[1])
                                float temp0_60[0x4] = _mm_min_ss(zmm0_1[0], temp0_56[0])
                                rdi_1[1] = arg4.d
                                arg4.o = temp0_56
                                arg4.o = __maxss_xmmss_memss(arg4.d, rdi_1[3])
                                *rdi_1 = temp0_60[0]
                                float temp0_62[0x4] = _mm_min_ss(rdi_1[2][0], temp0_58[0])
                                rdi_1[3] = arg4.d
                                arg4.o = temp0_58
                                arg4.o = __maxss_xmmss_memss(arg4.d, rdi_1[5])
                                rdi_1[2] = temp0_62[0]
                                float temp0_64[0x4] = __maxss_xmmss_memss(temp0_57[0], rdi_1[4])
                                rdi_1[5] = arg4.d
                                rdi_1[4] = temp0_64[0]
                            
                            int64_t r15_7 = sx.q(*(arg1 + 0x18))
                            int32_t rax_41 = (r15_7 + 1).d
                            *(arg1 + 0x18) = rax_41
                            
                            if (rax_41 s> *(arg1 + 0x1c))
                                sub_1406105e0(arg1 + 0x10)
                            
                            *(*(arg1 + 0x10) + (r15_7 << 2)) = temp0_56[0]
                            int64_t r15_8 = sx.q(*(arg1 + 0x18))
                            int32_t rax_43 = (r15_8 + 1).d
                            *(arg1 + 0x18) = rax_43
                            
                            if (rax_43 s> *(arg1 + 0x1c))
                                sub_1406105e0(arg1 + 0x10)
                            
                            *(*(arg1 + 0x10) + (r15_8 << 2)) = temp0_57[0]
                            int64_t r15_9 = sx.q(*(arg1 + 0x18))
                            int32_t rax_45 = (r15_9 + 1).d
                            *(arg1 + 0x18) = rax_45
                            
                            if (rax_45 s> *(arg1 + 0x1c))
                                sub_1406105e0(arg1 + 0x10)
                            
                            j += 1
                            *(*(arg1 + 0x10) + (r15_9 << 2)) = temp0_58[0]
                            r15_6 = var_1a8_2
                        
                        int32_t rcx_31 = *(arg1 + 0x28)
                        r13 = arg1 + 0x20
                        r15_6 += 0xc
                        var_1a8_2 = r15_6
                        *(arg1 + 0x28) = rcx_31 + 1
                        
                        if (rcx_31 + 1 s> *(arg1 + 0x2c))
                            sub_1405a4cf0(r13)
                        
                        int32_t r12_6 = i_5.d
                        *(*r13 + (sx.q(rcx_31) << 2)) = rax_37 + r12_6
                        int32_t rcx_34 = *(arg1 + 0x28)
                        i_5.d = rcx_34
                        *(arg1 + 0x28) = rcx_34 + 1
                        
                        if (rcx_34 + 1 s> *(arg1 + 0x2c))
                            sub_1405a4cf0(r13)
                            rcx_34 = i_5.d
                        
                        *(*r13 + (sx.q(rcx_34) << 2)) = r12_6
                        int32_t rcx_37 = *(arg1 + 0x28)
                        i_5.d = rcx_37
                        *(arg1 + 0x28) = rcx_37 + 1
                        
                        if (rcx_37 + 1 s> *(arg1 + 0x2c))
                            sub_1405a4cf0(r13)
                            rcx_37 = i_5.d
                        
                        i = i_4
                        i_4 -= 1
                        i_5.d = r12_6 + 3
                        *(*r13 + (sx.q(rcx_37) << 2)) = rax_38 + r12_6
                    while (i != 1)
            else
                int64_t rax_9 = rax_8(r15_1)
                int64_t rdx_3 = *r15_1
                int32_t rax_10 = (*(rdx_3 + 0x48))(r15_1, rdx_3)
                int64_t rdx_4 = *r15_1
                i_5.d = rax_10
                int64_t rax_11 = (*(rdx_4 + 0x50))(r15_1, rdx_4)
                int64_t r15_2 = rax_11
                int64_t var_1a8_1 = rax_11
                uint32_t rax_13 = i_5.d * 3
                int32_t rdx_6 = *(arg1 + 0x18) + rax_13
                
                if (rdx_6 s> *(arg1 + 0x1c))
                    sub_1405dadb0(arg1 + 0x10, rdx_6)
                
                int32_t rdx_8 = *(arg1 + 0x28) + rax_13
                
                if (rdx_8 s> *(arg1 + 0x2c))
                    sub_1405dadb0(r13, rdx_8)
                
                zmm0_1 = arg3[2]
                uint64_t i_7 = zx.q(i_5.d)
                arg4.o = zmm0_1
                arg4.o = _mm_shuffle_ps(arg4.o, zmm0_1, 0x55)
                arg4.d = arg4.d f* zmm0_1[0]
                int64_t var_198_1 = 0
                int32_t var_190_1 = 0
                arg4.d = arg4.d f* _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)[0]
                
                if (i_7.d != 0)
                    arg4.d f- 0f
                    uint64_t i_3 = i_7
                    i_5.d = r12_3 + 1
                    int32_t rax_15 = 1
                    
                    if (arg4.d f< 0f)
                        rax_15 = -1
                    
                    int32_t rax_16 = -1
                    
                    if (arg4.d f< 0f)
                        rax_16 = 1
                    
                    uint64_t i_1
                    
                    do
                        for (int64_t j_1 = 0; j_1 s< 3; )
                            bool cond:6_1 = rdi_1[6].b == 0
                            zmm4_1 = *arg3
                            uint64_t rax_17 = zx.q(*(r15_2 + (j_1 << 1)))
                            arg4.o = zmm4_1
                            arg4.o = _mm_shuffle_ps(arg4.o, zmm4_1, 0xc9)
                            uint64_t rcx_10 = rax_17 * 3
                            float temp0_7[0x4] = __mulps_xmmps_memps(
                                _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(*(rax_9 + (rcx_10 << 2)), 
                                        (*(rax_9 + (rcx_10 << 2) + 8))[0].q), 
                                    _mm_unpacklo_ps(*(rax_9 + (rcx_10 << 2) + 4), 0)[0].q), 
                                arg3[2])
                            float temp0_8[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                            float temp0_9[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                            float temp0_11[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_8)
                            float temp0_14[0x4] = _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), arg4.o), 
                                temp0_11)
                            float temp0_15[0x4] = _mm_add_ps(temp0_14, temp0_14)
                            float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_15)
                            float temp0_18[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xd2), arg4.o)
                            float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
                            float temp0_20[0x4] = _mm_add_ps(temp0_16, temp0_7)
                            float temp0_24[0x4] = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(temp0_18, _mm_mul_ps(temp0_19, temp0_8)), 
                                    temp0_20), 
                                arg3[1])
                            int96_t var_178
                            var_178.d = temp0_24[0]
                            float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
                            float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)
                            var_178:4.d = temp0_25[0]
                            var_178:8.d = temp0_26[0]
                            
                            if (cond:6_1)
                                arg4.o = zx.o(var_178.q)
                                int32_t rax_18 = var_178:8.d
                                *(rdi_1 + 0xc) = (arg4.o).q
                                *rdi_1 = (arg4.o).q
                                rdi_1[5] = rax_18
                                rdi_1[2] = rax_18
                                rdi_1[6].b = 1
                            else
                                zmm0_1 = *rdi_1
                                arg4.o = temp0_25
                                arg4.o = __minss_xmmss_memss(arg4.d, rdi_1[1])
                                float temp0_28[0x4] = _mm_min_ss(zmm0_1[0], temp0_24[0])
                                rdi_1[1] = arg4.d
                                arg4.o = temp0_24
                                arg4.o = __maxss_xmmss_memss(arg4.d, rdi_1[3])
                                *rdi_1 = temp0_28[0]
                                float temp0_30[0x4] = _mm_min_ss(rdi_1[2][0], temp0_26[0])
                                rdi_1[3] = arg4.d
                                arg4.o = temp0_26
                                arg4.o = __maxss_xmmss_memss(arg4.d, rdi_1[5])
                                rdi_1[2] = temp0_30[0]
                                float temp0_32[0x4] = __maxss_xmmss_memss(temp0_25[0], rdi_1[4])
                                rdi_1[5] = arg4.d
                                rdi_1[4] = temp0_32[0]
                            
                            int64_t r15_3 = sx.q(*(arg1 + 0x18))
                            int32_t rax_19 = (r15_3 + 1).d
                            *(arg1 + 0x18) = rax_19
                            
                            if (rax_19 s> *(arg1 + 0x1c))
                                sub_1406105e0(arg1 + 0x10)
                            
                            *(*(arg1 + 0x10) + (r15_3 << 2)) = temp0_24[0]
                            int64_t r15_4 = sx.q(*(arg1 + 0x18))
                            int32_t rax_21 = (r15_4 + 1).d
                            *(arg1 + 0x18) = rax_21
                            
                            if (rax_21 s> *(arg1 + 0x1c))
                                sub_1406105e0(arg1 + 0x10)
                            
                            *(*(arg1 + 0x10) + (r15_4 << 2)) = temp0_25[0]
                            int64_t r15_5 = sx.q(*(arg1 + 0x18))
                            int32_t rax_23 = (r15_5 + 1).d
                            *(arg1 + 0x18) = rax_23
                            
                            if (rax_23 s> *(arg1 + 0x1c))
                                sub_1406105e0(arg1 + 0x10)
                            
                            j_1 += 1
                            *(*(arg1 + 0x10) + (r15_5 << 2)) = temp0_26[0]
                            r15_2 = var_1a8_1
                        
                        int32_t rcx_14 = *(arg1 + 0x28)
                        r13 = arg1 + 0x20
                        r15_2 += 6
                        var_1a8_1 = r15_2
                        *(arg1 + 0x28) = rcx_14 + 1
                        
                        if (rcx_14 + 1 s> *(arg1 + 0x2c))
                            sub_1405a4cf0(r13)
                        
                        int32_t r12_4 = i_5.d
                        *(*r13 + (sx.q(rcx_14) << 2)) = rax_15 + r12_4
                        int32_t rcx_17 = *(arg1 + 0x28)
                        i_5.d = rcx_17
                        *(arg1 + 0x28) = rcx_17 + 1
                        
                        if (rcx_17 + 1 s> *(arg1 + 0x2c))
                            sub_1405a4cf0(r13)
                            rcx_17 = i_5.d
                        
                        *(*r13 + (sx.q(rcx_17) << 2)) = r12_4
                        int32_t rcx_20 = *(arg1 + 0x28)
                        i_5.d = rcx_20
                        *(arg1 + 0x28) = rcx_20 + 1
                        
                        if (rcx_20 + 1 s> *(arg1 + 0x2c))
                            sub_1405a4cf0(r13)
                            rcx_20 = i_5.d
                        
                        i_1 = i_3
                        i_3 -= 1
                        i_5.d = r12_4 + 3
                        *(*r13 + (sx.q(rcx_20) << 2)) = rax_16 + r12_4
                    while (i_1 != 1)
            rcx_3 = &var_118_1[1]
            var_118_1 = rcx_3
        while (rcx_3 != rax_5)
        
        r15 = arg2

uint64_t i_6 = zx.q(r15[0xc].d)
void* r15_10 = r15[0xb]
float zmm14[0x4] = data_14399f720
arg7 = data_142fc92c0
float zmm9[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q), 
    _mm_unpacklo_ps(data_143dbb1fc, 0)[0].q)
float var_178_1[0x4] = zmm9

if (i_6.d s> 0)
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    i_5 = i_6
    uint64_t i_2
    
    do
        int32_t rcx_41 = data_143f71970.d
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = muls.dp.d(0x55555556, *(arg1 + 0x18))
        arg_8 = rcx_41
        data_143f71970.d = rcx_41 + 1
        
        if (rcx_41 + 1 s> data_143f71970:4.d)
            sub_1405a4cf0(&data_143f71968)
            rcx_41 = arg_8
        
        *(data_143f71968 + (sx.q(rcx_41) << 2)) = (temp1_1 u>> 0x1f) + temp1_1
        int64_t rax_55 = sub_140a54cc0(r15_10)
        int64_t rax_56
        
        if (rax_55 == 0)
            rax_56 = Concurrency::details::VirtualProcessor::GetExecutingContext(r15_10)
        
        int64_t* rax_58
        float (* rdx_38)[0x4]
        
        if (rax_55 != 0 || rax_56 == 0)
            rax_58 = sub_140a54cc0(r15_10)
            rdx_38 = arg3
        else
            arg6 = arg3[2]
            arg5 = *arg3
            float var_108[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(arg7, arg6), data_143f71890, 1)) == 0)
                float temp0_200[0x4] = _mm_shuffle_ps(arg5, arg5, 0xaa)
                float temp0_201[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
                float temp0_202[0x4] = _mm_shuffle_ps(arg5, arg5, 0xff)
                arg4.o = arg5
                arg4.o = _mm_shuffle_ps(arg4.o, arg5, 0x55)
                float temp0_205[0x4] = _mm_mul_ps(temp0_201, _mm_shuffle_ps(zmm14, zmm14, 0x1b))
                float temp0_206[0x4] = _mm_mul_ps(zmm9, arg6)
                float temp0_207[0x4] = _mm_mul_ps(zmm14, temp0_202)
                float temp0_209[0x4] =
                    _mm_add_ps(__mulps_xmmps_memps(temp0_205, data_143f71850), temp0_207)
                arg4.o = _mm_mul_ps(arg4.o, _mm_shuffle_ps(zmm14, zmm14, 0x4e))
                float temp0_213[0x4] = _mm_mul_ps(temp0_200, _mm_shuffle_ps(zmm14, zmm14, 0xb1))
                arg4.o = __mulps_xmmps_memps(arg4.o, data_143f71840)
                float temp0_215[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xc9)
                float temp0_216[0x4] = __mulps_xmmps_memps(temp0_213, data_143f71830)
                float temp0_218[0x4] = _mm_add_ps(_mm_add_ps(temp0_209, arg4.o), temp0_216)
                float temp0_219[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xd2)
                var_108 = temp0_218
                float temp0_220[0x4] = _mm_shuffle_ps(arg5, arg5, 0xd2)
                float temp0_221[0x4] = _mm_mul_ps(temp0_215, temp0_220)
                float temp0_222[0x4] = _mm_shuffle_ps(arg5, arg5, 0xc9)
                float temp0_224[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_219, temp0_222), temp0_221)
                float temp0_225[0x4] = _mm_add_ps(temp0_224, temp0_224)
                arg4.o = temp0_225
                float temp0_226[0x4] = _mm_mul_ps(temp0_202, temp0_225)
                arg4.o = _mm_shuffle_ps(arg4.o, temp0_225, 0xd2)
                float temp0_228[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xc9)
                arg4.o = _mm_mul_ps(arg4.o, temp0_222)
                float temp0_230[0x4] = _mm_mul_ps(temp0_228, temp0_220)
                float temp0_231[0x4] = _mm_add_ps(temp0_226, temp0_206)
                arg4.o = _mm_sub_ps(arg4.o, temp0_230)
                float temp0_233[0x4] = _mm_mul_ps(arg7, arg6)
                arg4.o = _mm_add_ps(arg4.o, temp0_231)
                float var_e8_2[0x4] = temp0_233
                arg4.o = __addps_xmmps_memps(arg4.o, arg3[1])
                int128_t var_f8_2 = arg4.o
                rax_58 = Concurrency::details::VirtualProcessor::GetExecutingContext(r15_10)
                rdx_38 = &var_108
            else
                zmm10 = data_143f717b0
                float temp0_71[0x4] = _mm_add_ps(arg5, arg5)
                float temp0_72[0x4] = _mm_shuffle_ps(arg5, arg5, 4)
                zmm12 = arg7
                arg7 = arg3[1]
                float temp0_73[0x4] = _mm_shuffle_ps(arg6, arg6, 0xc9)
                _mm_mul_ps(zmm12, arg6)
                float temp0_75[0x4] = _mm_mul_ps(temp0_71, arg5)
                arg4.o = temp0_71
                arg4.o = _mm_shuffle_ps(arg4.o, temp0_71, 0x29)
                arg4.o = _mm_mul_ps(arg4.o, temp0_72)
                float temp0_78[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x12)
                float temp0_81[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x1a), 
                    _mm_shuffle_ps(temp0_75, temp0_75, 1))
                float temp0_83[0x4] = _mm_mul_ps(temp0_78, _mm_shuffle_ps(arg5, arg5, 0xff))
                float temp0_84[0x4] = _mm_add_ps(temp0_83, arg4.o)
                arg4.o = _mm_sub_ps(arg4.o, temp0_83)
                float temp0_86[0x4] = _mm_add_ps(zmm14, zmm14)
                float temp0_87[0x4] = _mm_mul_ps(temp0_84, arg6)
                float temp0_88[0x4] = _mm_mul_ps(temp0_73, arg4.o)
                float temp0_89[0x4] = _mm_mul_ps(temp0_86, zmm14)
                arg4.o = zmm10
                arg4.o = _mm_sub_ps(arg4.o, temp0_81)
                arg4.o = _mm_mul_ps(arg4.o, arg6)
                arg4.o = __andps_xmmxud_memxud(arg4.o, data_143f717c0)
                float temp0_93[0x4] = _mm_shuffle_ps(temp0_88, arg4.o, 0x32)
                float temp0_95[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_87, arg4.o, 0), temp0_93, 0x82)
                float temp0_96[0x4] = _mm_shuffle_ps(temp0_87, arg4.o, 0x31)
                float temp0_98[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_88, arg4.o, 0x10), temp0_96, 0x88)
                float temp0_100[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_87, temp0_88, 0x12), arg4.o, 0xe8)
                arg4.o = temp0_86
                arg4.o = _mm_shuffle_ps(arg4.o, temp0_86, 0x29)
                zmm10[0].q = arg7 u>> 0x40
                float temp0_102[0x4] = _mm_shuffle_ps(arg7, zmm10, 0xc4)
                arg4.o = _mm_mul_ps(arg4.o, _mm_shuffle_ps(zmm14, zmm14, 4))
                float temp0_105[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
                float temp0_107[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0x12), temp0_105)
                zmm0_1 = data_142fc92c0
                float temp0_108[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                float temp0_109[0x4] = _mm_add_ps(temp0_107, arg4.o)
                arg4.o = _mm_sub_ps(arg4.o, temp0_107)
                float temp0_111[0x4] = _mm_mul_ps(temp0_109, zmm0_1)
                float temp0_112[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0x1a)
                float temp0_113[0x4] = _mm_mul_ps(temp0_108, arg4.o)
                arg4.o = zmm10
                arg4.o =
                    _mm_sub_ps(arg4.o, _mm_add_ps(temp0_112, _mm_shuffle_ps(temp0_89, temp0_89, 1)))
                arg4.o = __mulps_xmmps_memps(arg4.o, data_142fc92c0)
                arg4.o = __andps_xmmxud_memxud(arg4.o, data_143f717c0)
                float temp0_121[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_111, arg4.o, 0), 
                    _mm_shuffle_ps(temp0_113, arg4.o, 0x32), 0x82)
                float temp0_122[0x4] = _mm_shuffle_ps(temp0_113, arg4.o, 0x10)
                float temp0_123[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0x55)
                float temp0_125[0x4] =
                    _mm_shuffle_ps(temp0_122, _mm_shuffle_ps(temp0_111, arg4.o, 0x31), 0x88)
                float temp0_126[0x4] = _mm_mul_ps(temp0_123, temp0_98)
                float temp0_128[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_111, temp0_113, 0x12), arg4.o, 0xe8)
                arg4.o = temp0_121
                arg4.o = _mm_shuffle_ps(arg4.o, temp0_121, 0xaa)
                arg4.o = _mm_mul_ps(arg4.o, temp0_100)
                zmm10[0].q = var_178_1 u>> 0x40
                float temp0_131[0x4] = _mm_shuffle_ps(var_178_1, zmm10, 0xc4)
                float temp0_132[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0)
                float temp0_134[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_121, temp0_121, 0xff), temp0_102)
                float temp0_136[0x4] = _mm_add_ps(temp0_126, _mm_mul_ps(temp0_132, temp0_95))
                float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0), temp0_95)
                float temp0_139[0x4] = _mm_add_ps(temp0_136, arg4.o)
                arg4.o = temp0_125
                arg4.o = _mm_shuffle_ps(arg4.o, temp0_125, 0xaa)
                arg4.o = _mm_mul_ps(arg4.o, temp0_100)
                float temp0_142[0x4] = _mm_add_ps(temp0_139, temp0_134)
                float temp0_144[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0x55), temp0_98)
                float temp0_145[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xff)
                float var_158[0x4] = temp0_142
                float temp0_146[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0x55)
                float temp0_147[0x4] = _mm_add_ps(temp0_144, temp0_138)
                float temp0_148[0x4] = _mm_mul_ps(temp0_146, temp0_98)
                float temp0_149[0x4] = _mm_mul_ps(temp0_145, temp0_102)
                float temp0_150[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0)
                float temp0_151[0x4] = _mm_add_ps(temp0_147, arg4.o)
                float temp0_152[0x4] = _mm_mul_ps(temp0_150, temp0_95)
                arg4.o = temp0_128
                arg4.o = _mm_shuffle_ps(arg4.o, temp0_128, 0xaa)
                arg4.o = _mm_mul_ps(arg4.o, temp0_100)
                float temp0_155[0x4] = _mm_add_ps(temp0_151, temp0_149)
                float temp0_156[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xff)
                float temp0_157[0x4] = _mm_add_ps(temp0_148, temp0_152)
                float temp0_158[0x4] = _mm_mul_ps(temp0_156, temp0_102)
                float temp0_159[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0)
                int96_t var_148_1 = temp0_155[0].12
                float temp0_160[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0x55)
                float temp0_161[0x4] = _mm_add_ps(temp0_157, arg4.o)
                float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_98)
                arg4.o = temp0_131
                arg4.o = _mm_shuffle_ps(arg4.o, temp0_131, 0xaa)
                arg4.o = _mm_mul_ps(arg4.o, temp0_100)
                float temp0_165[0x4] = _mm_mul_ps(temp0_159, temp0_95)
                float temp0_166[0x4] = _mm_add_ps(temp0_161, temp0_158)
                float temp0_168[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xff), temp0_102)
                float temp0_169[0x4] = _mm_add_ps(temp0_162, temp0_165)
                int96_t var_138_1 = temp0_166[0].12
                float temp0_170[0x4] = _mm_add_ps(temp0_169, arg4.o)
                arg4.o = 0x322bcc77
                int96_t var_128_1 = _mm_add_ps(temp0_170, temp0_168)[0].12
                int512_t zmm8
                int64_t zmm13_1
                zmm8, zmm10, zmm12, zmm13_1, zmm14, zmm15 = sub_1407740e0(&var_158, arg4.o)
                float zmm2_1[0x4] = var_158[0]
                float zmm1 = var_158[1]
                zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), data_143f71880 ^ zmm10)
                    ^ data_143f71880
                zmm2_1[0] = zmm2_1[0] * zmm15[0]
                zmm1 = zmm1 * zmm15[0]
                uint32_t zmm0_2[0x4] = var_158[2]
                zmm0_2[0] = zmm0_2[0] f* zmm15[0]
                var_158[0] = zmm2_1[0]
                float temp0_174[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                var_158[2] = zmm0_2[0]
                zmm0_2 = var_148_1:8.d
                zmm0_2[0] = zmm0_2[0] f* temp0_174[0]
                var_158[1] = zmm1
                zmm1 = var_148_1:4.d * temp0_174[0]
                float zmm3_1 = var_148_1.d * temp0_174[0]
                zmm2_1 = var_138_1.d
                var_148_1:8.d = zmm0_2[0]
                zmm0_2 = var_138_1:8.d
                var_148_1:4.d = zmm1
                float temp0_175[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                zmm0_2[0] = zmm0_2[0] f* temp0_175[0]
                zmm2_1[0] = zmm2_1[0] * temp0_175[0]
                zmm1 = var_138_1:4.d * temp0_175[0]
                var_138_1:8.d = zmm0_2[0]
                var_148_1.d = zmm3_1
                var_138_1.d = zmm2_1[0]
                var_138_1:4.d = zmm1
                sub_14077e4a0(&var_168, &var_158)
                uint32_t zmm5_2[0x4] = var_168
                float zmm6[0x4] = data_143f71870
                arg4.o = zmm5_2
                zmm8.o = data_142fc92c0
                zmm9 = var_178_1
                arg4.o = _mm_mul_ps(arg4.o, zmm5_2)
                arg_8 = 0x322bcc77
                float var_e8_1[0x4] = zmm12
                arg4.o = _mm_add_ps(arg4.o, _mm_shuffle_ps(arg4.o, arg4.o, 0x4e))
                float temp0_180[0x4] = _mm_add_ps(_mm_shuffle_ps(arg4.o, arg4.o, 0x39), arg4.o)
                arg4.o = _mm_rsqrt_ps(temp0_180)
                float temp0_182[0x4] = _mm_mul_ps(temp0_180, zmm6)
                float temp0_187[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(arg4.o, arg4.o), temp0_182)), 
                        arg4.o), 
                    arg4.o)
                float temp0_190[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_187, temp0_187), temp0_182))
                float zmm0_3[0x4] = arg_8
                float temp0_192[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_3, zmm0_3, 0), temp0_180, 2)
                float temp0_194[0x4] = _mm_add_ps(_mm_mul_ps(temp0_190, temp0_187), temp0_187)
                float temp0_195[0x4] = _mm_unpacklo_ps(var_128_1:4.d, zmm13_1)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_194, zmm5_2) ^ data_143f71860, temp0_192)
                    ^ data_143f71860
                float var_f8_1[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_195[0].q)
                var_168 = zmm6
                var_108 = zmm6
                rax_58 = Concurrency::details::VirtualProcessor::GetExecutingContext(r15_10)
                rdx_38 = &var_108
        
        arg4, arg7 = sub_14267b990(rax_58, rdx_38, arg1 + 0x10, r13, arg4.o, rdi_1)
        r15_10 += 0xb0
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

sub_14267ca60(&arg2[5], arg1 + 0x10, r13, &data_143f71968, rdi_1, arg3, 0)
sub_142680550(&arg2[5], arg1 + 0x10, r13, &data_143f71968, rdi_1, arg3, 0)
int512_t zmm6_1
int512_t zmm7
int512_t zmm8_1
zmm6_1, zmm7, zmm8_1 = sub_14267f940(&arg2[5], arg1 + 0x10, r13, &data_143f71968, rdi_1, arg3, 0)
int32_t result = data_143f71970:4.d
zmm8_1.o = var_68
zmm7.o = var_58
zmm6_1.o = var_48
data_143f71970.d = 0

if (result s< 0 && result != 0)
    return sub_1405dadb0(&data_143f71968, 0)

return result
