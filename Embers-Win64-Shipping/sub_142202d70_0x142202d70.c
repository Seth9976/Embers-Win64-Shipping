// 函数: sub_142202d70
// 地址: 0x142202d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20 = arg4[0]
void* rcx = arg2[3]
float zmm6[0x4] = arg4
uint64_t result = *(rcx + 0xa8)
uint64_t result_1 = result

if (result == 0)
    result = sub_141ee69e0(rcx)
    result_1 = result

if (arg2[0x23].d != 0 && ((arg1[0x31].b & 1) == 0 || result == 0 || (*(result + 0x11c) & 8) == 0))
    void* rbx_1 = arg2[5]
    int64_t rax_1 = *(arg2[3] + 0xa0)
    float rax_3 = (*(*arg2 + 0x150))(arg2)
    int64_t rdx = *arg2
    char rax_4 = (*(rdx + 0x158))(arg2, rdx)
    float (* rdi_1)[0x4] = arg2[3]
    int64_t rax_6
    bool cond:0_1
    
    if ((*(rdi_1 + 0x433) & 8) == 0 && data_143de5480 != 0)
        cond:0_1 = GetCurrentThreadId() == data_143de5470
        rax_6 = 0x620
    
    if ((*(rdi_1 + 0x433) & 8) != 0 || data_143de5480 == 0 || cond:0_1 != 0)
        rax_6 = 0x1c0
    
    int64_t rdx_1 = *(rbx_1 + 0x58)
    char* r13_1 = nullptr
    int96_t var_1e8_1 = (*(rax_6 + rdi_1 + 0x20))[0].12
    
    if (rdx_1 != 0)
        char* rax_7 = sub_1421b7c40(arg2, rdx_1)
        r13_1 = rax_7
        
        if (rax_7 != 0 && (*rax_7 & 6) == 0)
            r13_1 = nullptr
    
    char* rax_8
    int128_t* rdx_3
    rax_8, rdx_3 = sub_1421b7c40(arg2, arg1)
    uint64_t result_4 = 0
    void* rax_9 = arg2[3]
    uint64_t result_2 = 0
    int64_t rdi_2 = sx.q(*(rax_9 + 0x5c8))
    int64_t rsi_1 = *(rax_9 + 0x5c0)
    int32_t var_220_1 = rdi_2.d
    
    if (rdi_2.d != 0)
        sub_140638750(&result_2, rdi_2.d, 0)
        result_4 = result_2
        memcpy(result_4, rsi_1, (rdi_2 << 2).d)
    
    void* rsi_2 = rax_9
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int64_t rax_10 = sx.q(*(rsi_2 + 0x5b8))
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    int32_t var_2f0_1 = rax_10.d
    float var_2a8[0x4]
    uint128_t var_278
    float var_270
    float zmm0[0x4]
    uint128_t zmm1
    
    if (sub_14243ade0(result_1) == 0)
    label_14220327b:
        int32_t rax_27 = arg2[0x23].d
        zmm13 = *(arg1 + 0x18c)
        int64_t rdx_7 = arg2[0x1e]
        int64_t rcx_14 = arg2[0x1f]
        int32_t r8_6 = *(arg2 + 0x114)
        zmm13[0] = zmm13[0] * zmm13[0]
        int64_t rax_29 = sx.q(rax_27 - 1)
        int64_t var_2c0_1 = rdx_7
        int32_t var_320_1 = r8_6
        float var_284_1 = zmm13[0]
        int64_t var_2e0_1 = rcx_14
        int64_t var_280_1 = rax_29
        
        if (rax_27 - 1 s>= 0)
            int64_t r15_2 = sx.q(rax_3)
            zmm9 = 0x80000000
            zmm14 = 0x3f800000
            bool cond:2_1
            
            do
                uint32_t rax_30 = zx.d(*(rcx_14 + (rax_29 << 1)))
                int16_t var_288_1 = rax_30.w
                float (* rdi_5)[0x4] = zx.q(rax_30 * r8_6) + rdx_7
                float rax_32 = (*rdi_5)[0x17]
                
                if (not(test_bit(rax_32, 0x1a)) && (rax_32 & 0x3c000000) == 0)
                    int32_t* rsi_5 = zx.q(arg3) + rdi_5
                    
                    if (not(test_bit(rax_32, 0x1e)))
                        goto label_142203342
                    
                    if (not((*rdi_5)[3][0] f< rsi_5[7]))
                        (*rdi_5)[0x17] = rax_32 & 0xbfffffff
                    label_142203342:
                        zmm12 = zmm6
                        zmm12[0] = zmm12[0] * (*rdi_5)[0xe]
                        zmm11 = zmm6
                        zmm11[0] = zmm11[0] * (*rdi_5)[0xd]
                        zmm10 = zmm6
                        int64_t rax_34 = *(rbx_1 + 0x30)
                        zmm10[0] = zmm10[0] * rdi_5[3][0]
                        zmm12[0] = zmm12[0] + (*rdi_5)[6]
                        bool cond:4_1 = (*(rax_34 + 0x59) & 1) == 0
                        zmm11[0] = zmm11[0] + (*rdi_5)[5]
                        zmm10[0] = zmm10[0] + rdi_5[1][0]
                        uint64_t var_310
                        float var_308_1
                        float zmm2[0x4]
                        
                        if (cond:4_1)
                            zmm1 = zx.o(*rdi_5)
                            float rax_37 = (*rdi_5)[2]
                            zmm0 = zmm1
                            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                            var_310 = zmm1.q
                            zmm1 = zmm0
                            zmm0 = var_310.d
                            var_308_1 = rax_37
                            zmm2 = var_308_1
                        else
                            void* rax_36 = rdi_1 + rax_6
                            arg4 = __mulps_xmmps_memps(
                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm10, zmm12[0].q), 
                                    _mm_unpacklo_ps(zmm11, 0)[0].q), 
                                *(rax_36 + 0x20))
                            zmm8 = *rax_36
                            zmm2 = (*rdi_5)[1]
                            zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                            zmm1 = _mm_shuffle_ps(arg4, arg4, 0xd2)
                            zmm0 = _mm_shuffle_ps(arg4, arg4, 0xc9)
                            zmm1 = _mm_mul_ps(zmm1, zmm7)
                            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
                            zmm1 = _mm_sub_ps(zmm1, _mm_mul_ps(zmm0, zmm8))
                            zmm1 = _mm_add_ps(zmm1, zmm1)
                            zmm10 = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
                            zmm0 = _mm_mul_ps(zmm1, zmm6)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), zmm8)
                            arg4 = _mm_add_ps(arg4, zmm0)
                            zmm10 = _mm_mul_ps(zmm10, zmm7)
                            zmm0 = (*rdi_5)[2]
                            zmm10 = _mm_sub_ps(zmm10, zmm1)
                            zmm2 = _mm_unpacklo_ps(zmm2, 0)
                            zmm10 = _mm_add_ps(zmm10, arg4)
                            arg4 = __mulps_xmmps_memps(
                                _mm_unpacklo_ps(_mm_unpacklo_ps(*rdi_5, zmm0[0].q), zmm2[0].q), 
                                *(rax_36 + 0x20))
                            zmm10 = __addps_xmmps_memps(zmm10, *(rax_36 + 0x10))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc9), zmm8)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd2), zmm7)
                            zmm11 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                            zmm12 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                            zmm1 = _mm_sub_ps(zmm1, zmm0)
                            zmm1 = _mm_add_ps(zmm1, zmm1)
                            arg4 = _mm_add_ps(arg4, _mm_mul_ps(zmm1, zmm6))
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), zmm8)
                            zmm0 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm0, zmm7), zmm1), arg4), 
                                *(rax_36 + 0x10))
                            var_310.d = zmm0[0]
                            zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                            zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                            var_310:4.d = zmm1.d
                            var_308_1 = zmm2[0]
                        
                        zmm11[0] = zmm11[0] f- zmm1.d
                        zmm12[0] = zmm12[0] - zmm2[0]
                        zmm10[0] = zmm10[0] - zmm0[0]
                        zmm11[0] = zmm11[0] * zmm11[0]
                        zmm1.d = zmm12.d f* zmm12[0]
                        zmm10[0] = zmm10[0] * zmm10[0]
                        zmm11[0] = zmm11[0] + zmm10[0]
                        zmm11[0] = zmm11[0] f+ zmm1.d
                        float var_330
                        float var_32c_1
                        float var_328_1
                        float arg_10
                        float zmm4_1[0x4]
                        float zmm5_1[0x4]
                        
                        if (not(zmm11[0] != zmm14[0]))
                            var_330 = zmm10[0]
                            var_32c_1 = zmm11[0]
                            var_328_1 = zmm12[0]
                        else if (zmm11[0] >= 9.99999994e-09f)
                            zmm4_1 = 0x3f000000
                            arg4 = zx.o(0)
                            arg4[0] = zmm11[0]
                            zmm5_1 = _mm_rsqrt_ss(arg4[0], arg4[0])
                            arg4[0] = arg4[0] * 0.5f
                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                            arg4[0] = arg4[0] * zmm5_1[0]
                            zmm1.d = 0.5f - arg4[0]
                            zmm5_1[0] = zmm5_1[0] f* zmm1.d
                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                            arg4[0] = arg4[0] * zmm5_1[0]
                            zmm4_1[0] = 0.5f - arg4[0]
                            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                            arg_10 = zmm5_1[0]
                            zmm1.d = zmm5_1.d f* zmm12[0]
                            zmm5_1[0] = zmm5_1[0] * zmm11[0]
                            zmm5_1[0] = zmm5_1[0] * zmm10[0]
                            var_32c_1 = zmm5_1[0]
                            var_328_1 = zmm1.d
                            var_330 = zmm5_1[0]
                        else
                            zmm1 = data_143dbb1fc
                            var_330 = data_143dbb1f8[0]
                            var_328_1 = data_143dbb200[0]
                            var_32c_1 = zmm1.d
                        
                        void* rbx_2 = *(rbx_1 + 0x48)
                        zmm6 = var_1e8_1:8.d
                        zmm7 = var_1e8_1:4.d
                        zmm8 = var_1e8_1.d
                        zmm6[0] = zmm6[0] * (*rdi_5)[0x16]
                        int64_t var_300 = 0
                        zmm7[0] = zmm7[0] * (*rdi_5)[0x15]
                        int32_t var_2f8_1 = 0
                        zmm8[0] = zmm8[0] * rdi_5[5][0]
                        
                        if (rbx_2 != 0)
                            void* rax_38 = sub_142559b40()
                            void* rdx_8 = *(rbx_2 + 0x10)
                            int64_t rax_39 = sx.q(*(rax_38 + 0x38))
                            
                            if (rax_39.d s<= *(rdx_8 + 0x38)
                                    && *(*(rdx_8 + 0x30) + (rax_39 << 3)) == rax_38 + 0x30)
                                void* rcx_17 = *(rbx_2 + 0x30)
                                
                                if (rcx_17 != 0)
                                    int128_t* rax_41 = sub_1423633d0(rcx_17, &var_2a8)
                                    var_300 = *(rax_41 + 0xc)
                                    int32_t* rax_42
                                    
                                    if ((*(rbx_2 + 0x94) & 4) == 0)
                                        int32_t var_1f0_1 = *(rax_41 + 0x14)
                                        int64_t var_1f8
                                        rax_42 = &var_1f8
                                        var_1f8 = *(rax_41 + 0xc)
                                    else
                                        zmm2 = *(rax_41 + 0x14)
                                        int32_t var_218
                                        rax_42 = &var_218
                                        zmm1 = var_300:4.d
                                        int64_t zmm0_1 = var_300.d
                                        zmm2[0] = zmm2[0] * zmm6[0]
                                        zmm1.d = zmm1.d f* zmm7[0]
                                        zmm0_1.d = zmm0_1.d f* zmm8[0]
                                        int32_t var_214_1 = zmm1.d
                                        float var_210_1 = zmm2[0]
                                        var_218 = zmm0_1.d
                                    
                                    int32_t rax_44 = rax_42[2]
                                    var_300 = *rax_42
                                    int32_t var_2f8_3 = rax_44
                        
                        void var_1b8
                        memset(&var_1b8, 0, 0x88)
                        arg4 = var_328_1
                        zmm1.d = zmm14.d f/ arg1[0x29].d
                        int32_t var_1b0_1 = 0x3f800000
                        int64_t var_190_1 = 0
                        int32_t var_188_1 = 0
                        zmm2 = var_32c_1
                        zmm0 = var_330
                        arg4[0] = arg4[0] * zmm6[0]
                        zmm2[0] = zmm2[0] * zmm7[0]
                        arg4[0] = arg4[0] f* zmm1.d
                        zmm2[0] = zmm2[0] f* zmm1.d
                        zmm0[0] = zmm0[0] * zmm8[0]
                        arg4[0] = arg4[0] + zmm12[0]
                        zmm2[0] = zmm2[0] + zmm11[0]
                        zmm1.d = zmm1.d f* zmm0[0]
                        float var_2b0_1 = arg4[0]
                        float var_2b4_1 = zmm2[0]
                        zmm1.d = zmm1.d f+ zmm10[0]
                        int32_t var_2b8 = zmm1.d
                        char rax_45 = sub_14243ade0(result_1)
                        
                        if (rax_45 == 1)
                            zmm0 = 0x4a000000
                        
                        if (rax_45 != 1 || 2097152f f<= *(arg1 + 0x18c))
                        label_14220381d:
                            int64_t rax_49 = 0
                            
                            if ((arg1[0x31].b & 4) != 0)
                                rax_49 = rax_1
                            
                            if ((*(*arg1 + 0x348))(zmm0, arg2, rdi_5, &var_1b8, arg4, &var_2b8, 
                                    &var_310, &var_300, rax_4) != 0)
                                void var_150
                                int64_t rax_51 = sub_140d3c6e0(&var_150)
                                
                                if (rax_51 == 0)
                                label_142203929:
                                    zmm13 = var_188_1
                                    zmm14 = var_190_1:4.d
                                    zmm15 = var_190_1.d
                                    
                                    if ((*(arg1 + 0x14c) & 2) == 0)
                                        rsi_5[6] -= 1
                                    else
                                        if (_mm_and_ps(zmm15, 0x7fffffff)[0] > 9.99999975e-05f)
                                            rax_51.b = 0
                                        else if (_mm_and_ps(zmm14, 0x7fffffff)[0] > 9.99999975e-05f)
                                            rax_51.b = 0
                                        else if (_mm_and_ps(zmm13, 0x7fffffff)[0] > 9.99999975e-05f)
                                            rax_51.b = 0
                                        else
                                            rax_51.b = 1
                                        
                                        if (rax_51.b != 0)
                                            rsi_5[6] -= 1
                                        else
                                            zmm0 = _mm_and_ps(zmm13, 0x7fffffff)
                                            zmm0[0] = zmm0[0] f+ arg1[0x2a].d
                                            
                                            if (not(zmm0[0] < 1f))
                                                rsi_5[6] -= 1
                                    
                                    goto label_1422039a4
                                
                                if ((*(arg1 + 0x14c) & 1) == 0)
                                    arg_10.b = 1
                                else
                                    rax_51 = sub_140d3c6e0(&var_150)
                                    
                                    if (rax_51 == 0)
                                        arg_10.b = 1
                                    else
                                        void* rax_52 = sub_14255d000()
                                        void* rdx_11 = *(rax_51 + 0x10)
                                        rax_51 = sx.q(*(rax_52 + 0x38))
                                        
                                        if (rax_51.d s> *(rdx_11 + 0x38))
                                            arg_10.b = 1
                                        else
                                            arg_10.b = 0
                                            
                                            if (*(*(rdx_11 + 0x30) + (rax_51 << 3))
                                                    != rax_52 + 0x30)
                                                arg_10.b = 1
                                
                                void* rax_53
                                int64_t rcx_26
                                
                                if ((arg1[0x22].b & 2) != 0)
                                    rax_53 = sub_1425b9c10()
                                    void* rax_54 = sub_140d3c6e0(&var_150)
                                    rcx_26 = sx.q(*(rax_53 + 0x38))
                                    rax_51 = *(rax_54 + 0x10)
                                
                                if ((arg1[0x22].b & 2) == 0 || rcx_26.d s> *(rax_51 + 0x38)
                                        || *(*(rax_51 + 0x30) + (rcx_26 << 3)) != rax_53 + 0x30)
                                    if (arg_10.b != 0)
                                        goto label_142203929
                                    
                                    zmm13 = var_188_1
                                    zmm14 = var_190_1:4.d
                                    zmm15 = var_190_1.d
                                label_1422039a4:
                                    void* rbx_6 = rbx_1
                                    int64_t var_1a8
                                    float var_1a0
                                    
                                    if (rsi_5[6] s<= 0)
                                        rdi_5[1][0].q = var_1a8
                                        (*rdi_5)[6] = var_1a0
                                        
                                        if ((*(*(rbx_6 + 0x30) + 0x59) & 1) != 0)
                                            zmm8 = _mm_unpacklo_ps(
                                                _mm_unpacklo_ps(rdi_5[1][0], (*rdi_5)[6][0].q), 
                                                _mm_unpacklo_ps((*rdi_5)[5], 0)[0].q)
                                            zmm6 = *(rdi_1 + rax_6 + 0x20)
                                            zmm8 =
                                                __subps_xmmps_memps(zmm8, *(rdi_1 + rax_6 + 0x10))
                                            zmm7 = __mulps_xmmps_memps(*(rdi_1 + rax_6), 
                                                data_143f50590)
                                            zmm5_1 = _mm_rcp_ps(zmm6)
                                            zmm8 = __andps_xmmxud_memxud(zmm8, data_143f50560)
                                            zmm4_1 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                                            zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
                                            zmm0 =
                                                _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), zmm1)
                                            arg4 =
                                                _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), zmm4_1)
                                            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                                            arg4 = _mm_sub_ps(arg4, zmm0)
                                            zmm0 = _mm_mul_ps(zmm5_1, zmm5_1)
                                            zmm5_1 = _mm_add_ps(zmm5_1, zmm5_1)
                                            arg4 = _mm_add_ps(arg4, arg4)
                                            zmm0 = _mm_mul_ps(zmm0, zmm6)
                                            zmm7 = _mm_mul_ps(zmm7, arg4)
                                            zmm5_1 = _mm_sub_ps(zmm5_1, zmm0)
                                            zmm2 =
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd2), zmm4_1)
                                            zmm7 = _mm_add_ps(zmm7, zmm8)
                                            zmm0 = _mm_mul_ps(zmm5_1, zmm5_1)
                                            zmm5_1 = _mm_add_ps(zmm5_1, zmm5_1)
                                            zmm0 = _mm_mul_ps(zmm0, zmm6)
                                            zmm6 = __cmpps_xmmps_memps_immb(
                                                __andps_xmmxud_memxud(zmm6, data_143f50540), 
                                                data_143f50580, 2)
                                            zmm5_1 = _mm_sub_ps(zmm5_1, zmm0)
                                            zmm2 = _mm_sub_ps(zmm2, 
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc9), zmm1))
                                            zmm6 = _mm_and_ps(zmm6, zmm5_1 ^ zx.o(0)) ^ zmm5_1
                                            zmm2 = _mm_mul_ps(_mm_add_ps(zmm2, zmm7), zmm6)
                                            float var_e4_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                                            rdi_5[1][0].q = (_mm_unpacklo_ps(zmm2, 
                                                _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
                                            (*rdi_5)[6] = var_e4_1
                                        
                                        uint64_t rax_76 = zx.q(arg1[0x1e].b)
                                        
                                        if (rax_76.d u<= 5)
                                            switch (rax_76)
                                                case 0
                                                    if (r13_1 != 0 && (*r13_1 & 2) != 0)
                                                        int64_t* rcx_40 = *(rbx_6 + 0x58)
                                                        (*(*rcx_40 + 0x350))(rcx_40, arg2, r13_1, 
                                                            rdi_5, rax_49)
                                                    
                                                    *(var_2e0_1 + (var_280_1 << 1)) =
                                                        *(var_2e0_1 + (sx.q(arg2[0x23].d) << 1) - 2)
                                                    *(var_2e0_1 + (sx.q(arg2[0x23].d) << 1) - 2) =
                                                        var_288_1
                                                    arg2[0x23].d -= 1
                                                case 1
                                                    (*rdi_5)[0x17] |= 0x4000000
                                                case 2
                                                    (*rdi_5)[0x17] |= 0x8000000
                                                case 3
                                                    (*rdi_5)[0x17] |= 0x10000000
                                                case 4
                                                    (*rdi_5)[0x17] |= 0x20000000
                                                case 5
                                                    (*rdi_5)[0x17] |= 0x30000000
                                    else
                                        void var_148
                                        int64_t var_140
                                        
                                        if ((*(*(rbx_6 + 0x30) + 0x59) & 1) == 0)
                                            zmm4_1 = rdi_5[2][0]
                                            zmm5_1 = (*rdi_5)[9]
                                            arg4 = (*rdi_5)[0xa]
                                            float rax_64 = (*rdi_5)[0xe]
                                            int64_t var_238_1 = rdi_5[3][0].q
                                            zmm13[0] = zmm13[0] * arg4[0]
                                            zmm15[0] = zmm15[0] * zmm4_1[0]
                                            zmm13[0] = zmm13[0] + zmm13[0]
                                            zmm1.d = zmm5_1.d f* zmm14[0]
                                            zmm15[0] = zmm15[0] + zmm15[0]
                                            zmm1.d = zmm1.d f+ zmm1.d
                                            zmm15[0] = zmm15[0] f+ zmm1.d
                                            zmm15[0] = zmm15[0] + zmm13[0]
                                            zmm15[0] = zmm15[0] * zmm15[0]
                                            zmm1.d = zmm15.d f* zmm14[0]
                                            zmm4_1[0] = zmm4_1[0] - zmm15[0]
                                            zmm15[0] = zmm15[0] * zmm13[0]
                                            zmm5_1[0] = zmm5_1[0] f- zmm1.d
                                            arg4[0] = arg4[0] - zmm15[0]
                                            zmm4_1[0] = zmm4_1[0] f* *rsi_5
                                            zmm5_1[0] = zmm5_1[0] f* rsi_5[1]
                                            arg4[0] = arg4[0] f* rsi_5[2]
                                            rdi_5[2][0].q = (_mm_unpacklo_ps(zmm4_1, zmm5_1[0].q)).q
                                            zmm0 = (*rdi_5)[0xf]
                                            (*rdi_5)[0xa] = arg4[0]
                                            zmm0[0] = zmm0[0] f* rsi_5[3]
                                            (*rdi_5)[0xf] = zmm0[0]
                                            
                                            if (rax_4 != 0 && r15_2 s> 0)
                                                zmm0 = rsi_5[3]
                                                zmm0[0] = zmm0[0] f* *(r15_2 + rdi_5 + 0x3c)
                                                *(r15_2 + rdi_5 + 0x3c) = zmm0[0]
                                                zmm1.d = rsi_5[4].d f* *(r15_2 + rdi_5 + 0x40)
                                                *(r15_2 + rdi_5 + 0x40) = zmm1.d
                                                zmm0 = rsi_5[5]
                                                zmm0[0] = zmm0[0] f* *(r15_2 + rdi_5 + 0x44)
                                                *(r15_2 + rdi_5 + 0x44) = zmm0[0]
                                            
                                            zmm11[0] = zmm11[0] f- var_310:4.d
                                            zmm7 = var_330
                                            zmm10[0] = zmm10[0] f- var_310.d
                                            zmm12[0] = zmm12[0] - var_308_1
                                            zmm8 = var_32c_1
                                            zmm6 = var_328_1
                                            zmm8[0] = zmm8[0] * zmm14[0]
                                            zmm7[0] = zmm7[0] * zmm15[0]
                                            zmm8[0] = zmm8[0] + zmm8[0]
                                            zmm1.d = zmm6.d f* zmm13[0]
                                            zmm7[0] = zmm7[0] + zmm7[0]
                                            zmm11[0] = zmm11[0] * zmm11[0]
                                            zmm1.d = zmm1.d f+ zmm1.d
                                            zmm10[0] = zmm10[0] * zmm10[0]
                                            zmm12[0] = zmm12[0] * zmm12[0]
                                            zmm8[0] = zmm8[0] + zmm7[0]
                                            zmm11[0] = zmm11[0] + zmm10[0]
                                            zmm8[0] = zmm8[0] f+ zmm1.d
                                            zmm11[0] = zmm11[0] + zmm12[0]
                                            zmm8[0] = zmm8[0] * zmm15[0]
                                            zmm8[0] = zmm8[0] * zmm13[0]
                                            zmm7[0] = zmm7[0] - zmm8[0]
                                            arg4 = _mm_sqrt_ss(0, zmm11[0])
                                            zmm0 = zx.o(data_143dbb1f8.q)
                                            zmm6[0] = zmm6[0] - zmm8[0]
                                            zmm2 = 0x3f800000
                                            zmm2[0] = 1f f- var_1b0_1
                                            zmm1.d = zmm8.d f* zmm14[0]
                                            zmm7[0] = zmm7[0] * arg4[0]
                                            zmm8[0] = zmm8[0] f- zmm1.d
                                            zmm6[0] = zmm6[0] * arg4[0]
                                            zmm7[0] = zmm7[0] f* *rsi_5
                                            zmm6[0] = zmm6[0] f* rsi_5[2]
                                            zmm8[0] = zmm8[0] * arg4[0]
                                            zmm8[0] = zmm8[0] f* rsi_5[1]
                                            rdi_5[3][0].q = zmm0.q
                                            (*rdi_5)[0xe] = data_143dbb200
                                            zmm7[0] = zmm7[0] * zmm2[0]
                                            zmm2[0] = zmm2[0] * zmm6[0]
                                            zmm7[0] = zmm7[0] + rdi_5[1][0]
                                            zmm1.d = zmm2.d f* zmm8[0]
                                            zmm2[0] = zmm2[0] + (*rdi_5)[6]
                                            zmm1.d = zmm1.d f+ (*rdi_5)[5]
                                            rdi_5[1][0] = zmm7[0]
                                            (*rdi_5)[6] = zmm2[0]
                                            (*rdi_5)[5] = zmm1.d
                                            
                                            if ((arg1[0x22].b & 1) != 0)
                                                int64_t* rax_67 = sub_140d3c6e0(&var_148)
                                                
                                                if (rax_67 == 0)
                                                    rbx_6 = rbx_1
                                                else
                                                    int64_t rdx_14 = *rax_67
                                                    
                                                    if ((*(rdx_14 + 0x3f0))(rax_67, rdx_14) == 0)
                                                        rbx_6 = rbx_1
                                                    else
                                                        zmm7[0] = zmm7[0] f- var_238_1.d
                                                        zmm8[0] = zmm8[0] f- var_238_1:4.d
                                                        zmm6[0] = zmm6[0] - rax_64
                                                        zmm0, zmm6, zmm7 = sub_141fe5610(
                                                            &arg1[0x23], (*rdi_5)[3], arg2[3], 
                                                            nullptr, rax_49)
                                                        zmm6[0] = zmm6[0] * zmm0[0]
                                                        float var_250_2 = var_1a0
                                                        zmm0[0] = zmm0[0] * zmm7[0]
                                                        int64_t var_258 = var_1a8
                                                        zmm1.d = zmm0.d f* (zmm8 ^ zmm9)[0]
                                                        float var_240_2 = zmm6[0]
                                                        int64_t rax_71 = *rax_67
                                                        int64_t var_248 =
                                                            (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                                                        (*(rax_71 + 0x5b8))(rax_67, &var_248, 
                                                            &var_258, var_140)
                                                        rbx_6 = rbx_1
                                        else
                                            void* rcx_28 = rdi_1 + rax_6
                                            zmm2 = (*rdi_5)[0xd]
                                            arg4 = _mm_unpacklo_ps(rdi_5[3][0], (*rdi_5)[0xe][0].q)
                                            zmm8 = *rcx_28
                                            zmm9 = *(rcx_28 + 0x20)
                                            arg4 = _mm_mul_ps(
                                                _mm_unpacklo_ps(arg4, 
                                                    _mm_unpacklo_ps(zmm2, 0)[0].q), 
                                                zmm9)
                                            zmm5_1 = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
                                            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                                            zmm4_1 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                                            zmm0 =
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc9), zmm5_1)
                                            zmm2 = _mm_sub_ps(
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd2), zmm7), 
                                                zmm0)
                                            zmm2 = _mm_add_ps(zmm2, zmm2)
                                            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                                            zmm0 =
                                                _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm5_1)
                                            zmm1 = _mm_mul_ps(zmm1, zmm7)
                                            zmm2 = _mm_mul_ps(zmm2, zmm4_1)
                                            zmm1 = _mm_sub_ps(zmm1, zmm0)
                                            zmm0 = (*rdi_5)[0xa]
                                            zmm2 = _mm_add_ps(zmm2, arg4)
                                            arg4 = _mm_unpacklo_ps(rdi_5[2][0], zmm0[0].q)
                                            zmm1 = _mm_add_ps(zmm1, zmm2)
                                            zmm2 = (*rdi_5)[9]
                                            var_278 = zmm1
                                            arg4 = _mm_mul_ps(
                                                _mm_unpacklo_ps(arg4, 
                                                    _mm_unpacklo_ps(zmm2, 0)[0].q), 
                                                zmm9)
                                            zmm0 = _mm_shuffle_ps(arg4, arg4, 0xc9)
                                            zmm1 = _mm_shuffle_ps(arg4, arg4, 0xd2)
                                            zmm0 = _mm_mul_ps(zmm0, zmm5_1)
                                            zmm1 = _mm_sub_ps(_mm_mul_ps(zmm1, zmm7), zmm0)
                                            zmm1 = _mm_add_ps(zmm1, zmm1)
                                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                                            zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
                                            zmm0 = _mm_mul_ps(zmm0, zmm5_1)
                                            zmm1 = _mm_mul_ps(zmm1, zmm4_1)
                                            zmm6 = _mm_mul_ps(zmm6, zmm7)
                                            zmm1 = _mm_add_ps(zmm1, arg4)
                                            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, zmm0), zmm1)
                                            zmm15[0] = zmm15[0] * zmm6[0]
                                            zmm5_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                            zmm1.d = zmm14.d f* zmm5_1[0]
                                            zmm15[0] = zmm15[0] + zmm15[0]
                                            zmm4_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                            zmm13[0] = zmm13[0] * zmm4_1[0]
                                            zmm1.d = zmm1.d f+ zmm1.d
                                            zmm13[0] = zmm13[0] + zmm13[0]
                                            zmm15[0] = zmm15[0] f+ zmm1.d
                                            zmm15[0] = zmm15[0] + zmm13[0]
                                            zmm15[0] = zmm15[0] * zmm15[0]
                                            zmm6[0] = zmm6[0] - zmm15[0]
                                            zmm8 = __mulps_xmmps_memps(zmm8, data_143f50590)
                                            zmm13[0] = zmm13[0] * zmm15[0]
                                            zmm6[0] = zmm6[0] f* *rsi_5
                                            zmm4_1[0] = zmm4_1[0] - zmm13[0]
                                            zmm1.d = zmm14.d f* zmm15[0]
                                            var_2a8 = zx.o(0)
                                            zmm5_1[0] = zmm5_1[0] f- zmm1.d
                                            zmm4_1[0] = zmm4_1[0] f* rsi_5[2]
                                            zmm5_1[0] = zmm5_1[0] f* rsi_5[1]
                                            zmm6 = _mm_unpacklo_ps(zmm6, zmm4_1[0].q)
                                            zmm4_1 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                                            zmm6 = _mm_unpacklo_ps(zmm6, 
                                                _mm_unpacklo_ps(zmm5_1, 0)[0].q)
                                            zmm1 = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
                                            zmm0 =
                                                _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
                                            zmm5_1 = _mm_rcp_ps(zmm9)
                                            arg4 =
                                                _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1)
                                            zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                                            arg4 = _mm_sub_ps(arg4, zmm0)
                                            zmm0 = _mm_mul_ps(zmm5_1, zmm5_1)
                                            zmm5_1 = _mm_add_ps(zmm5_1, zmm5_1)
                                            arg4 = _mm_add_ps(arg4, arg4)
                                            zmm0 = _mm_mul_ps(zmm0, zmm9)
                                            zmm8 = _mm_mul_ps(zmm8, arg4)
                                            zmm5_1 = _mm_sub_ps(zmm5_1, zmm0)
                                            zmm2 =
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd2), zmm4_1)
                                            zmm8 = _mm_add_ps(zmm8, zmm6)
                                            zmm0 = _mm_mul_ps(zmm5_1, zmm5_1)
                                            zmm5_1 = _mm_add_ps(zmm5_1, zmm5_1)
                                            zmm0 = _mm_mul_ps(zmm0, zmm9)
                                            zmm9 = __cmpps_xmmps_memps_immb(
                                                __andps_xmmxud_memxud(zmm9, data_143f50540), 
                                                data_143f50580, 2)
                                            zmm5_1 = _mm_sub_ps(zmm5_1, zmm0)
                                            zmm2 = _mm_sub_ps(zmm2, 
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc9), zmm1))
                                            zmm9 = _mm_and_ps(zmm9, zx.o(0) ^ zmm5_1) ^ zmm5_1
                                            zmm2 = _mm_mul_ps(_mm_add_ps(zmm2, zmm8), zmm9)
                                            float var_120_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                                            rdi_5[2][0].q = (_mm_unpacklo_ps(zmm2, 
                                                _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
                                            zmm0 = (*rdi_5)[0xf]
                                            (*rdi_5)[0xa] = var_120_1
                                            zmm0[0] = zmm0[0] f* rsi_5[3]
                                            (*rdi_5)[0xf] = zmm0[0]
                                            
                                            if (rax_4 != 0 && r15_2 s> 0)
                                                zmm0 = rsi_5[3]
                                                zmm0[0] = zmm0[0] f* *(r15_2 + rdi_5 + 0x3c)
                                                *(r15_2 + rdi_5 + 0x3c) = zmm0[0]
                                                zmm1.d = rsi_5[4].d f* *(r15_2 + rdi_5 + 0x40)
                                                *(r15_2 + rdi_5 + 0x40) = zmm1.d
                                                zmm0 = rsi_5[5]
                                                zmm0[0] = zmm0[0] f* *(r15_2 + rdi_5 + 0x44)
                                                *(r15_2 + rdi_5 + 0x44) = zmm0[0]
                                            
                                            zmm4_1 = var_328_1
                                            zmm5_1 = var_32c_1
                                            zmm1.d = zmm10.d f- var_310.d
                                            zmm11[0] = zmm11[0] f- var_310:4.d
                                            zmm5_1[0] = zmm5_1[0] * zmm14[0]
                                            zmm12[0] = zmm12[0] - var_308_1
                                            zmm1.d = zmm1.d f* zmm1.d
                                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                                            zmm11[0] = zmm11[0] * zmm11[0]
                                            zmm12[0] = zmm12[0] * zmm12[0]
                                            zmm11[0] = zmm11[0] f+ zmm1.d
                                            zmm1.d = zmm4_1.d f* zmm13[0]
                                            zmm11[0] = zmm11[0] + zmm12[0]
                                            zmm1.d = zmm1.d f+ zmm1.d
                                            zmm9 = _mm_sqrt_ss(0, zmm11[0])
                                            zmm2 = var_330
                                            zmm2[0] = zmm2[0] * zmm15[0]
                                            zmm2[0] = zmm2[0] + zmm2[0]
                                            zmm5_1[0] = zmm5_1[0] + zmm2[0]
                                            zmm5_1[0] = zmm5_1[0] f+ zmm1.d
                                            zmm5_1[0] = zmm5_1[0] * zmm13[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm15[0]
                                            zmm4_1[0] = zmm4_1[0] - zmm5_1[0]
                                            zmm1.d = zmm5_1.d f* zmm14[0]
                                            zmm2[0] = zmm2[0] - zmm5_1[0]
                                            zmm0 = zx.o(data_143dbb1f8.q)
                                            zmm5_1[0] = zmm5_1[0] f- zmm1.d
                                            zmm9[0] = zmm9[0] * zmm4_1[0]
                                            zmm9[0] = zmm9[0] * zmm2[0]
                                            zmm9[0] = zmm9[0] f* rsi_5[2]
                                            zmm9[0] = zmm9[0] f* *rsi_5
                                            zmm9[0] = zmm9[0] * zmm5_1[0]
                                            zmm9[0] = zmm9[0] f* rsi_5[1]
                                            rdi_5[3][0].q = zmm0.q
                                            zmm0 = 0x3f800000
                                            zmm0[0] = 1f f- var_1b0_1
                                            (*rdi_5)[0xe] = data_143dbb200
                                            zmm7 = __mulps_xmmps_memps(*rcx_28, data_143f50590)
                                            zmm9[0] = zmm9[0] * zmm0[0]
                                            zmm9[0] = zmm9[0] * zmm0[0]
                                            zmm9[0] = zmm9[0] * zmm0[0]
                                            zmm9[0] = zmm9[0] + zmm11[0]
                                            zmm9[0] = zmm9[0] + zmm10[0]
                                            zmm9[0] = zmm9[0] + zmm12[0]
                                            zmm4_1 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                                            zmm8 = __subps_xmmps_memps(
                                                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, zmm9[0].q), 
                                                    _mm_unpacklo_ps(zmm9, 0)[0].q), 
                                                *(rcx_28 + 0x10))
                                            zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
                                            zmm8 = __andps_xmmxud_memxud(zmm8, data_143f50560)
                                            arg4 = _mm_sub_ps(
                                                _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), 
                                                    zmm4_1), 
                                                _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), zmm1))
                                            arg4 = _mm_add_ps(arg4, arg4)
                                            zmm6 = *(rcx_28 + 0x20)
                                            zmm5_1 = _mm_rcp_ps(zmm6)
                                            zmm2 =
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd2), zmm4_1)
                                            zmm0 = _mm_mul_ps(zmm5_1, zmm5_1)
                                            zmm5_1 = _mm_add_ps(zmm5_1, zmm5_1)
                                            zmm7 =
                                                _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), arg4)
                                            zmm0 = _mm_mul_ps(zmm0, zmm6)
                                            zmm7 = _mm_add_ps(zmm7, zmm8)
                                            zmm5_1 = _mm_sub_ps(zmm5_1, zmm0)
                                            zmm0 = _mm_mul_ps(zmm5_1, zmm5_1)
                                            zmm5_1 = _mm_add_ps(zmm5_1, zmm5_1)
                                            zmm0 = _mm_mul_ps(zmm0, zmm6)
                                            zmm6 = __cmpps_xmmps_memps_immb(
                                                __andps_xmmxud_memxud(zmm6, data_143f50540), 
                                                data_143f50580, 2)
                                            zmm5_1 = _mm_sub_ps(zmm5_1, zmm0)
                                            zmm2 = _mm_sub_ps(zmm2, 
                                                _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc9), zmm1))
                                            zmm6 = _mm_and_ps(zmm6, var_2a8 ^ zmm5_1) ^ zmm5_1
                                            zmm2 = _mm_mul_ps(_mm_add_ps(zmm2, zmm7), zmm6)
                                            float var_114_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                                            rdi_5[1][0].q = (_mm_unpacklo_ps(zmm2, 
                                                _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
                                            (*rdi_5)[6] = var_114_1
                                            
                                            if ((arg1[0x22].b & 1) == 0)
                                                zmm9 = 0x80000000
                                            else
                                                int64_t* rax_59 = sub_140d3c6e0(&var_148)
                                                
                                                if (rax_59 != 0)
                                                    int64_t rdx_12 = *rax_59
                                                    
                                                    if ((*(rdx_12 + 0x3f0))(rax_59, rdx_12) != 0)
                                                        zmm9[0] = zmm9[0] f- var_278.d
                                                        zmm9[0] = zmm9[0] f- var_278:4.d
                                                        zmm9[0] = zmm9[0] - var_270
                                                        zmm0 = sub_141fe5610(&arg1[0x23], 
                                                            (*rdi_5)[3], arg2[3], nullptr, rax_49)
                                                        float var_1c0_1 = var_1a0
                                                        zmm0[0] = zmm0[0] * (zmm9 ^ 0x80000000)[0]
                                                        zmm0[0] = zmm0[0] * (zmm9 ^ 0x80000000)[0]
                                                        zmm1.d = zmm0.d f* (zmm9 ^ 0x80000000)[0]
                                                        float var_108_1 = zmm0[0]
                                                        int64_t var_1c8 = var_1a8
                                                        float var_200_1 = var_108_1
                                                        int64_t rax_63 = *rax_59
                                                        int64_t var_208 =
                                                            (_mm_unpacklo_ps(zmm0, zmm1.q)).q
                                                        (*(rax_63 + 0x5b8))(rax_59, &var_208, 
                                                            &var_1c8, var_140)
                                                
                                                zmm9 = 0x80000000
                                                rbx_6 = rbx_1
                                    
                                    if (r13_1 != 0 && (*r13_1 & 4) != 0)
                                        int64_t* rcx_43 = *(rbx_6 + 0x58)
                                        (*(*rcx_43 + 0x358))(rcx_43, arg2, r13_1, rsi_5, &var_1b8, 
                                            rdi_5, &var_330)
                                    
                                    (*rdi_5)[0x17] |= 0x80000000
                                    zmm13 = var_284_1
                                    zmm14 = 0x3f800000
                        else
                            int64_t rcx_21 = 0
                            int64_t rax_46 = sx.q(var_2f0_1)
                            
                            if (rax_46.d s> 0)
                                arg4 = var_2b0_1
                                zmm5_1 = var_2b8
                                void* rax_48 = *(rax_9 + 0x5b0)
                                uint64_t result_3 = result_2
                                
                                do
                                    zmm2 = *(rax_48 + 4)
                                    zmm0 = *rax_48
                                    zmm2[0] = zmm2[0] - var_2b4_1[0]
                                    zmm1 = *(rax_48 + 8)
                                    zmm0[0] = zmm0[0] - zmm5_1[0]
                                    zmm1.d = zmm1.d f- arg4[0]
                                    zmm2[0] = zmm2[0] * zmm2[0]
                                    zmm0[0] = zmm0[0] * zmm0[0]
                                    zmm1.d = zmm1.d f* zmm1.d
                                    zmm2[0] = zmm2[0] + zmm0[0]
                                    zmm2[0] = zmm2[0] f+ zmm1.d
                                    zmm2[0] = zmm2[0] f* *(result_3 + (rcx_21 << 2))
                                    
                                    if (zmm2[0] < zmm13[0])
                                        goto label_14220381d
                                    
                                    rcx_21 += 1
                                    rax_48 += 0xc
                                while (rcx_21 s< rax_46)
                            
                            (*rdi_5)[0x17] |= 0x8000000
                        
                        r8_6 = var_320_1
                        rdx_7 = var_2c0_1
                        rcx_14 = var_2e0_1
                
                zmm6 = arg_20
                rax_29 = var_280_1 - 1
                cond:2_1 = var_280_1 - 1 s>= 0
                var_280_1 = rax_29
            while (cond:2_1)
    else
        char r8 = 0
        
        if ((arg1[0x31].b & 2) != 0)
            zmm0 = *(result_1 + 0x520)
            zmm0[0] = zmm0[0] f- *(arg2[3] + 0x26c)
        
        if ((arg1[0x31].b & 2) == 0 || not(zmm0[0] f> data_143a2ef98))
            if (not(2097152f f<= *(arg1 + 0x18c)) && arg2[0x23].d s> 7)
                if (*rax_8 == 0)
                    float (* rsi_3)[0x4] = arg2[3]
                    void* rcx_10 = *(rsi_3 + 0x408)
                    uint64_t var_298_1
                    int32_t rax_14
                    
                    if (rcx_10 == 0 || (*(rcx_10 + 0xb0) & 2) == 0)
                        uint32_t rax_15
                        int64_t rax_16
                        
                        if ((*(rsi_3 + 0x433) & 8) == 0 && data_143de5480 != 0)
                            rax_15, rdx_3 = GetCurrentThreadId()
                            rax_15.b = rax_15 == data_143de5470
                            rax_16 = 0x5d0
                        
                        if ((*(rsi_3 + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_15.b != 0)
                            rax_16 = 0x100
                        
                        arg4 = *(rsi_3 + rax_16)
                        zmm7 = *(rsi_3 + rax_16 + 8)
                        zmm6 = *(rsi_3 + rax_16 + 4)
                        zmm7[0] = zmm7[0] f+ *(rsi_3 + rax_16 + 0x14)
                        arg4[0] = arg4[0] f+ *(rsi_3 + rax_16 + 0xc)
                        zmm7[0] = zmm7[0] f- *(rsi_3 + rax_16 + 0x14)
                        arg4[0] = arg4[0] f- *(rsi_3 + rax_16 + 0xc)
                        char var_260_1 = 1
                        zmm6[0] = zmm6[0] f+ *(rsi_3 + rax_16 + 0x10)
                        zmm6[0] = zmm6[0] f- *(rsi_3 + rax_16 + 0x10)
                        float var_250_1 = zmm7[0]
                        float var_240_1 = zmm7[0]
                        int64_t var_26c_1 = (_mm_unpacklo_ps(arg4, zmm6[0].q)).q
                        var_270 = var_240_1
                        zmm0 = var_278
                        float var_264_1 = var_250_1
                        rax_14 = var_260_1.d
                        zmm0[0].q = (_mm_unpacklo_ps(arg4, zmm6[0].q)).q
                        var_278 = zmm0
                        var_2a8 = zmm0
                        var_298_1 = var_26c_1
                    else
                        uint64_t* rax_13 = sub_140ae2c60(rcx_10 + 0x88, &var_278, rdi_1 + rax_6)
                        zmm1 = zx.o(rax_13[2])
                        rax_14 = rax_13[3].d
                        var_2a8 = *rax_13
                        var_298_1 = zmm1.q
                    
                    rsi_2 = rax_9
                    int32_t var_290_1 = rax_14
                    r8 = 1
                    
                    if (rax_10.d s> 0)
                        zmm8 = *(arg1 + 0x18c)
                        int64_t rcx_12 = 0
                        float (* rax_19)[0x4] = *(rsi_2 + 0x5b0)
                        zmm9 = var_298_1:4.d
                        zmm10 = var_298_1.d
                        zmm11 = var_2a8[3]
                        zmm12 = var_2a8[2]
                        zmm13 = var_2a8[1]
                        zmm14 = var_2a8[0]
                        
                        do
                            zmm7 = *rax_19
                            zmm1.d = zmm8.d f/ *(result_4 + (rcx_12 << 2))
                            zmm1.d = zmm1.d f* 1.07500005f
                            zmm14[0] = zmm14[0] f- zmm1.d
                            zmm9[0] = zmm9[0] f+ zmm1.d
                            zmm10[0] = zmm10[0] f+ zmm1.d
                            zmm11[0] = zmm11[0] f+ zmm1.d
                            zmm12[0] = zmm12[0] f- zmm1.d
                            bool cond:9_1 = zmm7[0] <= zmm14[0]
                            zmm13[0] = zmm13[0] f- zmm1.d
                            
                            if (cond:9_1 || zmm7[0] >= zmm11[0])
                                rdx_3.b = 0
                            else
                                zmm0 = (*rax_19)[1]
                                
                                if (zmm0[0] <= zmm13[0] || zmm0[0] >= zmm10[0])
                                    rdx_3.b = 0
                                else
                                    zmm0 = (*rax_19)[2]
                                    
                                    if (zmm0[0] <= zmm12[0] || zmm0[0] >= zmm9[0])
                                        rdx_3.b = 0
                                    else
                                        rdx_3.b = 1
                            
                            if (rdx_3.b != 0)
                                r8 = 0
                                break
                            
                            rcx_12 += 1
                            rax_19 = &(*rax_19)[3]
                        while (rcx_12 s< rax_10)
                
                *rax_8 += 1
                char rax_20 = *rax_8
                
                if (*rax_8 u> 0x1e)
                    rax_20 = 0
                
                *rax_8 = rax_20
                
                if (r8 == 1)
                    goto label_1422031e2
                
                zmm6 = arg_20
            
            int32_t i = 0
            
            if (*(rsi_2 + 0x5b8) s> 0)
                uint64_t result_5 = result_4
                
                do
                    zmm0 = *result_5
                    result_5 += 4
                    zmm0[0] = zmm0[0] * zmm0[0]
                    i += 1
                    *(result_5 - 4) = zmm0[0]
                while (i s< *(rsi_2 + 0x5b8))
            
            goto label_14220327b
        
    label_1422031e2:
        int32_t rax_21 = arg2[0x23].d
        int64_t r8_5 = arg2[0x1e]
        int32_t r9_1 = *(arg2 + 0x114)
        int64_t r10_1 = arg2[0x1f]
        int64_t rdx_6 = sx.q(rax_21 - 1)
        
        if (rax_21 - 1 s>= 0)
            int64_t temp3_1
            
            do
                uint64_t rax_24 = zx.q(zx.d(*(r10_1 + (rdx_6 << 1))) * r9_1)
                int32_t rax_25 = *(rax_24 + r8_5 + 0x5c)
                
                if (not(test_bit(rax_25, 0x1a)))
                    *(zx.q(rax_24.d) + r8_5 + 0x5c) = rax_25 | 0x8000000
                
                temp3_1 = rdx_6
                rdx_6 -= 1
            while (temp3_1 - 1 s>= 0)
    result = result_2
    
    if (result != 0)
        return sub_140a74f90(result)

return result
