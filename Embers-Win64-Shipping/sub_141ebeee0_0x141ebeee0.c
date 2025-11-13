// 函数: sub_141ebeee0
// 地址: 0x141ebeee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int16_t rdx = arg2[3].w
int16_t rbx = rdx & 1
int128_t* var_158 = arg7
int32_t* var_140 = arg8

if ((rdx & 4) != 0)
    rbx |= 4

if ((rdx & 2) != 0)
    rbx |= 2

if ((rdx & 8) != 0)
    rbx |= 8

if ((rdx & 0x200) != 0)
    rbx |= 0x200

int64_t r12
r12.b = 0f f>= *(arg2 + 0x34)
int64_t result

if (r12.b == 0 || arg8 == 0)
    int64_t* r14_1 = arg2[1]
    void* rax_6
    
    if (r14_1 != 0)
        rax_6 = *arg2
    
    uint128_t zmm6
    uint128_t zmm7
    
    if (r14_1 == 0 || rax_6 == 0)
        zmm7 = zx.o(*(arg3 + 0x40))
        int32_t rdi_4 = *(arg3 + 0x48)
        zmm6 = zx.o(*(arg3 + 0x4c))
        int32_t rbx_4 = *(arg3 + 0x54)
        memset(arg3, 0, 0x88)
        *(arg3 + 0x40) = zmm7.q
        result = 1
        *(arg3 + 0x4c) = zmm6.q
        *(arg3 + 0x48) = rdi_4
        *(arg3 + 0x54) = rbx_4
        *(arg3 + 8) = 0x3f800000
    else
        uint64_t r15_1 = zx.q(arg2[2].d)
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        int32_t var_150
        void var_128
        sub_140acc970(&var_128, (*(*r14_1 + 0xb0))(r14_1, &var_150))
        char rax_9 = sub_14222bc40(arg5, &var_128, 0)
        *arg3 &= 0xfe
        *arg3 = ((rax_9 == 2 | *arg3) & 0xfd) | (r12.b * 2)
        uint128_t zmm5_1
        zmm5_1.d = (*(arg2 + 0x34)).d f/ arg4.d
        *(arg3 + 8) = zmm5_1.d
        *(arg3 + 0xc) = (*(arg2 + 0x34)).d
        uint128_t zmm4_1 = arg6[1].d
        arg4 = *(arg6 + 4)
        zmm7.d = (*(var_158 + 8)).d f- zmm4_1.d
        zmm6.d = (*var_158).d f- *arg6
        uint128_t zmm8
        zmm8.d = (*(var_158 + 4)).d f- arg4.d
        int32_t var_148_1 = zmm7.d
        uint128_t zmm0
        zmm0.d = zmm7.d f* zmm5_1.d
        var_150 = zmm6.d
        uint128_t zmm1
        zmm1.d = zmm8.d f* zmm5_1.d
        zmm4_1.d = zmm4_1.d f+ zmm0.d
        int32_t var_14c_1 = zmm8.d
        zmm0.d = zmm6.d f* zmm5_1.d
        arg4.d = arg4.d f+ zmm1.d
        int32_t var_170_1 = zmm4_1.d
        zmm0.d = zmm0.d f+ *arg6
        *(arg3 + 0x10) = (_mm_unpacklo_ps(zmm0, arg4.q)).q
        *(arg3 + 0x18) = var_170_1
        int32_t var_178
        int32_t var_174
        int32_t rax_17
        
        if ((rbx & 1) == 0 || r12.b != 0)
            zmm0 = zx.o(*arg6)
            rax_17 = arg6[1].d
        label_141ebf1bd:
            *(arg3 + 0x1c) = zmm0.q
            *(arg3 + 0x24) = rax_17
            
            if ((rbx & 2) == 0 || r12.b != 0)
                rbx.b = 0
            else
                rbx.b = 1
            
            zmm9 = arg2[6].d
            zmm10 = *(arg2 + 0x2c)
            uint128_t zmm11 = arg2[5].d
            uint128_t zmm13
            uint128_t var_b8_1 = zmm13
            int128_t zmm14
            int128_t var_c8_1 = zmm14
            uint128_t zmm15
            uint128_t var_d8_1 = zmm15
            char* var_168
            int32_t var_160_1
            uint128_t zmm2
            
            if (rbx.b == 0)
                zmm13 = 0x3f800000
                zmm14 = 0x322bcc77
                zmm15 = 0x3f000000
                zmm1.d = zmm6.d f* zmm6.d
                zmm9.d = zmm8.d f* zmm8.d
                zmm10.d = zmm7.d f* zmm7.d
                zmm1.d = zmm1.d f+ zmm9.d
                zmm1.d = zmm1.d f+ zmm10.d
                
                if (not(zmm1.d f!= 1f))
                    arg4 = zmm8
                    zmm2 = zmm7
                    zmm0 = zmm6
                else if (zmm1.d f>= 9.99999994e-09f)
                    zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                    arg4.d = zmm1.d f* 0.5f
                    zmm0.d = zmm5_1.d f* zmm5_1.d
                    zmm2.d = arg4.d f* zmm0.d
                    zmm1.d = 0.5f f- zmm2.d
                    zmm0.d = zmm5_1.d f* zmm1.d
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    zmm0.d = zmm5_1.d f* zmm5_1.d
                    arg4.d = arg4.d f* zmm0.d
                    zmm4_1.d = 0.5f f- arg4.d
                    zmm0.d = zmm5_1.d f* zmm4_1.d
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    zmm0.d = zmm6.d f* zmm5_1.d
                    zmm2.d = zmm5_1.d f* zmm7.d
                    arg4.d = zmm5_1.d f* zmm8.d
                else
                    zmm0 = data_143dbb1f8
                    arg4 = data_143dbb1fc
                    zmm2 = data_143dbb200
                
                zmm2 ^= 0x80000000
                var_168:4.d = (arg4 ^ 0x80000000).d
                var_168.d = (zmm0 ^ 0x80000000).d
                var_160_1 = zmm2.d
            label_141ebf523:
                arg4 = zx.o(var_168)
                int32_t r8_2 = var_160_1
                *(arg3 + 0x28) = arg4.q
                *(arg3 + 0x34) = arg4.q
                *(arg3 + 0x30) = r8_2
                *(arg3 + 0x3c) = r8_2
                int32_t rax_21 = arg6[1].d
                *(arg3 + 0x40) = *arg6
                *(arg3 + 0x48) = rax_21
                int32_t rax_22 = *(var_158 + 8)
                *(arg3 + 0x4c) = *var_158
                *(arg3 + 0x54) = rax_22
                var_178.q = arg4.q
                
                if (rbx.b != 0)
                    zmm0 = var_174
                    zmm2 = var_178
                    zmm1 = r8_2
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm0.d = zmm13.d f- zmm2.d
                    
                    if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770).d f< 0.00999999978f))
                        zmm1.d = zmm6.d f* zmm6.d
                        zmm1.d = zmm1.d f+ zmm9.d
                        zmm1.d = zmm1.d f+ zmm10.d
                        
                        if (not(zmm1.d f== zmm13.d))
                            if (zmm1.d f>= zmm14.d)
                                zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                                arg4.d = zmm1.d f* zmm15.d
                                zmm0.d = zmm5_1.d f* zmm5_1.d
                                zmm2.d = arg4.d f* zmm0.d
                                zmm1.d = zmm15.d f- zmm2.d
                                zmm0.d = zmm5_1.d f* zmm1.d
                                zmm5_1.d = zmm5_1.d f+ zmm0.d
                                zmm0.d = zmm5_1.d f* zmm5_1.d
                                arg4.d = arg4.d f* zmm0.d
                                zmm4_1.d = zmm15.d f- arg4.d
                                zmm0.d = zmm5_1.d f* zmm4_1.d
                                zmm5_1.d = zmm5_1.d f+ zmm0.d
                                zmm6.d = zmm6.d f* zmm5_1.d
                                zmm0.d = zmm5_1.d f* zmm7.d
                                zmm1.d = zmm5_1.d f* zmm8.d
                                zmm7 = zmm0
                                zmm8 = zmm1
                            else
                                zmm6 = data_143dbb1f8
                                zmm8 = data_143dbb1fc
                                zmm7 = data_143dbb200
                        
                        zmm0 = _mm_unpacklo_ps(zmm6 ^ 0x80000000, (zmm8 ^ 0x80000000).q)
                        arg4 = zmm0
                        r8_2 = (zmm7 ^ 0x80000000).d
                        *(arg3 + 0x28) = zmm0.q
                        *(arg3 + 0x34) = zmm0.q
                        *(arg3 + 0x30) = r8_2
                        *(arg3 + 0x3c) = r8_2
                
                int32_t* rax_23 = var_140
                int64_t rax_24
                
                if (rax_23 != 0)
                    rax_24 = sx.q(*rax_23)
                
                char rdx_5
                
                if (rax_23 == 0 || rax_24.d u> 6)
                    rdx_5 = 7
                else
                    switch (rax_24)
                        case 0
                            rdx_5 = 0
                        case 1
                            rdx_5 = 1
                        case 2
                            rdx_5 = 3
                        case 3
                            rdx_5 = 2
                        case 4
                            rdx_5 = 4
                        case 5
                            rdx_5 = 5
                        case 6
                            rdx_5 = 6
                
                int32_t var_170_5 = r8_2
                var_178.q = arg4.q
                int64_t* rax_25 =
                    sub_141ec2c80(&var_140, rdx_5, arg2, &var_150, zmm2, zmm10, &var_178)
                int64_t var_1b0
                var_1b0.b = arg11
                int32_t rcx_13 = rax_25[1].d
                *(arg3 + 0x34) = *rax_25
                *(arg3 + 0x3c) = rcx_13
                sub_141ecb5d0(r14_1, rax_6, r15_1.d, &arg3[0x1c], arg3.b)
                int64_t rax_27 = (*(*r14_1 + 0x30))(r14_1)
                TEB* gsbase
                
                if (rax_27.d u> 6)
                    rax_27.b = 7
                label_141ebf806:
                    
                    if (arg10 == 0 || rax_27.b != 5)
                        result = 0
                    else
                        void* rdi_3 =
                            *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                        
                        if (data_143f3a870 s> *(rdi_3 + 0x14))
                            _Init_thread_header(&data_143f3a870)
                            
                            if (data_143f3a870 == 0xffffffff)
                                data_143f3a868 = 0xffffffff
                                data_143f3a858 = zx.o(0)
                                _Init_thread_footer(&data_143f3a870)
                        
                        if (r15_1.d == data_143f3a868)
                            result = 0
                        else
                            int128_t zmm0_2 = data_142e6da00
                            int32_t var_118 = 5
                            int64_t* var_f0_1 = nullptr
                            int128_t var_114_1 = zmm0_2
                            int64_t var_104_1 = 0
                            int64_t var_fc_1 = 0x3f800000
                            
                            if ((*(*r14_1 + 0x70))(r14_1, &var_118) == 0 || var_f0_1 == 0)
                            label_141ebf8c7:
                                
                                if (data_143f3a870 s> *(rdi_3 + 0x14))
                                    _Init_thread_header(&data_143f3a870)
                                    
                                    if (data_143f3a870 == 0xffffffff)
                                        data_143f3a868 = 0xffffffff
                                        data_143f3a858 = zx.o(0)
                                        _Init_thread_footer(&data_143f3a870)
                                
                                *(arg3 + 4) = data_143f3a868
                                result = 0
                            else
                                if (r15_1.d u>= (*(*var_f0_1 + 0x48))(var_f0_1))
                                    goto label_141ebf8c7
                                
                                int64_t rax_41 = (*(*var_f0_1 + 0x60))(var_f0_1)
                                
                                if (rax_41 == 0)
                                    goto label_141ebf8c7
                                
                                *(arg3 + 4) = *(rax_41 + (r15_1 << 2))
                                result = 0
                else
                    switch (&__dos_header.e_magic[zx.q(jump_table_141ebf9f8[sx.q(rax_27.d)])])
                        case 0x141ebf74b
                            rax_27.b = 0
                            goto label_141ebf806
                        case 0x141ebf752
                            rax_27.b = 1
                            goto label_141ebf806
                        case 0x141ebf759
                            rax_27.b = 3
                            goto label_141ebf806
                        case 0x141ebf760
                            rax_27.b = 2
                            goto label_141ebf806
                        case 0x141ebf767
                            rax_27.b = 4
                            goto label_141ebf806
                        case 0x141ebf76e
                            rax_27.b = 5
                            goto label_141ebf806
                        case 0x141ebf775
                            if (arg11 == 0)
                                result = 0
                            else
                                if (data_143f3a870 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer
                                        + (zx.q(data_14401b1a0) << 3))))
                                    _Init_thread_header(&data_143f3a870)
                                    
                                    if (data_143f3a870 == 0xffffffff)
                                        data_143f3a868 = 0xffffffff
                                        data_143f3a858 = zx.o(0)
                                        _Init_thread_footer(&data_143f3a870)
                                
                                if (r15_1.d == data_143f3a868)
                                    result = 0
                                else
                                    void* rax_31 = (*(*r14_1 + 0xd0))(r14_1, zx.q(r15_1.d))
                                    
                                    if (rax_31 == 0)
                                        result = 0
                                    else
                                        int32_t* rax_32 = *(rax_31 + 0x10)
                                        
                                        if (rax_32 == 0 || *rax_32 != 2)
                                            sub_140d3a3a0(&arg3[0x60], nullptr)
                                            result = 0
                                        else
                                            sub_140d3a3a0(&arg3[0x60], *(rax_32 + 8))
                                            result = 0
            else
                if (_finite(_mm_cvtps_pd(zmm11.q).q) != 0)
                    if (_finite(_mm_cvtps_pd(zmm10.q).q) == 0)
                        goto label_141ebf361
                    
                    if (_finite(_mm_cvtps_pd(zmm9.q).q) == 0)
                        goto label_141ebf361
                    
                    zmm13 = 0x3f800000
                    zmm14 = 0x322bcc77
                    zmm15 = 0x3f000000
                    zmm2.d = zmm11.d f* zmm11.d
                    zmm0.d = zmm10.d f* zmm10.d
                    zmm1.d = zmm9.d f* zmm9.d
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    
                    if (not(zmm2.d f!= 1f))
                        var_168.d = zmm11.d
                        var_160_1 = zmm9.d
                        var_168:4.d = zmm10.d
                    else if (zmm2.d f>= 9.99999994e-09f)
                        zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                        arg4.d = zmm2.d f* 0.5f
                        zmm0.d = zmm5_1.d f* zmm5_1.d
                        zmm2.d = arg4.d f* zmm0.d
                        zmm1.d = 0.5f f- zmm2.d
                        zmm0.d = zmm5_1.d f* zmm1.d
                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                        zmm0.d = zmm5_1.d f* zmm5_1.d
                        arg4.d = arg4.d f* zmm0.d
                        zmm4_1.d = 0.5f f- arg4.d
                        zmm0.d = zmm5_1.d f* zmm4_1.d
                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                        zmm9.d = zmm9.d f* zmm5_1.d
                        zmm10.d = zmm10.d f* zmm5_1.d
                        zmm5_1.d = zmm5_1.d f* zmm11.d
                        var_168.d = zmm5_1.d
                        var_160_1 = zmm9.d
                        var_168:4.d = zmm10.d
                    else
                        var_168.d = data_143dbb1f8.d
                        var_160_1 = data_143dbb200.d
                        var_168:4.d = data_143dbb1fc.d
                    
                    zmm9.d = zmm8.d f* zmm8.d
                    zmm10.d = zmm7.d f* zmm7.d
                    goto label_141ebf523
                
            label_141ebf361:
                zmm7 = zx.o(*(arg3 + 0x40))
                int32_t rdi_2 = *(arg3 + 0x48)
                zmm6 = zx.o(*(arg3 + 0x4c))
                int32_t rbx_2 = *(arg3 + 0x54)
                memset(arg3, 0, 0x88)
                *(arg3 + 0x40) = zmm7.q
                result = 1
                *(arg3 + 0x4c) = zmm6.q
                *(arg3 + 0x48) = rdi_2
                *(arg3 + 0x54) = rbx_2
                *(arg3 + 8) = 0x3f800000
        else
            zmm0 = *(arg2 + 0x1c)
            zmm10 = *(arg2 + 0x24)
            zmm9 = arg2[4].d
            var_178 = zmm0.d
            var_174 = zmm9.d
            int32_t var_170_2 = zmm10.d
            
            if (_finite(_mm_cvtps_pd(zmm0.q).q) != 0)
                if (_finite(_mm_cvtps_pd(zmm9.q).q) == 0)
                    goto label_141ebf169
                
                if (_finite(_mm_cvtps_pd(zmm10.q).q) == 0)
                    goto label_141ebf169
                
                rax_17 = var_170_2
                zmm0 = zx.o(var_178.q)
                goto label_141ebf1bd
            
        label_141ebf169:
            zmm7 = zx.o(*(arg3 + 0x40))
            int32_t rdi_1 = *(arg3 + 0x48)
            zmm6 = zx.o(*(arg3 + 0x4c))
            int32_t rbx_1 = *(arg3 + 0x54)
            memset(arg3, 0, 0x88)
            *(arg3 + 0x40) = zmm7.q
            result = 1
            *(arg3 + 0x4c) = zmm6.q
            *(arg3 + 0x48) = rdi_1
            *(arg3 + 0x54) = rbx_1
            *(arg3 + 8) = 0x3f800000
else
    sub_141ebea60(arg1, arg2, arg6, arg7, arg3, arg8, arg9, arg5, arg11)
    result = 0

__security_check_cookie(rax_1 ^ &var_1d8)
return result
