// 函数: sub_14219a490
// 地址: 0x14219a490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && (*(arg2 + 0xe0) & 0x100) != 0 && *(arg2 + 0x1d0) != 0 && *(arg1 + 0x30) == 3)
    *arg6 += 4

int64_t r15 = sx.q(arg7)
float zmm6[0x4]
float var_38[0x4] = zmm6
int32_t var_88
int64_t var_80
uint64_t var_78
uint128_t zmm0
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (arg8 == 1 || (*(arg1 + 0x88) & 2) == 0)
    void* rcx = *(arg2 + 0x1d0)
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    char rdx = *(rcx + 0x30)
    
    if (rdx != 0)
        uint32_t rcx_2 = zx.d(*(arg1 + 0x30))
        float var_70
        
        if (rcx_2 == 1)
            int32_t rax_20 = *(arg2 + 0x2e0)
            
            if (rax_20 s<= 0)
            label_14219a994:
                void* r14_3 = *(arg2 + 0x18)
                int64_t* rdx_5 = &var_78
                zmm2 = *(arg2 + 0x12c)
                int32_t r9 = r14_3.d
                var_80 = 0
                var_88 = 0
                
                if ((*(arg1 + 0x88) & 1) == 0)
                    int64_t* rax_25 = sub_141fe56b0(arg1 + 0x40, rdx_5, zmm2, arg5, r9, nullptr)
                    zmm5 = *(r14_3 + 0x1c0)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    zmm2 = *(rax_25 + 4)
                    zmm6 = _mm_unpacklo_ps(*rax_25, rax_25[1].d.q)
                    zmm2 = _mm_unpacklo_ps(zmm2, 0)
                    arg5 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, zmm2[0].q), *(r14_3 + 0x1e0))
                    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), arg5)
                    zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4), zmm0)
                    zmm2 = _mm_add_ps(zmm2, zmm2)
                    zmm5 = _mm_mul_ps(zmm5, zmm2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), arg5)
                    zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                    zmm5 = _mm_add_ps(zmm5, zmm6)
                    zmm3 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4), zmm0), zmm5), 
                        *(r14_3 + 0x1d0))
                    var_70 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
                    arg5 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    *(arg3 + 0x1c) = (_mm_unpacklo_ps(zmm3, arg5.q)).q
                    arg3[9] = var_70
                else
                    int64_t* rax_21 = sub_141fe56b0(arg1 + 0x40, rdx_5, zmm2, arg5, r9, nullptr)
                    *(arg3 + 0x1c) = *rax_21
                    arg3[9] = rax_21[1].d
                    void* rcx_15 = *(arg2 + 0x18)
                    void* rax_23 = *(rcx_15 + 0xa8)
                    
                    if (rax_23 == 0)
                        rax_23 = sub_141ee69e0(rcx_15)
                    
                    int32_t rcx_16 = *(rax_23 + 0x540)
                    arg5 = arg3[7]
                    var_78 = *(rax_23 + 0x538)
                    uint64_t rax_24 = var_78
                    arg5.d = arg5.d f- _mm_cvtepi32_ps(zx.o(var_78.d)).d
                    zmm0 = _mm_cvtepi32_ps(zx.o((rax_24 u>> 0x20).d))
                    arg3[7] = arg5.d
                    arg5.d = arg3[8].d f- zmm0.d
                    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_16))
                    arg3[8] = arg5.d
                    arg5.d = arg3[9].d f- zmm0.d
                    arg3[9] = arg5.d
            else
                int64_t* rdx_4 = *(arg2 + 0x2d8)
                
                if (r15.d s< rax_20)
                    int64_t rcx_13 = r15 * 3
                    *(arg3 + 0x1c) = *(rdx_4 + (rcx_13 << 2))
                    arg3[9] = *(rdx_4 + (rcx_13 << 2) + 8)
                else
                    *(arg3 + 0x1c) = *rdx_4
                    arg3[9] = rdx_4[1].d
        else if (rcx_2 == 3)
            if (rdx - 1 u> 1)
                goto label_14219a994
            
            int64_t* rcx_9 = *(arg2 + 0x2c0)
            
            if (rcx_9 == 0)
                sub_14219a380(arg2)
                rcx_9 = *(arg2 + 0x2c0)
                
                if (rcx_9 == 0)
                    goto label_14219a994
            
            uint32_t r14_1 = *(arg1 + 0x118)
            
            if (rcx_9[0x1f] == 0)
                goto label_14219a994
            
            uint32_t rdx_1 = r14_1
            
            if (r14_1 == 0xffffffff)
                goto label_14219a7ab
            
            void* rax_4 = (*(*rcx_9 + 0x110))(rcx_9, rdx_1)
            
            if (rax_4 != 0 && 1f f>= *(rax_4 + 0xc))
                goto label_14219a7f1
            
            rdx_1 = *(arg1 + 0x118)
            r14_1 = -1
        label_14219a7ab:
            int32_t rdx_2 = rdx_1 + 1
            *(arg1 + 0x118) = rdx_2
            void* rax_5 = *(arg2 + 0x2c0)
            
            if (rdx_2 s>= *(rax_5 + 0x118))
                *(arg1 + 0x118) = 0
                rdx_2 = 0
                rax_5 = *(arg2 + 0x2c0)
            
            uint32_t r8_1 = zx.d(*(*(rax_5 + 0xf8) + (sx.q(rdx_2) << 1)))
            uint128_t* r14_2
            
            if (r14_1 == r8_1 || rdx_2 == 0xffffffff)
                r14_2 = nullptr
            else
                r14_1 = r8_1
            label_14219a7f1:
                
                if (r14_1 s< 0)
                    r14_2 = nullptr
                else
                    int64_t* rcx_12 = *(arg2 + 0x2c0)
                    r14_2 = (*(*rcx_12 + 0x110))(rcx_12, zx.q(r14_1))
            
            void* rax_9 = *(arg2 + 0x2c0)
            
            if (r14_2 == 0)
                zmm2 = *(*(rax_9 + 0x18) + 0x1d0)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                arg5 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                *(arg3 + 0x1c) = (_mm_unpacklo_ps(zmm2, arg5.q)).q
                var_70 = zmm0.d
            else
                zmm7 = *(rax_9 + 0xd0)
                zmm8 = *(rax_9 + 0xd4)
                zmm6 = *(rax_9 + 0xd8)
                
                if (_finite(_mm_cvtps_pd(r14_2[1].d.q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd((*(r14_2 + 0x14)).q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd((*(r14_2 + 0x18)).q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd((*r14_2).q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd((*(r14_2 + 4)).q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd((*(r14_2 + 8)).q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd(zmm7[0].q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd(zmm8[0].q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else if (_finite(_mm_cvtps_pd(zmm6[0].q).q) == 0)
                    *(arg3 + 0x1c) = var_78
                else
                    zmm7[0] = zmm7[0] f+ r14_2[1].d
                    zmm8[0] = zmm8[0] f+ *(r14_2 + 0x14)
                    zmm6[0] = zmm6[0] f+ *(r14_2 + 0x18)
                    *(arg3 + 0x1c) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
                    var_70 = zmm6[0]
            
            arg3[9] = var_70
        else
            if (rcx_2 != 4)
                goto label_14219a994
            
            int32_t rcx_5
            rcx_5.b = sub_140b5b8a0(*(arg1 + 0x34), 0) == 0
            
            if ((*(arg1 + 0x38) != 0 | rcx_5.b) == 0)
                goto label_14219a994
            
            sub_14219a380(arg2)
            void* rax_2 = *(arg2 + 0x2b8)
            
            if (rax_2 == 0)
                goto label_14219a994
            
            void* rcx_7 = *(rax_2 + 0x130)
            void* rcx_8
            
            if (rcx_7 == 0)
                rcx_8 = &data_143dbb0c0
            else
                rcx_8 = rcx_7 + 0x1c0
            
            zmm2 = *(rcx_8 + 0x10)
            var_70 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
            arg5 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            *(arg3 + 0x1c) = (_mm_unpacklo_ps(zmm2, arg5.q)).q
            arg3[9] = var_70
    else
        zmm0 = sub_141fe5610(rcx + 0x60, *(arg4 + 0xc), *(arg2 + 0x18), nullptr)
        uint128_t zmm9 = zmm0
        
        if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770).d f>= 9.99999975e-05f))
            zmm9 = 0x3a83126f
        
        void* rax = *(arg2 + 0x18)
        zmm5 = __mulps_xmmps_memps(data_142d4cc00, *(rax + 0x1e0))
        zmm4 = *(rax + 0x1c0)
        zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        arg5 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm2)
        zmm3 = _mm_mul_ps(zmm3, arg5)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        zmm3 = _mm_sub_ps(zmm3, zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm4 = _mm_mul_ps(zmm4, zmm3)
        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), arg5)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm4 = _mm_add_ps(zmm4, zmm5)
        zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm0, zmm2)), zmm4)
        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm0.d = zmm6.d f* zmm6[0]
        arg5.d = zmm8.d f* zmm8[0]
        zmm7[0] = zmm7[0] f+ zmm0.d
        zmm7[0] = zmm7[0] f+ arg5.d
        
        if (not(zmm7[0] <= 9.99999994e-09f))
            zmm4 = 0x3f000000
            zmm3 = zx.o(0)
            zmm2 = 0x3f000000
            zmm3[0] = zmm7.d
            zmm5 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            zmm0.d = zmm5.d f* zmm5[0]
            arg5.d = zmm3.d f* zmm0.d
            zmm2[0] = 0.5f f- arg5.d
            zmm0.d = zmm5.d f* zmm2[0]
            zmm5[0] = zmm5[0] f+ zmm0.d
            arg5.d = zmm5.d f* zmm5[0]
            zmm3[0] = zmm3[0] f* arg5.d
            zmm4[0] = 0.5f - zmm3[0]
            zmm0.d = zmm5.d f* zmm4[0]
            zmm5[0] = zmm5[0] f+ zmm0.d
            zmm0.d = zmm5.d f* zmm6[0]
            arg5.d = zmm5.d f* zmm7[0]
            zmm5[0] = zmm5[0] * zmm8[0]
            zmm6 = zmm0
            zmm7 = arg5
            zmm8 = zmm5
        
        zmm6[0] = zmm6[0] f* zmm9.d
        zmm7[0] = zmm7[0] f* zmm9.d
        zmm6[0] = zmm6[0] f+ *arg3
        zmm8[0] = zmm8[0] f* zmm9.d
        zmm7[0] = zmm7[0] f+ arg3[1]
        zmm8[0] = zmm8[0] f+ arg3[2]
        *(arg3 + 0x1c) = (_mm_unpacklo_ps(zmm6, zmm7[0].q)).q
        arg3[9] = zmm8[0]

int32_t* result

if (arg8 == 1 || (*(arg1 + 0xd8) & 1) == 0)
    uint32_t rcx_17 = zx.d(*(arg1 + 0x8c))
    int32_t result_1
    
    if (rcx_17 == 0)
    label_14219ab3a:
        void* rax_26 = *(arg2 + 0x18)
        zmm6 = __mulps_xmmps_memps(data_142d4cc00, *(rax_26 + 0x1e0))
        zmm5 = *(rax_26 + 0x1c0)
        arg5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm2)
        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), arg5)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm3 = _mm_sub_ps(zmm3, zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm5 = _mm_mul_ps(zmm5, zmm3)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm2)
        zmm4 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm5 = _mm_add_ps(zmm5, zmm6)
        zmm4 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm4, arg5), zmm0), zmm5)
        result_1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa).d
        zmm0 = zmm4
        arg5 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    label_14219abb5:
        result = zx.q(result_1)
        *(arg3 + 0x28) = (_mm_unpacklo_ps(zmm0, arg5.q)).q
        arg3[0xc] = result.d
    else if (rcx_17 == 1)
        int32_t rax_28 = *(arg2 + 0x2f0)
        
        if (rax_28 s<= 0)
        label_14219aca0:
            var_80 = 0
            var_88 = 0
            int64_t* rax_29 = sub_141fe56b0(arg1 + 0x90, &var_78, *(arg4 + 0xc), arg5, 
                (*(arg2 + 0x18)).d, nullptr)
            *(arg3 + 0x28) = *rax_29
            arg3[0xc] = rax_29[1].d
            
            if ((*(arg1 + 0x88) & 1) == 0)
                void* rax_30 = *(arg2 + 0x18)
                float zmm2_1[0x4] = arg3[0xb]
                zmm6 = _mm_unpacklo_ps(arg3[0xa], arg3[0xc].q)
                float zmm5_1[0x4] = *(rax_30 + 0x1c0)
                zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, _mm_unpacklo_ps(zmm2_1, 0)[0].q), 
                    *(rax_30 + 0x1e0))
                arg5 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float zmm4_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), arg5)
                zmm2_1 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1), zmm0)
                zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), arg5)
                float zmm3_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                zmm3_1 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3_1, zmm4_1), zmm0), zmm5_1)
                result_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d
                zmm0 = zmm3_1
                arg5 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                goto label_14219abb5
        else
            int64_t* rdx_7 = *(arg2 + 0x2e8)
            
            if (r15.d s< rax_28)
                int64_t rcx_22 = r15 * 3
                *(arg3 + 0x28) = *(rdx_7 + (rcx_22 << 2))
                result = zx.q(*(rdx_7 + (rcx_22 << 2) + 8))
            else
                *(arg3 + 0x28) = *rdx_7
                result = zx.q(rdx_7[1].d)
            
            arg3[0xc] = result.d
    else
        if (rcx_17 != 2)
            if (rcx_17 != 3)
                goto label_14219aca0
            
            goto label_14219ab3a
        
        var_80 = 0
        var_88 = 0
        int64_t* rax_27 =
            sub_141fe56b0(arg1 + 0x90, &var_78, *(arg4 + 0xc), arg5, (*(arg2 + 0x18)).d, nullptr)
        *(arg3 + 0x28) = *rax_27
        result = zx.q(rax_27[1].d)
        arg3[0xc] = result.d

if (arg8 == 1 || (*(arg1 + 0x110) & 1) == 0)
    if (*(arg1 + 0x8c) == 1)
        result = zx.q(*(arg2 + 0x2b0))
    
    if (*(arg1 + 0x8c) != 1 || result.d s<= 0)
        zmm0, result =
            sub_141fe5610(arg1 + 0xe0, *(arg4 + 0xc), *(arg2 + 0x18), nullptr, var_88, var_80)
    else
        uint128_t* rcx_20 = *(arg2 + 0x2a8)
        
        if (r15.d s< result.d)
            zmm0 = *(rcx_20 + (r15 << 2))
        else
            zmm0 = *rcx_20
    
    arg3[0xd] = zmm0.d

result.b = 1
return result
