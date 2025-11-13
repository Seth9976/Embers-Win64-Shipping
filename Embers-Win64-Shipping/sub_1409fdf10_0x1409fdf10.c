// 函数: sub_1409fdf10
// 地址: 0x1409fdf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t* result = arg1
int64_t* rdi = arg2
int32_t i_9 = result[1].d
int32_t i_13 = i_9

if (i_9 != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x55555556, arg2[1].d)
    int64_t r13_1 = 0
    int32_t i = (temp0_1 u>> 0x1f) + temp0_1
    int64_t var_1d8 = 0
    int32_t var_1d0_1 = 0
    int32_t var_1ac_1 = 0x80
    int64_t var_1c8
    __builtin_memset(&var_1c8, 0, 0x1c)
    int32_t var_1a8_1 = 0xffffffff
    int32_t var_1a4_1 = 0
    void* var_198_1 = nullptr
    int32_t var_190_1 = 0
    int64_t var_188 = 0
    int32_t var_180_1 = 0
    int32_t var_15c_1 = 0x80
    int64_t var_178
    __builtin_memset(&var_178, 0, 0x1c)
    int32_t var_158_1 = 0xffffffff
    int32_t var_154_1 = 0
    void* var_148_1 = nullptr
    int32_t var_140_1 = 0
    uint64_t* var_2e0_1 = nullptr
    uint64_t* var_358 = nullptr
    int32_t var_34c_1 = 0
    uint64_t* var_2e8_1 = nullptr
    uint64_t* var_348 = nullptr
    int32_t var_33c_1 = 0
    uint64_t* var_2b8_1 = nullptr
    void* var_368 = nullptr
    int32_t var_35c_1 = 0
    int32_t i_5 = i
    
    if (i s> 0)
        sub_140638a00(&var_358)
        var_2e0_1 = var_358
    
    int32_t i_6 = i
    
    if (i s> 0)
        sub_140638a00(&var_348)
        var_2e8_1 = var_348
    
    int32_t i_4 = i
    
    if (i s> 0)
        sub_140638a00(&var_368)
        var_2b8_1 = var_368
    
    uint128_t zmm14 = 0x322bcc77
    uint64_t i_8 = 0
    float zmm10[0x4] = 0x3f000000
    uint128_t zmm9 = zx.o(0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    int32_t i_3 = 0
    void var_1a0
    void var_150
    uint32_t zmm1[0x4]
    uint128_t zmm2
    float zmm3[0x4]
    
    if (i s> 0)
        zmm1 = 0x7fffffff
        int32_t r10_1 = i_9 - 1
        zmm2 = 0x38d1b717
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        uint128_t zmm13
        uint128_t var_b8_1 = zmm13
        int128_t zmm15
        int128_t var_d8_1 = zmm15
        int32_t var_380_1 = r10_1
        
        do
            int32_t rax_5 = 0
            int64_t j_7 = 0
            int32_t var_128
            int32_t* r9 = &var_128
            int32_t var_388_1 = 0
            int32_t* var_308_1 = &var_128
            int32_t var_37c
            int32_t* var_378
            int32_t var_338
            uint64_t k_4
            int32_t var_138
            uint128_t zmm0
            
            for (int64_t j = 0; j s< 3; )
                int64_t rdx_4 = *rdi
                var_358 = nullptr
                int64_t rax_8 = sx.q(rax_5 + (i_8 << 1).d + i_8.d)
                int32_t rbx_1 = r10_1
                int32_t rcx_4 = 0
                uint64_t* r15_1 = nullptr
                int32_t k_7 = 0
                int32_t var_34c_2 = 0
                int64_t* r10_2 = arg1
                
                if (*(rdx_4 + (rax_8 << 2)) s<= r10_1)
                    rbx_1 = *(rdx_4 + (rax_8 << 2))
                
                int64_t rdi_1 = sx.q(rbx_1)
                (&var_138)[j] = rbx_1
                int64_t r8 = *r10_2
                var_338 = rbx_1
                int64_t rdx_5 = rdi_1 * 3
                zmm0 = zx.o(*(r8 + (rdx_5 << 2)))
                int32_t rax_9 = *(r8 + (rdx_5 << 2) + 8)
                *r9 = zmm0.q
                r9[2] = rax_9
                int32_t r9_1 = r10_2[1].d
                
                if (rbx_1 s< r9_1)
                    uint64_t var_2a0_1 = zmm0.q
                    int32_t k = 0
                    
                    if (r9_1 s> 0)
                        int64_t rdi_2 = 0
                        
                        do
                            int32_t* rax_10 = *r10_2
                            zmm0.d = var_2a0_1.d.d f- *(rax_10 + rdi_2)
                            
                            if (_mm_and_ps(zmm0, zmm1).d f> zmm2.d)
                                rax_10.b = 0
                            else
                                zmm0.d = var_2a0_1:4.d.d f- *(rax_10 + rdi_2 + 4)
                                
                                if (_mm_and_ps(zmm0, zmm1).d f> zmm2.d)
                                    rax_10.b = 0
                                else
                                    zmm0.d = rax_9.d f- *(rax_10 + rdi_2 + 8)
                                    
                                    if (_mm_and_ps(zmm0, zmm1).d f> zmm2.d)
                                        rax_10.b = 0
                                    else
                                        rax_10.b = 1
                            
                            if (rax_10.b != 0)
                                int64_t k_12 = sx.q(k_7)
                                k_7 = (k_12 + 1).d
                                
                                if (k_7 s> rcx_4)
                                    sub_1405a4cf0(&var_358)
                                    rcx_4 = var_34c_2
                                    zmm1 = 0x7fffffff
                                    zmm2 = 0x38d1b717
                                    r10_2 = arg1
                                
                                r15_1 = var_358
                                *(r15_1 + (k_12 << 2)) = k
                            
                            k += 1
                            rdi_2 += 0xc
                        while (k s< r10_2[1].d)
                        
                        rdi_1 = sx.q(rbx_1)
                
                sub_1409b3740(&var_1d8, var_1d0_1 - var_1a4_1, 0)
                
                if (var_190_1 == 0)
                label_1409fe372:
                    int32_t var_1f8
                    sub_14090a150(&var_1d8, &var_1f8)
                    int32_t* var_1f0
                    *var_1f0 = rbx_1
                    var_1f0[1] = i_8.d
                    var_1f0[2] = 0xffffffff
                    
                    if (sub_1409b3740(&var_1d8, var_1d0_1 - var_1a4_1, 0) == 0)
                        void* rcx_11 = &var_1a0
                        int32_t r8_4 = (var_190_1 - 1) & rbx_1
                        var_1f0[3] = r8_4
                        
                        if (var_198_1 != 0)
                            rcx_11 = var_198_1
                        
                        void* rcx_12 = &var_1a0
                        var_1f0[2] = *(rcx_11 + ((sx.q(var_190_1 - 1) & sx.q(r8_4)) << 2))
                        
                        if (var_198_1 != 0)
                            rcx_12 = var_198_1
                        
                        *(rcx_12 + ((sx.q(var_190_1 - 1) & sx.q(r8_4)) << 2)) = var_1f8
                    
                    rdi_1 = sx.q(rbx_1)
                else
                    void* rcx_7 = &var_1a0
                    
                    if (var_198_1 != 0)
                        rcx_7 = var_198_1
                    
                    int32_t rcx_8 = *(rcx_7 + ((sx.q(var_190_1 - 1) & rdi_1) << 2))
                    
                    if (rcx_8 == 0xffffffff)
                        goto label_1409fe372
                    
                    int64_t r8_1 = var_1d8
                    int32_t rax_15
                    
                    while (true)
                        int64_t rdx_12 = sx.q(rcx_8) * 2
                        rax_15 = *(r8_1 + (rdx_12 << 3) + 8)
                        
                        if (*(r8_1 + (rdx_12 << 3)) == rbx_1)
                            break
                        
                        rcx_8 = rax_15
                        
                        if (rax_15 == 0xffffffff)
                            goto label_1409fe372
                    
                    if (rcx_8 == 0xffffffff)
                        goto label_1409fe372
                    
                    while (*(r8_1 + sx.q(rcx_8) * 0x10 + 4) != i_8.d)
                        rcx_8 = rax_15
                        
                        if (rax_15 == 0xffffffff)
                            goto label_1409fe372
                        
                        while (true)
                            rax_15 = *(r8_1 + sx.q(rax_15) * 0x10 + 8)
                            
                            if (*(r8_1 + sx.q(rcx_8) * 0x10) == rbx_1)
                                break
                            
                            rcx_8 = rax_15
                            
                            if (rax_15 == 0xffffffff)
                                goto label_1409fe372
                    
                    if ((sx.q(rcx_8) << 4) + 4 == neg.q(r8_1))
                        goto label_1409fe372
                
                sub_1409b3740(&var_188, var_180_1 - var_154_1, 0)
                
                if (var_140_1 == 0)
                label_1409fe502:
                    int32_t var_1e8
                    sub_14090a150(&var_188, &var_1e8)
                    int32_t* var_1e0
                    *var_1e0 = rbx_1
                    var_1e0[1] = i_8.d
                    var_1e0[2] = 0xffffffff
                    
                    if (sub_1409b3740(&var_188, var_180_1 - var_154_1, 0) == 0)
                        void* rcx_18 = &var_150
                        int32_t r8_8 = (var_140_1 - 1) & rbx_1
                        var_1e0[3] = r8_8
                        
                        if (var_148_1 != 0)
                            rcx_18 = var_148_1
                        
                        void* rcx_19 = &var_150
                        var_1e0[2] = *(rcx_18 + ((sx.q(var_140_1 - 1) & sx.q(r8_8)) << 2))
                        
                        if (var_148_1 != 0)
                            rcx_19 = var_148_1
                        
                        *(rcx_19 + ((sx.q(var_140_1 - 1) & sx.q(r8_8)) << 2)) = var_1e8
                else
                    void* rcx_14 = &var_150
                    
                    if (var_148_1 != 0)
                        rcx_14 = var_148_1
                    
                    int32_t rcx_15 = *(rcx_14 + ((sx.q(var_140_1 - 1) & rdi_1) << 2))
                    
                    if (rcx_15 == 0xffffffff)
                        goto label_1409fe502
                    
                    int64_t r8_5 = var_188
                    int32_t rax_34
                    
                    while (true)
                        int64_t rdx_31 = sx.q(rcx_15) * 2
                        rax_34 = *(r8_5 + (rdx_31 << 3) + 8)
                        
                        if (*(r8_5 + (rdx_31 << 3)) == rbx_1)
                            break
                        
                        rcx_15 = rax_34
                        
                        if (rax_34 == 0xffffffff)
                            goto label_1409fe502
                    
                    if (rcx_15 == 0xffffffff)
                        goto label_1409fe502
                    
                    while (*(r8_5 + sx.q(rcx_15) * 0x10 + 4) != i_8.d)
                        rcx_15 = rax_34
                        
                        if (rax_34 == 0xffffffff)
                            goto label_1409fe502
                        
                        while (true)
                            rax_34 = *(r8_5 + sx.q(rax_34) * 0x10 + 8)
                            
                            if (*(r8_5 + sx.q(rcx_15) * 0x10) == rbx_1)
                                break
                            
                            rcx_15 = rax_34
                            
                            if (rax_34 == 0xffffffff)
                                goto label_1409fe502
                    
                    if ((sx.q(rcx_15) << 4) + 4 == neg.q(r8_5))
                        goto label_1409fe502
                
                if (k_7 s> 0)
                    int32_t* rax_50 = r15_1
                    var_378 = rax_50
                    k_4 = zx.q(k_7)
                    uint64_t k_1
                    
                    do
                        var_37c = *rax_50
                        sub_1409fa6c0(&var_188, &var_37c, &i_3)
                        uint64_t* r12_1 = nullptr
                        var_348 = nullptr
                        int32_t rsi_3 = 0
                        int32_t var_33c_2 = 0
                        sub_1409b3740(&var_1d8, var_1d0_1 - var_1a4_1, 0)
                        
                        if (var_190_1 != 0)
                            int64_t r14 = sx.q(var_37c)
                            void* rcx_23 = &var_1a0
                            
                            if (var_198_1 != 0)
                                rcx_23 = var_198_1
                            
                            int32_t rdi_5 = *(rcx_23 + ((sx.q(var_190_1 - 1) & r14) << 2))
                            
                            if (rdi_5 != 0xffffffff)
                                int64_t rdx_50 = var_1d8
                                int32_t rbx_2
                                
                                do
                                    int64_t rax_56 = sx.q(rdi_5) * 2
                                    rbx_2 = *(rdx_50 + (rax_56 << 3) + 8)
                                    
                                    if (*(rdx_50 + (rax_56 << 3)) == r14.d)
                                        if (rdi_5 != 0xffffffff)
                                            int32_t r10_3 = var_33c_2
                                            int32_t rcx_24 = rbx_2
                                            int32_t r13_2 = rbx_2
                                            var_37c = rbx_2
                                            int32_t r8_10 = rbx_2
                                        label_1409fe690:
                                            int64_t r15_2 = sx.q(rsi_3)
                                            rsi_3 = (r15_2 + 1).d
                                            
                                            if (rsi_3 s> r10_3)
                                                sub_1405a4cf0(&var_348)
                                                r8_10 = var_37c
                                                rcx_24 = r13_2
                                                rdx_50 = var_1d8
                                                r10_3 = var_33c_2
                                                r12_1 = var_348
                                            
                                            void* r9_2 = r12_1 + (r15_2 << 2)
                                            
                                            if (r9_2 != 0)
                                                rcx_24 = r8_10
                                                *r9_2 = *(rdx_50 + sx.q(rdi_5) * 0x10 + 4)
                                                rdx_50 = var_1d8
                                            
                                            rdi_5 = rcx_24
                                            
                                            while (rbx_2 != 0xffffffff)
                                                rbx_2 = *(rdx_50 + sx.q(rbx_2) * 0x10 + 8)
                                                rcx_24 = rbx_2
                                                
                                                if (*(rdx_50 + sx.q(rdi_5) * 0x10) == r14.d)
                                                    r13_2 = rcx_24
                                                    var_37c = rcx_24
                                                    r8_10 = rcx_24
                                                    goto label_1409fe690
                                                
                                                rdi_5 = rbx_2
                                            
                                            if (rsi_3 s> 0)
                                                uint64_t* rbx_3 = r12_1
                                                uint64_t rdi_6 = zx.q(rsi_3)
                                                uint64_t temp9_1
                                                
                                                do
                                                    sub_1409fa6c0(&var_188, &var_338, rbx_3)
                                                    rbx_3 += 4
                                                    temp9_1 = rdi_6
                                                    rdi_6 -= 1
                                                while (temp9_1 != 1)
                                            
                                            if (r12_1 != 0)
                                                sub_140a74f90(r12_1)
                                            
                                            r13_1 = 0
                                        
                                        break
                                    
                                    rdi_5 = rbx_2
                                while (rbx_2 != 0xffffffff)
                        
                        rax_50 = &var_378[1]
                        k_1 = k_4
                        k_4 -= 1
                        var_378 = rax_50
                    while (k_1 != 1)
                    i_8 = zx.q(i_3)
                
                uint64_t* rcx_28 = var_358
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                rax_5 = var_388_1 + 1
                j = j_7 + 1
                zmm1 = 0x7fffffff
                r9 = &var_308_1[3]
                zmm2 = 0x38d1b717
                r10_1 = var_380_1
                rdi = arg2
                var_388_1 = rax_5
                j_7 = j
                var_308_1 = r9
            
            int32_t var_11c
            zmm0 = var_11c
            int32_t var_114
            zmm2 = var_114
            int32_t var_110
            zmm15 = var_110
            zmm6 = zmm2
            int32_t var_124
            zmm10 = var_124
            zmm7.d = zmm0.d f- zmm15.d
            zmm12 = data_143dbb200
            zmm9.d = var_128.d f- zmm15.d
            zmm13 = data_143dbb1fc
            zmm14 = data_143dbb1f8
            zmm3 = 0x322bcc77
            var_37c = zmm0.d
            int32_t var_118
            zmm0 = var_118
            zmm1 = zmm0
            i_3 = zmm0.d
            int32_t var_10c
            zmm0 = var_10c
            zmm1[0] = zmm1[0] f- zmm0.d
            var_338 = zmm0.d
            zmm10[0] = zmm10[0] f- zmm0.d
            k_4.d = zmm2.d
            int32_t var_108
            zmm2 = var_108
            zmm6.d = zmm6.d f- zmm2.d
            int32_t var_388_2 = zmm2.d
            int32_t var_120
            zmm11.d = var_120.d f- zmm2.d
            zmm1[0] = zmm1[0] f* zmm9.d
            zmm0 = zmm6
            zmm6.d = zmm6.d f* zmm9.d
            zmm0.d = zmm0.d f* zmm10[0]
            zmm8.d = zmm1.d f* zmm11.d
            zmm8.d = zmm8.d f- zmm0.d
            zmm0.d = zmm7.d f* zmm11.d
            zmm7.d = zmm7.d f* zmm10[0]
            zmm6.d = zmm6.d f- zmm0.d
            zmm2.d = zmm8.d f* zmm8.d
            zmm7.d = zmm7.d f- zmm1[0]
            zmm0.d = zmm6.d f* zmm6.d
            zmm1 = zmm7
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1[0]
            int32_t var_318_1
            int32_t var_310_1
            uint128_t zmm4_1
            uint128_t zmm5_1
            
            if (not(zmm2.d f!= 1f))
                var_318_1 = zmm8.d
                int32_t var_314_1 = zmm6.d
                var_310_1 = zmm7.d
            else if (zmm2.d f>= 9.99999994e-09f)
                zmm3 = zmm2
                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0.d
                zmm2.d = 0.5f f- zmm1[0]
                zmm0.d = zmm5_1.d f* zmm2.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                zmm3[0] = zmm3[0] f* zmm1[0]
                zmm4_1.d = 0.5f - zmm3[0]
                zmm3 = 0x322bcc77
                zmm0.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                var_378.d = zmm5_1.d
                zmm1 = zmm5_1
                zmm0.d = zmm5_1.d f* zmm8.d
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm5_1.d = zmm5_1.d f* zmm7.d
                zmm8 = zmm0
                var_318_1 = zmm0.d
                zmm6 = zmm1
                uint32_t var_314_3 = zmm1[0]
                var_310_1 = zmm5_1.d
                zmm7 = zmm5_1
            else
                zmm6 = zmm13
                var_318_1 = zmm14.d
                zmm7 = zmm12
                int32_t var_314_2 = zmm6.d
                var_310_1 = zmm7.d
                zmm8 = zmm14
            
            float rax_74
            int64_t rcx_32
            
            if (arg3[1].d != arg1[1].d)
                zmm2.d = zmm9.d f* zmm9.d
                zmm0.d = zmm10.d f* zmm10[0]
                zmm1 = zmm11
                zmm1[0] = zmm1[0] f* zmm11.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1[0]
                int32_t var_334_1
                int32_t var_32c_1
                
                if (zmm2.d f!= 1f)
                    if (zmm2.d f>= zmm3[0])
                        zmm12 = 0x3f000000
                        zmm3 = zmm2
                        zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                        zmm3[0] = zmm3[0] * 0.5f
                        zmm0.d = zmm5_1.d f* zmm5_1.d
                        zmm1 = zmm3
                        zmm1[0] = zmm1[0] f* zmm0.d
                        zmm2.d = 0.5f f- zmm1[0]
                        zmm0.d = zmm5_1.d f* zmm2.d
                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                        zmm1 = zmm5_1
                        zmm1[0] = zmm1[0] f* zmm5_1.d
                        zmm3[0] = zmm3[0] f* zmm1[0]
                        zmm4_1.d = 0.5f - zmm3[0]
                        zmm0.d = zmm5_1.d f* zmm4_1.d
                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                        var_378.d = zmm5_1.d
                        zmm9.d = zmm9.d f* zmm5_1.d
                        zmm10[0] = zmm10[0] f* zmm5_1.d
                        zmm11.d = zmm11.d f* zmm5_1.d
                        goto label_1409fef38
                    
                    var_32c_1 = zmm12.d
                    zmm12 = 0x3f000000
                    var_334_1 = zmm14.d
                    int32_t var_330_1 = zmm13.d
                else
                    zmm12 = 0x3f000000
                label_1409fef38:
                    var_32c_1 = zmm11.d
                    float var_330_2 = zmm10[0]
                    var_334_1 = zmm9.d
                
                zmm14 = 0x322bcc77
                int64_t rcx_33 = sx.q(i_8.d) * 3
                *(var_2e0_1 + (rcx_33 << 2)) = var_334_1.q
                rcx_32 = rcx_33 << 2
                *(var_2e0_1 + rcx_32 + 8) = var_32c_1
                zmm1 = *(var_2e0_1 + rcx_32 + 4)
                zmm9 = *(var_2e0_1 + rcx_32 + 8)
                zmm10 = *(var_2e0_1 + rcx_32)
                zmm0.d = zmm9.d f* zmm6.d
                zmm1[0] = zmm1[0] f* zmm8.d
                zmm11.d = zmm1.d f* zmm7.d
                zmm9.d = zmm9.d f* zmm8.d
                zmm11.d = zmm11.d f- zmm0.d
                zmm0.d = zmm10.d f* zmm7.d
                zmm10[0] = zmm10[0] f* zmm6.d
                zmm9.d = zmm9.d f- zmm0.d
                zmm2.d = zmm11.d f* zmm11.d
                zmm10[0] = zmm10[0] f- zmm1[0]
                zmm0.d = zmm9.d f* zmm9.d
                zmm1 = zmm10
                zmm1[0] = zmm1[0] f* zmm10[0]
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1[0]
                
                if (zmm2.d f== 1f)
                    goto label_1409ff089
                
                int32_t var_328_1
                float var_320_1
                
                if (zmm2.d f>= 9.99999994e-09f)
                    zmm3 = zmm2
                    zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                    zmm3[0] = zmm3[0] f* zmm12.d
                    zmm0.d = zmm5_1.d f* zmm5_1.d
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2.d = zmm12.d f- zmm1[0]
                    zmm0.d = zmm5_1.d f* zmm2.d
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    zmm1 = zmm5_1
                    zmm1[0] = zmm1[0] f* zmm5_1.d
                    zmm3[0] = zmm3[0] f* zmm1[0]
                    zmm4_1.d = zmm12.d f- zmm3[0]
                    zmm0.d = zmm5_1.d f* zmm4_1.d
                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                    var_378.d = zmm5_1.d
                    zmm11.d = zmm11.d f* zmm5_1.d
                    zmm9.d = zmm9.d f* zmm5_1.d
                    zmm10[0] = zmm10[0] f* zmm5_1.d
                label_1409ff089:
                    var_320_1 = zmm10[0]
                    int32_t var_324_2 = zmm9.d
                    var_328_1 = zmm11.d
                else
                    var_328_1 = data_143dbb1f8.d
                    var_320_1 = data_143dbb200.d
                    uint32_t var_324_1 = data_143dbb1fc[0]
                
                zmm0 = zx.o(var_328_1.q)
                rax_74 = var_320_1
            else
                int64_t rcx_29 = *arg3
                int64_t rax_68 = sx.q(var_138)
                zmm9 = var_128
                zmm10 = var_124
                zmm15.d = zmm15.d f- zmm9.d
                zmm11 = var_120
                zmm4_1 = *(rcx_29 + (rax_68 << 3))
                zmm5_1 = *(rcx_29 + (rax_68 << 3) + 4)
                int32_t var_134
                int64_t rax_69 = sx.q(var_134)
                zmm6 = data_142d3f660
                zmm7.d = var_338.d f- zmm10[0]
                zmm8.d = var_388_2.d f- zmm11.d
                zmm3 = *(rcx_29 + (rax_69 << 3) + 4)
                zmm2.d = (*(rcx_29 + (rax_69 << 3))).d f- zmm4_1.d
                int32_t var_130
                int64_t rax_70 = sx.q(var_130)
                zmm3[0] = zmm3[0] f- zmm5_1.d
                zmm12.d = var_37c.d f- zmm9.d
                zmm13.d = i_3.d f- zmm10[0]
                zmm14.d = k_4.d.d f- zmm11.d
                zmm1 = *(rcx_29 + (rax_70 << 3) + 4)
                zmm0.d = (*(rcx_29 + (rax_70 << 3))).d f- zmm4_1.d
                zmm1[0] = zmm1[0] f- zmm5_1.d
                int32_t var_238 = zmm2.d
                float var_234_1 = zmm3[0]
                int32_t var_218_1 = zmm4_1.d
                int32_t var_214_1 = zmm5_1.d
                int32_t var_228_1 = zmm0.d
                uint32_t var_224_1 = zmm1[0]
                int32_t var_26c_1 = 0
                int32_t var_25c_1 = 0
                int32_t var_24c_1 = 0
                int64_t var_230_1 = 0
                int64_t var_220_1 = 0
                int64_t var_210_1 = 0x3f800000
                uint128_t var_208_1 = zmm6
                uint32_t (* rax_71)[0x4]
                rax_71, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_140631b10(&var_238, &var_128)
                float var_268[0x4]
                var_268[0] = zmm15.d
                float var_278[0x4]
                var_278[0] = zmm12.d
                zmm2 = *rax_71
                float var_258[0x4]
                var_258[0] = zmm9.d
                float zmm5_2[0x4] = _mm_shuffle_ps(var_268, var_268, 0xe1)
                zmm5_2[0] = zmm7.d
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float zmm4_2[0x4] = _mm_shuffle_ps(var_278, var_278, 0xe1)
                zmm7 = zmm0
                zmm3 = _mm_shuffle_ps(var_258, var_258, 0xe1)
                zmm4_2[0] = zmm13.d
                var_308_1.o = zmm0
                zmm3[0] = zmm10[0]
                zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc6)
                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
                zmm5_2[0] = zmm8.d
                zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                zmm4_2[0] = zmm14.d
                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm3[0] = zmm11.d
                zmm7 = _mm_mul_ps(zmm7, zmm5_2)
                zmm0 = _mm_mul_ps(zmm0, zmm4_2)
                var_268 = zmm5_2
                var_278 = zmm4_2
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                zmm14 = 0x322bcc77
                zmm1 = _mm_mul_ps(zmm1, zmm3)
                int64_t var_308_2 = 0
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
                int32_t var_300_1 = 0
                var_258 = zmm3
                zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), zmm2)
                zmm2 = rax_71[1]
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm8 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1 = _mm_mul_ps(zmm1, zmm3)
                zmm0 = _mm_mul_ps(zmm0, zmm4_2)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
                zmm8 =
                    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm8, zmm5_2), zmm0), zmm1), zmm2)
                zmm2 = rax_71[2]
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1 = _mm_mul_ps(zmm1, zmm3)
                zmm0 = _mm_mul_ps(zmm0, zmm4_2)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
                zmm9 =
                    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm5_2), zmm0), zmm1), zmm2)
                zmm2 = rax_71[3]
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1 = _mm_mul_ps(zmm1, zmm3)
                zmm0 = _mm_mul_ps(zmm0, zmm4_2)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
                zmm10 =
                    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm5_2), zmm0), zmm1), zmm2)
                zmm2 = data_142d4cc00
                zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm0 = _mm_mul_ps(zmm0, zmm9)
                zmm1 = _mm_mul_ps(zmm1, zmm8)
                zmm6 = _mm_mul_ps(zmm6, zmm10)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
                zmm11 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm12 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm11
                zmm1[0] = zmm1[0] f* zmm11.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm12.d f* zmm12.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm3 = zx.o(0)
                
                if (zmm1[0] f<= 9.99999994e-09f)
                    zmm0 = zx.o(0)
                    zmm1 = zx.o(0)
                    zmm5_2 = zx.o(0)
                else
                    zmm4_2 = 0x3f000000
                    zmm3[0] = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2.d = 0.5f f- zmm1[0]
                    zmm0.d = zmm5_2.d f* zmm2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1 = zmm5_2
                    zmm1[0] = zmm1[0] f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm1[0]
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm3 = zx.o(0)
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    var_378.d = zmm5_2[0]
                    zmm1 = zmm5_2
                    zmm0.d = zmm5_2.d f* zmm6.d
                    zmm1[0] = zmm1[0] f* zmm11.d
                    zmm5_2[0] = zmm5_2[0] f* zmm12.d
                
                zmm2 = data_142d4cc20
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                zmm6 = _mm_mul_ps(zmm6, zmm8)
                int64_t var_308_3 = 0
                float var_2c8_1 = zmm5_2[0]
                int32_t var_300_2 = 0
                rcx_32 = sx.q(i_8.d) * 0xc
                *(var_2e0_1 + rcx_32) = zmm0.q
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm7)
                *(var_2e0_1 + rcx_32 + 8) = var_2c8_1
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm10)
                zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm0), _mm_add_ps(zmm1, zmm2))
                zmm0.d = zmm6.d f* zmm6.d
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm1[0] = zmm1[0] f+ zmm0.d
                
                if (zmm1[0] f<= 9.99999994e-09f)
                    zmm6 = zx.o(0)
                    zmm7 = zx.o(0)
                    zmm8 = zx.o(0)
                else
                    zmm4_2 = 0x3f000000
                    zmm3[0] = zmm1.d
                    zmm5_2 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = zmm5_2.d f* zmm5_2[0]
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2.d = 0.5f f- zmm1[0]
                    zmm0.d = zmm5_2.d f* zmm2.d
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    zmm1 = zmm5_2
                    zmm1[0] = zmm1[0] f* zmm5_2[0]
                    zmm3[0] = zmm3[0] f* zmm1[0]
                    zmm4_2[0] = 0.5f - zmm3[0]
                    zmm0.d = zmm5_2.d f* zmm4_2[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm0.d
                    var_378.d = zmm5_2[0]
                    zmm6.d = zmm6.d f* zmm5_2[0]
                    zmm7.d = zmm7.d f* zmm5_2[0]
                    zmm8.d = zmm8.d f* zmm5_2[0]
                
                rax_74 = zmm8.d
                zmm0 = _mm_unpacklo_ps(zmm6, zmm7.q)
            
            i_8 = zx.q(i_8.d + 1)
            zmm1 = 0x7fffffff
            zmm2 = 0x38d1b717
            r10_1 = var_380_1
            *(var_2e8_1 + rcx_32) = zmm0.q
            *(var_2e8_1 + rcx_32 + 8) = rax_74
            *(var_2b8_1 + rcx_32) = var_318_1.q
            *(var_2b8_1 + rcx_32 + 8) = var_310_1
            i_3 = i_8.d
        while (i_8.d s< i)
        
        zmm10 = 0x3f000000
        zmm9 = zx.o(0)
        i_9 = i_13
    
    uint64_t* var_2d8_1 = nullptr
    uint64_t* rdi_7 = nullptr
    var_358 = nullptr
    uint64_t* r12_2 = nullptr
    int32_t var_34c_3 = 0
    void* r15_3 = nullptr
    uint64_t* var_378_1 = nullptr
    var_348 = nullptr
    int32_t var_33c_3 = 0
    void* var_308_4 = nullptr
    var_368 = nullptr
    int32_t var_35c_2 = 0
    int32_t i_11 = i_9
    
    if (i_9 s> 0)
        sub_140638a00(&var_358)
        rdi_7 = var_358
        var_2d8_1 = rdi_7
    
    int64_t i_7 = sx.q(i_9)
    int64_t count = i_7 * 0xc
    memset(rdi_7, 0, count)
    int32_t i_12 = i_9
    
    if (i_9 s> 0)
        sub_140638a00(&var_348)
        r12_2 = var_348
        var_378_1 = r12_2
    
    memset(r12_2, 0, count)
    int32_t i_10 = i_9
    
    if (i_9 s> 0)
        sub_140638a00(&var_368)
        r15_3 = var_368
        var_308_4 = r15_3
    
    memset(r15_3, 0, count)
    int32_t i_1 = 0
    i_3 = 0
    uint128_t zmm0_1
    
    if (arg1[1].d s> 0)
        int32_t* rsi_4 = r15_3 + 8
        int32_t* r12_4 = rdi_7 - r15_3
        void* rax_80 = var_378_1 - r15_3
        
        do
            int32_t* var_2d0 = nullptr
            int32_t k_8 = 0
            int32_t var_2c4_1 = 0
            sub_1409b3740(&var_188, var_180_1 - var_154_1, 0)
            
            if (var_140_1 != 0)
                void* rcx_41 = &var_150
                
                if (var_148_1 != 0)
                    rcx_41 = var_148_1
                
                int32_t j_10 = *(rcx_41 + ((sx.q(var_140_1 - 1) & sx.q(i_1)) << 2))
                
                if (j_10 != 0xffffffff)
                    int64_t rdx_62 = var_188
                    int32_t j_1
                    
                    do
                        int64_t rax_86 = sx.q(j_10) * 2
                        j_1 = *(rdx_62 + (rax_86 << 3) + 8)
                        
                        if (*(rdx_62 + (rax_86 << 3)) == i_1)
                            if (j_10 != 0xffffffff)
                                int32_t* r10_4 = var_2d0
                                int32_t j_8 = j_1
                                int32_t r11_1 = var_2c4_1
                                int32_t j_12 = j_1
                                int32_t j_5 = j_1
                                int32_t j_3 = j_1
                            label_1409ff2d0:
                                int32_t k_10 = k_8
                                k_8 += 1
                                
                                if (k_8 s> r11_1)
                                    sub_1405a4cf0(&var_2d0)
                                    j_8 = j_5
                                    j_12 = j_3
                                    rdx_62 = var_188
                                    r10_4 = var_2d0
                                    r11_1 = var_2c4_1
                                
                                int32_t* r9_4 = &r10_4[sx.q(k_10)]
                                
                                if (r9_4 != 0)
                                    j_8 = j_12
                                    *r9_4 = *(rdx_62 + sx.q(j_10) * 0x10 + 4)
                                    rdx_62 = var_188
                                
                                j_10 = j_8
                                
                                while (j_1 != 0xffffffff)
                                    j_1 = *(rdx_62 + sx.q(j_1) * 0x10 + 8)
                                    j_8 = j_1
                                    
                                    if (*(rdx_62 + sx.q(j_10) * 0x10) == i_1)
                                        j_5 = j_8
                                        j_12 = j_8
                                        j_3 = j_8
                                        goto label_1409ff2d0
                                    
                                    j_10 = j_1
                                
                                if (k_8 s> 0)
                                    int32_t* rdx_64 = r10_4
                                    uint64_t k_5 = zx.q(k_8)
                                    uint64_t k_2
                                    
                                    do
                                        int64_t rax_95 = sx.q(*rdx_64)
                                        rdx_64 = &rdx_64[1]
                                        int64_t rcx_43 = rax_95 * 3
                                        rsi_4[-2] = *(var_2b8_1 + (rcx_43 << 2)) f+ rsi_4[-2]
                                        rsi_4[-1] = *(var_2b8_1 + (rcx_43 << 2) + 4) f+ rsi_4[-1]
                                        *rsi_4 = *(var_2b8_1 + (rcx_43 << 2) + 8) f+ *rsi_4
                                        k_2 = k_5
                                        k_5 -= 1
                                    while (k_2 != 1)
                                    i_1 = i_3
                            
                            break
                        
                        j_10 = j_1
                    while (j_1 != 0xffffffff)
            
            var_368 = nullptr
            int32_t k_9 = 0
            int32_t var_35c_3 = 0
            sub_1409b3740(&var_1d8, var_1d0_1 - var_1a4_1, 0)
            
            if (var_190_1 != 0)
                void* rcx_45 = &var_1a0
                
                if (var_198_1 != 0)
                    rcx_45 = var_198_1
                
                int32_t j_11 = *(rcx_45 + ((sx.q(var_190_1 - 1) & sx.q(i_1)) << 2))
                
                if (j_11 != 0xffffffff)
                    int64_t rdx_69 = var_1d8
                    int32_t j_2
                    
                    do
                        int64_t rax_101 = sx.q(j_11) * 2
                        j_2 = *(rdx_69 + (rax_101 << 3) + 8)
                        
                        if (*(rdx_69 + (rax_101 << 3)) == i_1)
                            if (j_11 != 0xffffffff)
                                void* r10_5 = var_368
                                int32_t j_9 = j_2
                                int32_t r11_2 = var_35c_3
                                int32_t j_13 = j_2
                                int32_t j_6 = j_2
                                int32_t j_4 = j_2
                            label_1409ff480:
                                int32_t k_11 = k_9
                                k_9 += 1
                                
                                if (k_9 s> r11_2)
                                    sub_1405a4cf0(&var_368)
                                    j_9 = j_6
                                    j_13 = j_4
                                    rdx_69 = var_1d8
                                    r10_5 = var_368
                                    r11_2 = var_35c_3
                                
                                void* r9_5 = r10_5 + (sx.q(k_11) << 2)
                                
                                if (r9_5 != 0)
                                    j_9 = j_13
                                    *r9_5 = *(rdx_69 + sx.q(j_11) * 0x10 + 4)
                                    rdx_69 = var_1d8
                                
                                j_11 = j_9
                                
                                while (j_2 != 0xffffffff)
                                    j_2 = *(rdx_69 + sx.q(j_2) * 0x10 + 8)
                                    j_9 = j_2
                                    
                                    if (*(rdx_69 + sx.q(j_11) * 0x10) == i_1)
                                        j_6 = j_9
                                        j_13 = j_9
                                        j_4 = j_9
                                        goto label_1409ff480
                                    
                                    j_11 = j_2
                                
                                if (k_9 s> 0)
                                    void* r8_16 = r10_5
                                    uint64_t k_6 = zx.q(k_9)
                                    uint64_t k_3
                                    
                                    do
                                        int64_t rax_110 = sx.q(*r8_16)
                                        r8_16 += 4
                                        int64_t rdx_71 = rax_110 * 3
                                        zmm0_1.d =
                                            (*(var_2e0_1 + (rdx_71 << 2))).d f+ *(r12_4 + rsi_4 - 8)
                                        *(r12_4 + rsi_4 - 8) = zmm0_1.d
                                        zmm1 = *(var_2e0_1 + (rdx_71 << 2) + 4)
                                        zmm1[0] = zmm1[0] f+ *(r12_4 + rsi_4 - 4)
                                        *(r12_4 + rsi_4 - 4) = zmm1[0]
                                        zmm0_1.d =
                                            (*(var_2e0_1 + (rdx_71 << 2) + 8)).d f+ *(r12_4 + rsi_4)
                                        *(r12_4 + rsi_4) = zmm0_1.d
                                        zmm0_1.d = (*(rsi_4 + rax_80 - 8)).d f+
                                            *(var_2e8_1 + (rdx_71 << 2))
                                        *(rsi_4 + rax_80 - 8) = zmm0_1.d
                                        zmm1 = *(var_2e8_1 + (rdx_71 << 2) + 4)
                                        zmm1[0] = zmm1[0] f+ *(rsi_4 + rax_80 - 4)
                                        *(rsi_4 + rax_80 - 4) = zmm1[0]
                                        zmm0_1.d = (*(var_2e8_1 + (rdx_71 << 2) + 8)).d f+
                                            *(rsi_4 + rax_80)
                                        *(rsi_4 + rax_80) = zmm0_1.d
                                        k_3 = k_6
                                        k_6 -= 1
                                    while (k_3 != 1)
                                    i_1 = i_3
                                    r13_1 = 0
                                    r10_5 = var_368
                                
                                if (r10_5 != 0)
                                    sub_140a74f90(r10_5)
                            
                            break
                        
                        j_11 = j_2
                    while (j_2 != 0xffffffff)
            
            int32_t* rax_111 = var_2d0
            
            if (rax_111 != 0)
                sub_140a74f90(rax_111)
            
            i_1 += 1
            rsi_4 = &rsi_4[3]
            i_3 = i_1
        while (i_1 s< arg1[1].d)
        
        rdi_7 = var_2d8_1
        r15_3 = var_308_4
        r12_2 = var_378_1
    
    int32_t rdx_72 = 0
    int32_t rcx_49 = *(arg4 + 0xc)
    
    if (rcx_49 s< 0)
        arg4[1].d = 0
        
        if (rcx_49 != 0)
            sub_140638cc0(arg4, 0)
            rdx_72 = arg4[1].d
            rcx_49 = *(arg4 + 0xc)
    
    int32_t rax_113 = rdx_72 + i_13
    arg4[1].d = rax_113
    
    if (rax_113 s> rcx_49)
        sub_140638a00(arg4)
    
    arg5[1].d = 0
    
    if (*(arg5 + 0xc) s<= 0xffffffff)
        sub_1405a5410(arg5, 0)
    
    int32_t rax_114 = arg5[1].d + i_13
    arg5[1].d = rax_114
    
    if (rax_114 s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    if (i_7 s> 0)
        int32_t* rdx_74 = &rdi_7[1]
        void* r8_18 = r15_3 - rdi_7
        void* r9_7 = r12_2 - rdi_7
        int64_t i_2
        
        do
            zmm7 = rdx_74[-1]
            zmm6 = rdx_74[-2]
            zmm8 = *rdx_74
            zmm2.d = zmm6.d f* zmm6.d
            zmm1 = zmm8
            zmm0_1.d = zmm7.d f* zmm7.d
            zmm1[0] = zmm1[0] f* zmm8.d
            zmm2.d = zmm2.d f+ zmm0_1.d
            zmm2.d = zmm2.d f+ zmm1[0]
            uint128_t zmm4_3
            uint128_t zmm5_3
            
            if (not(zmm2.d f<= zmm14.d))
                zmm4_3.d = zmm10.d
                zmm3 = zmm2
                zmm5_3 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                zmm3[0] = zmm3[0] f* zmm4_3.d
                zmm0_1.d = zmm5_3.d f* zmm5_3.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0_1.d
                zmm2.d = zmm4_3.d f- zmm1[0]
                zmm0_1.d = zmm5_3.d f* zmm2.d
                zmm5_3.d = zmm5_3.d f+ zmm0_1.d
                zmm1 = zmm5_3
                zmm1[0] = zmm1[0] f* zmm5_3.d
                zmm3[0] = zmm3[0] f* zmm1[0]
                zmm4_3.d = zmm4_3.d f- zmm3[0]
                zmm0_1.d = zmm5_3.d f* zmm4_3.d
                zmm5_3.d = zmm5_3.d f+ zmm0_1.d
                zmm6.d = zmm6.d f* zmm5_3.d
                zmm7.d = zmm7.d f* zmm5_3.d
                zmm8.d = zmm8.d f* zmm5_3.d
                rdx_74[-2] = zmm6.d
                rdx_74[-1] = zmm7.d
                *rdx_74 = zmm8.d
            
            zmm6 = *(r8_18 + rdx_74 - 4)
            zmm8 = *(rdx_74 + r8_18 - 8)
            zmm7 = *(r8_18 + rdx_74)
            zmm2.d = zmm6.d f* zmm6.d
            zmm1 = zmm7
            zmm0_1.d = zmm8.d f* zmm8.d
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm2.d = zmm2.d f+ zmm0_1.d
            zmm2.d = zmm2.d f+ zmm1[0]
            
            if (not(zmm2.d f<= zmm14.d))
                zmm4_3.d = zmm10.d
                zmm3 = zmm2
                zmm5_3 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                zmm3[0] = zmm3[0] f* zmm4_3.d
                zmm0_1.d = zmm5_3.d f* zmm5_3.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0_1.d
                zmm2.d = zmm4_3.d f- zmm1[0]
                zmm0_1.d = zmm5_3.d f* zmm2.d
                zmm5_3.d = zmm5_3.d f+ zmm0_1.d
                zmm1 = zmm5_3
                zmm1[0] = zmm1[0] f* zmm5_3.d
                zmm3[0] = zmm3[0] f* zmm1[0]
                zmm4_3.d = zmm4_3.d f- zmm3[0]
                zmm0_1.d = zmm5_3.d f* zmm4_3.d
                zmm5_3.d = zmm5_3.d f+ zmm0_1.d
                zmm6.d = zmm6.d f* zmm5_3.d
                zmm0_1.d = zmm5_3.d f* zmm8.d
                zmm7.d = zmm7.d f* zmm5_3.d
                *(rdx_74 + r8_18 - 8) = zmm0_1.d
                *(r8_18 + rdx_74 - 4) = zmm6.d
                *(r8_18 + rdx_74) = zmm7.d
            
            int64_t* rcx_55 = *arg4 + rdx_74
            *(rcx_55 + -8 - rdi_7) = *(rdx_74 + r8_18 - 8)
            *(rcx_55 + -8 - rdi_7 + 8) = *(rdx_74 + r8_18)
            zmm4_3 = *(r8_18 + rdx_74 - 4)
            zmm5_3 = *(r8_18 + rdx_74)
            zmm3 = zmm4_3
            zmm8 = rdx_74[-2]
            zmm1 = zmm5_3
            zmm6 = rdx_74[-1]
            zmm0_1.d = zmm8.d f* *(rdx_74 + r8_18 - 8)
            zmm7 = *rdx_74
            zmm3[0] = zmm3[0] f* zmm6.d
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm3[0] = zmm3[0] f+ zmm0_1.d
            zmm3[0] = zmm3[0] f+ zmm1[0]
            zmm4_3.d = zmm4_3.d f* zmm3[0]
            zmm0_1.d = zmm3.d f* *(rdx_74 + r8_18 - 8)
            zmm6.d = zmm6.d f- zmm4_3.d
            zmm5_3.d = zmm5_3.d f* zmm3[0]
            zmm8.d = zmm8.d f- zmm0_1.d
            zmm7.d = zmm7.d f- zmm5_3.d
            rdx_74[-1] = zmm6.d
            zmm2.d = zmm6.d f* zmm6.d
            rdx_74[-2] = zmm8.d
            zmm0_1.d = zmm8.d f* zmm8.d
            zmm1 = zmm7
            zmm1[0] = zmm1[0] f* zmm7.d
            zmm2.d = zmm2.d f+ zmm0_1.d
            *rdx_74 = zmm7.d
            zmm2.d = zmm2.d f+ zmm1[0]
            
            if (not(zmm2.d f<= zmm14.d))
                zmm4_3.d = zmm10.d
                zmm3 = zmm2
                zmm5_3 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                zmm3[0] = zmm3[0] f* zmm4_3.d
                zmm0_1.d = zmm5_3.d f* zmm5_3.d
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm0_1.d
                zmm2.d = zmm4_3.d f- zmm1[0]
                zmm0_1.d = zmm5_3.d f* zmm2.d
                zmm5_3.d = zmm5_3.d f+ zmm0_1.d
                zmm1 = zmm5_3
                zmm1[0] = zmm1[0] f* zmm5_3.d
                zmm3[0] = zmm3[0] f* zmm1[0]
                zmm4_3.d = zmm4_3.d f- zmm3[0]
                zmm0_1.d = zmm5_3.d f* zmm4_3.d
                zmm5_3.d = zmm5_3.d f+ zmm0_1.d
                zmm1 = zmm5_3
                zmm0_1.d = zmm5_3.d f* zmm8.d
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm5_3.d = zmm5_3.d f* zmm7.d
                zmm8 = zmm0_1
                rdx_74[-2] = zmm0_1.d
                zmm6 = zmm1
                rdx_74[-1] = zmm1[0]
                *rdx_74 = zmm5_3.d
                zmm7 = zmm5_3
            
            zmm2 = *(r8_18 + rdx_74 - 4)
            zmm3 = *(r8_18 + rdx_74)
            zmm1 = zx.o(*(rdx_74 - 8))
            zmm0_1.d = zmm3.d f* zmm6.d
            int32_t var_350_2 = *rdx_74
            zmm6.d = zmm6.d f* *(rdx_74 + r8_18 - 8)
            uint128_t* rax_117 = *arg5
            zmm4_3.d = zmm2.d f* zmm7.d
            zmm7.d = zmm7.d f* *(rdx_74 + r8_18 - 8)
            zmm4_3.d = zmm4_3.d f- zmm0_1.d
            zmm3[0] = zmm3[0] f* zmm8.d
            zmm2.d = zmm2.d f* zmm8.d
            zmm3[0] = zmm3[0] f- zmm7.d
            zmm4_3.d = zmm4_3.d f* *(rdx_74 + r9_7 - 8)
            zmm6.d = zmm6.d f- zmm2.d
            zmm3[0] = zmm3[0] f* *(r9_7 + rdx_74 - 4)
            zmm6.d = zmm6.d f* *(r9_7 + rdx_74)
            zmm4_3.d = zmm4_3.d f+ zmm3[0]
            zmm4_3.d = zmm4_3.d f+ zmm6.d
            zmm4_3.d f- zmm9.d
            var_34c_3.b = zmm4_3.d f< zmm9.d
            rdx_74 = &rdx_74[3]
            zmm0_1.q = zmm1.q
            *(rax_117 + r13_1) = zmm0_1
            r13_1 += 0x10
            var_358.o = zmm0_1
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)
    
    if (rdi_7 != 0)
        sub_140a74f90(rdi_7)
    
    if (var_2b8_1 != 0)
        sub_140a74f90(var_2b8_1)
    
    if (var_2e8_1 != 0)
        sub_140a74f90(var_2e8_1)
    
    if (var_2e0_1 != 0)
        sub_140a74f90(var_2e0_1)
    
    sub_1405ae180(&var_188)
    result = sub_1405ae180(&var_1d8)

__security_check_cookie(rax_1 ^ &var_3a8)
return result
