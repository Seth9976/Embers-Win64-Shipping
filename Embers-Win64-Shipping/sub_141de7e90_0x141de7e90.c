// 函数: sub_141de7e90
// 地址: 0x141de7e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4[1].d == 0 || arg4[3].d == 0)
    arg1 = data_143f39070
    arg1[0].q = zx.o(0) u>> 0x40
    *arg6 = _mm_shuffle_ps(zx.o(0), arg1, 0xc4)
    arg6[1] = zx.o(0)
    arg6[2] = __andps_xmmxud_memxud(data_143f39070, data_143f39050)
    return arg6

int32_t rdx
int32_t r9
float zmm7[0x4]

if (arg1[0] <= 0f || arg2 == 1)
    r9 = 0
    rdx = 0
    zmm7 = zx.o(0)
else
    rdx = arg2 - 1
    
    if (arg1[0] < arg3[0])
        zmm7 = _mm_cvtepi32_ps(zx.o(rdx))
        zmm7[0] = zmm7[0] * arg1[0]
        zmm7[0] = zmm7[0] / arg3[0]
        zmm7[0] = zmm7[0] + zmm7[0]
        zmm7[0] = zmm7[0] - 0.5f
        int32_t rax_2 = int.d(zmm7[0]) s>> 1
        
        if (rax_2 s< 0)
            rdx = 0
        else if (rax_2 s< rdx)
            rdx = rax_2
        
        float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(rdx))
        r9 = rdx
        
        if (rdx + 1 != arg2)
            r9 = rdx + 1
        
        zmm7[0] = zmm7[0] - temp0_2[0]
    else
        r9 = 0
        zmm7 = zx.o(0)

int128_t* r8

if (arg5 == 1 || zmm7[0] <= 0f)
    r8 = arg6
else
    if (zmm7[0] < 1f)
        float zmm1[0x4] = zx.o(0)
        int32_t r8_2 = arg4[5].d
        int32_t rcx_4 = arg4[1].d - 1
        int32_t rbp = rcx_4
        int32_t rdi_1 = arg4[3].d - 1
        int32_t rsi = rdi_1
        
        if (rdx s<= rdi_1)
            rsi = rdx
        
        if (r9 s<= rcx_4)
            rbp = r9
        
        if (r9 s<= rdi_1)
            rdi_1 = r9
        
        if (rdx s<= rcx_4)
            rcx_4 = rdx
        
        int64_t rbx = sx.q(rcx_4) * 3
        int128_t* rax_12
        float (* rcx_9)[0x4]
        float zmm8[0x4]
        float zmm9[0x4]
        float zmm11[0x4]
        float zmm12[0x4]
        
        if (r8_2 s<= 0)
            int64_t rdx_3 = *arg4
            arg1 = data_143a2d268
            zmm9 = data_143a2d260
            zmm11 = *(rdx_3 + (rbx << 2))
            float temp0_15[0x4] = _mm_unpacklo_ps(data_143a2d264, zmm1[0].q)
            float temp0_16[0x4] = _mm_unpacklo_ps(zmm9, arg1[0].q)
            arg1 = *(rdx_3 + (rbx << 2) + 8)
            zmm9 = _mm_unpacklo_ps(temp0_16, temp0_15[0].q)
            zmm12 = zmm9
            float temp0_18[0x4] = _mm_unpacklo_ps(*(rdx_3 + (rbx << 2) + 4), zmm1[0].q)
            zmm11 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11, arg1[0].q), temp0_18[0].q)
            int64_t rcx_10 = sx.q(rbp) * 3
            rax_12 = (sx.q(rdi_1) << 4) + arg4[2]
            rcx_9 = (sx.q(rsi) << 4) + arg4[2]
            zmm8 = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(rdx_3 + (rcx_10 << 2)), (*(rdx_3 + (rcx_10 << 2) + 8))[0].q), 
                _mm_unpacklo_ps(*(rdx_3 + (rcx_10 << 2) + 4), zmm1[0].q)[0].q)
        else
            int64_t r10_2 = arg4[4]
            int32_t rcx_5 = r8_2 - 1
            int64_t r8_3 = *arg4
            int64_t r11_2 = arg4[2]
            int32_t rax_6 = rcx_5
            
            if (rdx s<= rcx_5)
                rax_6 = rdx
            
            arg1 = *(r8_3 + (rbx << 2) + 8)
            
            if (r9 s<= rcx_5)
                rcx_5 = r9
            
            zmm11 = *(r8_3 + (rbx << 2))
            int64_t rdx_2 = sx.q(rax_6) * 3
            float temp0_3[0x4] = _mm_unpacklo_ps(*(r8_3 + (rbx << 2) + 4), zmm1[0].q)
            zmm9 = *(r10_2 + (rdx_2 << 2))
            float temp0_4[0x4] = _mm_unpacklo_ps(zmm11, arg1[0].q)
            arg1 = *(r10_2 + (rdx_2 << 2) + 8)
            zmm11 = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
            int64_t r9_2 = sx.q(rcx_5) * 3
            zmm12 = *(r10_2 + (r9_2 << 2))
            float temp0_6[0x4] = _mm_unpacklo_ps(*(r10_2 + (rdx_2 << 2) + 4), zmm1[0].q)
            zmm9 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, arg1[0].q), temp0_6[0].q)
            int64_t rcx_6 = sx.q(rbp) * 3
            arg1 = *(r8_3 + (rcx_6 << 2) + 8)
            zmm8 = *(r8_3 + (rcx_6 << 2))
            float temp0_9[0x4] = _mm_unpacklo_ps(*(r8_3 + (rcx_6 << 2) + 4), zmm1[0].q)
            float temp0_10[0x4] = _mm_unpacklo_ps(zmm8, arg1[0].q)
            arg1 = *(r10_2 + (r9_2 << 2) + 8)
            zmm8 = _mm_unpacklo_ps(temp0_10, temp0_9[0].q)
            rax_12 = (sx.q(rdi_1) << 4) + r11_2
            float temp0_12[0x4] = _mm_unpacklo_ps(*(r10_2 + (r9_2 << 2) + 4), zmm1[0].q)
            zmm12 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm12, arg1[0].q), temp0_12[0].q)
            rcx_9 = (sx.q(rsi) << 4) + r11_2
        
        float zmm5[0x4] = *rcx_9
        float zmm13[0x4] = data_143f390d0
        float zmm6[0x4] = *rax_12
        float zmm15[0x4] = data_143f390e0
        float temp0_24[0x4] = _mm_mul_ps(zmm5, zmm5)
        float arg_20 = zmm7[0]
        float temp0_26[0x4] = _mm_add_ps(temp0_24, _mm_shuffle_ps(temp0_24, temp0_24, 0x4e))
        float temp0_28[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x39), temp0_26)
        float temp0_29[0x4] = _mm_rsqrt_ps(temp0_28)
        float temp0_30[0x4] = _mm_mul_ps(temp0_28, zmm13)
        float temp0_35[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm13, _mm_mul_ps(_mm_mul_ps(temp0_29, temp0_29), temp0_30)), 
                temp0_29), 
            temp0_29)
        float temp0_36[0x4] = _mm_mul_ps(zmm6, zmm6)
        float temp0_39[0x4] =
            _mm_sub_ps(zmm13, _mm_mul_ps(_mm_mul_ps(temp0_35, temp0_35), temp0_30))
        float temp0_40[0x4] = _mm_cmpeq_ps(zmm15, temp0_28, 2)
        float temp0_43[0x4] = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_39, temp0_35), temp0_35), zmm5)
        zmm5 = data_143f390c0
        float zmm10[0x4] = _mm_and_ps(temp0_43 ^ zmm5, temp0_40) ^ zmm5
        float temp0_46[0x4] = _mm_add_ps(temp0_36, _mm_shuffle_ps(temp0_36, temp0_36, 0x4e))
        float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0x39), temp0_46)
        float temp0_49[0x4] = _mm_rsqrt_ps(temp0_48)
        float temp0_50[0x4] = _mm_mul_ps(temp0_48, zmm13)
        float temp0_55[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm13, _mm_mul_ps(_mm_mul_ps(temp0_49, temp0_49), temp0_50)), 
                temp0_49), 
            temp0_49)
        float temp0_58[0x4] =
            _mm_sub_ps(zmm13, _mm_mul_ps(_mm_mul_ps(temp0_55, temp0_55), temp0_50))
        float temp0_59[0x4] = _mm_cmpeq_ps(zmm15, temp0_48, 2)
        zmm13 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_58, temp0_55), temp0_55), zmm6) ^ zmm5, temp0_59)
            ^ zmm5
        
        if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-06f)
            zmm7[0] = zmm7[0] - 1f
            
            if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-06f)
                float zmm3[0x4] = arg_20
                float temp0_66[0x4] = _mm_sub_ps(zmm8, zmm11)
                float temp0_67[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                float temp0_68[0x4] = _mm_sub_ps(zmm12, zmm9)
                float temp0_69[0x4] = _mm_sub_ps(zx.o(0), zmm10)
                float temp0_70[0x4] = _mm_mul_ps(zmm13, zmm10)
                float temp0_71[0x4] = _mm_mul_ps(temp0_66, temp0_67)
                float temp0_72[0x4] = _mm_mul_ps(temp0_68, temp0_67)
                float temp0_73[0x4] = _mm_mul_ps(zmm13, temp0_67)
                float temp0_74[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x4e)
                float temp0_75[0x4] = _mm_add_ps(temp0_71, zmm11)
                float temp0_76[0x4] = _mm_add_ps(temp0_70, temp0_74)
                float temp0_77[0x4] = _mm_add_ps(temp0_72, zmm9)
                arg6[1] = temp0_75
                float temp0_79[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x39), temp0_76)
                arg6[2] = temp0_77
                float temp0_80[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_79, 2)
                arg1 = data_143f39070
                zmm5 = _mm_and_ps(temp0_80, zmm10 ^ temp0_69)
                zmm10 = data_143f390d0
                float temp0_84[0x4] =
                    _mm_add_ps(_mm_mul_ps(zmm5 ^ temp0_69, _mm_sub_ps(arg1, temp0_67)), temp0_73)
                float temp0_85[0x4] = _mm_mul_ps(temp0_84, temp0_84)
                float temp0_87[0x4] = _mm_add_ps(temp0_85, _mm_shuffle_ps(temp0_85, temp0_85, 0x4e))
                float temp0_89[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0x39), temp0_87)
                float temp0_90[0x4] = _mm_rsqrt_ps(temp0_89)
                float temp0_91[0x4] = _mm_mul_ps(temp0_89, zmm10)
                float temp0_96[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(temp0_90, temp0_90), temp0_91)), 
                        temp0_90), 
                    temp0_90)
                float temp0_99[0x4] =
                    _mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(temp0_96, temp0_96), temp0_91))
                float temp0_100[0x4] = _mm_cmpeq_ps(zmm15, temp0_89, 2)
                zmm10 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_99, temp0_96), temp0_96), temp0_84)
                        ^ data_143f390c0, 
                    temp0_100) ^ data_143f390c0
                *arg6 = zmm10
            else
                *arg6 = zmm13
                zmm10 = zmm13
                arg6[1] = zmm8
                arg6[2] = zmm12
        else
            arg6[1] = zmm11
            arg6[2] = zmm9
            *arg6 = zmm10
        
        zmm5 = data_143f390d0
        float temp0_105[0x4] = _mm_mul_ps(zmm10, zmm10)
        float temp0_107[0x4] = _mm_add_ps(temp0_105, _mm_shuffle_ps(temp0_105, temp0_105, 0x4e))
        float temp0_109[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0x39), temp0_107)
        float temp0_110[0x4] = _mm_rsqrt_ps(temp0_109)
        float temp0_111[0x4] = _mm_mul_ps(temp0_109, zmm5)
        float temp0_112[0x4] = _mm_mul_ps(temp0_110, temp0_110)
        float temp0_113[0x4] = _mm_cmpeq_ps(zmm15, temp0_109, 2)
        float temp0_117[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(temp0_112, temp0_111)), temp0_110), temp0_110)
        *arg6 = _mm_and_ps(
            _mm_mul_ps(
                _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_117, temp0_117), temp0_111)), 
                        temp0_117), 
                    temp0_117), 
                zmm10) ^ data_143f390c0, 
            temp0_113) ^ data_143f390c0
        return arg6
    
    r8 = arg6
    rdx = r9

return sub_141de7d80(arg4, rdx, r8) __tailcall
