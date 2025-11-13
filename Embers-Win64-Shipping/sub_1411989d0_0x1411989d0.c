// 函数: sub_1411989d0
// 地址: 0x1411989d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2580)
void var_2598
int64_t var_c8 = __security_cookie ^ &var_2598
int64_t result
int64_t rdx
rdx:result = mulu.dp.q(0x431bde82d7b634db, data_143f0f168)

if (rdx u>> 0x12 != 0)
    int128_t zmm2_1
    int128_t zmm3
    zmm2_1, zmm3 = sub_1419a5310(arg1)
    int32_t rbx_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_1)
    
    if (*(arg1 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg1, zmm2_1, zmm3)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_4
    rdx_4.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbx_1)
    void** const var_2510 = &data_142f285d8
    void* var_2508
    __builtin_memset(&var_2508, 0, 0x11)
    sub_14119ada0(&var_2508, 0x927c0)
    int128_t zmm0_1
    
    for (int32_t i = 0; i u< 0x927c0; )
        int64_t var_2500_1
        int64_t rbx_2 = sx.q(var_2500_1.d)
        int32_t rax_2 = (rbx_2 + 1).d
        var_2500_1.d = rax_2
        
        if (rax_2 s> var_2500_1:4.d)
            sub_14119a680(&var_2508, rbx_2.d)
        
        void* rdx_7
        
        if ((var_2508.b & 1) == 0)
            rdx_7 = var_2508
        else
            rdx_7 = &var_2508 + (var_2508 s>> 1)
        
        uint64_t i_12 = zx.q(i)
        void* rcx_7 = rbx_2 * 0x50 + rdx_7
        i += 1
        zmm0_1.d = float.s(i_12)
        *(rcx_7 + 4) = 0
        *(rcx_7 + 0xc) = 0
        *rcx_7 = zmm0_1.d
        *(rcx_7 + 0x14) = 0
        *(rcx_7 + 0x1c) = 0x3f800000
        *(rcx_7 + 0x24) = 0
        *(rcx_7 + 0x2c) = 0x3f800000
        *(rcx_7 + 0x34) = 0
        *(rcx_7 + 0x3c) = 0x3f800000
        *(rcx_7 + 0x44) = 0
        *(rcx_7 + 0x4c) = 0x3f800000
    
    char rcx_8 = (data_1439c7a34).b
    zmm0_1 = data_143dbb1e0
    int64_t var_2408
    int64_t* var_2570_1 = &var_2408
    var_2408 = 0
    int64_t* rcx_9 = data_143f0f180
    int32_t var_23f8_1 = 1
    int32_t var_23e4_1 = (1 << rcx_8) - 1
    char var_23e0_1 = 0
    void** const* var_2400_1 = &var_2510
    int128_t var_23f4_1 = zmm0_1
    int64_t var_23d8_1 = 0
    int32_t var_23d0_1 = 0
    int64_t var_2538
    (*(*rcx_9 + 0x498))(rcx_9, &var_2538, &data_143f02b98, 0x2dc6c00, 1, var_2570_1)
    int32_t var_2448_1 = data_143f02318
    char var_2560_1 = 0
    int128_t var_2280
    __builtin_memset(&var_2280, 0, 0x18)
    wchar16 const* const var_2418_1 = u"UnknownTexture2D"
    char var_2568_1 = 1
    var_2570_1.b = 1
    int128_t var_2458 = data_143f02308
    int32_t var_2578_1
    var_2578_1.q = u"Benchmark0"
    int16_t var_2420_1 = 0
    int32_t var_2444_1 = 0x200
    int64_t var_2440_1 = 0x200
    int32_t var_2438_1 = 1
    int32_t var_2434_1 = 0x10000
    int16_t var_2430_1 = 1
    int64_t var_242c_1 = 2
    int32_t var_2424_1 = 9
    int16_t var_240f_1 = 0
    char var_2410_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg1, &var_2458, &var_2280, var_2578_1, var_2570_1.b, 
        var_2568_1, var_2560_1)
    var_2570_1.b = 1
    var_2578_1.q = u"Benchmark1"
    sub_1419a0ce0(&data_1439c9260, arg1, &var_2458, &var_2280:8, var_2578_1, var_2570_1.b, 1, 0)
    var_2570_1.b = 1
    var_2578_1.q = u"BenchmarkReadback"
    int32_t var_2444_2 = 1
    var_2440_1.d = 1
    var_242c_1 = 0x40000
    int64_t var_2270
    float zmm6_1 =
        sub_1419a0ce0(&data_1439c9260, arg1, &var_2458, &var_2270, var_2578_1, var_2570_1.b, 1, 0)
    int32_t var_21f0_1 = 0x3e5e8f71
    wchar16 const* const var_21f8 = u"ALUHeavyNoise"
    void* r8_3 = arg2 + 0x78
    int128_t zmm7 = 0x3f800000
    int128_t zmm8 = 0x3dcccccd
    int32_t i_1 = 0
    int32_t var_21d0_1 = 0x3e09814a
    wchar16 const* const var_21d8_1 = u"TexHeavy"
    int32_t var_21b0_1 = 0x3e85173a
    wchar16 const* const var_21b8_1 = u"DepTexHeavy"
    int32_t var_2190_1 = 0x3d20dc61
    wchar16 const* const var_2198_1 = u"FillOnly"
    int32_t var_2170_1 = 0x3f6ece54
    wchar16 const* const var_2178_1 = u"Bandwidth"
    wchar16 const* const var_21e8 = u"s/GigaPix"
    wchar16 const* const var_21c8_1 = u"s/GigaPix"
    wchar16 const* const var_21a8_1 = u"s/GigaPix"
    wchar16 const* const var_2188_1 = u"s/GigaPix"
    wchar16 const* const var_2168_1 = u"s/GigaPix"
    int32_t var_2150_1 = 0x3f268ee9
    wchar16 const* const var_2158_1 = u"VertThroughPut1"
    wchar16 const* const var_2148_1 = u"s/GigaVert"
    wchar16 const* const var_2128_1 = u"s/GigaVert"
    wchar16 const* const* rcx_10 = &var_21e8
    int32_t var_2130_1 = 0x3f10e0da
    wchar16 const* const var_2138_1 = u"VertThroughPut2"
    int32_t var_2180_1 = 0x40400000
    int32_t var_21e0_1 = 0x3f800000
    int32_t var_21dc_1 = 1
    int32_t var_21c0_1 = 0x3dcccccd
    int32_t var_21bc_1 = 1
    int32_t var_21a0_1 = 0x3dcccccd
    int32_t var_219c_1 = 1
    int32_t var_217c_1 = 1
    int32_t var_2160_1 = 0x3f800000
    int32_t var_215c_1 = 1
    int64_t var_2140_1 = 0
    int64_t var_2120_1 = 0
    int64_t var_22a8
    int32_t var_22a0_7
    int32_t var_229c_7
    int32_t rax_22
    int128_t zmm1_1
    
    do
        zmm2_1 = rcx_10[-1].d
        zmm3 = rcx_10[1].d
        var_22a8 = rcx_10[-2]
        wchar16 const* const var_2290_1 = *rcx_10
        int32_t var_22a0_1 = 0xbf800000
        zmm1_1.d = zmm2_1.d
        int32_t var_229c_1 = 0xbf800000
        float zmm0_2[0x4] = var_22a8.o
        var_22a8 = rcx_10[2]
        int64_t rax_12 = rcx_10[4]
        zmm2_1 = rcx_10[3].d
        *(r8_3 - 0x28) = zmm0_2
        int64_t var_2290_2 = rax_12
        int64_t rax_13 = rcx_10[6]
        *(r8_3 - 0x18) = zmm1_1
        int32_t var_22a0_2 = 0xbf800000
        int32_t var_229c_2 = 0xbf800000
        float temp0_1[0x4] = _mm_unpacklo_ps(zx.o(0), zmm3.q)
        zmm3 = rcx_10[5].d
        zmm1_1.d = zmm2_1.d
        zmm2_1 = rcx_10[7].d
        *(r8_3 - 8) = temp0_1.q
        zmm0_2 = var_22a8.o
        var_22a8 = rax_13
        int64_t rax_14 = rcx_10[8]
        *r8_3 = zmm0_2
        int64_t var_2290_3 = rax_14
        int64_t rax_15 = rcx_10[0xa]
        *(r8_3 + 0x10) = zmm1_1
        int32_t var_22a0_3 = 0xbf800000
        int32_t var_229c_3 = 0xbf800000
        float temp0_2[0x4] = _mm_unpacklo_ps(zx.o(0), zmm3.q)
        zmm3 = rcx_10[9].d
        zmm1_1.d = zmm2_1.d
        zmm2_1 = rcx_10[0xb].d
        *(r8_3 + 0x20) = temp0_2.q
        zmm0_2 = var_22a8.o
        var_22a8 = rax_15
        int64_t rax_16 = rcx_10[0xc]
        *(r8_3 + 0x28) = zmm0_2
        int64_t var_2290_4 = rax_16
        int64_t rax_17 = rcx_10[0xe]
        *(r8_3 + 0x38) = zmm1_1
        int32_t var_22a0_4 = 0xbf800000
        int32_t var_229c_4 = 0xbf800000
        float temp0_3[0x4] = _mm_unpacklo_ps(zx.o(0), zmm3.q)
        zmm3 = rcx_10[0xd].d
        zmm1_1.d = zmm2_1.d
        zmm2_1 = rcx_10[0xf].d
        *(r8_3 + 0x48) = temp0_3.q
        zmm0_2 = var_22a8.o
        var_22a8 = rax_17
        int64_t rax_18 = rcx_10[0x10]
        *(r8_3 + 0x50) = zmm0_2
        int64_t var_2290_5 = rax_18
        int64_t rax_19 = rcx_10[0x12]
        *(r8_3 + 0x60) = zmm1_1
        int32_t var_22a0_5 = 0xbf800000
        int32_t var_229c_5 = 0xbf800000
        float temp0_4[0x4] = _mm_unpacklo_ps(zx.o(0), zmm3.q)
        zmm3 = rcx_10[0x11].d
        zmm1_1.d = zmm2_1.d
        *(r8_3 + 0x70) = temp0_4.q
        *(r8_3 + 0x78) = var_22a8.o
        float temp0_5[0x4] = _mm_unpacklo_ps(zx.o(0), zmm3.q)
        *(r8_3 + 0x88) = zmm1_1
        *(r8_3 + 0x98) = temp0_5.q
        zmm2_1 = rcx_10[0x13].d
        r8_3 += 0x118
        zmm3 = rcx_10[0x15].d
        rcx_10 = &rcx_10[0x1c]
        var_22a8 = rax_19
        i_1 += 7
        int64_t var_2290_6 = rcx_10[-8]
        int32_t var_22a0_6 = 0xbf800000
        int32_t var_229c_6 = 0xbf800000
        zmm0_2 = var_22a8.o
        var_22a8 = rcx_10[-6]
        rax_22 = (rcx_10[-4]).d
        var_22a0_7 = 0xbf800000
        var_229c_7 = 0xbf800000
        *(r8_3 - 0x78) = zmm0_2
        zmm1_1.d = zmm2_1.d
        zmm2_1 = rcx_10[-5].d
        float temp0_6[0x4] = _mm_unpacklo_ps(zx.o(0), zmm3.q)
        zmm3 = rcx_10[-3].d
        *(r8_3 - 0x68) = zmm1_1
        *(r8_3 - 0x58) = temp0_6.q
        *(r8_3 - 0x50) = var_22a8.o
        zmm1_1.d = zmm2_1.d
        float temp0_7[0x4] = _mm_unpacklo_ps(zx.o(0), zmm3.q)
        *(r8_3 - 0x40) = zmm1_1
        *(r8_3 - 0x30) = temp0_7.q
    while (i_1 u< 7)
    
    int32_t* var_2268
    
    if (data_143f0f1b7 != 0)
        float var_48_1 = zmm6_1
        int64_t* var_24f0
        sub_14197cf90(&var_24f0, 2, 0x3d6)
        int64_t i_15 = 0x1eb
        int64_t var_1f78[0x3d6]
        int64_t (* rax_23)[0x3d6] = &var_1f78
        int64_t i_13 = 0x1eb
        int64_t i_2
        
        do
            *rax_23 = 0
            (*rax_23)[1] = 0
            rax_23 = &(*rax_23)[2]
            i_2 = i_13
            i_13 -= 1
        while (i_2 != 1)
        int64_t (* rdi_1)[0x3d6] = &var_1f78
        int32_t rsi_1 = (i_13 - 1).d
        int64_t i_3
        
        do
            int64_t* rcx_12 = var_24f0
            int64_t var_24e8
            int64_t* rax_25 = (*(*rcx_12 + 8))(rcx_12, &var_24e8)
            
            if (rdi_1 != rax_25)
                int64_t* rbx_3 = *rdi_1
                *rdi_1 = *rax_25
                *rax_25 = 0
                
                if (rbx_3 != 0)
                    rbx_3[1].d += rsi_1
                    
                    if (rbx_3[1].d == 1)
                        char rax_26
                        
                        if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                            rax_26 = sub_1405949a0()
                        
                        if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_26 != 0))
                            (**rbx_3)(rbx_3, 1)
                        else
                            bool z_1
                            
                            if (0 == *(rbx_3 + 0xc))
                                *(rbx_3 + 0xc) = 1
                                z_1 = true
                            else
                                *(rbx_3 + 0xc)
                                z_1 = false
                            
                            if (z_1)
                                int32_t rax_28 = sub_140a20af0()
                                uint64_t rdx_13 = zx.q(rax_28)
                                void* const rax_29
                                
                                if (rax_28 != 0)
                                    rax_29 = *((rdx_13 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_13.d) & 0x3fff) * 0x18
                                else
                                    rax_29 = nullptr
                                
                                *(rax_29 + 8) = rbx_3
                                sub_1405a42f0(&data_143f02390, rdx_13.d)
            
            (*rdi_1)[1] = rax_25[1]
            int64_t* var_24e0
            
            if (var_24e0 != 0 && var_24e8 != 0)
                (*(*var_24e0 + 0x10))(var_24e0, &var_24e8)
                var_24e0 = nullptr
            
            sub_14081c9d0(&var_24e8)
            rdi_1 = &(*rdi_1)[2]
            i_3 = i_15
            i_15 -= 1
        while (i_3 != 1)
        int128_t zmm2_2 = sub_1419a4a10(arg1, rsi_1)
        int32_t rbx_4 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_4)
        int32_t r15_1 = 0
        
        if (*(arg1 + 0x14) u> 0)
            zmm2_2, zmm3 = j_sub_14196ef60(&data_143f02b88, arg1, zmm2_2, zmm3)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_18
        rdx_18.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_4)
        __builtin_memset(&var_2268, 0, 0x70)
        int64_t var_2260
        int64_t* rbx_5 = &var_2260
        int64_t i_14 = 7
        int64_t var_2118
        __builtin_memset(&var_2118, 0, 0x38)
        int64_t i_4
        
        do
            int64_t rdi_2 = sx.q(*rbx_5)
            int32_t rax_36 = (rdi_2 + 0x46).d
            *rbx_5 = rax_36
            
            if (rax_36 s> *(rbx_5 + 4))
                sub_1406105e0(&rbx_5[-1])
            
            memset(rbx_5[-1] + (rdi_2 << 2), 0, 0x118)
            rbx_5 = &rbx_5[2]
            i_4 = i_14
            i_14 -= 1
        while (i_4 != 1)
        int64_t rbx_6 = var_1f78[0]
        void*** rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_38 = &rcx_30[3]
        
        if (rax_38 u> *(arg1 + 0x38))
            sub_140b0e3d0(&arg1[0x30], (i_14 + 0x20).d)
            rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_38 = &rcx_30[3]
        
        *(arg1 + 0x30) = rax_38
        int32_t i_5 = 0
        int64_t* rax_39 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        int32_t i_11 = 0
        *rax_39 = rcx_30
        *(arg1 + 8) = &rcx_30[1]
        rcx_30[1] = 0
        *rcx_30 = &data_142f284f8
        rcx_30[2] = rbx_6
        void var_2098
        void* rcx_34 = &var_2098
        void* var_2540_1 = &var_2098
        
        do
            int32_t j = 0
            int32_t zmm6_2 = (float.s(zx.q(i_5)) f* zmm8.d f+ zmm7.d) f* arg4.d
            
            do
                int128_t zmm1_2 = data_142d3f5a0
                *rcx_34 = zmm6_2
                uint64_t rax_43 = zx.q(r15_1)
                int64_t rcx_35 = *(*(&var_2280 + (rax_43 << 3)) + 8)
                int64_t var_23c8 = rcx_35
                int32_t var_22f0_1 = 0
                int32_t var_22ec
                __builtin_memset(&var_22ec, 0xff, 0x14)
                int128_t var_22d8_1 = zmm1_2
                int64_t var_22c8
                __builtin_memset(&var_22c8, 0, 0x1a)
                int64_t var_23c0_1 = 0
                int32_t var_23b8_1 = 0xffffffff
                int16_t var_23b4_1 = 0x500
                int64_t var_2308
                __builtin_memset(&var_2308, 0, 0x11)
                int32_t var_22f4_1 = 0
                int16_t var_22b0_1
                var_22b0_1:1.b = *(rcx_35 + 0x38) u> 1
                void var_23b0
                memset(&var_23b0, 0, 0xa8)
                int32_t k_5 = 0
                int64_t* rax_45 = &var_23c8
                int64_t rcx_37 = 0
                uint64_t r15_2 = 0
                
                while (*rax_45 != 0)
                    k_5 += 1
                    rcx_37 += 1
                    rax_45 = &rax_45[3]
                    
                    if (rcx_37 s>= 8)
                        break
                
                void var_20d8
                
                if (k_5 != 0)
                    void* rdx_22 = &var_20d8
                    uint64_t k_4 = zx.q(k_5)
                    int64_t* rax_46 = &var_23c8
                    uint64_t k
                    
                    do
                        int64_t rcx_38 = *rax_46
                        
                        if (rcx_38 != 0)
                            r15_2 = zx.q(r15_2.d + 1)
                            *rdx_22 = rcx_38
                            rdx_22 += 8
                        
                        rax_46 = &rax_46[3]
                        k = k_4
                        k_4 -= 1
                    while (k != 1)
                
                int64_t r12_2 = var_2308
                
                if (r12_2 != 0 && ((var_22f4_1.b & 0xf) == 2 || (var_22f4_1.b & 0xf0) == 0x20))
                    void*** rcx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_49 = &rcx_41[4]
                    
                    if (rax_49 u> *(arg1 + 0x38))
                        sub_140b0e3d0(&arg1[0x30], 0x28)
                        rcx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_49 = &rcx_41[4]
                    
                    *(arg1 + 0x30) = rax_49
                    int64_t* rax_50 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_50 = rcx_41
                    *(arg1 + 8) = &rcx_41[1]
                    rcx_41[1] = 0
                    *rcx_41 = &data_142f115e8
                    rcx_41[2].d = var_22f4_1
                    rcx_41[3] = r12_2
                
                uint32_t rdx_23 = (r15_2 << 3).d
                int64_t r12_3 = sx.q(rdx_23)
                int64_t* rbx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_52 = rbx_10 + r12_3
                
                if (rax_52 u> *(arg1 + 0x38))
                    sub_140b0e3d0(&arg1[0x30], rdx_23 + 8)
                    rbx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_52 = rbx_10 + r12_3
                
                *(arg1 + 0x30) = rax_52
                int64_t k_3 = sx.q(r15_2.d)
                
                if (r15_2.d s> 0)
                    int64_t* rcx_46 = rbx_10
                    int64_t k_1
                    
                    do
                        *rcx_46 = *(rcx_46 + &var_20d8 - rbx_10)
                        rcx_46 = &rcx_46[1]
                        k_1 = k_3
                        k_3 -= 1
                    while (k_1 != 1)
                
                void*** rcx_49 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_54 = &rcx_49[5]
                
                if (rax_54 u> *(arg1 + 0x38))
                    sub_140b0e3d0(&arg1[0x30], 0x30)
                    rcx_49 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_54 = &rcx_49[5]
                
                *(arg1 + 0x30) = rax_54
                void**** rax_55 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_55 = rcx_49
                *(arg1 + 8) = &rcx_49[1]
                rcx_49[1] = 0
                *rcx_49 = &data_142d549c8
                rcx_49[3] = rbx_10
                rcx_49[4].d = 1
                rcx_49[2].d = r15_2.d
                int64_t rbx_15 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_57 = rbx_15 + 0x1a
                
                if (rax_57 u> *(arg1 + 0x38))
                    sub_140b0e3d0(&arg1[0x30], 0x1c)
                    rbx_15 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_57 = rbx_15 + 0x1a
                
                *(arg1 + 0x30) = rax_57
                wchar16 const* const rcx_54 = u"GPUBenchmark"
                wchar16 const k_2
                
                do
                    k_2 = *rcx_54
                    *(rcx_54 + rbx_15 - u"GPUBenchmark") = k_2
                    rcx_54 = &rcx_54[1]
                while (k_2 != 0)
                void*** rcx_57 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_58 = &rcx_57[0x27]
                
                if (rax_58 u> *(arg1 + 0x38))
                    sub_140b0e3d0(&arg1[0x30], 0x140)
                    rcx_57 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_58 = &rcx_57[0x27]
                
                *(arg1 + 0x30) = rax_58
                void**** rax_59 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_59 = rcx_57
                *(arg1 + 8) = &rcx_57[1]
                sub_1405d11b0(rcx_57, &var_23c8, rbx_15)
                arg1[0x1c4] = 1
                sub_1405d19b0(arg1, &var_23c8)
                int64_t var_22b8
                arg1[0x178] = var_22b8:7.b
                arg1[0x179] = 0
                arg1[0x1c4] = 1
                int128_t zmm0_3 = *var_2540_1
                int64_t* r9_4 = &var_2280 + (zx.q(1 - r15_1) << 3)
                
                switch (j)
                    case 0
                        zmm2_2, zmm3, zmm7, zmm8 =
                            sub_141162990(arg1, var_2538, arg3, r9_4, zmm0_3.d)
                    case 1
                        zmm2_2, zmm3, zmm7, zmm8 =
                            sub_141161850(arg1, var_2538, arg3, r9_4, zmm0_3.d)
                    case 2
                        zmm2_2, zmm3, zmm7, zmm8 =
                            sub_141161ca0(arg1, var_2538, arg3, r9_4, zmm0_3.d)
                    case 3
                        zmm2_2, zmm3, zmm7, zmm8 =
                            sub_1411620f0(arg1, var_2538, arg3, r9_4, zmm0_3.d)
                    case 4
                        zmm2_2, zmm3, zmm7, zmm8 =
                            sub_141162540(arg1, var_2538, arg3, r9_4, zmm0_3.d)
                    case 5
                        zmm2_2 = sub_141161230(arg1, var_2538, arg3, r9_4, zmm0_3.d)
                    case 6
                        zmm2_2 = sub_141161540(arg1, 0, arg3, r9_4, zmm0_3.d)
                
                void*** rcx_73 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_65 = &rcx_73[2]
                
                if (rax_65 u> *(arg1 + 0x38))
                    sub_140b0e3d0(&arg1[0x30], 0x18)
                    rcx_73 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_65 = &rcx_73[2]
                
                *(arg1 + 0x30) = rax_65
                *(arg1 + 0x14) += 1
                int128_t zmm1_3 = data_142d3f800
                int128_t var_24d8_1 = data_142d57d10
                **(arg1 + 8) = rcx_73
                zmm0_3 = data_142d57920
                *(arg1 + 8) = &rcx_73[1]
                rcx_73[1] = 0
                *rcx_73 = &data_142d549b8
                arg1[0x1c4] = 0
                *(arg1 + 0x178) = 0
                void* rax_69 = *(&var_2280 + (rax_43 << 3))
                void*** rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                int128_t var_24c8_1 = zmm1_3
                int64_t r12_4 = *(rax_69 + 0x10)
                int64_t* r15_3 = *(rax_69 + 8)
                void* rax_70 = &rbx_20[0xa]
                
                if (rax_70 u> *(arg1 + 0x38))
                    sub_140b0e3d0(&arg1[0x30], 0x58)
                    rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_70 = &rbx_20[0xa]
                
                *(arg1 + 0x30) = rax_70
                int64_t* rax_71 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_71 = rbx_20
                *(arg1 + 8) = &rbx_20[1]
                rbx_20[1] = 0
                *rbx_20 = &data_142d56628
                rbx_20[2].d = var_24d8_1.d
                __builtin_memset(rbx_20 + 0x14, 0xff, 0x20)
                *(rbx_20 + 0x34) = zmm0_3:4.d
                rbx_20[7].d = zmm0_3:8.d
                *(rbx_20 + 0x3c) = zmm0_3:0xc.d
                rbx_20[8] = r15_3
                rbx_20[9] = r12_4
                
                if ((*(*r15_3 + 8))(r15_3) == 0)
                    int64_t* rcx_79 = rbx_20[8]
                    
                    if ((*(*rcx_79 + 0x18))(rcx_79) == 0)
                        int64_t* rcx_80 = rbx_20[8]
                        
                        if ((*(*rcx_80 + 0x20))(rcx_80) == 0)
                            int64_t* rcx_81 = rbx_20[8]
                            (*(*rcx_81 + 0x10))(rcx_81)
                
                int64_t* rcx_82 = rbx_20[9]
                
                if ((*(*rcx_82 + 8))(rcx_82) == 0)
                    int64_t* rcx_83 = rbx_20[9]
                    
                    if ((*(*rcx_83 + 0x18))(rcx_83) == 0)
                        int64_t* rcx_84 = rbx_20[9]
                        
                        if ((*(*rcx_84 + 0x20))(rcx_84) == 0)
                            int64_t* rcx_85 = rbx_20[9]
                            (*(*rcx_85 + 0x10))(rcx_85)
                
                void*** rcx_88 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t rbx_23 = var_1f78[zx.q(i_5 * 7 + 1 + j) * 2]
                void* rax_94 = &rcx_88[3]
                
                if (rax_94 u> *(arg1 + 0x38))
                    sub_140b0e3d0(&arg1[0x30], 0x20)
                    rcx_88 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_94 = &rcx_88[3]
                
                *(arg1 + 0x30) = rax_94
                int64_t* rax_95 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                r15_1 = 1 - r15_1
                *rax_95 = rcx_88
                *(arg1 + 8) = &rcx_88[1]
                rcx_88[1] = 0
                *rcx_88 = &data_142f284f8
                rcx_88[2] = rbx_23
                int64_t var_22c0
                zmm6_2 = sub_1405d1550(&var_22c0)
                rcx_34 = var_2540_1
                j += 1
            while (j u< 7)
            
            rcx_34 += 4
            i_5 = i_11 + 1
            var_2540_1 = rcx_34
            i_11 = i_5
        while (i_5 u< 0x46)
        
        int64_t rcx_94 = *(arg1 + 0x30) + 7
        int64_t var_2518 = 0
        void*** rcx_95 = rcx_94 & 0xfffffffffffffff8
        void* rax_97 = &rcx_95[2]
        
        if (rax_97 u> *(arg1 + 0x38))
            sub_140b0e3d0(&arg1[0x30], 0x18)
            rcx_95 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_97 = &rcx_95[2]
        
        *(arg1 + 0x30) = rax_97
        int64_t* rax_98 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_98 = rcx_95
        *(arg1 + 8) = &rcx_95[1]
        rcx_95[1] = 0
        *rcx_95 = &data_142dd5b50
        int32_t rbx_24 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_24)
        
        if (*(arg1 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg1, zmm2_2, zmm3)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_38
        rdx_38.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_24)
        int64_t* rcx_102 = data_143f0f180
        int64_t r9_5
        r9_5.b = 1
        (*(*rcx_102 + 0x328))(rcx_102, var_1f78[0], &var_2518, r9_5, 0xffffffff)
        int32_t* r15_4 = var_2268
        void* rax_101 = &var_2098 - r15_4
        int32_t i_6 = 0
        int64_t var_2258
        int32_t* rax_103 = var_2258 - r15_4
        int64_t var_2248
        int32_t* rax_105 = var_2248 - r15_4
        int64_t var_2238
        int32_t* rax_107 = var_2238 - r15_4
        int64_t var_2228
        int32_t* rax_109 = var_2228 - r15_4
        int64_t var_2218
        int32_t* rax_111 = var_2218 - r15_4
        int64_t var_2208
        int32_t* rax_113 = var_2208 - r15_4
        var_2540_1.d = var_2120_1:4.d
        void* var_2548
        var_2548.d = var_2140_1:4.d
        uint64_t var_2528_1
        var_2528_1.d = var_215c_1
        char r8_17
        void* const r14_1
        
        do
            int64_t* rsi_3 = &var_22a8
            int32_t j_1 = 0
            int64_t* rdi_3 = &var_2118
            
            do
                int64_t* rcx_103 = data_143f0f180
                int64_t var_2478
                r8_17 = (*(*rcx_103 + 0x328))(rcx_103, var_1f78[zx.q(i_6 * 7 + 1 + j_1) * 2], 
                    &var_2478, 1, 0xffffffff)
                int64_t rdx_44 = var_2478
                rdi_3 = &rdi_3[1]
                rsi_3 += 4
                int64_t rax_122 = rdx_44 - var_2518
                int64_t rcx_104 = 1
                var_2518 = rdx_44
                
                if (rax_122 u>= 1)
                    rcx_104 = rax_122
                
                j_1 += 1
                rdi_3[-1] += rcx_104
                *(rsi_3 - 4) = rcx_104.d
            while (j_1 u< 7)
            
            zmm3 = *(rax_101 + r15_4)
            float zmm0_4 = zmm3.d * 512f
            zmm2_2.d = zmm3.d f* 0.000600000028f
            float zmm1_4
            
            zmm1_4 = var_21dc_1 != 0 ? 0.00381469727f : 0.00166666671f
            
            *r15_4 = float.s(zx.q(var_22a8.d)) f* zmm1_4 f/ zmm3.d
            
            zmm1_4 = var_21bc_1 != 0 ? 0.00381469727f : 0.00166666671f
            
            *(rax_103 + r15_4) = float.s(zx.q(var_22a8:4.d)) f* zmm1_4 f/ zmm3.d
            zmm3.d = float.s(zx.q(var_22a0_7))
            
            if (var_219c_1 != 0)
                zmm1_4 = 1.953125f / zmm0_4
            else
                zmm1_4 = 9.99999997e-07f f/ zmm2_2.d
            
            zmm3.d = zmm3.d f* zmm1_4
            zmm0_4 = zmm0_4 * 5.11999986e-07f
            *(rax_105 + r15_4) = zmm3.d
            zmm3.d = float.s(zx.q(var_229c_7))
            
            if (var_217c_1 != 0)
                zmm1_4 = 9.99999997e-07f / zmm0_4
            else
                zmm1_4 = 9.99999997e-07f f/ zmm2_2.d
            
            zmm3.d = zmm3.d f* zmm1_4
            *(rax_107 + r15_4) = zmm3.d
            zmm3.d = float.s(zx.q(zmm1_1.d))
            
            if (var_2528_1.d != 0)
                zmm1_4 = 9.99999997e-07f / zmm0_4
            else
                zmm1_4 = 9.99999997e-07f f/ zmm2_2.d
            
            zmm3.d = zmm3.d f* zmm1_4
            *(rax_109 + r15_4) = zmm3.d
            
            if (var_2548.d != 0)
                zmm1_4 = 9.99999997e-07f / zmm0_4
            else
                zmm1_4 = 9.99999997e-07f f/ zmm2_2.d
            
            *(rax_111 + r15_4) = float.s(zx.q(zmm1_1:4.d)) f* zmm1_4
            zmm3.d = float.s(zx.q(rax_22))
            
            if (var_2540_1.d != 0)
                zmm1_4 = 9.99999997e-07f / zmm0_4
            else
                zmm1_4 = 9.99999997e-07f f/ zmm2_2.d
            
            i_6 += 1
            zmm3.d = zmm3.d f* zmm1_4
            r14_1 = nullptr
            *(rax_113 + r15_4) = zmm3.d
            r15_4 = &r15_4[1]
        while (i_6 u< 0x46)
        
        int64_t i_8 = 7
        
        if (data_143f0f1b7 != 0)
            int64_t* rdi_4 = &var_2118
            int64_t* rsi_4 = &var_2268
            void* rbx_26 = arg2 + 0x5c
            int64_t i_16 = 7
            int64_t i_7
            
            do
                int32_t var_2530 = 0
                int32_t zmm0_5
                float zmm6_3
                float zmm7_1
                int32_t zmm13_1
                zmm0_5, r8_17, zmm6_3, zmm7_1, zmm13_1 = sub_1411857c0(rsi_4, &var_2530, r8_17)
                int32_t zmm2_3 = var_2530
                
                if (not(zmm2_3 f<= zmm13_1))
                    int64_t rax_137 = *rdi_4
                    int32_t zmm1_5 = float.s(rax_137)
                    
                    if (rax_137 s< 0)
                        zmm1_5 = zmm1_5 f+ zmm7_1
                    
                    *rbx_26 = zmm0_5
                    *(rbx_26 + 0x14) = zmm2_3
                    *(rbx_26 - 4) = zmm1_5 f* zmm6_3
                
                rsi_4 = &rsi_4[2]
                rbx_26 += 0x28
                rdi_4 = &rdi_4[1]
                i_7 = i_16
                i_16 -= 1
            while (i_7 != 1)
        
        wchar16 const* const* rbx_27 = &var_21f8
        
        do
            int64_t rcx_106 = rbx_27[-2]
            rbx_27 = &rbx_27[-2]
            i_8 -= 1
            
            if (rcx_106 != 0)
                sub_140a74f90(rcx_106)
        while (i_8 != 0)
        
        int64_t* rbx_28 = &var_c8
        
        for (int64_t i_9 = 0x1eb; i_9 != 0; )
            int64_t* rcx_107 = rbx_28[-1]
            rbx_28 -= 0x10
            i_9 -= 1
            
            if (rcx_107 != 0 && *rbx_28 != 0)
                (*(*rcx_107 + 0x10))(rcx_107, rbx_28)
                rbx_28[1] = 0
            
            sub_14081c9d0(rbx_28)
        
        int64_t* rbx_29 = var_24f0
        
        if (rbx_29 != 0)
            rbx_29[1].d -= 1
            
            if (rbx_29[1].d == 1)
                char rax_140
                
                if (rbx_29[2].b == 0 && data_143f0f1d0 == 0)
                    rax_140 = sub_1405949a0()
                
                if (rbx_29[2].b != 0 || (data_143f0f1d0 == 0 && rax_140 != 0))
                    (**rbx_29)(rbx_29, 1)
                else
                    bool z_2
                    
                    if (0 == *(rbx_29 + 0xc))
                        *(rbx_29 + 0xc) = 1
                        z_2 = true
                    else
                        *(rbx_29 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        int32_t rax_142 = sub_140a20af0()
                        
                        if (rax_142 != 0)
                            r14_1 = *((zx.q(rax_142) u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_142) & 0x3fff) * 0x18
                        
                        *(r14_1 + 8) = rbx_29
                        sub_1405a42f0(&data_143f02390, rax_142)
    
    int32_t** rdi_5 = &var_2268
    
    for (int64_t i_10 = 3; i_10 != 0; )
        int64_t* rcx_111 = rdi_5[-1]
        rdi_5 = &rdi_5[-1]
        i_10 -= 1
        
        if (rcx_111 != 0)
            (*(*rcx_111 + 0x38))(rcx_111)
    
    sub_1405d1550(&var_2538)
    result = sub_140a1d5c0(&var_2508)

__security_check_cookie(var_c8 ^ &var_2598)
return result
