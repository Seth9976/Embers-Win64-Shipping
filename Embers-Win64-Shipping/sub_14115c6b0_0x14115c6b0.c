// 函数: sub_14115c6b0
// 地址: 0x14115c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int32_t* var_278 = arg10
int64_t* rax_3 = sub_14139bef0(arg1)
int32_t* result
int64_t* var_2f8

if (arg8 == 0 || data_1439b5c2c == 0)
    int32_t var_348_4 = data_143ed33c4
    var_2f8 = nullptr
    var_348_4.q = arg6
    sub_141124080(arg1, arg2, &var_2f8, arg5, 
        sub_14111ddc0(arg1, &var_2f8, DistanceFieldBentNormalAO", 0xa), var_348_4, arg10)
    int64_t* rax_261 = var_2f8
    int128_t var_2d0_3 = data_142d57d10
    void*** rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t zmm0_5 = data_142d57920
    int128_t var_2c0_3 = data_142d3f800
    int64_t r12_1 = rax_261[2]
    int64_t* r15_1 = rax_261[1]
    void* rax_262 = &rbx_3[0xa]
    
    if (rax_262 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x58)
        rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_262 = &rbx_3[0xa]
    
    *(arg1 + 0x30) = rax_262
    int64_t* rax_263 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_263 = rbx_3
    *(arg1 + 8) = &rbx_3[1]
    rbx_3[1] = 0
    *rbx_3 = &data_142d56628
    rbx_3[2].d = var_2d0_3.d
    __builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
    *(rbx_3 + 0x34) = zmm0_5:4.d
    rbx_3[7].d = zmm0_5:8.d
    *(rbx_3 + 0x3c) = zmm0_5:0xc.d
    rbx_3[8] = r15_1
    rbx_3[9] = r12_1
    
    if ((*(*r15_1 + 8))(r15_1) == 0)
        int64_t* rcx_152 = rbx_3[8]
        
        if ((*(*rcx_152 + 0x18))(rcx_152) == 0)
            int64_t* rcx_153 = rbx_3[8]
            
            if ((*(*rcx_153 + 0x20))(rcx_153) == 0)
                int64_t* rcx_154 = rbx_3[8]
                (*(*rcx_154 + 0x10))(rcx_154)
    
    int64_t* rcx_155 = rbx_3[9]
    result = (*(*rcx_155 + 8))(rcx_155)
    
    if (result == 0)
        int64_t* rcx_156 = rbx_3[9]
        result = (*(*rcx_156 + 0x18))(rcx_156)
        
        if (result == 0)
            int64_t* rcx_157 = rbx_3[9]
            result = (*(*rcx_157 + 0x20))(rcx_157)
            
            if (result == 0)
                int64_t* rcx_158 = rbx_3[9]
                result = (*(*rcx_158 + 0x10))(rcx_158)
    
    int64_t* rcx_159 = var_2f8
    int64_t* rbx_6 = *arg9
    *arg9 = rcx_159
    
    if (rcx_159 != 0)
        result = (*(*rcx_159 + 0x30))()
        rcx_159 = var_2f8
    
    if (rbx_6 != 0)
        result = (*(*rbx_6 + 0x38))(rbx_6)
        rcx_159 = var_2f8
    
    if (rcx_159 != 0)
        result = (*(*rcx_159 + 0x38))(rcx_159)
else
    TEB* gsbase
    uint128_t zmm6
    
    if (data_143e59500
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e59500)
        
        if (data_143e59500 == 0xffffffff)
            zmm6 = sub_140b58170(&data_143e594f8, "DistanceFieldAOHistory", 1)
            _Init_thread_footer(&data_143e59500)
    
    int32_t rcx_2 = *(*(arg2 + 0x15a8) + 0x28)
    int64_t rcx_4 = *(arg1 + 0x30) + 7
    int32_t var_2a0 = data_143e594f8
    void*** rcx_5 = rcx_4 & 0xfffffffffffffff8
    void* rax_6 = &rcx_5[3]
    
    if (rax_6 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x20)
        rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_5[3]
    
    *(arg1 + 0x30) = rax_6
    int64_t* rax_7 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_7 = rcx_5
    *(arg1 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142f21860
    rcx_5[2] = var_2a0.q
    int32_t var_268
    sub_1410f8060(&var_268)
    int64_t* rcx_10 = *arg8
    void* rax_11
    
    if (rcx_10 != 0 && *(arg2 + 0xd64) == 0 && (*(arg2 + 0x497c) & 8) == 0 && data_143e56dec == 0)
        rax_11 = (*(*rcx_10 + 0x10))()
    
    int64_t* var_2e8
    int32_t var_264
    int64_t* rcx_120
    int128_t zmm0_2
    
    if (rcx_10 == 0 || *(arg2 + 0xd64) != 0 || (*(arg2 + 0x497c) & 8) != 0 || data_143e56dec != 0
            || *(rax_11 + 0x14) != var_268 || *(rax_11 + 0x18) != var_264)
        int32_t var_348_3 = data_143ed33c4
        var_2f8 = nullptr
        var_348_3.q = arg6
        sub_141124080(arg1, arg2, &var_2f8, arg5, 
            sub_14111ddc0(arg1, &var_2f8, DistanceFieldBentNormalAO", 0xa), var_348_3, arg10)
        int64_t* rax_211 = var_2f8
        int128_t var_2d0_2 = data_142d57d10
        void*** r14_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        zmm0_2 = data_142d57920
        int128_t var_2c0_2 = data_142d3f800
        var_278 = rax_211[2]
        int64_t* rcx_126 = rax_211[1]
        void* rax_212 = &r14_36[0xa]
        
        if (rax_212 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x58)
            r14_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_212 = &r14_36[0xa]
        
        *(arg1 + 0x30) = rax_212
        void**** rax_213 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_213 = r14_36
        *(arg1 + 8) = &r14_36[1]
        r14_36[1] = 0
        *r14_36 = &data_142d56628
        r14_36[2].d = var_2d0_2.d
        __builtin_memset(r14_36 + 0x14, 0xff, 0x20)
        *(r14_36 + 0x34) = zmm0_2:4.d
        r14_36[7].d = zmm0_2:8.d
        *(r14_36 + 0x3c) = zmm0_2:0xc.d
        r14_36[9] = var_278
        r14_36[8] = rcx_126
        
        if ((*(*rcx_126 + 8))() == 0)
            int64_t* rcx_128 = r14_36[8]
            
            if ((*(*rcx_128 + 0x18))(rcx_128) == 0)
                int64_t* rcx_129 = r14_36[8]
                
                if ((*(*rcx_129 + 0x20))(rcx_129) == 0)
                    int64_t* rcx_130 = r14_36[8]
                    (*(*rcx_130 + 0x10))(rcx_130)
        
        int64_t* rcx_131 = r14_36[9]
        
        if ((*(*rcx_131 + 8))(rcx_131) == 0)
            int64_t* rcx_132 = r14_36[9]
            
            if ((*(*rcx_132 + 0x18))(rcx_132) == 0)
                int64_t* rcx_133 = r14_36[9]
                
                if ((*(*rcx_133 + 0x20))(rcx_133) == 0)
                    int64_t* rcx_134 = r14_36[9]
                    (*(*rcx_134 + 0x10))(rcx_134)
        
        rcx_120 = var_2f8
        int64_t* r14_39 = *arg8
        *arg8 = rcx_120
        
        if (rcx_120 != 0)
            (*(*rcx_120 + 0x30))()
            rcx_120 = var_2f8
        
        if (r14_39 != 0)
            (*(*r14_39 + 0x38))(r14_39)
            rcx_120 = var_2f8
        
        int64_t* r14_40 = *arg9
        *arg9 = rcx_120
        
        if (rcx_120 != 0)
            (*(*rcx_120 + 0x30))()
            rcx_120 = var_2f8
        
        if (r14_40 != 0)
            (*(*r14_40 + 0x38))(r14_40)
            rcx_120 = var_2f8
    else
        uint128_t var_58_1 = zmm6
        int32_t rcx_12
        
        if (data_1439b5c34 == 0 || data_1439b55a0 s< 2)
            rcx_12.b = 0
        else
            rcx_12.b = 1
        
        var_2f8 = nullptr
        int32_t rax_12 = 0
        
        if (rcx_12.b != 0)
            rax_12 = data_143ed33c0
        
        int32_t var_348 = rax_12
        sub_14111ddc0(arg1, &var_2f8, arg3, 0xa)
        int128_t zmm1 = data_142d3f5a0
        int64_t rcx_14 = var_2f8[1]
        int64_t var_1a8 = rcx_14
        int32_t var_d0_1 = 0
        int32_t var_cc
        __builtin_memset(&var_cc, 0xff, 0x14)
        int128_t var_b8_1 = zmm1
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x19)
        int64_t var_1a0_1 = 0
        int32_t var_198_1 = 0xffffffff
        int16_t var_194_1 = 0x500
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x11)
        int32_t var_d4_1 = 0
        bool var_8f_1 = *(rcx_14 + 0x38) u> 1
        void var_190
        memset(&var_190, 0, 0xa8)
        int64_t r14_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_14 = r14_3 + 0x1c
        
        if (rax_14 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x1e)
            r14_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            rax_14 = r14_3 + 0x1c
        
        wchar16 const* const rcx_17 = u"UpdateHistory"
        *(arg1 + 0x30) = rax_14
        wchar16 const i
        
        do
            i = *rcx_17
            *(r14_3 - u"UpdateHistory" + rcx_17) = i
            rcx_17 = &rcx_17[1]
        while (i != 0)
        void*** rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_20[0x27]
        
        if (rax_15 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x140)
            rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_20[0x27]
        
        *(arg1 + 0x30) = rax_15
        void**** rax_16 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_16 = rcx_20
        *(arg1 + 8) = &rcx_20[1]
        sub_1405d11b0(rcx_20, &var_1a8, r14_3)
        *(arg1 + 0x1c4) = 1
        sub_1405d19b0(arg1, &var_1a8)
        int64_t var_98
        *(arg1 + 0x178) = var_98:7.b
        *(arg1 + 0x179) = 0
        *(arg1 + 0x1c4) = 1
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
        void*** rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(*(arg2 + 0x15a0) - *(arg2 + 0x1598))
        uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o((temp6_1 - temp5_1) s>> 1))
        void* rax_29 = &rcx_27[5]
        uint128_t zmm7 = _mm_cvtepi32_ps(zx.o((temp8_1 - temp7_1) s>> 1))
        
        if (rax_29 u> *(arg1 + 0x38))
            zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_27[5]
        
        *(arg1 + 0x30) = rax_29
        void**** rax_30 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_30 = rcx_27
        *(arg1 + 8) = &rcx_27[1]
        rcx_27[1] = 0
        *rcx_27 = &data_142d54998
        *(rcx_27 + 0x1c) = zmm7.d
        rcx_27[4].d = zmm6_1.d
        rcx_27[2] = 0
        rcx_27[3].d = 0
        *(rcx_27 + 0x24) = 0x3f800000
        int128_t var_258
        __builtin_memset(&var_258, 0, 0x30)
        int64_t var_1fc
        __builtin_memset(&var_1fc, 0, 0x43)
        int128_t var_210_1 = zx.o(0)
        int16_t var_1b8_1 = 0
        sub_140fdc870(arg1, &var_258)
        int64_t var_220_1 = data_14395da18
        int64_t var_218_1 = data_14395d9e8
        int64_t var_228_1 = data_14395da00
        sub_1419a2ec0(*(arg2 + 0x5150), &var_2e8, &data_143ed5e80, 0)
        int64_t* rcx_33 = var_2e8
        var_258.q = data_1439c9210
        int64_t rax_36 = 0
        int32_t var_2e0
        
        if (rcx_33 != 0)
            int64_t rdx_11 = sx.q(*(rcx_33 + 0x10c))
            int64_t rcx_34 = rdx_11
            int64_t* r14_6 = *(var_2e0.q + 0x10)
            int64_t rax_38 = r14_6[3]
            
            if (*(rax_38 + (rdx_11 << 3)) == 0)
                sub_1419ccf30(r14_6, rdx_11.d)
                rax_38 = r14_6[3]
                rcx_34 = rdx_11
            
            rax_36 = *(rax_38 + (rcx_34 << 3))
        
        var_258:8.q = rax_36
        int32_t var_200_1 = 0
        sub_1419a2ec0(*(arg2 + 0x5150), &var_2a0, &data_143e56e70, 0)
        void* rax_39 = var_2a0.q
        int64_t rcx_37 = 0
        
        if (rax_39 != 0)
            int64_t rdx_13 = sx.q(*(rax_39 + 0x10c))
            int64_t rcx_38 = rdx_13
            void* var_298
            int64_t* r14_7 = *(var_298 + 0x10)
            int64_t rax_41 = r14_7[3]
            
            if (*(rax_41 + (rdx_13 << 3)) == 0)
                sub_1419ccf30(r14_7, rdx_13.d)
                rax_41 = r14_7[3]
                rcx_38 = rdx_13
            
            rcx_37 = *(rax_41 + (rcx_38 << 3))
        
        int128_t var_238
        var_238.q = rcx_37
        sub_1419870b0(arg1, &var_258, 2)
        int32_t var_328_1 = var_278.d
        var_348.q = arg5
        int512_t zmm2_1
        int512_t zmm3_1
        zmm2_1, zmm3_1 = sub_141145a50(var_2a0.q, arg1, arg2, arg7, var_348, arg6, *arg8 + 8, arg4)
        void* r9_1 = zx.q(*(arg2 + 0x1598))
        int32_t rcx_44 = *(arg2 + 0x159c)
        uint128_t zmm0 = var_2e8.o
        int32_t var_300_1 = 1
        int64_t rax_47 = *(rax_3 + 0x37c)
        var_2a0.q = rax_47
        int32_t temp9_1
        int32_t temp10_1
        temp9_1:temp10_1 = sx.q(rax_47.d)
        int32_t var_308_1 = 0
        var_2a0 = (temp10_1 - temp9_1) s>> 1
        int32_t temp11_1
        int32_t temp12_1
        temp11_1:temp12_1 = sx.q(rcx_2)
        var_2e8.o = zmm0
        int32_t temp13_1
        int32_t temp14_1
        temp13_1:temp14_1 = sx.q(*(arg2 + 0x15a0) - r9_1.d)
        int32_t rax_59 = (temp14_1 - temp13_1) s>> 1
        int64_t var_290
        var_290.d = rax_59
        int32_t temp15_1
        int32_t temp16_1
        temp15_1:temp16_1 = sx.q(*(arg2 + 0x15a4) - rcx_44)
        zmm3_1.o = zx.o(rax_59)
        int32_t rax_64 = (temp16_1 - temp15_1) s>> 1
        var_290:4.d = rax_64
        zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
        zmm2_1.o = zx.o(rax_64)
        int32_t temp17_1
        int32_t temp18_1
        temp17_1:temp18_1 = sx.q(rcx_44)
        zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
        int32_t temp19_1
        int32_t temp20_1
        temp19_1:temp20_1 = sx.q(r9_1.d)
        uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o((temp18_1 - temp17_1) s>> 1))
        int64_t* var_310_1 = &var_2e8
        int64_t rax_73 = var_2a0.q
        var_328_1 = zmm2_1.d
        int32_t* var_330_1
        var_330_1.d = zmm3_1.d
        void* var_338_1
        var_338_1.d = zmm1_2.d
        int64_t var_340
        var_340.d = _mm_cvtepi32_ps(zx.o((temp20_1 - temp19_1) s>> 1)).d
        int32_t var_348_1 = zmm2_1.d
        zmm2_1.o = zx.o(0)
        sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_1, zmm3_1, var_348_1, var_340.d, var_338_1.d, 
            var_330_1.d, var_328_1, var_290, rax_73, var_310_1, var_308_1, var_300_1)
        sub_141096650(arg1)
        int64_t* rax_75 = var_2f8
        int128_t var_2d0 = data_142d57d10
        void*** r14_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        int128_t zmm0_1 = data_142d57920
        int128_t var_2c0 = data_142d3f800
        var_278 = rax_75[2]
        int64_t* rcx_48 = rax_75[1]
        void* rax_76 = &r14_10[0xa]
        
        if (rax_76 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x58)
            r14_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_76 = &r14_10[0xa]
        
        *(arg1 + 0x30) = rax_76
        int64_t* rax_77 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_77 = r14_10
        *(arg1 + 8) = &r14_10[1]
        r14_10[1] = 0
        *r14_10 = &data_142d56628
        r14_10[2].d = var_2d0.d
        __builtin_memset(r14_10 + 0x14, 0xff, 0x20)
        *(r14_10 + 0x34) = zmm0_1:4.d
        r14_10[7].d = zmm0_1:8.d
        *(r14_10 + 0x3c) = zmm0_1:0xc.d
        r14_10[9] = var_278
        r14_10[8] = rcx_48
        
        if ((*(*rcx_48 + 8))() == 0)
            int64_t* rcx_50 = r14_10[8]
            
            if ((*(*rcx_50 + 0x18))(rcx_50) == 0)
                int64_t* rcx_51 = r14_10[8]
                
                if ((*(*rcx_51 + 0x20))(rcx_51) == 0)
                    int64_t* rcx_52 = r14_10[8]
                    (*(*rcx_52 + 0x10))(rcx_52)
        
        int64_t* rcx_53 = r14_10[9]
        
        if ((*(*rcx_53 + 8))(rcx_53) == 0)
            int64_t* rcx_54 = r14_10[9]
            
            if ((*(*rcx_54 + 0x18))(rcx_54) == 0)
                int64_t* rcx_55 = r14_10[9]
                
                if ((*(*rcx_55 + 0x20))(rcx_55) == 0)
                    int64_t* rcx_56 = r14_10[9]
                    (*(*rcx_56 + 0x10))(rcx_56)
        
        int64_t var_a0
        sub_1405d1550(&var_a0)
        char rax_98
        
        if (data_1439b5c34 == 0 || data_1439b55a0 s< 2)
            rax_98 = 0
        else
            rax_98 = 1
        
        int64_t* r14_13 = *arg8
        
        if (rax_98 == 0)
            rcx_120 = var_2f8
            *arg8 = rcx_120
            
            if (rcx_120 != 0)
                (*(*rcx_120 + 0x30))()
                rcx_120 = var_2f8
            
            if (r14_13 != 0)
                (*(*r14_13 + 0x38))(r14_13)
                rcx_120 = var_2f8
            
            int64_t* r14_33 = *arg9
            *arg9 = rcx_120
            
            if (rcx_120 != 0)
                (*(*rcx_120 + 0x30))()
                rcx_120 = var_2f8
            
            if (r14_33 != 0)
                (*(*r14_33 + 0x38))(r14_33)
                rcx_120 = var_2f8
        else
            void* rax_100 = (*(*r14_13 + 0x10))(r14_13)
            int64_t rax_102 = *(rax_3 + 0x37c)
            var_2a0.q = rax_102
            int32_t temp21_1
            int32_t temp22_1
            temp21_1:temp22_1 = sx.q(rax_102.d)
            int32_t rax_105 = (temp22_1 - temp21_1) s>> 1
            var_2a0 = rax_105
            int32_t temp23_1
            int32_t temp24_1
            temp23_1:temp24_1 = sx.q((temp12_1 - temp11_1) s>> 1)
            int32_t var_29c_3 = (temp24_1 - temp23_1) s>> 1
            
            if (*(rax_100 + 0x14) != rax_105 || *(rax_100 + 0x18) != (var_2a0.q u>> 0x20).d)
                sub_1419a2440(&data_1439c9260, arg8)
                int64_t* rcx_60 = *arg8
                *arg8 = 0
                
                if (rcx_60 != 0)
                    (*(*rcx_60 + 0x38))(rcx_60)
                
                var_348_1 = 0
                sub_14111ddc0(arg1, arg8, arg3, 0xa)
            
            int64_t* r14_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rcx_62 = *(*arg8 + 8)
            void* rax_114 = &r14_16[1]
            
            if (rax_114 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                r14_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_114 = &r14_16[1]
            
            *(arg1 + 0x30) = rax_114
            *r14_16 = rcx_62
            void*** rcx_66 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_115 = &rcx_66[5]
            
            if (rax_115 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_66 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_115 = &rcx_66[5]
            
            *(arg1 + 0x30) = rax_115
            *(arg1 + 0x14) += 1
            int128_t zmm1_4 = data_142d3f5a0
            **(arg1 + 8) = rcx_66
            *(arg1 + 8) = &rcx_66[1]
            rcx_66[1] = 0
            *rcx_66 = &data_142d549c8
            rcx_66[2].d = 1
            rcx_66[3] = r14_16
            rcx_66[4].d = 1
            int64_t rcx_70 = *(*arg8 + 8)
            var_1a8 = rcx_70
            int32_t var_d0_2 = 0
            int32_t var_cc_1
            __builtin_memset(&var_cc_1, 0xff, 0x14)
            int128_t var_b8_2 = zmm1_4
            int64_t var_a8_1
            __builtin_memset(&var_a8_1, 0, 0x19)
            int64_t var_1a0_2 = 0
            int32_t var_198_2 = 0xffffffff
            int16_t var_194_2 = 0x500
            int64_t var_e8_1
            __builtin_memset(&var_e8_1, 0, 0x11)
            int32_t var_d4_2 = 0
            bool var_8f_2 = *(rcx_70 + 0x38) u> 1
            memset(&var_190, 0, 0xa8)
            int64_t r14_21 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_119 = r14_21 + 0x2e
            
            if (rax_119 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                r14_21 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                rax_119 = r14_21 + 0x2e
            
            wchar16 const* const rcx_73 = u"UpdateHistoryStability"
            *(arg1 + 0x30) = rax_119
            wchar16 const i_1
            
            do
                i_1 = *rcx_73
                *(r14_21 - u"UpdateHistoryStability" + rcx_73) = i_1
                rcx_73 = &rcx_73[1]
            while (i_1 != 0)
            void*** rcx_76 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_120 = &rcx_76[0x27]
            
            if (rax_120 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x140)
                rcx_76 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_120 = &rcx_76[0x27]
            
            *(arg1 + 0x30) = rax_120
            void**** rax_121 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_121 = rcx_76
            *(arg1 + 8) = &rcx_76[1]
            sub_1405d11b0(rcx_76, &var_1a8, r14_21)
            *(arg1 + 0x1c4) = 1
            sub_1405d19b0(arg1, &var_1a8)
            int64_t var_98_1
            *(arg1 + 0x178) = var_98_1:7.b
            *(arg1 + 0x179) = 0
            *(arg1 + 0x1c4) = 1
            int32_t temp25_1
            int32_t temp26_1
            temp25_1:temp26_1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
            void*** rcx_83 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int32_t temp27_1
            int32_t temp28_1
            temp27_1:temp28_1 = sx.q(*(arg2 + 0x15a0) - *(arg2 + 0x1598))
            uint128_t zmm6_2 = _mm_cvtepi32_ps(zx.o((temp26_1 - temp25_1) s>> 1))
            void* rax_134 = &rcx_83[5]
            uint128_t zmm7_1 = _mm_cvtepi32_ps(zx.o((temp28_1 - temp27_1) s>> 1))
            
            if (rax_134 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_83 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_134 = &rcx_83[5]
            
            *(arg1 + 0x30) = rax_134
            void**** rax_135 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_135 = rcx_83
            *(arg1 + 8) = &rcx_83[1]
            rcx_83[1] = 0
            *rcx_83 = &data_142d54998
            *(rcx_83 + 0x1c) = zmm7_1.d
            rcx_83[4].d = zmm6_2.d
            rcx_83[2] = 0
            rcx_83[3].d = 0
            *(rcx_83 + 0x24) = 0x3f800000
            __builtin_memset(&var_258, 0, 0x30)
            int64_t var_1fc_1
            __builtin_memset(&var_1fc_1, 0, 0x43)
            int128_t var_210_2 = zx.o(0)
            int16_t var_1b8_2 = 0
            sub_140fdc870(arg1, &var_258)
            int64_t var_220_2 = data_14395da18
            int64_t var_218_2 = data_14395d9e8
            int64_t var_228_2 = data_14395da00
            sub_1419a2ec0(*(arg2 + 0x5150), &var_278, &data_143ed5e80, 0)
            int32_t* rcx_89 = var_278
            var_258.q = data_1439c9210
            int64_t rax_141 = 0
            
            if (rcx_89 != 0)
                int64_t rdx_34 = sx.q(rcx_89[0x43])
                int64_t rcx_90 = rdx_34
                void* var_270
                int64_t* r14_24 = *(var_270 + 0x10)
                int64_t rax_143 = r14_24[3]
                
                if (*(rax_143 + (rdx_34 << 3)) == 0)
                    sub_1419ccf30(r14_24, rdx_34.d)
                    rax_143 = r14_24[3]
                    rcx_90 = rdx_34
                
                rax_141 = *(rax_143 + (rcx_90 << 3))
            
            var_258:8.q = rax_141
            int32_t var_200_2 = 0
            int64_t rax_147
            
            if (*(arg2 + 0x1598) == data_143dbb180.d && *(arg2 + 0x159c) == data_143dbb180:4.d)
                rax_147 = *(rax_3 + 0x37c)
            
            void* r9_3
            int512_t zmm2_2
            int128_t var_238_1
            
            if (*(arg2 + 0x1598) != data_143dbb180.d || *(arg2 + 0x159c) != data_143dbb180:4.d
                    || *(arg2 + 0x15a0) != rax_147.d || *(arg2 + 0x15a4) != (rax_147 u>> 0x20).d)
                sub_1419a2ec0(*(arg2 + 0x5150), &var_2e8, &data_143e592d0, 0)
                int64_t* rax_154 = var_2e8
                int64_t rcx_99 = 0
                
                if (rax_154 != 0)
                    int64_t rdx_40 = sx.q(*(rax_154 + 0x10c))
                    int64_t rcx_100 = rdx_40
                    int64_t* r14_26 = *(var_2e0.q + 0x10)
                    int64_t rax_156 = r14_26[3]
                    
                    if (*(rax_156 + (rdx_40 << 3)) == 0)
                        sub_1419ccf30(r14_26, rdx_40.d)
                        rax_156 = r14_26[3]
                        rcx_100 = rdx_40
                    
                    rcx_99 = *(rax_156 + (rcx_100 << 3))
                
                var_238_1.q = rcx_99
                sub_1419870b0(arg1, &var_258, 2)
                var_348_1.q = &var_2f8[1]
                r9_3 = sub_141141db0(var_2e8, arg1, arg2, arg5, var_348_1)
            else
                sub_1419a2ec0(*(arg2 + 0x5150), &var_2e8, &data_143e59170, 0)
                int64_t* rax_149 = var_2e8
                int64_t rcx_93 = 0
                
                if (rax_149 != 0)
                    int64_t rdx_36 = sx.q(*(rax_149 + 0x10c))
                    int64_t rcx_94 = rdx_36
                    int64_t* r14_25 = *(var_2e0.q + 0x10)
                    int64_t rax_151 = r14_25[3]
                    
                    if (*(rax_151 + (rdx_36 << 3)) == 0)
                        sub_1419ccf30(r14_25, rdx_36.d)
                        rax_151 = r14_25[3]
                        rcx_94 = rdx_36
                    
                    rcx_93 = *(rax_151 + (rcx_94 << 3))
                
                var_238_1.q = rcx_93
                sub_1419870b0(arg1, &var_258, 2)
                var_348_1.q = &var_2f8[1]
                r9_3, zmm2_2 = sub_141142180(var_2e8, arg1, arg2, arg5, var_348_1)
            zmm2_2.o = zx.o(0)
            int32_t var_300_2 = 1
            int32_t var_308_2 = 0
            int64_t rax_160 = *(rax_3 + 0x37c)
            int64_t var_2d8_1 = rax_160
            int32_t temp29_1
            int32_t temp30_1
            temp29_1:temp30_1 = sx.q(rax_160.d)
            var_2e8.o = var_278.o
            var_2d8_1.d = (temp30_1 - temp29_1) s>> 1
            int32_t temp31_1
            int32_t temp32_1
            temp31_1:temp32_1 = sx.q(var_2d8_1:4.d)
            var_2d8_1:4.d = (temp32_1 - temp31_1) s>> 1
            int32_t temp33_1
            int32_t temp34_1
            temp33_1:temp34_1 = sx.q(*(arg2 + 0x15a0) - *(arg2 + 0x1598))
            int32_t rax_172 = (temp34_1 - temp33_1) s>> 1
            int64_t var_288
            var_288.d = rax_172
            int32_t temp35_1
            int32_t temp36_1
            temp35_1:temp36_1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
            int512_t zmm3_2
            zmm3_2.o = zx.o(rax_172)
            int32_t rax_177 = (temp36_1 - temp35_1) s>> 1
            var_288:4.d = rax_177
            zmm3_2.o = _mm_cvtepi32_ps(zmm3_2.o)
            void** var_310_2 = &var_2e8
            uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_177))
            var_330_1.d = zmm3_2.d
            var_338_1.d = 0
            var_340.d = 0
            sub_1413993b0(arg1, zx.o(0), zmm2_2, r9_3, zmm3_2, zmm0_3.d, var_340.d, var_338_1.d, 
                var_330_1.d, zmm0_3.d, var_288, var_2d8_1, var_310_2, var_308_2, var_300_2)
            sub_141096650(arg1)
            void* rax_180 = *arg8
            int128_t var_2d0_1 = data_142d57d10
            void*** r14_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int128_t zmm0_4 = data_142d57920
            int128_t var_2c0_1 = data_142d3f800
            var_278 = *(rax_180 + 0x10)
            int64_t* rcx_108 = *(rax_180 + 8)
            void* rax_181 = &r14_29[0xa]
            
            if (rax_181 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x58)
                r14_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_181 = &r14_29[0xa]
            
            *(arg1 + 0x30) = rax_181
            void**** rax_182 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_182 = r14_29
            *(arg1 + 8) = &r14_29[1]
            r14_29[1] = 0
            *r14_29 = &data_142d56628
            r14_29[2].d = var_2d0_1.d
            __builtin_memset(r14_29 + 0x14, 0xff, 0x20)
            *(r14_29 + 0x34) = zmm0_4:4.d
            r14_29[7].d = zmm0_4:8.d
            *(r14_29 + 0x3c) = zmm0_4:0xc.d
            r14_29[9] = var_278
            r14_29[8] = rcx_108
            
            if ((*(*rcx_108 + 8))() == 0)
                int64_t* rcx_110 = r14_29[8]
                
                if ((*(*rcx_110 + 0x18))(rcx_110) == 0)
                    int64_t* rcx_111 = r14_29[8]
                    
                    if ((*(*rcx_111 + 0x20))(rcx_111) == 0)
                        int64_t* rcx_112 = r14_29[8]
                        (*(*rcx_112 + 0x10))(rcx_112)
            
            int64_t* rcx_113 = r14_29[9]
            
            if ((*(*rcx_113 + 8))(rcx_113) == 0)
                int64_t* rcx_114 = r14_29[9]
                
                if ((*(*rcx_114 + 0x18))(rcx_114) == 0)
                    int64_t* rcx_115 = r14_29[9]
                    
                    if ((*(*rcx_115 + 0x20))(rcx_115) == 0)
                        int64_t* rcx_116 = r14_29[9]
                        (*(*rcx_116 + 0x10))(rcx_116)
            
            int64_t* rcx_117 = *arg8
            int64_t* r14_32 = *arg9
            *arg9 = rcx_117
            
            if (rcx_117 != 0)
                (*(*rcx_117 + 0x30))()
            
            if (r14_32 != 0)
                (*(*r14_32 + 0x38))(r14_32)
            
            sub_1405d1550(&var_a0)
            rcx_120 = var_2f8
    
    if (rcx_120 != 0)
        (*(*rcx_120 + 0x38))(rcx_120)
    
    int32_t var_2e0_1 = 1
    *arg7 = data_143dbb180.d
    arg7[1] = data_143dbb180:4.d
    int32_t temp0_11
    int32_t temp1_1
    temp0_11:temp1_1 = sx.q(*(arg2 + 0x15a0) - *(arg2 + 0x1598))
    arg7[2] = (temp1_1 - temp0_11) s>> 1
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
    arg7[3] = (temp3_1 - temp2_1) s>> 1
    int64_t* r14_43 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rcx_138 = (*arg9)[2]
    int64_t var_260
    var_2e8 = &var_260
    void* rax_252 = *(arg2 + 0x15a8)
    zmm0_2 = var_2e8.o
    var_260 = rcx_138
    var_2e8.o = zmm0_2
    int32_t* result_1
    result_1.d = data_143e594f8
    void* rax_254 = &r14_43[1]
    result_1:4.d = *(rax_252 + 0x28)
    
    if (rax_254 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        r14_43 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_254 = &r14_43[1]
    
    *(arg1 + 0x30) = rax_254
    int64_t* rcx_141 = r14_43
    int64_t i_3 = 1
    void* r8_11 = var_2e8 - r14_43
    int64_t i_2
    
    do
        *rcx_141 = *(r8_11 + rcx_141)
        rcx_141 = &rcx_141[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    void*** rcx_144 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_256 = &rcx_144[5]
    
    if (rax_256 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_144 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_256 = &rcx_144[5]
    
    *(arg1 + 0x30) = rax_256
    void**** rax_257 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_257 = rcx_144
    *(arg1 + 8) = &rcx_144[1]
    rcx_144[1] = 0
    *rcx_144 = &data_142f21870
    result = result_1
    rcx_144[2] = result
    rcx_144[3] = r14_43
    rcx_144[4].d = 1
__security_check_cookie(rax_1 ^ &var_368)
return result
