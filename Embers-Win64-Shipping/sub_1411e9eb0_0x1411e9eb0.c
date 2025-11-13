// 函数: sub_1411e9eb0
// 地址: 0x1411e9eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_af8
int64_t rax_1 = __security_cookie ^ &var_af8
int64_t* rdi = arg5
int64_t* result_1 = arg1
void* rsi = arg4
int64_t rcx = sx.q(rdi[1].d)
int64_t* var_a40 = rdi

if (rcx.d != 0)
    void* r8 = *rdi
    void* r9_1 = rcx * 0xe0 + r8
    
    if (r8 != r9_1)
        do
            void* i = *(r8 + 0x70)
            
            for (void* rdx_2 = sx.q(*(r8 + 0x78)) * 0xc0 + i; i != rdx_2; i += 0xc0)
                if (*(i + 0x6c) == *(rsi + 0x28))
                    goto label_1411e9fb7
            
            r8 += 0xe0
        while (r8 != r9_1)
        
        result_1 = arg1

int64_t* result

if (rcx.d == 0 || data_1439b6114 s<= 0)
    result = result_1
    *result_1 = 0
    result_1[1] = 0
else
label_1411e9fb7:
    void var_2f8
    sub_14118c8f0(&var_2f8, arg2, arg3)
    void var_2e0
    sub_1419928d0(&var_2e0, arg2)
    int64_t var_950
    __builtin_memset(&var_950, 0, 0x48)
    void var_958
    sub_14142a030(&var_2e0, &var_958)
    void*** rax_5 = sub_1410fccd0(&var_2e0, &var_2f8, u"HairLUTTexture", 0)
    void*** var_aa8 = rax_5
    void*** r15_1 = rax_5
    void*** rax_6
    int512_t zmm6_1
    rax_6, zmm6_1 = sub_141193740(&var_2e0, arg6 + 0xc8, u"HairNodeIndirectArgBuffer", 0)
    int32_t rcx_7 = data_143dbb200
    uint64_t var_394_1 = data_143dbb1f8.q
    void*** r14_1 = rax_6
    int128_t var_358_1 = data_14399f6f0
    int128_t zmm1_1 = data_14399f710
    zmm6_1.o = zx.o(0)
    int128_t var_388_1
    __builtin_memset(&var_388_1, 0, 0x18)
    uint128_t var_368_1 = data_14399f6e0
    uint128_t var_348_1 = data_14399f700
    int32_t var_38c_1 = rcx_7
    int64_t var_328_1 = (zx.o(0)).q
    int64_t var_3a8_1
    __builtin_memset(&var_3a8_1, 0, 0x11)
    int128_t var_338_1 = zmm1_1
    int64_t var_308_1 = 0
    void*** var_318_1 = sub_141193740(&var_2e0, arg6 + 0xa8, u"HairVisibilityNodeData", 0)
    void*** rax_8
    float zmm6_2
    rax_8, zmm6_2 = sub_141193740(&var_2e0, arg6 + 0xb8, u"HairVisibilityNodeCoord", 0)
    float zmm0_2 = data_1439b613c
    void*** var_310_1 = rax_8
    
    if (zmm0_2 > zmm6_2)
        float var_36c_2 = zmm0_2
    else
        int32_t var_36c_1 = 0
    
    zmm0_2 = data_1439b6140
    float var_370_1
    
    var_370_1 = zmm0_2 > zmm6_2 ? zmm0_2 : 0f
    
    int32_t var_8a8[0x40]
    memset(&var_8a8, 0, 0x500)
    int64_t r12
    r12.b = 0
    
    if (data_1439b6114 s> 0 && data_143e75b68 s> 0)
        goto label_1411ea7ee
    
    void* rdx_10 = *rdi
    void*** r15_2 = nullptr
    void*** rsi_1 = nullptr
    void* var_a18_1 = rdx_10
    void* rax_11 = sx.q(rdi[1].d) * 0xe0 + rdx_10
    void* var_ad8
    int32_t var_ad0
    void*** var_ac8
    void*** var_ac0
    int64_t* var_ab8
    float var_a98[0x4]
    void*** rax_56
    int64_t var_378_1
    uint128_t zmm0_3
    float zmm1_2[0x4]
    
    if (rdx_10 == rax_11)
    label_1411ea7e4:
        r15_1 = var_aa8
        rsi = arg4
    label_1411ea7ee:
        
        if (rdi[0x18] == 0)
            rax_56 = nullptr
        else
            int64_t* rcx_40 = *(rsi + 0x20)
            int64_t var_8b0_1 = 0
            void var_908
            (*(*rcx_40 + 0x68))(rcx_40, &var_908)
            void* rcx_41 = *(rsi + 0x20)
            var_370_1.q = 0
            float zmm3_1[0x4] = *(rcx_41 + 0x20)
            bool cond:2_1 = *(rcx_41 + 0x13c) != 0
            zmm0_3 = *(rcx_41 + 0x60)
            float temp0_1[0x4] = _mm_unpacklo_ps(*(rcx_41 + 0x40), (*(rcx_41 + 0x50))[0].q)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            int32_t var_9f8_1 = zmm0_3.d
            zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float temp0_4[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            temp0_4[0] = zmm0_3.d
            int32_t var_38c_3 = var_9f8_1
            int32_t var_8bc
            zmm0_3 = var_8bc
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
            int32_t rax_59
            rax_59.b = cond:2_1
            int64_t var_394_3 = temp0_1.q
            temp0_5[0] = temp0_2[0]
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
            var_378_1.d = zx.d(*(rcx_41 + 0x13d))
            temp0_6[0] = _mm_cvtepi32_ps(zx.o(rax_59))[0]
            int32_t var_8cc
            zmm1_2 = var_8cc
            bool cond:3_1 = zmm0_3.d f< zmm1_2[0]
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
            var_a98 = temp0_8
            float var_388_3[0x4] = temp0_8
            
            if (cond:3_1)
                var_378_1:4.d = zmm1_2[0]
            else
                var_378_1:4.d = zmm0_3.d
            
            void* var_308_2 = &rdi[8]
            var_ab8 = arg7
            var_ac0 = r14_1
            var_ac8 = r15_1
            var_ad0 = *(arg6 + 0xd0)
            var_ad8 = &var_8a8
            rax_56 = sub_1411d01c0(&var_2e0, &var_958, arg3, 1, var_ad8, var_ad0, var_ac8, var_ac0, 
                var_ab8)
    else
        void* rcx_11 = arg4
        
        do
            int128_t* r13_1 = *(rdx_10 + 0x70)
            void* r14_4 = &r13_1[sx.q(*(rdx_10 + 0x78)) * 0xc]
            void* var_9c8_1 = r14_4
            
            if (r13_1 != r14_4)
                do
                    if (*(r13_1 + 0x6c) == *(rcx_11 + 0x28))
                        int64_t* var_2d8
                        
                        if (r15_2 == 0)
                            void* rsi_2 = rdi[6]
                            int32_t var_a50
                            int64_t var_1d0
                            sub_140865c40(&var_1d0, &var_a50, rsi_2)
                            int64_t rax_14 = sx.q(var_a50)
                            void* const rcx_13
                            
                            if (rax_14.d == 0xffffffff)
                                rcx_13 = nullptr
                            else
                                rcx_13 = var_1d0 + rax_14 * 0x18
                            
                            int64_t* rax_16 = rcx_13 + 8
                            
                            if (rcx_13 == 0)
                                rax_16 = nullptr
                            
                            if (rax_16 == 0)
                                void*** rax_17 = sub_14081d830(0x48, var_2d8, 1, 0)
                                void*** rcx_14 = rax_17
                                
                                if (rax_17 == 0)
                                    rcx_14 = nullptr
                                else
                                    rcx_14[2] = 0
                                    rcx_14[1] = u"External"
                                    rcx_14[3].b = 0
                                    *(rcx_14 + 0x1c) = 0
                                    rcx_14[4] = 0
                                    rcx_14[5].w = 0x200
                                    *rcx_14 = &data_142f285d0
                                    int128_t zmm0_4 = *(rsi_2 + 0xb8)
                                    rcx_14[8] = 0
                                    *(rcx_14 + 0x30) = zmm0_4
                                
                                int64_t rax_18 = rdi[6]
                                void*** var_a58 = rcx_14
                                rcx_14[8] = rax_18
                                void*** rdx_14 = var_a58
                                int32_t rcx_15 = *(rdx_14 + 0x3c)
                                
                                if (rcx_15 == 0)
                                    rdx_14[2] = *rdi[6]
                                else if (rcx_15 == 1)
                                    rdx_14[2] = *(rdi[6] + 8)
                                else if (rcx_15 == 2)
                                    rdx_14[2] = *(rdi[6] + 0x10)
                                
                                void* var_9b0_1 = &rdi[6]
                                void** var_9b8 = &var_a58
                                void var_9f0
                                void var_270
                                sub_1411610a0(&var_270, &var_9f0, &var_9b8, nullptr)
                                int64_t var_9e0 = rdi[6]
                                int64_t* var_9a8 = &var_9e0
                                void** var_9a0_1 = &var_a58
                                void var_9ec
                                sub_14107baa0(&var_1d0, &var_9ec, &var_9a8, nullptr)
                                r15_2 = var_a58
                            else
                                r15_2 = *rax_16
                            
                            var_a98[2].q = 1
                            var_a98[0].q = r15_2
                            
                            if ((r15_2[7].d & 0x100) != 0)
                                var_a98[2] = 4
                                var_a98[3] = 0x1c
                            
                            void*** rax_23 = sub_14081d830(0x28, var_2d8, 1, 0)
                            rsi_1 = rax_23
                            
                            if (rax_23 == 0)
                                rsi_1 = nullptr
                            else
                                rax_23[1] = r15_2[1]
                                rax_23[2] = 0
                                *rsi_1 = &data_142f285c0
                                *(rsi_1 + 0x18) = var_a98
                            
                            rdi = var_a40
                        
                        r12.b = 1
                        
                        if (var_328_1 == 0)
                            int64_t* rdi_2 = rdi[4]
                            int32_t var_a4c
                            int64_t var_220
                            sub_140865c40(&var_220, &var_a4c, rdi_2)
                            int64_t rax_24 = sx.q(var_a4c)
                            void* const rcx_22
                            
                            if (rax_24.d == 0xffffffff)
                                rcx_22 = nullptr
                            else
                                rcx_22 = var_220 + rax_24 * 0x18
                            
                            int64_t* rax_26 = rcx_22 + 8
                            
                            if (rcx_22 == 0)
                                rax_26 = nullptr
                            
                            void var_2c0
                            int64_t rcx_23
                            
                            if (rax_26 == 0)
                                int128_t* rax_28 = (*(*rdi_2 + 0x10))(rdi_2)
                                int64_t rax_29 = sub_14081d830(0x88, var_2d8, 1, 0)
                                int64_t rcx_25 = rax_29
                                
                                if (rax_29 == 0)
                                    rcx_25 = 0
                                else
                                    *(rcx_25 + 0x10) = 0
                                    *(rcx_25 + 8) = u"DeepShadow_FrontDepthTexture"
                                    *(rcx_25 + 0x18) = 0
                                    *(rcx_25 + 0x1c) = 0
                                    *(rcx_25 + 0x20) = 0
                                    *(rcx_25 + 0x28) = 0x200
                                    *rcx_25 = &data_142f11960
                                    *(rcx_25 + 0x30) = *rax_28
                                    *(rcx_25 + 0x40) = rax_28[1]
                                    *(rcx_25 + 0x50) = rax_28[2]
                                    *(rcx_25 + 0x60) = rax_28[3]
                                    int128_t zmm0_5 = rax_28[4]
                                    *(rcx_25 + 0x80) = 0
                                    *(rcx_25 + 0x70) = zmm0_5
                                
                                int64_t rax_30 = rdi[4]
                                int64_t var_a68 = rcx_25
                                *(rcx_25 + 0x80) = rax_30
                                void* var_990_1 = &rdi[4]
                                *(var_a68 + 0x10) = *(rdi[4] + 0x10)
                                int64_t* var_998 = &var_a68
                                void var_9e8
                                sub_14107bc20(&var_2c0, &var_9e8, &var_998, nullptr)
                                int64_t var_9d8 = rdi[4]
                                int64_t* var_988 = &var_9d8
                                int64_t* var_980_1 = &var_a68
                                void var_9e4
                                sub_14107baa0(&var_220, &var_9e4, &var_988, nullptr)
                                rcx_23 = var_a68
                            else
                                rcx_23 = *rax_26
                            
                            var_328_1 = rcx_23
                            int64_t* rdi_4 = var_a40[5]
                            int32_t var_a48
                            sub_140865c40(&var_220, &var_a48, rdi_4)
                            int64_t rax_34 = sx.q(var_a48)
                            void* const rcx_30
                            
                            if (rax_34.d == 0xffffffff)
                                rcx_30 = nullptr
                            else
                                rcx_30 = var_220 + rax_34 * 0x18
                            
                            int64_t* rax_36 = rcx_30 + 8
                            
                            if (rcx_30 == 0)
                                rax_36 = nullptr
                            
                            void*** rcx_31
                            
                            if (rax_36 == 0)
                                int128_t* rax_38 = (*(*rdi_4 + 0x10))(rdi_4)
                                void*** rax_39 = sub_14081d830(0x88, var_2d8, 1, 0)
                                void*** rcx_33 = rax_39
                                
                                if (rax_39 == 0)
                                    rcx_33 = nullptr
                                else
                                    rcx_33[2] = 0
                                    rcx_33[1] = u"DeepShadow_DomTexture"
                                    rcx_33[3].b = 0
                                    *(rcx_33 + 0x1c) = 0
                                    rcx_33[4] = 0
                                    rcx_33[5].w = 0x200
                                    *rcx_33 = &data_142f11960
                                    *(rcx_33 + 0x30) = *rax_38
                                    *(rcx_33 + 0x40) = rax_38[1]
                                    *(rcx_33 + 0x50) = rax_38[2]
                                    *(rcx_33 + 0x60) = rax_38[3]
                                    int128_t zmm0_6 = rax_38[4]
                                    rcx_33[0x10] = 0
                                    *(rcx_33 + 0x70) = zmm0_6
                                
                                int64_t rax_40 = var_a40[5]
                                void*** var_a60 = rcx_33
                                rcx_33[0x10] = rax_40
                                void* var_970_1 = &var_a40[5]
                                var_a60[2] = *(var_a40[5] + 0x10)
                                void**** var_978 = &var_a60
                                void var_9bc
                                sub_14107bc20(&var_2c0, &var_9bc, &var_978, nullptr)
                                int64_t var_9d0 = var_a40[5]
                                int64_t* var_968 = &var_9d0
                                void**** var_960_1 = &var_a60
                                void var_9c0
                                sub_14107baa0(&var_220, &var_9c0, &var_968, nullptr)
                                rcx_31 = var_a60
                            else
                                rcx_31 = *rax_36
                            
                            rdi = var_a40
                            r14_4 = var_9c8_1
                            var_328_1 = rcx_31
                        
                        uint64_t r9_2 = zx.q(*(r13_1 + 0x5c))
                        zmm1_2 = r13_1[1]
                        int32_t rdx_28 = r13_1[5].d
                        int32_t r8_11 = r13_1[6].d
                        int64_t var_3a0_1
                        var_3a0_1.d = *(r13_1 + 0x64)
                        var_3a0_1:4.d = *(r13_1 + 0x68)
                        int32_t var_38c_2 = *(r13_1 + 0x7c)
                        uint64_t var_394_2 = *(r13_1 + 0x74)
                        var_378_1:4.d = 0
                        uint128_t var_388_2 = r13_1[8]
                        zmm0_3 = *r13_1
                        var_378_1.d = zx.d(*(*(arg4 + 0x20) + 0x13d))
                        uint64_t rax_50 = zx.q(r9_2.d) * 2
                        uint64_t r9_3 = r9_2 << 6
                        var_8a8[rax_50 * 2] = *(r13_1 + 0x4c)
                        rcx_11 = arg4
                        var_8a4
                        *(&var_8a4 + (rax_50 << 3)) = rdx_28
                        var_8a0
                        *(&var_8a0 + (rax_50 << 3)) = r8_11
                        var_89c
                        *(&var_89c + (rax_50 << 3)) = 0
                        char rax_51 = *(rdi + 0x1c)
                        int128_t var_7a8[0x40]
                        var_7a8[r9_2 * 4] = zmm0_3
                        zmm0_3 = r13_1[2]
                        var_798
                        *(&var_798 + r9_3) = zmm1_2
                        zmm1_2 = r13_1[3]
                        var_788
                        *(&var_788 + r9_3) = zmm0_3
                        var_778
                        *(&var_778 + r9_3) = zmm1_2
                        void*** var_3a8_2 = rsi_1
                        char var_398_1 = rax_51
                    
                    r13_1 = &r13_1[0xc]
                while (r13_1 != r14_4)
                
                rdx_10 = var_a18_1
            
            rdx_10 += 0xe0
            var_a18_1 = rdx_10
        while (rdx_10 != rax_11)
        
        r14_1 = rax_6
        
        if (r12.b == 0)
            goto label_1411ea7e4
        
        var_ab8 = arg7
        var_ac0 = r14_1
        var_ac8 = var_aa8
        var_ad0 = *(arg6 + 0xd0)
        var_ad8 = &var_8a8
        rax_56 =
            sub_1411d01c0(&var_2e0, &var_958, arg3, 0, var_ad8, var_ad0, var_ac8, var_ac0, var_ab8)
    int32_t var_168
    int64_t rdi_6 = sx.q(var_168)
    var_a98[0].q = rax_56
    uint128_t var_a78
    var_a98[2].q = &var_a78
    int32_t rax_64 = (rdi_6 + 1).d
    int16_t var_a88_1 = 0
    var_a78 = zx.o(0)
    int64_t var_170
    int32_t var_164
    
    if (rax_64 s> var_164)
        sub_14119a720(&var_170, rdi_6.d)
    
    int64_t rax_65 = var_170
    int64_t rcx_44 = rdi_6 * 3
    var_a98[0].q = r14_1
    *(rax_65 + (rcx_44 << 3)) = var_a98
    int16_t var_a88_2 = 0x100
    *(rax_65 + (rcx_44 << 3) + 0x10) = var_a88_1.q
    int64_t rdi_7 = sx.q(rax_64)
    int64_t* var_a20
    var_a98[2].q = &var_a20
    var_a20 = nullptr
    int32_t rax_66 = (rdi_7 + 1).d
    int32_t var_168_2 = rax_66
    
    if (rax_66 s> var_164)
        sub_14119a720(&var_170, rdi_7.d)
    
    int64_t rax_67 = var_170
    int64_t rcx_46 = rdi_7 * 3
    *(rax_67 + (rcx_46 << 3)) = var_a98
    *(rax_67 + (rcx_46 << 3) + 0x10) = var_a88_2.q
    sub_14199ef00(&var_2e0)
    int64_t* rcx_48 = data_143f0f180
    (*(*rcx_48 + 0x5b0))(rcx_48, &var_aa8, &data_143f02b98, *(var_a78.q + 0x10), var_ad8, var_ad0, 
        var_ac8, var_ac0, var_ab8)
    int64_t* rdi_8 = var_a78:8.q
    var_a78:8.q = var_aa8
    var_aa8 = nullptr
    
    if (rdi_8 != 0)
        rdi_8[1].d -= 1
        
        if (rdi_8[1].d == 1)
            char rax_71
            
            if (rdi_8[2].b == 0 && data_143f0f1d0 == 0)
                rax_71 = sub_1405949a0()
            
            if (rdi_8[2].b != 0 || (data_143f0f1d0 == 0 && rax_71 != 0))
                (**rdi_8)(rdi_8, 1)
            else
                bool z_1
                
                if (0 == *(rdi_8 + 0xc))
                    *(rdi_8 + 0xc) = 1
                    z_1 = true
                else
                    *(rdi_8 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rdi_8)
        
        void*** rdi_9 = var_aa8
        
        if (rdi_9 != 0)
            rdi_9[1].d -= 1
            
            if (rdi_9[1].d == 1)
                char rax_74
                
                if (rdi_9[2].b == 0 && data_143f0f1d0 == 0)
                    rax_74 = sub_1405949a0()
                
                if (rdi_9[2].b != 0 || (data_143f0f1d0 == 0 && rax_74 != 0))
                    (**rdi_9)(rdi_9, 1)
                else
                    bool z_2
                    
                    if (0 == *(rdi_9 + 0xc))
                        *(rdi_9 + 0xc) = 1
                        z_2 = true
                    else
                        *(rdi_9 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        sub_1405dcc10(&data_143f02390, rdi_9)
    
    int64_t* rcx_51 = var_a20
    var_a78.q = 0
    *arg1 = var_a78.q
    arg1[1] = var_a78:8.q
    var_a78:8.q = 0
    
    if (rcx_51 != 0)
        sub_1411e8d60(rcx_51)
    
    sub_1405ec8a0(&var_a78:8)
    int64_t* rcx_53 = var_a78.q
    
    if (rcx_53 != 0)
        sub_1411e8d60(rcx_53)
    
    sub_1410eb9e0(&var_2e0)
    int64_t i_1 = 3
    void* rdi_10 = &var_2e0
    
    do
        int64_t* rcx_55 = *(rdi_10 - 8)
        rdi_10 -= 8
        i_1 -= 1
        
        if (rcx_55 != 0)
            (*(*rcx_55 + 0x38))(rcx_55)
    while (i_1 != 0)
    
    result = arg1

__security_check_cookie(rax_1 ^ &var_af8)
return result
