// 函数: sub_14061a3a0
// 地址: 0x14061a3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int32_t r13 = 0
void* const r12 = nullptr
int64_t var_268
__builtin_memset(&var_268, 0, 0x2c)
int32_t var_234
__builtin_memset(&var_234, 0, 0x1c)
void* const var_440 = nullptr
void* var_378 = nullptr
int32_t var_23c = 0x80
int32_t var_238 = 0xffffffff
int64_t* rax_2 = sub_140611e50(*(arg1 + 0xc0))
int64_t rsi = *rax_2
int64_t rdi = rax_2[1]

if (rsi == rdi)
    goto label_14061a515

int64_t rdi_1 = rdi - rsi
int64_t rbx_2 = rdi_1 s>> 3

if (rbx_2 u<= 0x1fffffffffffffff)
    int64_t rbx_3 = rbx_2 << 3
    
    if (rbx_3 u< 0x1000)
        if (rbx_3 == 0)
            var_440 = nullptr
        else
            void* rax_4 = j_sub_140a82f30(rbx_3)
            r12 = rax_4
            var_440 = rax_4
        
        goto label_14061a506
    
    if (rbx_3 + 0x27 u> rbx_3)
        int64_t rax_3 = j_sub_140a82f30(rbx_3 + 0x27)
        
        if (rax_3 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r12 = (rax_3 + 0x27) & 0xffffffffffffffe0
        var_440 = r12
        *(r12 - 8) = rax_3
    label_14061a506:
        var_378 = rbx_3 + r12
        memmove(r12, rsi, rdi_1.d)
    label_14061a515:
        int32_t rax_6 = sub_14060f260(arg1)
        float zmm6[0x4] = 0x3f000000
        int32_t i_12 = 0
        int32_t var_428 = 0
        int32_t* var_3e8 = &i_12
        int32_t* var_3e0_1 = &var_428
        uint128_t zmm11 = _mm_cvtepi32_ps(zx.o(rax_6))
        int32_t** var_418 = &var_3e8
        int64_t var_3d8
        int64_t* var_410_1 = &var_3d8
        zmm6[0] = 0.5f f/ zmm11.d
        float var_424_1 = zmm6[0]
        void var_218
        sub_14060c1e0(&var_218, &var_418)
        int32_t i_7
        char var_474
        int64_t* var_468
        void* var_458
        int32_t var_448
        int32_t i_22
        int64_t* j_18
        int32_t var_3f8
        int32_t var_3f0
        int32_t var_3d0
        int64_t* j_6
        int128_t* var_3c0
        int32_t var_3a0
        int32_t* var_398
        uint128_t var_370
        int64_t var_338
        int128_t var_328
        int64_t var_300
        void* var_2e8
        int64_t var_2b8
        int64_t var_220
        void var_208
        int32_t var_1f0
        void var_1c8
        int64_t* result
        double zmm2[0x2]
        
        if (arg3 == 0)
            float var_3f4_1 = zmm6[0]
            var_398 = &i_22
            int32_t* var_390_2 = &var_3f8
            i_22 = 0
            var_3f8 = 0
            sub_140619e90(&var_218, 1)
            sub_14060b190(&var_218, &i_22, &var_3f8)
            void* rcx_128 = *(arg1 + 0xc0)
            int32_t i_17 = 0
            i_7 = 0
            
            if (opus_repacketizer_get_nb_frames(rcx_128) s> 0)
                void* rdi_7 = nullptr
                var_3c0 = nullptr
                int32_t rax_146
                
                do
                    int32_t var_30c_2 = 0x80
                    var_458 = nullptr
                    void* rsi_6 = nullptr
                    int32_t var_44c_2 = 0
                    int32_t r15_6 = 0
                    int32_t r13_4 = 0
                    var_338 = 0
                    int32_t i = 0
                    int32_t var_330_2 = 0
                    __builtin_memset(&var_328, 0, 0x1c)
                    int32_t var_304_2
                    __builtin_memset(&var_304_2, 0, 0x18)
                    __builtin_memset(&var_2b8, 0, 0x2c)
                    int32_t var_284_2
                    __builtin_memset(&var_284_2, 0, 0x1c)
                    int32_t var_308_3 = 0xffffffff
                    int32_t var_28c_2 = 0x80
                    int32_t var_288_2 = 0xffffffff
                    int64_t var_408_1
                    
                    do
                        __builtin_memset(&var_418, 0, 0x20)
                        var_398 = &var_474
                        int32_t*** var_390_3 = &var_418
                        var_474 = i.b
                        sub_140617790(&var_2b8, &j_6, &var_398, nullptr)
                        
                        if (var_408_1 != 0)
                            sub_140a74f90(var_408_1)
                        
                        int32_t** rcx_131 = var_418
                        
                        if (rcx_131 != 0)
                            sub_140a74f90(rcx_131)
                        
                        i += 1
                    while (i s< 0x10)
                    
                    int64_t* rax_99 = sub_14060ee10(*(var_440 + (rdi_7 << 3)))
                    int64_t* j_27 = rax_99[1]
                    void** r12_8 = *rax_99
                    j_18 = j_27
                    int64_t* var_2f8_1
                    int32_t var_2f0_1
                    
                    if (r12_8 != j_27)
                        do
                            void* rdi_8 = *r12_8
                            zmm6 = zx.o(0)
                            zmm8 = zx.o(0)
                            int32_t rsi_7 = 0
                            sub_140611820(rdi_8)
                            int32_t r8_34 = var_1f0
                            var_418.d = 0
                            var_418:4.d = 1
                            void* var_410_2 = &var_208
                            var_408_1.d = 0xffffffff
                            var_408_1 = 0
                            
                            if (r8_34 != 0)
                                sub_14059bdd0(&var_418)
                                r8_34 = var_1f0
                            
                            uint128_t zmm0_4 = var_418.o
                            zmm2 = var_408_1.o
                            double var_2d0_2 = zmm2[0]
                            var_2e8 = &var_218
                            uint128_t zmm1_2 = zmm0_4
                            uint128_t var_2e0_2
                            var_2e0_2:8.d = 0xffffffff << (r8_34.b & 0x1f)
                            zmm0_4 = var_2e8.o
                            var_2e0_2:0xc.d = r8_34
                            double temp0_6[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
                            var_370 = zmm0_4
                            uint128_t var_360_2 = zmm1_2
                            int64_t var_350_2 = temp0_6.q
                            
                            while (true)
                                int64_t rax_100 = sx.q(var_360_2:0xc.d)
                                int64_t* rdx_58 = var_370.q
                                
                                if (rax_100.d == (var_2e0_2:8.q u>> 0x20).d
                                        && var_360_2.q == &var_208 && rdx_58 == &var_218)
                                    break
                                
                                int64_t rcx_137 = rax_100 * 5
                                int64_t rax_101 = *rdx_58
                                int32_t rax_102 = *(rax_101 + (rcx_137 << 2) + 8)
                                var_468 = *(rax_101 + (rcx_137 << 2))
                                int32_t rax_103 = sub_140611e40(rdi_8)
                                int32_t rcx_139 = var_468.d
                                
                                if (rax_103 s< rcx_139)
                                    break
                                
                                rsi_7 = rcx_139
                                zmm6 = var_468:4.d
                                zmm8 = rax_102
                                var_360_2:8.d &= not.d(var_370:0xc.d)
                                sub_14059bdd0(&var_370:8)
                            
                            zmm7.d = _mm_cvtepi32_ps(zx.o(sub_140611e40(rdi_8) - rsi_7)).d f* zmm8.d
                            zmm7.d = zmm7.d f+ zmm6[0]
                            int32_t rax_108 = sub_140611e60(rdi_8)
                            
                            if (rax_108 - 8 u<= 1)
                                int16_t rsi_10 =
                                    (sub_140611810(rdi_8) << 7).w + sub_140611e70(rdi_8)
                                int32_t rax_116
                                
                                if (rax_108 == 9)
                                    rax_116 = sub_140611e80(rdi_8)
                                
                                if (rax_108 != 9 || rax_116 == 0)
                                    if (*sub_14061a1b0(&var_338, &var_428, rsi_10) != 0xffffffff)
                                        int64_t r8_42 = var_338
                                        int32_t rdx_70
                                        
                                        if (var_330_2 != var_304_2)
                                            int64_t* rcx_161 = &var_300
                                            
                                            if (var_2f8_1 != 0)
                                                rcx_161 = var_2f8_1
                                            
                                            rdx_70 = *(rcx_161
                                                + ((sx.q(var_2f0_1 - 1) & sx.q(rsi_10)) << 2))
                                        
                                        if (var_330_2 == var_304_2 || rdx_70 == 0xffffffff)
                                        label_14061bb38:
                                            rdx_70 = -1
                                        else
                                            while (true)
                                                int16_t* rcx_162 = sx.q(rdx_70) * 0x1c
                                                
                                                if (*(rcx_162 + r8_42) == rsi_10)
                                                    break
                                                
                                                rdx_70 = *(rcx_162 + r8_42 + 0x14)
                                                
                                                if (rdx_70 == 0xffffffff)
                                                    goto label_14061bb38
                                        
                                        zmm6 = *(sx.q(rdx_70) * 0x1c + r8_42 + 4)
                                        var_418.o = zmm6
                                        sub_14061c990(&var_338, rdx_70)
                                        char r8_43 = var_418:4.b
                                        zmm7.d = zmm7.d f- _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
                                        var_410_2:4.d = zmm7.d
                                        sub_14061a130(&var_2b8, &var_3f0, r8_43)
                                        int64_t rax_128 = sx.q(var_3f0)
                                        void* const rax_131
                                        
                                        if (rax_128.d == 0xffffffff)
                                            rax_131 = nullptr
                                        else
                                            rax_131 = rax_128 * 0x30 + var_2b8
                                        
                                        int64_t rdi_10 = sx.q(*(rax_131 + 0x10))
                                        int32_t rax_132 = (rdi_10 + 1).d
                                        *(rax_131 + 0x10) = rax_132
                                        
                                        if (rax_132 s> *(rax_131 + 0x14))
                                            sub_140610660(rax_131 + 8)
                                        
                                        *(*(rax_131 + 8) + rdi_10 * 0x10) = var_418.o
                                    
                                    i_17 = i_7
                                else
                                    i_17 = i_7
                                    var_3e8.d = i_17
                                    var_3e8:7.b = 0
                                    var_3e8:4.b = sub_140611810(rdi_8)
                                    var_3e8:5.b = sub_140611e70(rdi_8)
                                    var_3e0_1.d = zmm7.d
                                    var_3e8:6.b = sub_140611e80(rdi_8)
                                    var_3e0_1:4.d = 0
                                    var_474.w = rsi_10
                                    sub_140617590(&var_338, &var_474, &var_3e8)
                            else
                                if (rax_108 == 0x51)
                                    float zmm0_5 = sub_140611800(rdi_8) f* zmm11.d
                                    var_3f8 = zmm7.d
                                    zmm1_2.d = 60f / zmm0_5
                                    int32_t var_3f4_2 = zmm1_2.d
                                    i_22 = sub_140611e40(rdi_8)
                                    sub_14060b190(&var_218, &i_22, &var_3f8)
                                else if (rax_108 - 1 u<= 6)
                                    int128_t* rax_112 = sub_140611e20(rdi_8, &var_2e8)
                                    
                                    if (*(rax_112 + 0x18) u>= 0x10)
                                        rax_112 = *rax_112
                                    
                                    int16_t* rdi_9 = *(sub_14060c4d0(&var_1c8, rax_112) + 0x108)
                                    
                                    if (var_458 != rdi_9)
                                        int32_t rbx_20
                                        
                                        if (rdi_9 == 0 || *rdi_9 == 0)
                                            rbx_20 = 0
                                        else
                                            int64_t rbx_19 = -1
                                            
                                            do
                                                rbx_19 += 1
                                            while (rdi_9[rbx_19] != 0)
                                            
                                            rbx_20 = rbx_19.d + 1
                                        
                                        int32_t rdx_62 = 0
                                        int32_t var_450_2 = 0
                                        
                                        if (r13_4 != rbx_20)
                                            sub_1405947f0(&var_458, rbx_20)
                                            rdx_62 = var_450_2
                                            r13_4 = var_44c_2
                                        
                                        r15_6 = rbx_20 + rdx_62
                                        
                                        if (r15_6 s> r13_4)
                                            sub_140594770(&var_458)
                                            r13_4 = var_44c_2
                                        
                                        if (rbx_20 != 0)
                                            memcpy(var_458, rdi_9, rbx_20 * 2)
                                    
                                    int64_t var_c8
                                    
                                    if (var_c8 != 0)
                                        sub_140a74f90(var_c8)
                                    
                                    if (var_2d0_2 u>= 0x10)
                                        std::allocator<char>::deallocate(&var_2e8, var_2e8, 
                                            var_2d0_2 i+ 1)
                                
                                i_17 = i_7
                            
                            r12_8 = &r12_8[1]
                        while (r12_8 != j_18)
                        
                        rsi_6 = var_458
                    
                    for (int32_t i_1 = 0; i_1 s< 0x10; i_1 += 1)
                        sub_14061a130(&var_2b8, &i_12, i_1.b)
                        int64_t i_19 = sx.q(i_12)
                        void* const rax_136
                        
                        if (i_19.d == 0xffffffff)
                            rax_136 = nullptr
                        else
                            rax_136 = i_19 * 0x30 + var_2b8
                        
                        if (*(rax_136 + 0x10) s> 0)
                            sub_14061a130(&var_2b8, &var_448, i_1.b)
                            int64_t rax_137 = sx.q(var_448)
                            void* const rax_140
                            
                            if (rax_137.d == 0xffffffff)
                                rax_140 = nullptr
                            else
                                rax_140 = rax_137 * 0x30 + var_2b8
                            
                            if (rax_140 + 0x18 != &var_458)
                                int32_t r8_46 = *(rax_140 + 0x24)
                                *(rax_140 + 0x20) = r15_6
                                
                                if (r15_6 != 0 || r8_46 != 0)
                                    sub_1405a4c70(rax_140 + 0x18, r15_6, r8_46)
                                    memcpy(*(rax_140 + 0x18), rsi_6, r15_6 * 2)
                                else
                                    *(rax_140 + 0x24) = 0
                            
                            sub_14061a130(&var_2b8, &var_3a0, i_1.b)
                            int64_t rax_141 = sx.q(var_3a0)
                            void* const r8_52
                            
                            if (rax_141.d == 0xffffffff)
                                r8_52 = nullptr
                            else
                                r8_52 = rax_141 * 0x30 + var_2b8
                            
                            var_3d0 = (i_17 << 4) + i_1
                            sub_1406176f0(&var_268, &var_3d0, r8_52 + 8)
                    
                    int32_t var_270 = 0
                    int64_t var_278_1
                    
                    if (var_278_1 != 0)
                        sub_140a74f90(var_278_1)
                    
                    sub_140618590(&var_2b8)
                    var_2f0_1 = 0
                    
                    if (var_2f8_1 != 0)
                        sub_140a74f90(var_2f8_1)
                    
                    var_330_2 = 0
                    int32_t var_308_4 = 0xffffffff
                    int32_t var_304_3 = 0
                    sub_14059a8e0(&var_328, 0)
                    int64_t var_318_1
                    
                    if (var_318_1 != 0)
                        sub_140a74f90(var_318_1)
                    
                    int64_t rcx_181 = var_338
                    
                    if (rcx_181 != 0)
                        sub_140a74f90(rcx_181)
                    
                    if (rsi_6 != 0)
                        sub_140a74f90(rsi_6)
                    
                    i_17 += 1
                    rdi_7 = var_3c0 + 1
                    i_7 = i_17
                    var_3c0 = rdi_7
                    rax_146 = opus_repacketizer_get_nb_frames(*(arg1 + 0xc0))
                while (i_17 s< rax_146)
            
            result = arg2
            sub_140618400(result, &var_268)
            sub_140618510(&var_218)
            void* const rax_147 = var_440
            
            if (rax_147 == 0)
                goto label_14061be23
            
            if (((var_378 - rax_147) & 0xfffffffffffffff8) u< 0x1000)
                goto label_14061be1e
            
            void* rcx_186 = *(rax_147 - 8)
            
            if (rax_147 - rcx_186 - 8 u<= 0x1f)
                rax_147 = rcx_186
            label_14061be1e:
                j_sub_140a74f90(rax_147)
            label_14061be23:
                var_220.d = 0
            label_14061be34:
                int64_t var_228
                
                if (var_228 != 0)
                    sub_140a74f90(var_228)
                
                sub_140619f90(&var_268, 0)
                int64_t var_248
                
                if (var_248 != 0)
                    sub_140a74f90(var_248)
                
                int64_t rcx_191 = var_268
                
                if (rcx_191 != 0)
                    sub_140a74f90(rcx_191)
                
                __security_check_cookie(rax_1 ^ &var_498)
                return result
            
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_6 = *(arg1 + 0xc0)
        var_338 = 0
        int32_t var_330_1 = 0
        __builtin_memset(&var_328, 0, 0x1c)
        int32_t var_304
        __builtin_memset(&var_304, 0, 0x18)
        var_448 = 0
        int32_t var_30c_1 = 0x80
        int32_t var_308_1 = 0xffffffff
        int32_t rax_7 = opus_repacketizer_get_nb_frames(rcx_6)
        uint64_t r14_1 = zx.q(rax_7)
        void* r15_1 = nullptr
        var_428.q = 0
        var_3f8.q = 0
        
        if (rax_7 != 0)
            uint64_t count = r14_1 << 2
            
            if (count u>= 0x1000)
                if (count + 0x27 u<= count)
                    stdext::threads::_Throw_lock_error()
                    noreturn
                
                int64_t rax_8 = j_sub_140a82f30(count + 0x27)
                
                if (rax_8 == 0)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                r15_1 = (rax_8 + 0x27) & 0xffffffffffffffe0
                var_428.q = r15_1
                *(r15_1 - 8) = rax_8
            else if (count == 0)
                var_428.q = 0
            else
                void* rax_9 = j_sub_140a82f30(count)
                r15_1 = rax_9
                var_428.q = rax_9
            
            var_3f8.q = count + r15_1
            memset(r15_1, 0, count)
        
        var_2b8 = 0
        int32_t var_2b0_1 = 0
        int32_t var_284_1 = 0
        int64_t* var_278 = nullptr
        int32_t var_270_1 = 0
        var_458 = nullptr
        i_12 = 0
        int32_t var_44c_1 = 0
        int32_t i_20 = r14_1.d << 4
        int32_t var_28c_1 = 0x80
        int32_t var_288_1 = 0xffffffff
        i_22 = i_20
        int128_t var_2a8
        __builtin_memset(&var_2a8, 0, 0x1c)
        
        if (i_20 s> 0)
            sub_14061cc60(&var_458)
            memset(var_458, 0, sx.q(i_20) << 5)
            i_12 = i_20
        else if (i_20 s< 0)
            int32_t i_10 = neg.d(i_20)
            int64_t rbx_5 = sx.q(i_20) << 5
            int32_t i_2
            
            do
                int64_t rcx_12 = *(rbx_5 + 0x10)
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                int64_t rcx_13 = *rbx_5
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                rbx_5 += 0x20
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
            sub_14061cce0(&var_458)
            i_12 = i_20
        
        int64_t i_4 = 0
        int64_t* j_23 = j_sub_140a82f30(0x20)
        *j_23 = j_23
        j_23[1] = j_23
        j_23[2] = j_23
        j_23[3].w = 0x101
        j_18 = j_23
        int64_t var_460_1 = 0
        int64_t* rax_12 = j_sub_140a82f30(0x20)
        i_7 = 0
        int32_t i_3 = 0
        *rax_12 = rax_12
        rax_12[1] = rax_12
        rax_12[2] = rax_12
        rax_12[3].w = 0x101
        var_468 = rax_12
        
        if (r14_1.d != 0)
            int32_t i_9 = 0
            
            do
                int64_t* rax_13 = sub_140618220(&j_18, &var_418, j_18, &i_7)
                zmm6 = *rax_13
                var_3d8 = rax_13[2]
                
                if (var_3d8.b == 0)
                    if (i_4 == 0x7ffffffffffffff)
                        sub_14061d880()
                        noreturn
                    
                    int64_t* j_28 = j_18
                    int64_t** rax_14 = j_sub_140a82f30(0x20)
                    var_398.o = zmm6
                    *(rax_14 + 0x1c) = i_9
                    *rax_14 = j_28
                    rax_14[1] = j_28
                    rax_14[2] = j_28
                    rax_14[3].w = 0
                    sub_14061d540(&j_18, &var_398, rax_14)
                
                i_3 += 1
                i_7 = i_3
                i_9 = i_3
            while (i_3 u< r14_1.d)
        
        sub_14061d8a0(&var_468)
        int64_t* rbx_6 = var_468
        int64_t* r14_2 = rbx_6
        int64_t* rsi_2 = j_18[1]
        
        if (*(rsi_2 + 0x19) == 0)
            int64_t** rax_16 = j_sub_140a82f30(0x20)
            char r9_2 = var_474
            *(rax_16 + 0x1c) = *(rsi_2 + 0x1c)
            *rax_16 = rbx_6
            rax_16[2] = rbx_6
            rax_16[3].w = 0
            rax_16[1] = rbx_6
            rax_16[3].b = rsi_2[3].b
            
            if (*(rbx_6 + 0x19) != 0)
                r14_2 = rax_16
            
            int64_t* rax_19 = sub_140618100(&var_468, *rsi_2, rax_16, r9_2)
            char r9_3 = var_474
            *rax_16 = rax_19
            rax_16[2] = sub_140618100(&var_468, rsi_2[2], rax_16, r9_3)
            rbx_6 = var_468
        
        rbx_6[1] = r14_2
        int64_t* r8_8 = var_468
        int64_t i_8 = i_4
        int64_t* rdx_7 = r8_8[1]
        
        if (*(rdx_7 + 0x19) != 0)
            *r8_8 = r8_8
            int64_t* rax_24 = var_468
            rax_24[2] = rax_24
        else
            int64_t* rcx_20 = *rdx_7
            
            if (*(rcx_20 + 0x19) == 0)
                int64_t* rax_22
                
                do
                    rax_22 = *rcx_20
                    rdx_7 = rcx_20
                    rcx_20 = rax_22
                while (*(rax_22 + 0x19) == 0)
            
            *r8_8 = rdx_7
            int64_t* rdx_8 = var_468
            void* rcx_21 = rdx_8[1]
            void* rax_23 = *(rcx_21 + 0x10)
            
            while (*(rax_23 + 0x19) == 0)
                rcx_21 = rax_23
                rax_23 = *(rax_23 + 0x10)
            
            rdx_8[2] = rcx_21
        
        int64_t* var_2f8
        int32_t var_2f0
        
        if (i_4 u> 0)
            char rsi_3 = var_474
            
            do
                int64_t* j_5 = *var_468
                j_6 = j_5
                
                if (*(j_5 + 0x19) == 0)
                    int64_t rsi_4 = var_428.q
                    
                    do
                        uint64_t rcx_22 = zx.q(*(j_5 + 0x1c))
                        i_7 = rcx_22.d
                        
                        if (r13 s<=
                                sub_140611e40(*(*(sub_14060ee10(*(r12 + (rcx_22 << 3))) + 8) - 8)))
                            int64_t* rax_29 = sub_14060ee10(*(r12 + (zx.q(i_7) << 3)))
                            uint64_t i_15 = zx.q(i_7)
                            
                            if ((rax_29[1] - *rax_29) s>> 3 u> zx.q(*(rsi_4 + (i_15 << 2))))
                                int32_t rdi_5 = var_448
                                int64_t* rax_68
                                
                                do
                                    if (rdi_5 s< sub_140611e40(*(
                                            *sub_14060ee10(*(r12 + (i_15 << 3)))
                                            + (zx.q(*(rsi_4 + (zx.q(i_7) << 2))) << 3))))
                                        break
                                    
                                    int64_t* rax_34 = sub_14060ee10(*(r12 + (zx.q(i_7) << 3)))
                                    uint64_t i_13 = zx.q(i_7)
                                    zmm6 = zx.o(0)
                                    zmm7 = zx.o(0)
                                    int32_t r14_3 = 0
                                    uint64_t rdx_16 = zx.q(*(rsi_4 + (i_13 << 2)))
                                    *(rsi_4 + (i_13 << 2)) = (rdx_16 + 1).d
                                    void* r12_2 = *(*rax_34 + (rdx_16 << 3))
                                    sub_140611820(r12_2)
                                    int32_t r8_12 = var_1f0
                                    var_3c0.d = 0
                                    var_3c0:4.d = 1
                                    void* var_3b8_1 = &var_208
                                    int32_t var_3b0_1 = 0xffffffff
                                    int64_t var_3ac_1 = 0
                                    
                                    if (r8_12 != 0)
                                        sub_14059bdd0(&var_3c0)
                                        r8_12 = var_1f0
                                    
                                    uint128_t zmm0_2 = var_3c0.o
                                    zmm2 = var_3b0_1.o
                                    double var_2d0_1 = zmm2[0]
                                    var_2e8 = &var_218
                                    uint128_t zmm1_1 = zmm0_2
                                    uint128_t var_2e0_1
                                    var_2e0_1:8.d = 0xffffffff << (r8_12.b & 0x1f)
                                    zmm0_2 = var_2e8.o
                                    var_2e0_1:0xc.d = r8_12
                                    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
                                    var_370 = zmm0_2
                                    uint128_t var_360_1 = zmm1_1
                                    int64_t var_350_1 = temp0_3.q
                                    
                                    while (true)
                                        int64_t rax_37 = sx.q(var_360_1:0xc.d)
                                        int64_t* rdx_18 = var_370.q
                                        
                                        if (rax_37.d == (var_2e0_1:8.q u>> 0x20).d
                                                && var_360_1.q == &var_208 && rdx_18 == &var_218)
                                            break
                                        
                                        int64_t rcx_42 = rax_37 * 5
                                        int64_t rax_38 = *rdx_18
                                        int32_t rax_39 = *(rax_38 + (rcx_42 << 2) + 8)
                                        uint64_t var_388_1 = *(rax_38 + (rcx_42 << 2))
                                        int32_t rcx_44 = var_388_1.d
                                        
                                        if (sub_140611e40(r12_2) s< rcx_44)
                                            break
                                        
                                        r14_3 = rcx_44
                                        zmm6 = var_388_1:4.d
                                        zmm7 = rax_39
                                        var_360_1:8.d &= not.d(var_370:0xc.d)
                                        sub_14059bdd0(&var_370:8)
                                    
                                    zmm8.d = _mm_cvtepi32_ps(zx.o(sub_140611e40(r12_2) - r14_3)).d
                                        f* zmm7.d
                                    zmm8.d = zmm8.d f+ zmm6[0]
                                    int32_t rax_45 = sub_140611e60(r12_2)
                                    
                                    if (rax_45 - 8 u<= 1)
                                        char rax_59 = sub_140611e70(r12_2)
                                        int32_t j_11
                                        int32_t j
                                        uint64_t r15_4
                                        
                                        if (var_330_1 != var_304)
                                            int64_t* rdx_32 = &var_300
                                            r15_4 = zx.q(rax_59)
                                            
                                            if (var_2f8 != 0)
                                                rdx_32 = var_2f8
                                            
                                            j = *(rdx_32 + ((sx.q(var_2f0 - 1) & r15_4) << 2))
                                            j_11 = j
                                        
                                        if (var_330_1 == var_304 || j == 0xffffffff)
                                        label_14061b07b:
                                            r15_4 = zx.q(rax_59)
                                        label_14061b07f:
                                            
                                            if (rax_45 == 9)
                                            label_14061b088:
                                                
                                                if (sub_140611e80(r12_2) != 0)
                                                    var_3e8.d = i_7
                                                    var_3e8:7.b = 0
                                                    var_3e8:4.b = sub_140611810(r12_2)
                                                    var_3e8:5.b = sub_140611e70(r12_2)
                                                    var_3e0_1.d = zmm8.d
                                                    var_3e8:6.b = sub_140611e80(r12_2)
                                                    var_3e0_1:4.d = 0
                                                    var_474 = r15_4.b
                                                    sub_140617430(&var_338, &var_474, &var_3e8)
                                        else
                                            int64_t r8_21 = var_338
                                            
                                            while (true)
                                                char* r9_4 = sx.q(j_11) * 0x1c
                                                
                                                if (r9_4[r8_21] == r15_4.b)
                                                    break
                                                
                                                j_11 = *(r9_4 + r8_21 + 0x14)
                                                
                                                if (j_11 == 0xffffffff)
                                                    goto label_14061b07b
                                            
                                            if (j_11 == 0xffffffff)
                                                goto label_14061b07f
                                            
                                            do
                                                char* rcx_77 = sx.q(j) * 0x1c
                                                
                                                if (rcx_77[r8_21] == r15_4.b)
                                                    break
                                                
                                                j = *(rcx_77 + r8_21 + 0x14)
                                            while (j != 0xffffffff)
                                            
                                            zmm6 = *(sx.q(j) * 0x1c + r8_21 + 4)
                                            var_3c0.o = zmm6
                                            sub_14061c990(&var_338, j)
                                            zmm0_2.d = zmm8.d f- _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
                                            var_3b8_1:4.d = zmm0_2.d
                                            
                                            if (zmm0_2.d f> 0f || rax_45 == 8)
                                            label_14061b1ac:
                                                void* rbx_13 = (sx.q((i_7 << 4) + zx.d(var_3c0:4.b))
                                                    << 5) + var_458
                                                int64_t r14_6 = sx.q(*(rbx_13 + 8))
                                                int32_t rax_74 = (r14_6 + 1).d
                                                *(rbx_13 + 8) = rax_74
                                                
                                                if (rax_74 s> *(rbx_13 + 0xc))
                                                    sub_140610660(rbx_13)
                                                
                                                *(*rbx_13 + r14_6 * 0x10) = var_3c0.o
                                                goto label_14061b07f
                                            
                                            if (rax_45 == 9)
                                                if (sub_140611e80(r12_2) != 0)
                                                    goto label_14061b088
                                                
                                                goto label_14061b1ac
                                    else if (rax_45 == 0x51)
                                        float zmm0_3 = sub_140611800(r12_2) f* zmm11.d
                                        var_3a0 = zmm8.d
                                        zmm1_1.d = 60f / zmm0_3
                                        int32_t var_39c_1 = zmm1_1.d
                                        var_3f0 = sub_140611e40(r12_2)
                                        sub_14060b190(&var_218, &var_3f0, &var_3a0)
                                    else if (rax_45 - 1 u<= 6)
                                        int128_t* rax_49 = sub_140611e20(r12_2, &var_2e8)
                                        int128_t* r15_3 = rax_49
                                        
                                        if (*(rax_49 + 0x18) u>= 0x10)
                                            r15_3 = *rax_49
                                        
                                        int128_t* var_c8_1 = nullptr
                                        int128_t* rcx_52 = nullptr
                                        int128_t* rbx_10
                                        
                                        if (r15_3 == 0)
                                            rbx_10 = r15_3
                                            int32_t var_b8_2 = r15_3.d
                                            int128_t* var_c0_2 = rbx_10
                                        else
                                            int64_t r12_3 = -1
                                            
                                            do
                                                r12_3 += 1
                                            while (*(r15_3 + r12_3) != 0)
                                            
                                            int32_t rbx_9 = 0
                                            void* r13_3 = sx.q(r12_3.d) + r15_3
                                            int128_t* rax_50 = r15_3
                                            var_3c0 = rax_50
                                            int32_t j_1 = 0x7fffffff
                                            
                                            if (r15_3 u< r13_3)
                                                while (j_1 s> 0)
                                                    if (sub_14060e800(&var_3c0, r13_3.d - rax_50.d)
                                                            - 0x10000 u> 0xfffff || j_1 s< 2)
                                                        rbx_9 += 1
                                                        j_1 -= 1
                                                    else
                                                        rbx_9 += 2
                                                        j_1 -= 2
                                                    
                                                    rax_50 = var_3c0
                                                    
                                                    if (rax_50 u>= r13_3)
                                                        break
                                                
                                                rcx_52 = var_c8_1
                                            
                                            int32_t j_2 = rbx_9 + 1
                                            int32_t var_b8_1 = rbx_9
                                            
                                            if (j_2 u> 0x80 && j_2 != 0)
                                                int128_t* rax_53 =
                                                    sub_140a84c80(0, sx.q(j_2) * 2, 0)
                                                rcx_52 = rax_53
                                                var_c8_1 = rax_53
                                            
                                            var_3c0 = r15_3
                                            rbx_10 = &var_1c8
                                            
                                            if (rcx_52 != 0)
                                                rbx_10 = rcx_52
                                            
                                            void* r12_5 = sx.q((r12_3 + 1).d) + r15_3
                                            int128_t* var_c0_1 = rbx_10
                                            
                                            if (r15_3 u< r12_5)
                                                while (j_2 s> 0)
                                                    int32_t rax_55 =
                                                        sub_14060e800(&var_3c0, r12_5.d - r15_3.d)
                                                    
                                                    if (rax_55 - 0x10000 u> 0xfffff)
                                                        if (rax_55 u> 0x10ffff)
                                                            rax_55 = 0x3f
                                                        
                                                        *rbx_10 = rax_55.w
                                                        j_2 -= 1
                                                    else if (j_2 s< 2)
                                                        *rbx_10 = 0x3f.w
                                                        j_2 -= 1
                                                    else
                                                        *rbx_10 =
                                                            ((rax_55 - 0x10000) u>> 0xa).w - 0x2800
                                                        int32_t rcx_55
                                                        rcx_55.w = (rax_55 - 0x10000).w & 0x3ff
                                                        rbx_10 += 2
                                                        rcx_55.w -= 0x2400
                                                        j_2 -= 2
                                                        *rbx_10 = rcx_55.w
                                                    
                                                    r15_3 = var_3c0
                                                    rbx_10 += 2
                                                    
                                                    if (r15_3 u>= r12_5)
                                                        break
                                                
                                                rbx_10 = var_c0_1
                                            
                                            r15_3 = nullptr
                                        
                                        var_418 = r15_3
                                        int32_t rdx_27 = r15_3.d
                                        var_410_1.d = rdx_27
                                        int32_t rcx_56 = r15_3.d
                                        var_410_1:4.d = rcx_56
                                        
                                        if (rbx_10 != 0 && *rbx_10 != 0)
                                            int64_t r14_4 = -1
                                            
                                            do
                                                r14_4 += 1
                                            while (*(rbx_10 + (r14_4 << 1)) != 0)
                                            
                                            if (r14_4.d + 1 s> 0)
                                                sub_1405947f0(&var_418, r14_4.d + 1)
                                                rcx_56 = var_410_1:4.d
                                                rdx_27 = var_410_1.d
                                            
                                            int32_t rax_58 = r14_4.d + 1 + rdx_27
                                            var_410_1.d = rax_58
                                            
                                            if (rax_58 s> rcx_56)
                                                sub_140594770(&var_418)
                                            
                                            UnDecorator::getReferenceType(var_418, rbx_10, 
                                                (r14_4.d + 1) * 2)
                                        
                                        var_398 = &i_7
                                        int32_t*** var_390_1 = &var_418
                                        sub_140617930(&var_2b8, &var_3d0, &var_398, nullptr)
                                        int32_t** rcx_61 = var_418
                                        
                                        if (rcx_61 != 0)
                                            sub_140a74f90(rcx_61)
                                        
                                        if (var_c8_1 != 0)
                                            sub_140a74f90(var_c8_1)
                                        
                                        if (var_2d0_1 u>= 0x10)
                                            std::allocator<char>::deallocate(&var_2e8, var_2e8, 
                                                var_2d0_1 i+ 1)
                                    
                                    r12 = var_440
                                    rax_68 = sub_14060ee10(*(r12 + (zx.q(i_7) << 3)))
                                    i_15 = zx.q(i_7)
                                while ((rax_68[1] - *rax_68) s>> 3 u> zx.q(*(rsi_4 + (i_15 << 2))))
                                j_5 = j_6
                                r13 = var_448
                        else
                            int64_t* j_17 = j_18
                            void** j_22 = j_17[1]
                            int32_t i_14 = i_7
                            int64_t* j_7 = j_22
                            int64_t* j_3 = j_17
                            int64_t* j_21 = j_17
                            
                            if (*(j_22 + 0x19) == 0)
                                do
                                    int32_t rcx_26 = *(j_7 + 0x1c)
                                    
                                    if (rcx_26 u>= i_14)
                                        if (*(j_21 + 0x19) != 0 && i_14 u< rcx_26)
                                            j_21 = j_7
                                        
                                        j_3 = j_7
                                        j_7 = *j_7
                                    else
                                        j_7 = j_7[2]
                                while (*(j_7 + 0x19) == 0)
                            
                            int64_t* j_24 = j_21
                            
                            if (*(j_21 + 0x19) != 0)
                                j_24 = &j_17[1]
                            
                            int64_t* j_25 = *j_24
                            
                            while (*(j_25 + 0x19) == 0)
                                if (i_14 u>= *(j_25 + 0x1c))
                                    j_25 = j_25[2]
                                else
                                    j_21 = j_25
                                    j_25 = *j_25
                            
                            if (j_3 == *j_17 && *(j_21 + 0x19) != 0)
                                while (*(j_22 + 0x19) == 0)
                                    sub_1406181c0(&j_18, &j_18, j_22[2])
                                    void** j_26 = j_22
                                    j_22 = *j_22
                                    j_sub_140a74f90(j_26)
                                
                                j_17[1] = j_17
                                *j_17 = j_17
                                j_17[2] = j_17
                                i_4 = 0
                            else
                                while (j_3 != j_21)
                                    int64_t** j_16 = j_3[2]
                                    int64_t* j_15 = j_3
                                    
                                    if (*(j_16 + 0x19) == 0)
                                        int64_t* j_13 = *j_16
                                        j_3 = j_16
                                        
                                        if (*(j_13 + 0x19) == 0)
                                            int64_t* j_19
                                            
                                            do
                                                j_19 = *j_13
                                                j_3 = j_13
                                                j_13 = j_19
                                            while (*(j_19 + 0x19) == 0)
                                        
                                        int64_t* rcx_28 = *j_16
                                        
                                        if (*(rcx_28 + 0x19) == 0)
                                            int64_t* rax_27
                                            
                                            do
                                                rax_27 = *rcx_28
                                                rcx_28 = rax_27
                                            while (*(rax_27 + 0x19) == 0)
                                    else
                                        int64_t* j_10 = j_3[1]
                                        
                                        if (*(j_10 + 0x19) == 0)
                                            while (j_3 == j_10[2])
                                                j_3 = j_10
                                                j_10 = j_10[1]
                                                
                                                if (*(j_10 + 0x19) != 0)
                                                    break
                                        
                                        int64_t* j_12 = j_15[1]
                                        j_3 = j_10
                                        
                                        if (*(j_12 + 0x19) == 0)
                                            int64_t* j_4 = j_15
                                            
                                            while (j_4 == j_12[2])
                                                j_4 = j_12
                                                j_12 = j_12[1]
                                                
                                                if (*(j_12 + 0x19) != 0)
                                                    break
                                    
                                    j_sub_140a74f90(sub_14061d1a0(&j_18, j_15))
                            
                            r12 = var_440
                        
                        int64_t* j_8 = j_5[2]
                        
                        if (*(j_8 + 0x19) == 0)
                            int64_t* j_14 = *j_8
                            j_5 = j_8
                            j_6 = j_8
                            
                            if (*(j_14 + 0x19) == 0)
                                int64_t* j_20
                                
                                do
                                    j_20 = *j_14
                                    j_5 = j_14
                                    j_6 = j_14
                                    j_14 = j_20
                                while (*(j_20 + 0x19) == 0)
                        else
                            int64_t* j_9 = j_5[1]
                            
                            if (*(j_9 + 0x19) == 0)
                                while (j_5 == j_9[2])
                                    j_5 = j_9
                                    j_9 = j_9[1]
                                    
                                    if (*(j_9 + 0x19) != 0)
                                        break
                            
                            j_5 = j_9
                            j_6 = j_9
                    while (*(j_5 + 0x19) == 0)
                    
                    rsi_3 = var_474
                
                if (i_8 != i_4)
                    sub_14061d8a0(&var_468)
                    var_468[1] = sub_140618100(&var_468, j_18[1], var_468, rsi_3)
                    int64_t* r8_24 = var_468
                    i_8 = i_4
                    int64_t* rdx_37 = r8_24[1]
                    
                    if (*(rdx_37 + 0x19) != 0)
                        *r8_24 = r8_24
                        int64_t* rax_82 = var_468
                        rax_82[2] = rax_82
                    else
                        int64_t* rcx_90 = *rdx_37
                        
                        if (*(rcx_90 + 0x19) == 0)
                            int64_t* rax_80
                            
                            do
                                rax_80 = *rcx_90
                                rdx_37 = rcx_90
                                rcx_90 = rax_80
                            while (*(rax_80 + 0x19) == 0)
                        
                        *r8_24 = rdx_37
                        int64_t* rdx_38 = var_468
                        void* rcx_91 = rdx_38[1]
                        void* rax_81 = *(rcx_91 + 0x10)
                        
                        while (*(rax_81 + 0x19) == 0)
                            rcx_91 = rax_81
                            rax_81 = *(rax_81 + 0x10)
                        
                        rdx_38[2] = rcx_91
                
                r13 += 1
                var_448 = r13
            while (i_4 u> 0)
            
            r15_1 = var_428.q
        
        int32_t i_23 = i_22
        void* r14_7 = var_458
        int32_t i_16 = i_23 - 1
        i_7 = i_16
        
        if (i_23 - 1 s>= 0)
            int32_t i_18 = i_16
            int32_t i_21
            
            do
                if (*((sx.q(i_18) << 5) + r14_7 + 8) s> 0)
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(i_18)
                    int64_t rdx_41 = sx.q((temp5_1 + (temp4_1 & 0xf)) s>> 4)
                    
                    if (var_2b0_1 != var_284_1)
                        int64_t var_280
                        int64_t* r10_2 = &var_280
                        int64_t r11_1 = sx.q(var_270_1 - 1)
                        
                        if (var_278 != 0)
                            r10_2 = var_278
                        
                        int32_t i_5 = *(r10_2 + ((rdx_41 & r11_1) << 2))
                        
                        if (i_5 != 0xffffffff)
                            int64_t r8_25 = var_2b8
                            
                            do
                                int32_t* rcx_98 = sx.q(i_5) << 5
                                
                                if (*(rcx_98 + r8_25) == rdx_41.d)
                                    int32_t temp7_1
                                    int32_t temp8_1
                                    temp7_1:temp8_1 = sx.q(i_16)
                                    int64_t rdx_44 = sx.q((temp8_1 + (temp7_1 & 0xf)) s>> 4)
                                    int32_t rax_93 = *(r10_2 + ((rdx_44 & r11_1) << 2))
                                    void* rcx_103
                                    
                                    if (rax_93 == 0xffffffff)
                                    label_14061b3d7:
                                        rcx_103 = nullptr
                                    else
                                        while (true)
                                            int32_t* rcx_102 = sx.q(rax_93) << 5
                                            
                                            if (*(rcx_102 + r8_25) == rdx_44.d)
                                                rcx_103 = rcx_102 + r8_25
                                                break
                                            
                                            rax_93 = *(rcx_102 + r8_25 + 0x18)
                                            
                                            if (rax_93 == 0xffffffff)
                                                goto label_14061b3d7
                                    
                                    void* rbx_15 = r14_7 + 0x10 + (sx.q(i_16) << 5)
                                    
                                    if (rbx_15 != rcx_103 + 8)
                                        int32_t rdi_6 = *(rcx_103 + 0x10)
                                        int64_t rsi_5 = *(rcx_103 + 8)
                                        int32_t r8_26 = *(rbx_15 + 0xc)
                                        *(rbx_15 + 8) = rdi_6
                                        
                                        if (rdi_6 != 0 || r8_26 != 0)
                                            sub_1405a4c70(rbx_15, rdi_6, r8_26)
                                            memcpy(*rbx_15, rsi_5, rdi_6 * 2)
                                        else
                                            *(rbx_15 + 0xc) = rdi_6
                                        
                                        i_16 = i_7
                                    
                                    break
                                
                                i_5 = *(rcx_98 + r8_25 + 0x18)
                            while (i_5 != 0xffffffff)
                    
                    sub_1406176f0(&var_268, &i_7, (sx.q(i_16) << 5) + r14_7)
                    i_16 = i_7
                
                i_21 = i_16
                i_16 -= 1
                i_7 = i_16
                i_18 = i_16
            while (i_21 - 1 s>= 0)
        
        result = arg2
        sub_140618400(result, &var_268)
        sub_1406188e0(&var_468)
        sub_1406188e0(&j_18)
        int32_t i_11 = i_12
        void* rbx_16 = r14_7
        
        if (i_11 != 0)
            int32_t i_6
            
            do
                int64_t rcx_111 = *(rbx_16 + 0x10)
                
                if (rcx_111 != 0)
                    sub_140a74f90(rcx_111)
                
                int64_t rcx_112 = *rbx_16
                
                if (rcx_112 != 0)
                    sub_140a74f90(rcx_112)
                
                rbx_16 += 0x20
                i_6 = i_11
                i_11 -= 1
            while (i_6 != 1)
        
        if (r14_7 != 0)
            sub_140a74f90(r14_7)
        
        int32_t var_270_2 = 0
        
        if (var_278 != 0)
            sub_140a74f90(var_278)
        
        sub_140618750(&var_2b8)
        
        if (r15_1 != 0)
            if (((var_3f8.q - r15_1) & 0xfffffffffffffffc) u>= 0x1000)
                void* rcx_116 = *(r15_1 - 8)
                
                if (r15_1 - rcx_116 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                r15_1 = rcx_116
            
            j_sub_140a74f90(r15_1)
        
        var_2f0 = 0
        
        if (var_2f8 != 0)
            sub_140a74f90(var_2f8)
        
        var_330_1 = 0
        int32_t var_308_2 = 0xffffffff
        int32_t var_304_1 = 0
        sub_14059a8e0(&var_328, 0)
        int64_t var_318
        
        if (var_318 != 0)
            sub_140a74f90(var_318)
        
        int64_t rcx_122 = var_338
        
        if (rcx_122 != 0)
            sub_140a74f90(rcx_122)
        
        sub_140618510(&var_218)
        
        if (r12 == 0)
            var_220.d = 0
        else if (((var_378 - r12) & 0xfffffffffffffff8) u< 0x1000)
            j_sub_140a74f90(r12)
            var_220.d = 0
        else
            void* rcx_124 = *(r12 - 8)
            
            if (r12 - rcx_124 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_124)
            var_220.d = 0
        
        goto label_14061be34

stdext::threads::_Throw_lock_error()
noreturn
