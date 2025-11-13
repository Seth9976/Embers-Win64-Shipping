// 函数: sub_141233420
// 地址: 0x141233420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
uint64_t result

if (arg5 == 0)
    result.b = 0
else
    void* rax_2 = *(arg1 + 8)
    void* var_360 = nullptr
    int64_t* rax_4 = (*(*arg5 + 0x40))(arg5, zx.q(*(rax_2 + 8)), &var_360)
    int64_t rdx_1 = *rax_4
    
    if ((*(rdx_1 + 0x90))(rax_4, rdx_1).b == 0)
        result.b = 0
    else
        int64_t rax_5 = *(arg4 + 8)
        int128_t zmm1 = data_142d3f5a0
        int32_t var_220_1 = 0
        int32_t var_21c
        __builtin_memset(&var_21c, 0xff, 0x14)
        int128_t var_208_1 = zmm1
        int64_t var_1f8
        __builtin_memset(&var_1f8, 0, 0x1a)
        int64_t var_2f8 = rax_5
        int64_t var_2f0_1 = 0
        int32_t var_2e8_1 = 0xffffffff
        int16_t var_2e4_1 = 0x500
        int64_t var_238_1
        __builtin_memset(&var_238_1, 0, 0x11)
        int32_t var_224_1 = 0
        int16_t var_1e0
        var_1e0:1.b = *(rax_5 + 0x38) u> 1
        void var_2e0
        memset(&var_2e0, 0, 0xa8)
        char var_228_1 = 0x45
        int64_t var_238_2 = *(data_143ec4ca0 + 8)
        int32_t var_224_2 = 0x21
        sub_1410e0180(arg2, &var_2f8)
        int64_t rsi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_7 = rsi_3 + 0x3e
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x40)
            rsi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_7 = rsi_3 + 0x3e
        
        wchar16 const* const rcx_7 = u"RenderLightFunctionForMaterial"
        *(arg2 + 0x30) = rax_7
        wchar16 const i
        
        do
            i = *rcx_7
            *(rcx_7 + rsi_3 - u"RenderLightFunctionForMaterial") = i
            rcx_7 = &rcx_7[1]
        while (i != 0)
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_10[0x27]
        
        if (rax_8 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_10[0x27]
        
        *(arg2 + 0x30) = rax_8
        void**** rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        sub_1405d11b0(rcx_10, &var_2f8, rsi_3)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_2f8)
        int64_t var_1e8
        *(arg2 + 0x178) = var_1e8:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        int64_t var_1f0
        uint128_t zmm6_1 = sub_1405d1550(&var_1f0)
        void* rax_12 = *(arg1 + 8)
        int64_t r9 = *arg5
        var_360 = nullptr
        void* rax_14 = sub_1405948b0((*(r9 + 0x40))(arg5, zx.q(*(rax_12 + 8)), &var_360, r9))
        void* rax_15 = sub_1419cec70(*(rax_14 + 0x28), &data_143e81db8, 0)
        int64_t* rcx_19 = *(rax_14 + 0x28)
        var_360 = rax_15
        void* rax_16 = sub_1419cec70(rcx_19, &data_143e81ec8, 0)
        int64_t var_29c
        __builtin_memset(&var_29c, 0, 0x43)
        __builtin_memset(&var_2f8, 0, 0x30)
        int128_t var_2b0_1 = zx.o(0)
        int16_t var_258_1 = 0
        sub_140fdc870(arg2, &var_2f8)
        int64_t rax_17 = 0
        var_2f8 = data_1439c9410
        
        if (rax_15 != 0)
            int64_t rdx_9 = sx.q(*(rax_15 + 0x10c))
            int64_t* rsi_7 = *(rax_14 + 0x10)
            int64_t rax_18 = rsi_7[3]
            
            if (*(rax_18 + (rdx_9 << 3)) == 0)
                zmm6_1 = sub_1419ccf30(rsi_7, rdx_9.d)
                rax_18 = rsi_7[3]
            
            rax_17 = *(rax_18 + (rdx_9 << 3))
        
        int64_t var_2f0_2 = rax_17
        int64_t rax_19 = 0
        
        if (rax_16 != 0)
            int64_t rdx_10 = sx.q(*(rax_16 + 0x10c))
            int64_t* rsi_8 = *(rax_14 + 0x10)
            int64_t rax_20 = rsi_8[3]
            
            if (*(rax_20 + (rdx_10 << 3)) == 0)
                zmm6_1 = sub_1419ccf30(rsi_8, rdx_10.d)
                rax_20 = rsi_8[3]
            
            rax_19 = *(rax_20 + (rdx_10 << 3))
        
        int64_t* rcx_24 = *(arg3 + 0x20)
        int128_t var_2d8
        var_2d8.q = rax_19
        uint128_t var_358
        (*(*rcx_24 + 0x10))(rcx_24, &var_358)
        void* rax_22 = arg1
        int32_t i_1 = 0
        
        if (*(rax_22 + 0xa8) s> 0)
            int64_t r13_2 = 0
            char r14_3 = arg6
            int128_t zmm11 = 0x3b800000
            int128_t zmm12 = 0x3f866666
            uint128_t var_48_1 = zmm6_1
            uint128_t zmm7
            uint128_t var_58_1 = zmm7
            uint128_t zmm8
            uint128_t var_68_1 = zmm8
            uint128_t zmm9
            uint128_t var_78_1 = zmm9
            uint128_t zmm10
            uint128_t var_88_1 = zmm10
            
            do
                int64_t* rsi_10 = *(rax_22 + 0xa0) + r13_2
                
                if ((*(sx.q(*(arg3 + 0x28)) * 0x78 + rsi_10[0x31a] + 0x40) & 1) != 0)
                    if (*(*(arg3 + 0x20) + 0x13c) == 0)
                        var_358.q = *(rsi_10 + 0x60c)
                        var_358:8.d = *(rsi_10 + 0x614)
                    
                    uint128_t var_338 = var_358
                    zmm10 = sub_141227530(rsi_10, &var_338)
                    char var_380
                    int32_t var_378
                    
                    if (zmm10.d f>= zmm11.d)
                        zmm7 = zx.o(rsi_10[0x2b4].d)
                        void*** rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        zmm8 = zx.o(*(rsi_10 + 0x159c))
                        zmm9 = zx.o(rsi_10[0x2b3].d)
                        zmm6_1 = _mm_cvtepi32_ps(zx.o(*(rsi_10 + 0x15a4)))
                        void* rax_35 = &rcx_45[5]
                        zmm7 = _mm_cvtepi32_ps(zmm7)
                        zmm8 = _mm_cvtepi32_ps(zmm8)
                        zmm9 = _mm_cvtepi32_ps(zmm9)
                        
                        if (rax_35 u> *(arg2 + 0x38))
                            zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                            rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_35 = &rcx_45[5]
                        
                        *(arg2 + 0x30) = rax_35
                        void**** rax_36 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_36 = rcx_45
                        *(arg2 + 8) = &rcx_45[1]
                        rcx_45[1] = 0
                        *rcx_45 = &data_142d54998
                        rcx_45[2].d = zmm9.d
                        *(rcx_45 + 0x14) = zmm8.d
                        *(rcx_45 + 0x1c) = zmm7.d
                        rcx_45[4].d = zmm6_1.d
                        rcx_45[3].d = 0
                        *(rcx_45 + 0x24) = 0x3f800000
                        int64_t var_2b8_1 = data_14395d9e8
                        int32_t var_2a0_1 = 0
                        int64_t rax_39
                        
                        if (arg6 == 0)
                            rax_39 = data_14395da00
                        else if (arg8 == 0)
                            int64_t* var_388
                            var_388.b = 0
                            rax_39 = sub_14148bb80(sub_141096cf0(arg3), 0, 0, arg7, var_388.b)
                        else
                            rax_39 = data_1439b6560
                        
                        int64_t var_2c8_1 = rax_39
                        uint128_t zmm0_1 = zx.o(*(rsi_10 + 0x60c))
                        float rax_41 = *(rsi_10 + 0x614)
                        uint128_t zmm4_1 = zmm0_1
                        float zmm1_1 = rsi_10[0x1a6].d
                        float zmm3_1 = zmm0_1.d f- var_358.d
                        zmm0_1 = var_358:0xc.d
                        zmm4_1.d = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55).d f- var_358:4.d
                        float zmm2_1 = rax_41 f- var_358:8.d
                        zmm4_1.d = zmm4_1.d f* zmm4_1.d
                        zmm0_1.d = zmm0_1.d f* zmm12.d
                        zmm4_1.d = zmm4_1.d f+ zmm3_1 * zmm3_1
                        zmm1_1 = zmm1_1 + zmm1_1 f+ zmm0_1.d
                        zmm4_1.d = zmm4_1.d f+ zmm2_1 * zmm2_1
                        int64_t rax_42
                        
                        if (zmm4_1.d f>= zmm1_1 * zmm1_1)
                            int64_t var_2b8_2 = data_1439b53d0
                            rax_42 = data_1439b54e8
                            
                            if (*(rsi_10 + 0xd34) != 0)
                                rax_42 = data_1439b5500
                        else
                            rax_42 = data_1439b5500
                            
                            if (*(rsi_10 + 0xd34) != 0)
                                rax_42 = data_1439b54e8
                        
                        int64_t* rcx_51 = *(arg3 + 0x20)
                        int64_t var_2c0_1 = rax_42
                        (*(*rcx_51 + 0xd8))(rcx_51, arg2, rsi_10, &rsi_10[0x2b3], 0, var_380, 
                            var_378)
                        sub_1419870b0(arg2, &var_2f8, 2)
                        sub_14123a6b0(var_360, arg2, rsi_10, arg3)
                        var_378 = zmm10.d
                        var_380 = arg8
                        zmm11, zmm12 = sub_141239d60(rax_16, arg2, rsi_10, arg3, arg5, var_380)
                        sub_141223ee0(arg2)
                        r14_3 = arg6
                    else if (r14_3 == 0)
                        int64_t* rcx_27 = *(arg3 + 0x20)
                        (*(*rcx_27 + 0xd8))(rcx_27, arg2, rsi_10, &rsi_10[0x2b3], nullptr, var_380, 
                            var_378)
                        sub_141096650(arg2)
                        int64_t rax_28 = *(arg4 + 8)
                        int128_t zmm1_2 = data_142d3f5a0
                        int32_t var_100_1 = 0
                        int64_t var_d8
                        __builtin_memset(&var_d8, 0, 0x1a)
                        int64_t var_1d0_1 = 0
                        int64_t var_118_1
                        __builtin_memset(&var_118_1, 0, 0x11)
                        int32_t var_104_1 = 0
                        int32_t var_fc
                        __builtin_memset(&var_fc, 0xff, 0x14)
                        int128_t var_e8_1 = zmm1_2
                        int64_t var_1d8 = rax_28
                        int32_t var_1c8_1 = 0xffffffff
                        int16_t var_1c4_1 = 0x900
                        int16_t var_c0_1
                        var_c0_1:1.b = *(rax_28 + 0x38) u> 1
                        void var_1c0
                        memset(&var_1c0, 0, 0xa8)
                        char var_108_1 = 0x45
                        int64_t var_118_2 = *(data_143ec4ca0 + 8)
                        int32_t var_104_2 = 0x21
                        sub_1410e0180(arg2, &var_1d8)
                        int64_t rsi_13 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                        int64_t rax_30 = rsi_13 + 0x52
                        
                        if (rax_30 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x54)
                            rsi_13 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                            rax_30 = rsi_13 + 0x52
                        
                        *(arg2 + 0x30) = rax_30
                        wchar16 const* const rcx_34 = u"RenderLightFunction_PlusClearAttenuation"
                        wchar16 const j
                        
                        do
                            j = *rcx_34
                            *(rcx_34 + rsi_13 - u"RenderLightFunction_PlusClearAttenuation") = j
                            rcx_34 = &rcx_34[1]
                        while (j != 0)
                        void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_31 = &rcx_37[0x27]
                        
                        if (rax_31 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x140)
                            rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_31 = &rcx_37[0x27]
                        
                        *(arg2 + 0x30) = rax_31
                        void**** rax_32 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_32 = rcx_37
                        *(arg2 + 8) = &rcx_37[1]
                        sub_1405d11b0(rcx_37, &var_1d8, rsi_13)
                        *(arg2 + 0x1c4) = 1
                        sub_1405d19b0(arg2, &var_1d8)
                        int64_t var_c8
                        *(arg2 + 0x178) = var_c8:7.b
                        *(arg2 + 0x179) = 0
                        *(arg2 + 0x1c4) = 1
                        int64_t var_d0
                        sub_1405d1550(&var_d0)
                
                rax_22 = arg1
                i_1 += 1
                r13_2 += 0x5240
            while (i_1 s< *(rax_22 + 0xa8))
        
        sub_141096650(arg2)
        void*** rdx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_47 = &rdx_25[5]
        
        if (rax_47 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rdx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_47 = &rdx_25[5]
        
        *(arg2 + 0x30) = rax_47
        result = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *result = rdx_25
        result.b = 1
        *(arg2 + 8) = &rdx_25[1]
        rdx_25[1] = 0
        *rdx_25 = &data_142f18bc8
        rdx_25[2].b = 0
        *(rdx_25 + 0x14) = 0
        *(rdx_25 + 0x1c) = 0

__security_check_cookie(rax_1 ^ &var_3a8)
return result
