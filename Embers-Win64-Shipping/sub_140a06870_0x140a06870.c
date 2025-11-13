// 函数: sub_140a06870
// 地址: 0x140a06870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
char r13 = arg4
int64_t** var_250 = arg5
int64_t* rdi = arg1
int64_t result = arg7

if (arg1 != 0)
    float zmm5[0x4] = *(arg1 + 0x1e0)
    float temp0_4[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q), 
            _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q), 
        *(arg1 + 0x1d0))
    float temp0_5[0x4] = _mm_rcp_ps(zmm5)
    float zmm4[0x4] = __andps_xmmxud_memxud(temp0_4, data_143cefc50)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_9[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143cefc40)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
    float temp0_11[0x4] = _mm_mul_ps(temp0_8, temp0_10)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd2)
    float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_12)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_11, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(temp0_5, temp0_5)
    float temp0_17[0x4] = _mm_add_ps(temp0_5, temp0_5)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_20[0x4] = _mm_sub_ps(temp0_17, _mm_mul_ps(temp0_16, zmm5))
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_10)
    float temp0_23[0x4] = _mm_mul_ps(temp0_20, temp0_20)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_20)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm5)
    float temp0_27[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143cefc30), data_143cefc20, 2)
    float temp0_28[0x4] = _mm_sub_ps(temp0_24, temp0_25)
    float temp0_34[0x4] = _mm_add_ps(
        _mm_sub_ps(temp0_22, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_12)), 
        _mm_add_ps(_mm_mul_ps(temp0_14, temp0_18), zmm4))
    float zmm0[0x4] = (*arg3)[2]
    zmm5 = _mm_and_ps(temp0_27, temp0_28 ^ zx.o(0)) ^ temp0_28
    float temp0_36[0x4] = _mm_unpacklo_ps(*arg3, zmm0[0].q)
    float var_378[0x4] = _mm_mul_ps(temp0_34, zmm5)
    float temp0_39[0x4] = _mm_unpacklo_ps(temp0_36, _mm_unpacklo_ps((*arg3)[1], 0)[0].q)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xd2)
    float temp0_42[0x4] = _mm_mul_ps(temp0_40, temp0_12)
    float temp0_44[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_41, temp0_10), temp0_42)
    float temp0_45[0x4] = _mm_add_ps(temp0_44, temp0_44)
    float temp0_46[0x4] = _mm_mul_ps(temp0_14, temp0_45)
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc9)
    float temp0_48[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xd2)
    float temp0_49[0x4] = _mm_mul_ps(temp0_47, temp0_12)
    float temp0_50[0x4] = _mm_mul_ps(temp0_48, temp0_10)
    float temp0_51[0x4] = _mm_add_ps(temp0_46, temp0_39)
    float zmm9[0x4] = _mm_add_ps(_mm_sub_ps(temp0_50, temp0_49), temp0_51)
    zmm9[0] = zmm9[0] * zmm9[0]
    float zmm7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
    float zmm6[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm7[0] = zmm7[0] + zmm9[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm7[0] = zmm7[0] + zmm6[0]
    float var_318
    float i_16
    float zmm2[0x4]
    float zmm3[0x4]
    
    if (not(zmm7[0] != 1f))
        i_16 = zmm6[0]
    else if (zmm7[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        zmm3 = zx.o(0)
        zmm2 = 0x3f000000
        zmm3[0] = zmm7[0]
        float temp0_56[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_56[0] = temp0_56[0] * temp0_56[0]
        zmm3[0] = zmm3[0] * temp0_56[0]
        zmm2[0] = 0.5f - zmm3[0]
        temp0_56[0] = temp0_56[0] * zmm2[0]
        temp0_56[0] = temp0_56[0] + temp0_56[0]
        temp0_56[0] = temp0_56[0] * temp0_56[0]
        zmm3[0] = zmm3[0] * temp0_56[0]
        zmm4[0] = 0.5f - zmm3[0]
        temp0_56[0] = temp0_56[0] * zmm4[0]
        temp0_56[0] = temp0_56[0] + temp0_56[0]
        var_318 = temp0_56[0]
        temp0_56[0] = temp0_56[0] * zmm9[0]
        temp0_56[0] = temp0_56[0] * zmm6[0]
        temp0_56[0] = temp0_56[0] * zmm7[0]
        zmm9 = temp0_56
        i_16 = temp0_56[0]
        zmm6 = temp0_56
        zmm7 = temp0_56
    else
        zmm6 = data_143dbb200
        zmm9 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        i_16 = zmm6[0]
    
    zmm2 = var_378[1]
    int32_t rsi_1 = 0
    float zmm1[0x4] = var_378[2]
    int32_t rcx = arg1[0x8a].d
    int32_t r14_1 = 0
    int32_t r15_1 = 0
    int64_t var_368 = (_mm_unpacklo_ps(zmm9, zmm7[0].q)).q
    zmm0 = var_378[0]
    zmm2[0] = zmm2[0] * zmm7[0]
    float i_12 = i_16
    zmm0[0] = zmm0[0] * zmm9[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    int64_t* var_358
    __builtin_memset(&var_358, 0, 0x18)
    float var_308 = zmm9[0]
    zmm2[0] = zmm2[0] + zmm0[0]
    float var_304_1 = zmm7[0]
    float var_300_1 = zmm6[0]
    int32_t var_3e4_1 = 0
    int64_t* var_330 = nullptr
    zmm2[0] = zmm2[0] + zmm1[0]
    int32_t var_388_1 = 0
    int32_t var_324_1 = 0
    int64_t var_2e8 = 0
    int64_t var_2e0_1 = 0
    float var_2fc_1 = zmm2[0]
    int32_t var_3dc = 0
    int64_t var_3c8
    int64_t var_3b8
    int64_t var_3a8
    int64_t var_350_1
    int64_t* var_348_1
    int32_t var_320
    uint128_t var_2c8
    uint64_t var_2a8
    int64_t var_268
    float var_248[0x4]
    void* const var_1e8
    int64_t var_1d8
    int64_t* var_148
    int64_t var_138
    
    if (rcx s> 0)
        int128_t zmm10
        int128_t var_78_1 = zmm10
        int128_t zmm11
        int128_t var_88_1 = zmm11
        int128_t zmm12
        int128_t var_98_1 = zmm12
        uint128_t zmm13
        uint128_t var_a8_1 = zmm13
        
        while (true)
            if (r15_1 s< rcx)
                void* r12_1 = rdi[0x89]
                int64_t rcx_2 = sx.q(r15_1) << 6
                int64_t* r12_2 = r12_1 + rcx_2
                var_268 = rcx_2
                int64_t* var_2f0_1 = r12_2
                
                if (r12_1 != neg.q(rcx_2) && r12_2[3].d s> 0 && r12_2[1].d s> 0)
                    int32_t rax_4 = r12_2[7].d
                    zmm1 = zx.o(r12_2[6])
                    var_248 = *(r12_2 + 0x20)
                    int64_t var_238_1 = zmm1.q
                    int32_t var_230_1 = rax_4
                    int32_t rax_5 = sub_1409fcaf0(&var_248, &var_308)
                    
                    if (rax_5 == 0xffffffff)
                        if (r13 != 0)
                            int64_t rbx_1 = sx.q(r14_1)
                            int32_t r14_2 = (rbx_1 + 1).d
                            var_3e4_1 = r14_2
                            var_350_1.d = r14_2
                            int64_t* rax_7
                            
                            if (r14_2 s<= var_350_1:4.d)
                                rax_7 = var_348_1
                            else
                                sub_1405c4fe0(&var_358)
                                var_3e4_1 = var_350_1.d
                                rax_7 = var_358
                                var_348_1 = rax_7
                            
                            sub_1409fac50(&rax_7[rbx_1 * 8], r12_2)
                            int64_t rax_9 = (*(*rdi + 0x548))(rdi, zx.q(r15_1))
                            int64_t rbx_2 = sx.q(var_388_1)
                            int32_t rcx_9 = (rbx_2 + 1).d
                            var_388_1 = rcx_9
                            
                            if (rcx_9 s> var_324_1)
                                sub_1405a4d70(&var_330)
                                var_388_1 = rcx_9
                            
                            var_330[rbx_2] = rax_9
                            rdi = arg1
                        
                        sub_1409ffc50(rdi, r15_1)
                    else if (rax_5 != 1)
                        zmm2 = zx.o(data_143dbb1f8.q)
                        void* rbx_3 = nullptr
                        float rax_11 = data_143dbb200
                        int64_t var_39c_1 = zmm2.q
                        var_3a8 = zmm2.q
                        __builtin_memset(&var_3c8, 0, 0x20)
                        float var_394_1 = rax_11
                        float var_3a0_1 = rax_11
                        char var_390_1 = 0
                        int16_t var_38c_1 = 0x100
                        int64_t var_29c
                        
                        if (r13 != 0)
                            int64_t rbx_4 = sx.q(r14_1)
                            var_29c = zmm2.q
                            float var_294_1 = rax_11
                            var_2a8 = zmm2.q
                            int32_t r15_2 = (rbx_4 + 1).d
                            float var_2a0_1 = rax_11
                            char var_290_1 = 0
                            var_3e4_1 = r15_2
                            var_350_1.d = r15_2
                            
                            if (r15_2 s> var_350_1:4.d)
                                sub_1405c4fe0(&var_358)
                                var_3e4_1 = var_350_1.d
                                var_348_1 = var_358
                            
                            uint64_t rdx_7 = zx.q(var_3dc)
                            rbx_3 = &var_348_1[rbx_4 * 8]
                            __builtin_memset(rbx_3, 0, 0x20)
                            *(rbx_3 + 0x20) = var_2a8.o
                            *(rbx_3 + 0x3c) = 0x100
                            *(rbx_3 + 0x30) = var_29c
                            *(rbx_3 + 0x38) = var_290_1.d
                            int64_t rax_16 = (*(*rdi + 0x548))(rdi, rdx_7)
                            int64_t rdi_2 = sx.q(var_388_1)
                            int32_t rcx_15 = (rdi_2 + 1).d
                            var_388_1 = rcx_15
                            
                            if (rcx_15 s> var_324_1)
                                sub_1405a4d70(&var_330)
                                var_388_1 = rcx_15
                            
                            var_330[rdi_2] = rax_16
                        
                        int32_t r15_3 = r12_2[1].d
                        void* const rdx_9 = nullptr
                        var_1e8 = nullptr
                        void* r10_1 = nullptr
                        int32_t var_1e0_1 = 0
                        void* const r8 = nullptr
                        void* r14_4 = nullptr
                        int64_t r9 = 0
                        int32_t var_1bc_1 = 0x80
                        __builtin_memset(&var_1d8, 0, 0x1c)
                        int32_t var_1b8_1 = 0xffffffff
                        int32_t var_1b4_1 = 0
                        void* var_1a8_1 = nullptr
                        int32_t var_1a0_1 = 0
                        void* const var_198 = nullptr
                        int32_t var_190_1 = 0
                        int32_t var_16c_1 = 0x80
                        int64_t var_188
                        __builtin_memset(&var_188, 0, 0x1c)
                        int32_t var_168_1 = 0xffffffff
                        int32_t var_164_1 = 0
                        void* var_158_1 = nullptr
                        int32_t var_150_1 = 0
                        var_378[0].q = 0
                        var_378[3] = 0
                        var_378[2] = r15_3
                        
                        if (r15_3 s> 0)
                            sub_1406105e0(&var_378)
                            r10_1 = var_1a8_1
                            rdx_9 = var_1e8
                            r8 = var_198
                            r9 = var_378[0].q
                            r14_4 = var_158_1
                        
                        int32_t var_3e0 = 0
                        int64_t var_3c0_1
                        
                        if (r15_3 s> 0)
                            int32_t rcx_19 = 0
                            
                            do
                                zmm2 = var_308
                                zmm0 = var_304_1
                                zmm1 = var_300_1
                                int64_t rax_18 = sx.q(rcx_19)
                                int32_t* rdi_4 = rax_18 * 0x4c + *r12_2
                                zmm2[0] = zmm2[0] f* *rdi_4
                                zmm0[0] = zmm0[0] f* rdi_4[1]
                                zmm1[0] = zmm1[0] f* rdi_4[2]
                                zmm2[0] = zmm2[0] + zmm0[0]
                                zmm2[0] = zmm2[0] + zmm1[0]
                                zmm2[0] = zmm2[0] - var_2fc_1
                                *(r9 + (rax_18 << 2)) = zmm2[0]
                                int64_t rcx_20 = sx.q(var_3e0)
                                void** rcx_23
                                int32_t* rdx_13
                                int64_t* r8_1
                                
                                if (not(0f f>= *(r9 + (rcx_20 << 2))))
                                    int64_t r14_5 = sx.q(var_3c0_1.d)
                                    int32_t rax_19 = (r14_5 + 1).d
                                    var_3c0_1.d = rax_19
                                    
                                    if (rax_19 s> var_3c0_1:4.d)
                                        sub_140a05ee0(&var_3c8)
                                    
                                    int64_t rcx_22 = var_3c8
                                    float (* rdx_12)[0x4] = r14_5 * 0x4c
                                    *(rdx_12 + rcx_22) = *rdi_4
                                    *(rdx_12 + rcx_22 + 0x10) = *(rdi_4 + 0x10)
                                    *(rdx_12 + rcx_22 + 0x20) = *(rdi_4 + 0x20)
                                    *(rdx_12 + rcx_22 + 0x30) = *(rdi_4 + 0x30)
                                    *(rdx_12 + rcx_22 + 0x40) = *(rdi_4 + 0x40)
                                    *(rdx_12 + rcx_22 + 0x48) = rdi_4[0x12]
                                    int32_t var_278 = r14_5.d
                                    
                                    if (var_390_1 == 0)
                                        zmm1 = zx.o(*rdi_4)
                                        float rax_21 = rdi_4[2]
                                        var_3a8:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
                                        var_394_1 = rax_21
                                        var_3a0_1 = var_394_1[0]
                                        var_3a8.d = zmm1[0]
                                        var_39c_1 = zmm1.q
                                        var_390_1 = 1
                                    else
                                        zmm3 = *rdi_4
                                        
                                        if (not(var_3a8.d[0] <= zmm3[0]))
                                            var_3a8.d = zmm3[0]
                                        
                                        zmm2 = rdi_4[1]
                                        
                                        if (not(var_3a8:4.d[0] <= zmm2[0]))
                                            var_3a8:4.d = zmm2[0]
                                        
                                        zmm1 = rdi_4[2]
                                        
                                        if (not(var_3a0_1[0] <= zmm1[0]))
                                            var_3a0_1 = zmm1[0]
                                        
                                        if (not(var_39c_1.d[0] >= zmm3[0]))
                                            var_39c_1.d = zmm3[0]
                                        
                                        if (not(var_39c_1:4.d[0] >= zmm2[0]))
                                            var_39c_1:4.d = zmm2[0]
                                        
                                        if (not(var_394_1[0] >= zmm1[0]))
                                            var_394_1 = zmm1[0]
                                    
                                    int32_t* var_208 = &var_3e0
                                    r8_1 = &var_208
                                    int32_t* var_200_1 = &var_278
                                    void var_224
                                    rdx_13 = &var_224
                                    rcx_23 = &var_1e8
                                label_140a071f3:
                                    sub_1409fa3d0(rcx_23, rdx_13, r8_1, nullptr)
                                    r9 = var_378[0].q
                                    rcx_20 = zx.q(var_3e0)
                                else if (rbx_3 != 0)
                                    int64_t r14_6 = sx.q(*(rbx_3 + 8))
                                    int32_t rax_22 = (r14_6 + 1).d
                                    *(rbx_3 + 8) = rax_22
                                    
                                    if (rax_22 s> *(rbx_3 + 0xc))
                                        sub_140a05ee0(rbx_3)
                                    
                                    int64_t rcx_25 = *rbx_3
                                    float (* rdx_15)[0x4] = r14_6 * 0x4c
                                    *(rdx_15 + rcx_25) = *rdi_4
                                    *(rdx_15 + rcx_25 + 0x10) = *(rdi_4 + 0x10)
                                    *(rdx_15 + rcx_25 + 0x20) = *(rdi_4 + 0x20)
                                    *(rdx_15 + rcx_25 + 0x30) = *(rdi_4 + 0x30)
                                    *(rdx_15 + rcx_25 + 0x40) = *(rdi_4 + 0x40)
                                    *(rdx_15 + rcx_25 + 0x48) = rdi_4[0x12]
                                    bool cond:7_1 = *(rbx_3 + 0x38) == 0
                                    var_320 = r14_6.d
                                    
                                    if (cond:7_1)
                                        *(rbx_3 + 0x2c) = *rdi_4
                                        int32_t rax_24 = rdi_4[2]
                                        *(rbx_3 + 0x34) = rax_24
                                        *(rbx_3 + 0x20) = *(rbx_3 + 0x2c)
                                        *(rbx_3 + 0x28) = rax_24
                                        *(rbx_3 + 0x38) = 1
                                    else
                                        float temp0_60[0x4] =
                                            __minss_xmmss_memss((*rdi_4)[0], *(rbx_3 + 0x20))
                                        zmm1 = *(rbx_3 + 0x24)
                                        *(rbx_3 + 0x20) = temp0_60[0]
                                        float temp0_61[0x4] = __minss_xmmss_memss(zmm1[0], rdi_4[1])
                                        zmm0 = *(rbx_3 + 0x28)
                                        *(rbx_3 + 0x24) = temp0_61[0]
                                        *(rbx_3 + 0x28) = __minss_xmmss_memss(zmm0[0], rdi_4[2])[0]
                                        float temp0_63[0x4] =
                                            __maxss_xmmss_memss((*rdi_4)[0], *(rbx_3 + 0x2c))
                                        zmm0 = *(rbx_3 + 0x30)
                                        *(rbx_3 + 0x2c) = temp0_63[0]
                                        float temp0_64[0x4] = __maxss_xmmss_memss(zmm0[0], rdi_4[1])
                                        zmm1 = *(rbx_3 + 0x34)
                                        *(rbx_3 + 0x30) = temp0_64[0]
                                        *(rbx_3 + 0x34) = __maxss_xmmss_memss(zmm1[0], rdi_4[2])[0]
                                    
                                    int32_t* var_1f8 = &var_3e0
                                    r8_1 = &var_1f8
                                    int32_t* var_1f0_1 = &var_320
                                    void var_228
                                    rdx_13 = &var_228
                                    rcx_23 = &var_198
                                    goto label_140a071f3
                                rcx_19 = rcx_20.d + 1
                                var_3e0 = rcx_19
                            while (rcx_19 s< r15_3)
                            
                            r10_1 = var_1a8_1
                            rdx_9 = var_1e8
                            r14_4 = var_158_1
                            r8 = var_198
                        
                        int64_t r9_1 = 0
                        int32_t i_6 = 0
                        int64_t var_270_1 = 0
                        int64_t var_3b0_1
                        
                        if (r12_2[3].d s> 0)
                            int32_t i
                            
                            do
                                int64_t r12_3 = r12_2[2]
                                int64_t rdi_5 = sx.q(*(r12_3 + (r9_1 << 2)))
                                var_148.d = rdi_5.d
                                int32_t r15_5 = var_1e0_1 - var_1b4_1
                                void var_1b0
                                void* rax_29
                                
                                if (var_1e0_1 == var_1b4_1)
                                label_140a072b2:
                                    rax_29 = nullptr
                                else
                                    void* rax_27 = &var_1b0
                                    
                                    if (r10_1 != 0)
                                        rax_27 = r10_1
                                    
                                    int32_t rax_28 =
                                        *(rax_27 + ((sx.q(var_1a0_1 - 1) & rdi_5) << 2))
                                    
                                    if (rax_28 == 0xffffffff)
                                    label_140a072b2_1:
                                        rax_29 = nullptr
                                    else
                                        int64_t rcx_29
                                        
                                        while (true)
                                            rcx_29 = sx.q(rax_28) * 2
                                            
                                            if (*(rdx_9 + (rcx_29 << 3)) == rdi_5.d)
                                                break
                                            
                                            rax_28 = *(rdx_9 + (rcx_29 << 3) + 8)
                                            
                                            if (rax_28 == 0xffffffff)
                                                goto label_140a072b2_2
                                        
                                        rax_29 = rdx_9 + (rcx_29 << 3)
                                        
                                        if (rax_28 == 0xffffffff)
                                        label_140a072b2_2:
                                            rax_29 = nullptr
                                
                                void* rcx_30 = rax_29 + 4
                                
                                if (rax_29 == 0)
                                    rcx_30 = nullptr
                                
                                void* var_f0 = rcx_30
                                void var_160
                                void* var_128
                                
                                if (r13 == 0)
                                    var_318.q = var_128
                                else
                                    void* rax_35
                                    
                                    if (var_190_1 == var_164_1)
                                    label_140a07323:
                                        rax_35 = nullptr
                                    else
                                        void* rax_33 = &var_160
                                        
                                        if (r14_4 != 0)
                                            rax_33 = r14_4
                                        
                                        int32_t rax_34 =
                                            *(rax_33 + ((sx.q(var_150_1 - 1) & rdi_5) << 2))
                                        
                                        if (rax_34 == 0xffffffff)
                                        label_140a07323_1:
                                            rax_35 = nullptr
                                        else
                                            int64_t rcx_34
                                            
                                            while (true)
                                                rcx_34 = sx.q(rax_34) * 2
                                                
                                                if (*(r8 + (rcx_34 << 3)) == rdi_5.d)
                                                    break
                                                
                                                rax_34 = *(r8 + (rcx_34 << 3) + 8)
                                                
                                                if (rax_34 == 0xffffffff)
                                                    goto label_140a07323_2
                                            
                                            rax_35 = r8 + (rcx_34 << 3)
                                            
                                            if (rax_34 == 0xffffffff)
                                            label_140a07323_2:
                                                rax_35 = nullptr
                                    
                                    void* rcx_35 = rax_35 + 4
                                    
                                    if (rax_35 == 0)
                                        rcx_35 = nullptr
                                    
                                    var_318.q = rcx_35
                                    var_128 = rcx_35
                                
                                int64_t r11_1 = sx.q(*(r12_3 + (r9_1 << 2) + 4))
                                var_148:4.d = r11_1.d
                                void* rax_41
                                
                                if (r15_5 == 0)
                                label_140a073a1:
                                    rax_41 = nullptr
                                else
                                    void* rax_39 = &var_1b0
                                    
                                    if (r10_1 != 0)
                                        rax_39 = r10_1
                                    
                                    int32_t rax_40 =
                                        *(rax_39 + ((sx.q(var_1a0_1 - 1) & r11_1) << 2))
                                    
                                    if (rax_40 == 0xffffffff)
                                    label_140a073a1_1:
                                        rax_41 = nullptr
                                    else
                                        int32_t* rcx_39
                                        
                                        while (true)
                                            rcx_39 = sx.q(rax_40) << 4
                                            
                                            if (*(rcx_39 + rdx_9) == r11_1.d)
                                                break
                                            
                                            rax_40 = *(rcx_39 + rdx_9 + 8)
                                            
                                            if (rax_40 == 0xffffffff)
                                                goto label_140a073a1_2
                                        
                                        rax_41 = rdx_9 + rcx_39
                                        
                                        if (rax_40 == 0xffffffff)
                                        label_140a073a1_2:
                                            rax_41 = nullptr
                                
                                void* r13_1 = rax_41 + 4
                                
                                if (rax_41 == 0)
                                    r13_1 = nullptr
                                
                                void* var_e8_1 = r13_1
                                void* rax_47
                                void* var_120
                                
                                if (arg4 == 0)
                                    rax_47 = var_120
                                else
                                    void* r9_2
                                    
                                    if (var_190_1 == var_164_1)
                                    label_140a07412:
                                        r9_2 = nullptr
                                    else
                                        void* rax_45 = &var_160
                                        
                                        if (r14_4 != 0)
                                            rax_45 = r14_4
                                        
                                        int32_t rax_46 =
                                            *(rax_45 + ((sx.q(var_150_1 - 1) & r11_1) << 2))
                                        
                                        if (rax_46 == 0xffffffff)
                                        label_140a07412_1:
                                            r9_2 = nullptr
                                        else
                                            int32_t* rcx_43
                                            
                                            while (true)
                                                rcx_43 = sx.q(rax_46) << 4
                                                
                                                if (*(rcx_43 + r8) == r11_1.d)
                                                    break
                                                
                                                rax_46 = *(rcx_43 + r8 + 8)
                                                
                                                if (rax_46 == 0xffffffff)
                                                    goto label_140a07412_2
                                            
                                            r9_2 = r8 + rcx_43
                                            
                                            if (rax_46 == 0xffffffff)
                                            label_140a07412_2:
                                                r9_2 = nullptr
                                    
                                    rax_47 = r9_2 + 4
                                    r9_1 = var_270_1
                                    
                                    if (r9_2 == 0)
                                        rax_47 = nullptr
                                    
                                    var_120 = rax_47
                                int64_t r9_3 = sx.q(*(r12_3 + (r9_1 << 2) + 8))
                                int32_t var_140_1 = r9_3.d
                                void* rax_52
                                
                                if (r15_5 == 0)
                                label_140a07491:
                                    rax_52 = nullptr
                                else
                                    void* rax_50 = &var_1b0
                                    
                                    if (r10_1 != 0)
                                        rax_50 = r10_1
                                    
                                    int32_t rax_51 = *(rax_50 + ((sx.q(var_1a0_1 - 1) & r9_3) << 2))
                                    
                                    if (rax_51 == 0xffffffff)
                                    label_140a07491_1:
                                        rax_52 = nullptr
                                    else
                                        int32_t* rcx_47
                                        
                                        while (true)
                                            rcx_47 = sx.q(rax_51) << 4
                                            
                                            if (*(rcx_47 + rdx_9) == r9_3.d)
                                                break
                                            
                                            rax_51 = *(rcx_47 + rdx_9 + 8)
                                            
                                            if (rax_51 == 0xffffffff)
                                                goto label_140a07491_2
                                        
                                        rax_52 = rcx_47 + rdx_9
                                        
                                        if (rax_51 == 0xffffffff)
                                        label_140a07491_2:
                                            rax_52 = nullptr
                                
                                char rcx_52 = arg4
                                void* r15_6 = rax_52 + 4
                                
                                if (rax_52 == 0)
                                    r15_6 = nullptr
                                
                                void* var_e0_1 = r15_6
                                void* var_118
                                void* r12_4
                                
                                if (rcx_52 == 0)
                                    r12_4 = var_118
                                else
                                    void* rax_58
                                    
                                    if (var_190_1 == var_164_1)
                                    label_140a07503:
                                        rax_58 = nullptr
                                    else
                                        void* rax_56 = &var_160
                                        
                                        if (r14_4 != 0)
                                            rax_56 = r14_4
                                        
                                        int32_t rax_57 =
                                            *(rax_56 + ((sx.q(var_150_1 - 1) & r9_3) << 2))
                                        
                                        if (rax_57 == 0xffffffff)
                                        label_140a07503_1:
                                            rax_58 = nullptr
                                        else
                                            int32_t* rcx_51
                                            
                                            while (true)
                                                rcx_51 = sx.q(rax_57) << 4
                                                
                                                if (*(rcx_51 + r8) == r9_3.d)
                                                    break
                                                
                                                rax_57 = *(rcx_51 + r8 + 8)
                                                
                                                if (rax_57 == 0xffffffff)
                                                    goto label_140a07503_2
                                            
                                            rax_58 = r8 + rcx_51
                                            
                                            if (rax_57 == 0xffffffff)
                                            label_140a07503_2:
                                                rax_58 = nullptr
                                    
                                    rcx_52 = arg4
                                    r12_4 = rax_58 + 4
                                    
                                    if (rax_58 == 0)
                                        r12_4 = nullptr
                                    
                                    var_118 = r12_4
                                
                                if (rcx_30 != 0)
                                    if (r13_1 == 0 || r15_6 == 0)
                                        goto label_140a07663
                                    
                                    int64_t r14_7 = sx.q(var_3b0_1.d)
                                    int32_t r12_5 = *rcx_30
                                    int32_t rdi_6 = (r14_7 + 1).d
                                    var_3b0_1.d = rdi_6
                                    
                                    if (rdi_6 s> var_3b0_1:4.d)
                                        sub_1405a4cf0(&var_3b8)
                                        rdi_6 = var_3b0_1.d
                                    
                                    *(var_3b8 + (r14_7 << 2)) = r12_5
                                    int32_t r14_8 = rdi_6 + 1
                                    int32_t r12_6 = *r13_1
                                    var_3b0_1.d = r14_8
                                    
                                    if (r14_8 s> var_3b0_1:4.d)
                                        sub_1405a4cf0(&var_3b8)
                                        r14_8 = var_3b0_1.d
                                    
                                    *(var_3b8 + (sx.q(rdi_6) << 2)) = r12_6
                                    int32_t rdi_7 = *r15_6
                                    var_3b0_1.d = r14_8 + 1
                                    
                                    if (r14_8 + 1 s> var_3b0_1:4.d)
                                        sub_1405a4cf0(&var_3b8)
                                    
                                    *(var_3b8 + (sx.q(r14_8) << 2)) = rdi_7
                                    goto label_140a07bbb
                                
                                if (r13_1 != 0 || r15_6 != 0)
                                label_140a07663:
                                    int64_t rdx_22 = var_378[0].q
                                    int32_t var_110[0x3]
                                    int32_t (* r15_10)[0x3] = &var_110
                                    int64_t rax_72 = 0
                                    var_3e0 = 0
                                    float r13_2 = 0f
                                    void* var_2f8_1
                                    var_2f8_1.d = 0
                                    int32_t r10_2 = 0
                                    int64_t var_258_1 = 0
                                    int32_t j = 0
                                    int32_t var_100[0x4]
                                    int32_t* rdi_8 = &var_100
                                    var_138.d = (*(rdx_22 + (rdi_5 << 2)))[0]
                                    int64_t r9_4 = 0
                                    int64_t var_130
                                    var_130.d = (*(rdx_22 + (r9_3 << 2)))[0]
                                    var_138:4.d = (*(rdx_22 + (r11_1 << 2)))[0]
                                    int64_t var_2d8_2 = 0
                                    float var_220[0x4]
                                    int64_t var_210
                                    
                                    do
                                        int32_t* r8_2 = *(&var_f0 + rax_72)
                                        
                                        if (r8_2 != 0)
                                            r13_2 += 1
                                            *r15_10 = *r8_2
                                            r15_10 = &(*r15_10)[1]
                                        else if (rcx_52 != 0)
                                            int32_t* rax_74 = *(&var_128 + rax_72)
                                            r10_2 += 1
                                            var_3e0 = r10_2
                                            *rdi_8 = *rax_74
                                            rdi_8 = &rdi_8[1]
                                        
                                        j += 1
                                        int64_t rdx_25 = sx.q(j s% 3)
                                        int32_t rcx_64
                                        rcx_64.b = (&var_f0)[rdx_25] == 0
                                        int32_t rax_78
                                        rax_78.b = r8_2 == 0
                                        
                                        if (rax_78 != rcx_64)
                                            zmm3 = *(&var_138 + r9_4)
                                            zmm3[0] = zmm3[0] f- *(&var_138 + (rdx_25 << 2))
                                            zmm3[0] = zmm3[0] / zmm3[0]
                                            
                                            if (zmm3[0] >= 0f)
                                                zmm3 = _mm_min_ss(zmm3[0], 0x3f800000)
                                            else
                                                zmm3 = zx.o(0)
                                            
                                            int64_t rcx_65 = *var_2f0_1
                                            sub_140a04b50(&var_2c8, 
                                                sx.q(*(&var_148 + r9_4)) * 0x4c + rcx_65, 
                                                sx.q(*(&var_148 + (rdx_25 << 2))) * 0x4c + rcx_65, 
                                                zmm3)
                                            int64_t r14_12 = sx.q(var_3c0_1.d)
                                            int32_t rax_82 = (r14_12 + 1).d
                                            var_3c0_1.d = rax_82
                                            
                                            if (rax_82 s> var_3c0_1:4.d)
                                                sub_140a05ee0(&var_3c8)
                                            
                                            int64_t rax_83 = var_3c8
                                            zmm6 = var_2c8
                                            zmm11 = var_2a8.o
                                            zmm12 = var_29c:4.o
                                            int64_t var_288
                                            zmm13 = zx.o(var_288)
                                            int32_t var_280
                                            int32_t rdx_29 = var_280
                                            float (* rcx_68)[0x4] = r14_12 * 0x4c
                                            *(rcx_68 + rax_83) = zmm6
                                            int128_t var_2b8
                                            *(rcx_68 + rax_83 + 0x10) = var_2b8
                                            *(rcx_68 + rax_83 + 0x20) = zmm11
                                            *(rcx_68 + rax_83 + 0x30) = zmm12
                                            *(rcx_68 + rax_83 + 0x40) = zmm13.q
                                            *(rcx_68 + rax_83 + 0x48) = rdx_29
                                            float zmm7_1[0x4]
                                            float zmm8_1[0x4]
                                            float zmm9_1[0x4]
                                            
                                            if (var_390_1 == 0)
                                                var_39c_1.d = zmm6[0]
                                                float temp0_69[0x4] =
                                                    _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                                float temp0_70[0x4] =
                                                    _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                                zmm8_1 = temp0_69
                                                var_39c_1:4.d = temp0_69[0]
                                                zmm7_1 = temp0_70
                                                var_394_1 = temp0_70[0]
                                                zmm9_1 = zmm6
                                                var_3a8:4.d = temp0_69[0]
                                                var_3a0_1 = temp0_70[0]
                                                var_3a8.d = zmm6[0]
                                                var_390_1 = 1
                                            else
                                                zmm9_1 = zmm6
                                                
                                                if (not(var_3a8.d[0] <= zmm6[0]))
                                                    var_3a8.d = zmm6[0]
                                                
                                                zmm0 = var_3a8:4.d
                                                zmm8_1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                                
                                                if (not(zmm0[0] <= zmm8_1[0]))
                                                    var_3a8:4.d = zmm8_1[0]
                                                
                                                zmm7_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                                
                                                if (not(var_3a0_1[0] <= zmm7_1[0]))
                                                    var_3a0_1 = zmm7_1[0]
                                                
                                                if (not(var_39c_1.d[0] >= zmm9_1[0]))
                                                    var_39c_1.d = zmm9_1[0]
                                                
                                                if (not(var_39c_1:4.d[0] >= zmm8_1[0]))
                                                    var_39c_1:4.d = zmm8_1[0]
                                                
                                                if (not(var_394_1[0] >= zmm7_1[0]))
                                                    var_394_1 = zmm7_1[0]
                                            
                                            *r15_10 = r14_12.d
                                            r13_2 += 1
                                            int32_t r14_13 = var_2c8:8.d
                                            r15_10 = &(*r15_10)[1]
                                            
                                            if (rbx_3 == 0)
                                                r10_2 = var_3e0
                                            else
                                                int64_t r13_3 = sx.q(*(rbx_3 + 8))
                                                int32_t rax_84 = (r13_3 + 1).d
                                                *(rbx_3 + 8) = rax_84
                                                
                                                if (rax_84 s> *(rbx_3 + 0xc))
                                                    sub_140a05ee0(rbx_3)
                                                    rdx_29 = var_280
                                                
                                                int64_t rax_85 = *rbx_3
                                                float (* rcx_70)[0x4] = r13_3 * 0x4c
                                                *(rcx_70 + rax_85) = zmm6
                                                *(rcx_70 + rax_85 + 0x10) = var_2b8
                                                *(rcx_70 + rax_85 + 0x20) = zmm11
                                                *(rcx_70 + rax_85 + 0x30) = zmm12
                                                *(rcx_70 + rax_85 + 0x40) = zmm13.q
                                                *(rcx_70 + rax_85 + 0x48) = rdx_29
                                                
                                                if (*(rbx_3 + 0x38) == 0)
                                                    *(rbx_3 + 0x2c) = zmm6.q
                                                    *(rbx_3 + 0x20) = zmm6.q
                                                    *(rbx_3 + 0x34) = r14_13
                                                    *(rbx_3 + 0x28) = r14_13
                                                    *(rbx_3 + 0x38) = 1
                                                else
                                                    zmm1 = *(rbx_3 + 0x24)
                                                    float temp0_71[0x4] = __minss_xmmss_memss(
                                                        zmm9_1[0], *(rbx_3 + 0x20))
                                                    float temp0_72[0x4] =
                                                        _mm_min_ss(zmm1[0], zmm8_1[0])
                                                    *(rbx_3 + 0x20) = temp0_71[0]
                                                    zmm0 = *(rbx_3 + 0x28)
                                                    *(rbx_3 + 0x24) = temp0_72[0]
                                                    float temp0_73[0x4] =
                                                        _mm_min_ss(zmm0[0], zmm7_1[0])
                                                    float temp0_74[0x4] =
                                                        _mm_max_ss((*(rbx_3 + 0x2c))[0], zmm9_1[0])
                                                    *(rbx_3 + 0x28) = temp0_73[0]
                                                    zmm0 = *(rbx_3 + 0x30)
                                                    *(rbx_3 + 0x2c) = temp0_74[0]
                                                    float temp0_75[0x4] =
                                                        _mm_max_ss(zmm0[0], zmm8_1[0])
                                                    float temp0_76[0x4] =
                                                        _mm_max_ss((*(rbx_3 + 0x34))[0], zmm7_1[0])
                                                    *(rbx_3 + 0x30) = temp0_75[0]
                                                    *(rbx_3 + 0x34) = temp0_76[0]
                                                
                                                r10_2 = var_3e0 + 1
                                                *rdi_8 = r13_3.d
                                                rdi_8 = &rdi_8[1]
                                                var_3e0 = r10_2
                                            
                                            int32_t rcx_71 = var_2f8_1.d
                                            
                                            if (rcx_71 != 0)
                                                var_220[3].q = zmm6.q
                                                var_210:4.d = r14_13
                                            else
                                                var_220[0].q = zmm6.q
                                                var_220[2] = r14_13
                                            
                                            r9_4 = var_2d8_2
                                            var_2f8_1.d = rcx_71 + 1
                                        
                                        r9_4 += 4
                                        rcx_52 = arg4
                                        rax_72 = var_258_1 + 8
                                        var_258_1 = rax_72
                                        var_2d8_2 = r9_4
                                    while (j s< 3)
                                    
                                    int64_t r15_11 = 2
                                    int64_t r13_4 = sx.q(r13_2)
                                    
                                    if (r13_4 s> 2)
                                        int32_t rsi_2 = var_110[0]
                                        
                                        do
                                            int64_t r14_14 = sx.q(var_3b0_1.d)
                                            int32_t rdi_9 = (r14_14 + 1).d
                                            var_3b0_1.d = rdi_9
                                            
                                            if (rdi_9 s> var_3b0_1:4.d)
                                                sub_1405a4cf0(&var_3b8)
                                                rdi_9 = var_3b0_1.d
                                            
                                            int32_t r12_7 = *(&var_118:4 + (r15_11 << 2))
                                            *(var_3b8 + (r14_14 << 2)) = rsi_2
                                            int32_t r14_15 = rdi_9 + 1
                                            var_3b0_1.d = r14_15
                                            
                                            if (r14_15 s> var_3b0_1:4.d)
                                                sub_1405a4cf0(&var_3b8)
                                                r14_15 = var_3b0_1.d
                                            
                                            int32_t rdi_10 = var_110[r15_11]
                                            *(var_3b8 + (sx.q(rdi_9) << 2)) = r12_7
                                            var_3b0_1.d = r14_15 + 1
                                            
                                            if (r14_15 + 1 s> var_3b0_1:4.d)
                                                sub_1405a4cf0(&var_3b8)
                                            
                                            r15_11 += 1
                                            *(var_3b8 + (sx.q(r14_15) << 2)) = rdi_10
                                        while (r15_11 s< r13_4)
                                        
                                        rsi_1 = 0
                                    
                                    if (rbx_3 != 0)
                                        int64_t r13_5 = sx.q(var_3e0)
                                        int64_t r14_16 = 2
                                        
                                        if (r13_5 s> 2)
                                            int32_t rsi_3 = var_100[0]
                                            
                                            do
                                                int64_t r15_12 = sx.q(*(rbx_3 + 0x18))
                                                int32_t rax_91 = (r15_12 + 1).d
                                                *(rbx_3 + 0x18) = rax_91
                                                
                                                if (rax_91 s> *(rbx_3 + 0x1c))
                                                    sub_1405a4cf0(rbx_3 + 0x10)
                                                
                                                void var_104
                                                int32_t r12_8 = *(&var_104 + (r14_16 << 2))
                                                *(*(rbx_3 + 0x10) + (r15_12 << 2)) = rsi_3
                                                int64_t r15_13 = sx.q(*(rbx_3 + 0x18))
                                                int32_t rax_93 = (r15_13 + 1).d
                                                *(rbx_3 + 0x18) = rax_93
                                                
                                                if (rax_93 s> *(rbx_3 + 0x1c))
                                                    sub_1405a4cf0(rbx_3 + 0x10)
                                                
                                                *(*(rbx_3 + 0x10) + (r15_13 << 2)) = r12_8
                                                int64_t r15_14 = sx.q(*(rbx_3 + 0x18))
                                                int32_t r12_9 = var_100[r14_16]
                                                int32_t rax_95 = (r15_14 + 1).d
                                                *(rbx_3 + 0x18) = rax_95
                                                
                                                if (rax_95 s> *(rbx_3 + 0x1c))
                                                    sub_1405a4cf0(rbx_3 + 0x10)
                                                
                                                r14_16 += 1
                                                *(*(rbx_3 + 0x10) + (r15_14 << 2)) = r12_9
                                            while (r14_16 s< r13_5)
                                            
                                            rsi_1 = 0
                                    
                                    if (var_2f8_1.d == 2)
                                        int64_t rdi_11 = sx.q(var_2e0_1.d)
                                        int32_t rax_97 = (rdi_11 + 1).d
                                        var_2e0_1.d = rax_97
                                        
                                        if (rax_97 s> var_2e0_1:4.d)
                                            sub_1405a4df0(&var_2e8)
                                        
                                        int64_t rax_98 = var_2e8
                                        int64_t rcx_82 = rdi_11 * 3
                                        *(rax_98 + (rcx_82 << 3)) = var_220
                                        *(rax_98 + (rcx_82 << 3) + 0x10) = var_210
                                    
                                label_140a07bbb:
                                    r8 = var_198
                                    r14_4 = var_158_1
                                    rdx_9 = var_1e8
                                    r10_1 = var_1a8_1
                                else if (rbx_3 != 0)
                                    int64_t r14_9 = sx.q(*(rbx_3 + 0x18))
                                    int32_t r15_7 = *var_318.q
                                    int32_t rax_65 = (r14_9 + 1).d
                                    *(rbx_3 + 0x18) = rax_65
                                    
                                    if (rax_65 s> *(rbx_3 + 0x1c))
                                        sub_1405a4cf0(rbx_3 + 0x10)
                                    
                                    *(*(rbx_3 + 0x10) + (r14_9 << 2)) = r15_7
                                    int64_t r14_10 = sx.q(*(rbx_3 + 0x18))
                                    int32_t r15_8 = *rax_47
                                    int32_t rax_68 = (r14_10 + 1).d
                                    *(rbx_3 + 0x18) = rax_68
                                    
                                    if (rax_68 s> *(rbx_3 + 0x1c))
                                        sub_1405a4cf0(rbx_3 + 0x10)
                                    
                                    *(*(rbx_3 + 0x10) + (r14_10 << 2)) = r15_8
                                    int64_t r14_11 = sx.q(*(rbx_3 + 0x18))
                                    int32_t r15_9 = *r12_4
                                    int32_t rax_70 = (r14_11 + 1).d
                                    *(rbx_3 + 0x18) = rax_70
                                    
                                    if (rax_70 s> *(rbx_3 + 0x1c))
                                        sub_1405a4cf0(rbx_3 + 0x10)
                                    
                                    *(*(rbx_3 + 0x10) + (r14_11 << 2)) = r15_9
                                    goto label_140a07bbb
                                
                                i = i_6 + 3
                                r12_2 = var_2f0_1
                                r9_1 = var_270_1 + 3
                                r13 = arg4
                                i_6 = i
                                var_270_1 = r9_1
                            while (i s< r12_2[3].d)
                        
                        if (rbx_3 != 0 && (*(rbx_3 + 0x18) == 0 || *(rbx_3 + 8) == 0))
                            void* rdi_14 = &var_348_1[sx.q(var_3e4_1 - 1) * 8]
                            int64_t rcx_83 = *(rdi_14 + 0x10)
                            
                            if (rcx_83 != 0)
                                sub_140a74f90(rcx_83)
                            
                            int64_t rcx_84 = *rdi_14
                            
                            if (rcx_84 != 0)
                                sub_140a74f90(rcx_84)
                            
                            if (0 != 0)
                                memmove(rdi_14, &var_348_1[sx.q(var_3e4_1) * 8], 0 << 6)
                            
                            var_350_1.d = var_3e4_1 - 1
                            sub_1407c3fe0(&var_358)
                            var_3e4_1 = var_350_1.d
                            var_348_1 = var_358
                        
                        if (var_3b0_1.d s<= 0 || var_3c0_1.d s<= 0)
                            rdi = arg1
                            r15_1 = var_3dc
                            
                            if (r15_1 s< rdi[0x8a].d)
                                sub_140a05cb0(var_268 + rdi[0x89])
                                sub_140a092f0(rdi)
                                sub_140a09030(rdi)
                                sub_141ee8490(rdi)
                        else
                            rdi = arg1
                            r15_1 = var_3dc
                            sub_140a06420(rdi, r15_1, &var_3c8)
                        
                        int64_t rcx_93 = var_378[0].q
                        
                        if (rcx_93 != 0)
                            sub_140a74f90(rcx_93)
                        
                        sub_1405ae180(&var_198)
                        sub_1405ae180(&var_1e8)
                        int64_t rcx_96 = var_3b8
                        
                        if (rcx_96 != 0)
                            sub_140a74f90(rcx_96)
                        
                        int64_t rcx_97 = var_3c8
                        
                        if (rcx_97 != 0)
                            sub_140a74f90(rcx_97)
            
            rcx = rdi[0x8a].d
            r15_1 += 1
            var_3dc = r15_1
            
            if (r15_1 s>= rcx)
                break
            
            r14_1 = var_3e4_1
    
    if (arg6 != 0 && var_2e0_1.d s> 0)
        zmm0 = zx.o(data_143dbb1f8.q)
        int32_t r14_20 = 0
        int32_t rax_103 = data_143dbb200
        int32_t r12_10 = 0
        int64_t var_39c_2 = zmm0.q
        var_3a8 = zmm0.q
        var_3c8 = 0
        int32_t var_3c0_2 = 0
        var_3b8 = 0
        int32_t var_3b0_2 = 0
        int32_t var_394_2 = rax_103
        int32_t var_3a0_2 = rax_103
        char var_390_2 = 0
        int16_t var_38c_2 = 0x100
        int32_t r15_16
        
        if (arg6 != 2)
            r15_16 = rcx
        else
            r15_16 = rcx - 1
            int64_t* rbx_9
            
            if (r15_16 s>= rcx)
                rbx_9 = nullptr
            else
                rbx_9 = (sx.q(r15_16) << 6) + rdi[0x89]
            
            sub_1409fb6b0(&var_3c8, rbx_9)
            sub_14086c240(&var_3b8, &rbx_9[2])
            r12_10 = var_3b0_2
            r14_20 = var_3c0_2
            var_390_2.d = rbx_9[7].d
            var_38c_2.b = *(rbx_9 + 0x3c)
            var_38c_2:1.b = *(rbx_9 + 0x3d)
            var_3a8.o = *(rbx_9 + 0x20)
            var_39c_2 = rbx_9[6]
        
        var_378[0].q = 0
        var_378[2].q = 0
        var_1e8 = nullptr
        int32_t var_1e0_2 = 0
        sub_1420644f0(&var_378, &var_1d8, &var_2e8, &var_308)
        var_3dc = 0xffffffff
        sub_14204d9e0(&var_1e8, &var_378, &var_3dc)
        int32_t rdi_15 = 0
        int32_t var_3d8_1 = r14_20
        var_320 = r12_10
        
        if (var_1e0_2 s> 0)
            float zmm6_1 = 64f
            
            do
                int64_t rbx_11 = sx.q(rdi_15) << 4
                sub_14205a180(var_1e8 + rbx_11, zmm6_1)
                sub_140a08810(var_1e8 + rbx_11, &var_1d8, &var_3c8, &var_3a8)
                zmm6_1 = sub_140a08b20(&var_3b8, &var_3c8, r14_20, &var_368)
                r14_20 = var_3c0_2
                rdi_15 += 1
            while (rdi_15 s< var_1e0_2)
            
            r12_10 = var_3b0_2
        
        rdi = arg1
        sub_140a06420(rdi, r15_16, &var_3c8)
        
        if (arg6 == 1)
            (*(*rdi + 0x550))(rdi, zx.q(r15_16), result)
        
        if (arg4 != 0)
            int32_t rdi_17
            uint128_t zmm0_2
            
            if (arg6 != 1)
                rdi_17 = var_3e4_1
            else
                int64_t rdi_16 = sx.q(var_3e4_1)
                zmm0_2 = zx.o(data_143dbb1f8.q)
                int32_t rax_108 = data_143dbb200
                uint64_t var_29c_1 = zmm0_2.q
                int32_t rdx_50 = (rdi_16 + 1).d
                int32_t var_294_2 = rax_108
                var_2a8 = zmm0_2.q
                int32_t var_2a0_2 = rax_108
                char var_290_2 = 0
                var_3e4_1 = rdx_50
                var_350_1.d = rdx_50
                int64_t* rax_109
                
                if (rdx_50 s<= var_350_1:4.d)
                    rax_109 = var_348_1
                    rdi_17 = rdx_50
                else
                    sub_1405c4fe0(&var_358)
                    rax_109 = var_358
                    rdi_17 = var_350_1.d
                    var_348_1 = rax_109
                    var_3e4_1 = rdi_17
                
                int64_t rbx_13 = sx.q(var_388_1)
                void* rcx_112 = &rax_109[rdi_16 * 8]
                __builtin_memset(rcx_112, 0, 0x20)
                *(rcx_112 + 0x20) = var_2a8.o
                *(rcx_112 + 0x3c) = 0x100
                *(rcx_112 + 0x30) = var_29c_1
                *(rcx_112 + 0x38) = var_290_2.d
                int32_t rax_111 = (rbx_13 + 1).d
                int32_t var_328_3 = rax_111
                
                if (rax_111 s> var_324_1)
                    sub_1405a4d70(&var_330)
                
                var_330[rbx_13] = result
            
            int64_t rcx_117 = sx.q(var_3d8_1)
            void* rbx_16 = &var_348_1[sx.q(rdi_17 - 1) * 8]
            int32_t r15_17 = *(rbx_16 + 8)
            
            if (rcx_117.d s< r14_20)
                void* rdi_19 = rcx_117 * 0x4c + var_3c8
                uint64_t i_11 = zx.q(r14_20 - rcx_117.d)
                uint64_t i_1
                
                do
                    uint128_t zmm1_2 = *(rdi_19 + 0x10)
                    int32_t rax_113 = *(rdi_19 + 0x48)
                    zmm0_2 = *rdi_19
                    int64_t r14_22 = sx.q(*(rbx_16 + 8))
                    int128_t zmm2_1 = *(rdi_19 + 0x20)
                    int128_t zmm7_2 = *(rdi_19 + 0x30)
                    int32_t rax_114 = (r14_22 + 1).d
                    int64_t zmm8_2 = *(rdi_19 + 0x40)
                    uint128_t var_2b8_1 = zmm1_2
                    var_2c8 = zmm0_2
                    zmm0_2.d = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xff).d f* -1f
                    *(rbx_16 + 8) = rax_114
                    zmm1_2.d = zmm1_2.d f* -1f
                    var_2c8:0xc.d = zmm0_2.d
                    zmm0_2.d = var_2b8_1:4.d.d f* -1f
                    var_2b8_1.d = zmm1_2.d
                    zmm1_2 = var_2b8_1:8.d
                    var_2b8_1:4.d = zmm0_2.d
                    var_2a8.o = zmm2_1
                    zmm0_2.d = var_2b8_1:0xc.d.d f* -1f
                    zmm1_2.d = zmm1_2.d f* -1f
                    zmm2_1.d = zmm2_1.d f* -1f
                    var_2b8_1:0xc.d = zmm0_2.d
                    var_2b8_1:8.d = zmm1_2.d
                    var_2a8.d = zmm2_1.d
                    
                    if (rax_114 s> *(rbx_16 + 0xc))
                        sub_140a05ee0(rbx_16)
                    
                    int64_t rax_115 = *rbx_16
                    uint128_t* rcx_116 = r14_22 * 0x4c
                    *(rcx_116 + rax_115) = var_2c8
                    *(rcx_116 + rax_115 + 0x10) = var_2b8_1
                    *(rcx_116 + rax_115 + 0x20) = var_2a8.o
                    *(rcx_116 + rax_115 + 0x30) = zmm7_2
                    *(rcx_116 + rax_115 + 0x40) = zmm8_2
                    *(rcx_116 + rax_115 + 0x48) = rax_113
                    
                    if (*(rbx_16 + 0x38) == 0)
                        zmm1_2 = zx.o(var_2c8.q)
                        int32_t rax_116 = var_2c8:8.d
                        *(rbx_16 + 0x2c) = zmm1_2.q
                        *(rbx_16 + 0x20) = zmm1_2.q
                        *(rbx_16 + 0x34) = rax_116
                        *(rbx_16 + 0x28) = rax_116
                        *(rbx_16 + 0x38) = 1
                    else
                        zmm0_2 = __minss_xmmss_memss((*(rbx_16 + 0x20)).d, var_2c8.d)
                        int32_t zmm3_1 = var_2c8:4.d
                        zmm1_2 = _mm_min_ss((*(rbx_16 + 0x24)).d, zmm3_1)
                        int32_t temp0_80 = __maxss_xmmss_memss(zmm3_1, *(rbx_16 + 0x30))
                        *(rbx_16 + 0x20) = zmm0_2.d
                        zmm0_2 = __minss_xmmss_memss((*(rbx_16 + 0x28)).d, var_2c8:8.d)
                        *(rbx_16 + 0x24) = zmm1_2.d
                        *(rbx_16 + 0x30) = temp0_80
                        *(rbx_16 + 0x28) = zmm0_2.d
                        *(rbx_16 + 0x2c) = __maxss_xmmss_memss((*(rbx_16 + 0x2c)).d, var_2c8.d).d
                        *(rbx_16 + 0x34) = __maxss_xmmss_memss((*(rbx_16 + 0x34)).d, var_2c8:8.d).d
                    
                    rdi_19 += 0x4c
                    i_1 = i_11
                    i_11 -= 1
                while (i_1 != 1)
                rcx_117 = zx.q(var_3d8_1)
            
            int64_t rdx_56 = sx.q(var_320)
            int32_t r15_18 = r15_17 - rcx_117.d
            
            if (rdx_56.d s< r12_10)
                void* rdi_20 = var_3b8 + 4 + (rdx_56 << 2)
                uint64_t i_10 = zx.q((r12_10 - rdx_56.d - 1) u/ 3 + 1)
                uint64_t i_2
                
                do
                    int64_t r14_23 = sx.q(*(rbx_16 + 0x18))
                    int32_t r13_8 = *(rdi_20 - 4) + r15_18
                    int32_t rax_118 = (r14_23 + 1).d
                    *(rbx_16 + 0x18) = rax_118
                    
                    if (rax_118 s> *(rbx_16 + 0x1c))
                        sub_1405a4cf0(rbx_16 + 0x10)
                    
                    *(*(rbx_16 + 0x10) + (r14_23 << 2)) = r13_8
                    int64_t r14_24 = sx.q(*(rbx_16 + 0x18))
                    int32_t r13_10 = *(rdi_20 + 4) + r15_18
                    int32_t rax_120 = (r14_24 + 1).d
                    *(rbx_16 + 0x18) = rax_120
                    
                    if (rax_120 s> *(rbx_16 + 0x1c))
                        sub_1405a4cf0(rbx_16 + 0x10)
                    
                    *(*(rbx_16 + 0x10) + (r14_24 << 2)) = r13_10
                    int64_t r14_25 = sx.q(*(rbx_16 + 0x18))
                    int32_t r13_12 = *rdi_20 + r15_18
                    int32_t rax_122 = (r14_25 + 1).d
                    *(rbx_16 + 0x18) = rax_122
                    
                    if (rax_122 s> *(rbx_16 + 0x1c))
                        sub_1405a4cf0(rbx_16 + 0x10)
                    
                    rdi_20 += 0xc
                    *(*(rbx_16 + 0x10) + (r14_25 << 2)) = r13_12
                    i_2 = i_10
                    i_10 -= 1
                while (i_2 != 1)
            
            rdi = arg1
        
        sub_140597000(&var_1e8)
        int64_t rcx_124 = var_378[0].q
        
        if (rcx_124 != 0)
            sub_140a74f90(rcx_124)
        
        int64_t rax_124 = var_3b8
        
        if (rax_124 != 0)
            sub_140a74f90(rax_124)
        
        int64_t rax_125 = var_3c8
        
        if (rax_125 != 0)
            sub_140a74f90(rax_125)
    
    int64_t rax_126 = *rdi
    int32_t i_8 = 0
    var_368 = 0
    float i_17 = 0f
    i_12.q = 0
    int32_t r12_13 = 0
    var_148 = nullptr
    int64_t* r13_13 = nullptr
    int32_t i_13 = 0
    int32_t var_13c_1 = 0
    void* rax_127 = (*(rax_126 + 0x690))(rdi)
    void* var_2f0_2 = rax_127
    int32_t i_7 = 0
    
    if (*(rax_127 + 0x60) s> 0)
        data_142d3f780
        int64_t rdx_62 = 0
        int64_t var_338_1 = 0
        int32_t i_3
        
        do
            void* r15_20 = *(rax_127 + 0x58) + rdx_62
            int32_t rax_128 = *(r15_20 + 0x68)
            zmm1 = zx.o(*(r15_20 + 0x60))
            var_248 = *(r15_20 + 0x50)
            int64_t var_238_2 = zmm1.q
            int32_t var_230_2 = rax_128
            int32_t rax_129 = sub_1409fcaf0(&var_248, &var_308)
            int64_t* rdi_22
            
            if (rax_129 != 0xffffffff)
                int32_t var_35c
                
                if (rax_129 != 1)
                    var_378[0].q = 0
                    var_378[2].q = 0
                    int128_t zmm6_2 = sub_140a06730(r15_20, &var_308, &var_378)
                    int64_t r12_15 = sx.q(var_378[2])
                    
                    if (r12_15.d s>= 4)
                        int64_t i_19 = sx.q(i_17)
                        i_17 = (i_19 + 1).d
                        i_12 = i_17
                        
                        if (i_17 s> var_35c)
                            sub_1405a4f90(&var_368)
                            i_17 = i_12
                        
                        int64_t* rdi_25 = (i_19 << 4) + var_368
                        *rdi_25 = 0
                        rdi_25[1].d = r12_15.d
                        
                        if (r12_15.d != 0)
                            sub_1407c3650(rdi_25, r12_15.d, 0)
                            memcpy(*rdi_25, var_378[0].q, (r12_15 * 0xc).d)
                        else
                            *(rdi_25 + 0xc) = 0
                    
                    if (arg4 != 0)
                        zmm0 = var_308.o ^ zmm6_2
                        var_138 = 0
                        var_268.o = zmm0
                        int32_t var_130_1 = 0
                        sub_140a06730(r15_20, &var_268, &var_138)
                        int64_t r15_22 = sx.q(var_130_1)
                        int64_t r12_16 = var_138
                        
                        if (r15_22.d s>= 4)
                            int64_t i_15 = sx.q(i_8)
                            i_8 = (i_15 + 1).d
                            i_13 = i_8
                            
                            if (i_8 s> var_13c_1)
                                sub_1405a4f90(&var_148)
                                i_8 = i_13
                                r13_13 = var_148
                            
                            void* rdi_27 = &r13_13[i_15 * 2]
                            *rdi_27 = 0
                            *(rdi_27 + 8) = r15_22.d
                            
                            if (r15_22.d != 0)
                                sub_1407c3650(rdi_27, r15_22.d, 0)
                                memcpy(*rdi_27, r12_16, (r15_22 * 0xc).d)
                            else
                                *(rdi_27 + 0xc) = 0
                        
                        if (r12_16 != 0)
                            sub_140a74f90(r12_16)
                    
                    int64_t rax_130 = var_378[0].q
                    
                    if (rax_130 != 0)
                        sub_140a74f90(rax_130)
                    
                    r12_13 = var_35c
                else
                    int64_t i_18 = sx.q(i_17)
                    i_17 = (i_18 + 1).d
                    i_12 = i_17
                    
                    if (i_17 s> r12_13)
                        sub_1405a4f90(&var_368)
                        i_17 = i_12
                    
                    rdi_22 = (i_18 << 4) + var_368
                label_140a083f5:
                    *rdi_22 = 0
                    int64_t r12_14 = sx.q(*(r15_20 + 0x38))
                    int64_t r15_21 = *(r15_20 + 0x30)
                    rdi_22[1].d = r12_14.d
                    
                    if (r12_14.d != 0)
                        sub_1407c3650(rdi_22, r12_14.d, 0)
                        memcpy(*rdi_22, r15_21, (r12_14 * 0xc).d)
                    else
                        *(rdi_22 + 0xc) = 0
                    
                    r12_13 = var_35c
            else if (arg4 != 0)
                int64_t i_14 = sx.q(i_8)
                i_8 = (i_14 + 1).d
                i_13 = i_8
                
                if (i_8 s> var_13c_1)
                    sub_1405a4f90(&var_148)
                    i_8 = i_13
                    r13_13 = var_148
                
                rdi_22 = &r13_13[i_14 * 2]
                goto label_140a083f5
            i_3 = i_7 + 1
            rdx_62 = var_338_1 + 0xb0
            i_7 = i_3
            var_338_1 = rdx_62
            rax_127 = var_2f0_2
        while (i_3 s< *(var_2f0_2 + 0x60))
        rdi = arg1
    
    sub_140a06060(rdi, &var_368)
    
    if (arg4 != 0)
        void* rbx_18 = rdi[4]
        sub_140d19010(rbx_18, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t* rax_133 = sub_140d2dfc0(sub_140a0af10(), rbx_18, 0, 0, 0, 0, 0, 0, 0)
        int64_t** r15_23 = var_250
        int32_t var_418_1
        var_418_1.b = 0
        *r15_23 = rax_133
        sub_141f4a580(rax_133, &rdi[0x38], 0, 0, var_418_1.b)
        
        if (var_3e4_1 s> 0)
            int64_t* rbx_19 = var_330
            int64_t* r14_26 = var_348_1
            
            do
                sub_140a06420(*r15_23, rsi_1, r14_26)
                int64_t* rcx_149 = *r15_23
                (*(*rcx_149 + 0x550))(rcx_149, zx.q(rsi_1), *rbx_19)
                rsi_1 += 1
                rbx_19 = &rbx_19[1]
                r14_26 = &r14_26[8]
            while (rsi_1 s< var_3e4_1)
        
        int64_t rbx_20 = **r15_23
        int64_t* rax_136
        int64_t r8_25
        rax_136, r8_25 = sub_14229f430(arg1, &var_250)
        r8_25.b = 1
        (*(rbx_20 + 0x620))(*r15_23, *rax_136, r8_25)
        int64_t rbx_21 = **r15_23
        int32_t rax_139 = (*(*arg1 + 0x4c8))(arg1)
        (*(rbx_21 + 0x618))(*r15_23, zx.q(rax_139))
        (*r15_23)[0x87].b = arg1[0x87].b
        sub_140a06060(*r15_23, &var_148)
        sub_141ef1390(*r15_23)
        i_8 = i_13
        r13_13 = var_148
    
    int64_t* rdi_30 = r13_13
    
    if (i_8 != 0)
        int32_t i_4
        
        do
            int64_t rcx_156 = *rdi_30
            
            if (rcx_156 != 0)
                sub_140a74f90(rcx_156)
            
            rdi_30 = &rdi_30[2]
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)
    
    if (r13_13 != 0)
        sub_140a74f90(r13_13)
    
    float i_9 = i_12
    int64_t rsi_4 = var_368
    int64_t rbx_22 = rsi_4
    
    if (i_9 != 0)
        float i_5
        
        do
            int64_t rcx_158 = *rbx_22
            
            if (rcx_158 != 0)
                sub_140a74f90(rcx_158)
            
            rbx_22 += 0x10
            i_5 = i_9
            i_9 -= 1
        while (i_5 != 1)
    
    if (rsi_4 != 0)
        sub_140a74f90(rsi_4)
    
    int64_t rcx_160 = var_2e8
    
    if (rcx_160 != 0)
        sub_140a74f90(rcx_160)
    
    int64_t* rax_141 = var_330
    
    if (rax_141 != 0)
        sub_140a74f90(rax_141)
    
    result = sub_1409fb190(&var_358)

__security_check_cookie(rax_1 ^ &var_438)
return result
