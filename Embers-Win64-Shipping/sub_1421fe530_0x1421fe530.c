// 函数: sub_1421fe530
// 地址: 0x1421fe530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*(arg1 + 0x30), 0).b == 0
int64_t result
result.b = *(arg1 + 0x34) != 0
result.b |= r8

if (result.b != 0)
    void* r8_1 = arg2[3]
    result = sx.q(*(r8_1 + 0x608))
    
    if (result.d s> 0)
        int64_t* r8_2 = *(r8_1 + 0x600)
        int64_t result_1 = result
        int64_t rdx = 0
        int64_t* rdi_1
        
        while (true)
            rdi_1 = *r8_2
            
            if (rdi_1 != 0)
                result = *(arg1 + 0x30)
                
                if (*(rdi_1[2] + 0x28) == result)
                    break
            
            rdx += 1
            r8_2 = &r8_2[1]
            
            if (rdx s>= result_1)
                return result
        
        char r12_1 = *(*(rdi_1[5] + 0x30) + 0x59) & 1
        char r15_1 = *(*(arg2[5] + 0x30) + 0x59) & 1
        void* rax_2 = sub_1421b85d0(arg1, arg2)
        uint32_t rdx_2 = zx.d(*(arg1 + 0x38))
        int32_t rbx_1 = 0
        uint128_t zmm0
        
        if (rdx_2 == 0)
            int32_t rcx_6 = rdi_1[0x23].d
            
            if (rcx_6 s> 0)
                int32_t rax_4 = *(rax_2 + 4) * 0xbb38435
                zmm0 = _mm_cvtepi32_ps(zx.o(rcx_6))
                *(rax_2 + 4) = rax_4 + 0x3619636b
                arg3.d = ((rax_4 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                arg3.d = arg3.d f* zmm0.d
                rbx_1 = int.d(arg3.d)
        else if (rdx_2 == 1)
            int32_t* rax_3 = sub_1421b7c40(arg2, arg1)
            
            if (rax_3 != 0)
                *rax_3 += 1
                rbx_1 = *rax_3
                
                if (rbx_1 s>= rdi_1[0x23].d)
                    rbx_1 = 0
                    *rax_3 = 0
        
        void* rax_9 = (*(*rdi_1 + 0x108))(rdi_1, zx.q(rbx_1), arg3)
        
        if (rax_9 != 0)
            float zmm1[0x4] = zx.o(0)
            int32_t rax_11
            int32_t var_60_1
            
            if (0f f!= *(rax_9 + 0xc) || data_143dbb1f8.d f!= *(rax_9 + 0x10)
                    || data_143dbb1fc.d f!= *(rax_9 + 0x14)
                    || data_143dbb200.d f!= *(rax_9 + 0x18))
                if (r12_1 != r15_1)
                    if (r12_1 == 0 || r15_1 != 0)
                        void* rax_13 = rdi_1[3]
                        zmm0 = *(rax_9 + 0x18)
                        arg3 = _mm_unpacklo_ps(*(rax_9 + 0x14), 0)
                        float zmm6[0x4] = *(rax_13 + 0x1e0)
                        float temp0_29[0x4] = __mulps_xmmps_memps(*(rax_13 + 0x1c0), data_143f50590)
                        float temp0_32[0x4] = __subps_xmmps_memps(
                            _mm_unpacklo_ps(_mm_unpacklo_ps(*(rax_9 + 0x10), zmm0.q), arg3.q), 
                            *(rax_13 + 0x1d0))
                        float temp0_33[0x4] = _mm_rcp_ps(zmm6)
                        float temp0_34[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
                        float zmm8[0x4] = __andps_xmmxud_memxud(temp0_32, data_143f50560)
                        float temp0_36[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xd2)
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_36)
                        arg4 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_34)
                        float temp0_41[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xff)
                        arg4 = _mm_sub_ps(arg4, zmm0)
                        zmm0 = _mm_mul_ps(temp0_33, temp0_33)
                        float temp0_44[0x4] = _mm_add_ps(temp0_33, temp0_33)
                        arg4 = _mm_add_ps(arg4, arg4)
                        zmm0 = _mm_mul_ps(zmm0, zmm6)
                        float temp0_47[0x4] = _mm_mul_ps(temp0_41, arg4)
                        float temp0_48[0x4] = _mm_sub_ps(temp0_44, zmm0)
                        arg3 = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd2), temp0_34)
                        float temp0_51[0x4] = _mm_add_ps(temp0_47, zmm8)
                        zmm0 = _mm_mul_ps(temp0_48, temp0_48)
                        float temp0_53[0x4] = _mm_add_ps(temp0_48, temp0_48)
                        zmm0 = _mm_mul_ps(zmm0, zmm6)
                        float temp0_56[0x4] = __cmpps_xmmps_memps_immb(
                            __andps_xmmxud_memxud(zmm6, data_143f50540), data_143f50580, 2)
                        float temp0_57[0x4] = _mm_sub_ps(temp0_53, zmm0)
                        arg3 =
                            _mm_sub_ps(arg3, _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc9), temp0_36))
                        zmm6 = _mm_and_ps(temp0_56, temp0_57 ^ zx.o(0)) ^ temp0_57
                        arg3 = _mm_mul_ps(_mm_add_ps(arg3, temp0_51), zmm6)
                        var_60_1 = _mm_shuffle_ps(arg3, arg3, 0xaa).d
                        zmm0 = arg3
                        zmm1 = _mm_shuffle_ps(arg3, arg3, 0x55)
                    else
                        void* rax_12 = rdi_1[3]
                        arg3 = *(rax_9 + 0x14)
                        float zmm5_1[0x4] = *(rax_12 + 0x1c0)
                        float temp0_4[0x4] = _mm_unpacklo_ps(*(rax_9 + 0x10), (*(rax_9 + 0x18)).q)
                        arg3 = _mm_unpacklo_ps(arg3, 0)
                        float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                        float temp0_8[0x4] =
                            __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_4, arg3.q), *(rax_12 + 0x1e0))
                        float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                        float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xc9), temp0_6)
                        arg3 = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xd2), temp0_9), zmm0)
                        arg3 = _mm_add_ps(arg3, arg3)
                        float temp0_17[0x4] = _mm_mul_ps(temp0_10, arg3)
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xc9), temp0_6)
                        arg4 = _mm_shuffle_ps(arg3, arg3, 0xd2)
                        float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_8)
                        arg4 = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(arg4, temp0_9), zmm0), temp0_21), 
                            *(rax_12 + 0x1d0))
                        var_60_1 = _mm_shuffle_ps(arg4, arg4, 0xaa).d
                        zmm0 = arg4
                        zmm1 = _mm_shuffle_ps(arg4, arg4, 0x55)
                    
                    rax_11 = var_60_1
                    *(arg5 + 0x10) = (_mm_unpacklo_ps(zmm0, zmm1[0].q)).q
                else
                    *(arg5 + 0x10) = *(rax_9 + 0x10)
                    rax_11 = *(rax_9 + 0x18)
            else if (r15_1 != 0)
                *(arg5 + 0x10) = data_143dbb1f8.q
                rax_11 = data_143dbb200
            else
                arg3 = *(rdi_1[3] + 0x1d0)
                var_60_1 = _mm_shuffle_ps(arg3, arg3, 0xaa).d
                zmm1 = _mm_shuffle_ps(arg3, arg3, 0x55)
                rax_11 = var_60_1
                *(arg5 + 0x10) = (_mm_unpacklo_ps(arg3, zmm1[0].q)).q
            *(arg5 + 0x18) = rax_11
            
            if ((*(arg1 + 0x3c) & 1) != 0)
                arg4 = *(arg1 + 0x40)
                zmm1 = *(rax_9 + 0x34)
                zmm0.d = arg4.d f* *(rax_9 + 0x30)
                arg3 = *(rax_9 + 0x38)
                zmm1[0] = zmm1[0] f* arg4.d
                zmm0.d = zmm0.d f+ *(arg5 + 0x20)
                arg3.d = arg3.d f* arg4.d
                zmm1[0] = zmm1[0] f+ *(arg5 + 0x24)
                arg3.d = arg3.d f+ *(arg5 + 0x28)
                *(arg5 + 0x20) = zmm0.d
                *(arg5 + 0x24) = zmm1[0]
                *(arg5 + 0x28) = arg3.d
                arg4 = *(arg1 + 0x40)
                zmm1 = *(rax_9 + 0x34)
                arg3 = *(rax_9 + 0x38)
                zmm0.d = arg4.d f* *(rax_9 + 0x30)
                zmm1[0] = zmm1[0] f* arg4.d
                zmm0.d = zmm0.d f+ *(arg5 + 0x30)
                arg3.d = arg3.d f* arg4.d
                zmm1[0] = zmm1[0] f+ *(arg5 + 0x34)
                arg3.d = arg3.d f+ *(arg5 + 0x38)
                *(arg5 + 0x30) = zmm0.d
                *(arg5 + 0x34) = zmm1[0]
                *(arg5 + 0x38) = arg3.d
            
            if ((*(arg1 + 0x44) & 1) != 0)
                zmm0.d = (*(rax_9 + 0x2c)).d f* *(arg1 + 0x48)
                zmm0.d = zmm0.d f+ *(arg5 + 0x2c)
                *(arg5 + 0x2c) = zmm0.d
                int32_t rax_15 = (*(*arg2 + 0x150))(arg2, zmm1, arg3, arg4)
                int64_t rdx_5 = *rdi_1
                int64_t rbp_1 = sx.q(rax_15)
                int32_t rax_16 = (*(rdx_5 + 0x150))(rdi_1, rdx_5)
                
                if (rbp_1.d != 0 && rax_16 != 0)
                    float* rcx_10 = arg5 + rbp_1
                    void* rax_18 = sx.q(rax_16) + rax_9
                    zmm0.d = (*(rax_18 + 0x18)).d f+ rcx_10[6]
                    rcx_10[6] = zmm0.d
                    zmm1 = *(rax_18 + 0x1c)
                    zmm1[0] = zmm1[0] + rcx_10[7]
                    rcx_10[7] = zmm1[0]
                    zmm0.d = (*(rax_18 + 0x20)).d f+ rcx_10[8]
                    rcx_10[8] = zmm0.d
                    zmm1 = *rax_18
                    zmm1[0] = zmm1[0] + *rcx_10
                    *rcx_10 = zmm1[0]
                    zmm0.d = (*(rax_18 + 4)).d f+ rcx_10[1]
                    rcx_10[1] = zmm0.d
                    zmm1 = *(rax_18 + 8)
                    zmm1[0] = zmm1[0] + rcx_10[2]
                    rcx_10[2] = zmm1[0]
        
        if (_finite(_mm_cvtps_pd((*(arg5 + 0x10)).q).q) != 0
                && _finite(_mm_cvtps_pd((*(arg5 + 0x14)).q).q) != 0)
            _finite(_mm_cvtps_pd((*(arg5 + 0x18)).q).q)
        
        if (_finite(_mm_cvtps_pd((*(arg5 + 0x30)).q).q) != 0
                && _finite(_mm_cvtps_pd((*(arg5 + 0x34)).q).q) != 0)
            _finite(_mm_cvtps_pd((*(arg5 + 0x38)).q).q)
        
        result = _finite(_mm_cvtps_pd((*(arg5 + 0x20)).q).q)
        
        if (result.d != 0)
            result = _finite(_mm_cvtps_pd((*(arg5 + 0x24)).q).q)
            
            if (result.d != 0)
                return _finite(_mm_cvtps_pd((*(arg5 + 0x28)).q).q)

return result
