// 函数: sub_141ddc430
// 地址: 0x141ddc430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t result = __security_cookie ^ &var_3c8
int64_t result_1 = result
*(arg1 + 0x183) &= 0xf7
arg1[0x33].d = 0x3f800000
uint32_t zmm9[0x4] = arg3
int64_t* rcx = arg1[3]

if (rcx != 0)
    result = (*(*rcx + 0x260))(rcx)
    
    if (result.b != 0)
        arg1[0xda].d = sub_141e7aaf0(arg1[0xa], &arg1[0x44])
        *(arg1 + 0x264) = 0x3f800000
        uint32_t zmm3_1[0x4] = data_143f38c20
        int64_t var_318
        __builtin_memset(&var_318, 0, 0x18)
        uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3_1, data_143f38c30)
        float zmm8[0x4] = zx.o(0)
        zmm3_1[0].q = zx.o(0) u>> 0x40
        float var_2f8_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm3_1, 0xc4)
        int128_t var_2c8
        __builtin_memcpy(&var_2c8, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x"
        "80\x3f\x0a\x00\x00\x00\x64\x00\x00\x00\x00\x00\x80\x3f", 
            0x24)
        int32_t var_29c_1 = 0xbf800000
        int128_t var_2e8_1 = zx.o(0)
        uint32_t var_2d8_1[0x4] = temp0_1
        int32_t var_2a0_1 = 0x3f800000
        int128_t var_298
        __builtin_memset(&var_298, 0, 0x14)
        int64_t var_280_1
        __builtin_memset(&var_280_1, 0, 0x39)
        int64_t var_244
        __builtin_memset(&var_244, 0, 0x14)
        void** var_230
        sub_141f7a080(&var_230)
        int64_t var_1a8
        __builtin_memset(&var_1a8, 0, 0x40)
        uint32_t zmm1_1[0x4] = *(arg1 + 0x230)
        int128_t var_168
        __builtin_memcpy(&var_168, 
            "\x00\x40\x9c\x46\x00\x40\x9c\x46\x00\x00\xa0\x41\x00\x40\x9c\x46\x00\x40\x9c\x46\x00", 
            0x15)
        float var_2f8_2[0x4] = *(arg1 + 0x220)
        uint32_t var_29c_2 = (*(arg1 + 0x19c))[0]
        float var_2d8_2[0x4] = *(arg1 + 0x240)
        sub_141c473a0(arg1 + 0x1ac, zmm9)
        sub_141c3a460(arg1 + 0x1ac)
        arg1[0x34].d
        float zmm0_3[0x4]
        float zmm6_2
        zmm0_3, zmm6_2 = sub_141dcc360(arg1)
        int64_t* rcx_6 = arg1[3]
        zmm0_3[0] = zmm0_3[0] * zmm6_2
        int64_t* rcx_7
        
        if (rcx_6 == 0)
            float var_2b4_2 = zmm0_3[0]
            rcx_7 = nullptr
        else
            (*(*rcx_6 + 0x298))(rcx_6)
            rcx_7 = arg1[3]
            zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
            float var_2b4_1 = zmm0_3[0]
        
        zmm0_3 = arg1[0x40].d
        zmm6_2 = *(arg1 + 0x1a4)
        float var_2a4_1 = zmm0_3[0]
        (*(*rcx_7 + 0x2a0))(rcx_7)
        char k_1
        uint64_t k = zx.q(k_1)
        float zmm1_2[0x4] = var_2a0_1
        uint8_t rax_5 = *(arg1 + 0x182) u>> 3 ^ k.b
        zmm0_3[0] = zmm0_3[0] * zmm6_2
        k.b ^= rax_5 & 8
        void* const rax_6 = arg1[0x1f]
        char k_2 = k.b
        zmm1_2[0] = zmm1_2[0] * zmm0_3[0]
        var_168.d = arg1[0x35].d[0]
        float var_2a0_2 = zmm1_2[0]
        
        if (rax_6 == 0)
            int64_t* rcx_8 = arg1[3]
            
            if (rcx_8 == 0)
                rax_6 = nullptr
            else
                rax_6 = (*(*rcx_8 + 0x2c8))(rcx_8)
                k = zx.q(k_2)
        
        int64_t* rcx_9 = arg1[3]
        k.b ^= (arg1[0x30].b ^ k.b) & 0x20
        char k_3 = k.b
        void* var_278
        
        if (rcx_9 == 0)
            int64_t var_280_3 = 0
        else
            int64_t rax_10 = (*(*rcx_9 + 0x2d0))(rcx_9)
            void* rcx_10 = arg1[3]
            int64_t var_280_2 = rax_10
            
            if (rcx_10 != 0)
                sub_1423678d0(rcx_10, &var_278)
                void* i = arg1[0x20]
                
                for (void* rsi_2 = sx.q(arg1[0x21].d) * 0xb0 + i; i != rsi_2; i += 0xb0)
                    void* r8_1 = var_278
                    int64_t var_270_1
                    int64_t rdi_1 = sx.q(var_270_1.d)
                    void* rcx_11 = r8_1
                    void* rdx_3 = rdi_1 * 0xb0 + r8_1
                    
                    if (r8_1 == rdx_3)
                    label_141ddc7f2:
                        int32_t rax_13 = (rdi_1 + 1).d
                        var_270_1.d = rax_13
                        
                        if (rax_13 s> var_270_1:4.d)
                            sub_140a05e50(&var_278)
                            r8_1 = var_278
                        
                        sub_141db7be0(rdi_1 * 0xb0 + r8_1, i)
                    else
                        while (*(rcx_11 + 8) != *(i + 8))
                            rcx_11 += 0xb0
                            
                            if (rcx_11 == rdx_3)
                                goto label_141ddc7f2
                        
                        *(rcx_11 + 0x10) = *(i + 0x10)
            
            k = zx.q(k_3)
        
        int64_t var_268
        int64_t* rsi_3 = &var_268
        int32_t i_1 = 0
        k.b ^= (*(arg1[3] + 0x30) u>> 2 ^ k.b) & 1
        char var_154 = k.b
        
        do
            void* rcx_16 = arg1[3]
            
            if (rcx_16 != 0)
                uint64_t rbx_1 = zx.q(i_1.b)
                k = sub_1423678b0(rcx_16, rbx_1.b, rsi_3)
                int64_t rbx_3 = (rbx_1 + 0x11) * 2
                void* j = arg1[rbx_3]
                
                for (void* r15_2 = sx.q(arg1[rbx_3 + 1].d) * 0xb0 + j; j != r15_2; j += 0xb0)
                    void* rcx_17 = *rsi_3
                    int64_t r8_3 = sx.q(rsi_3[1].d)
                    int64_t rbx_4 = r8_3 * 0xb0
                    void* rax_17 = rcx_17 + rbx_4
                    
                    if (rcx_17 == rax_17)
                    label_141ddc8d2:
                        int32_t rax_18 = (r8_3 + 1).d
                        rsi_3[1].d = rax_18
                        
                        if (rax_18 s> *(rsi_3 + 0xc))
                            sub_140a05e50(rsi_3)
                        
                        k = sub_141db7be0(*rsi_3 + rbx_4, j)
                    else
                        k = *(j + 8)
                        
                        while (*(rcx_17 + 8) != k)
                            rcx_17 += 0xb0
                            
                            if (rcx_17 == rax_17)
                                goto label_141ddc8d2
                        
                        *(rcx_17 + 0x10) = *(j + 0x10)
            
            i_1 += 1
            rsi_3 = &rsi_3[2]
        while (i_1 s< 2)
        
        int64_t rax_19 = arg1[4]
        int128_t var_178
        
        if (rax_19 == 0)
            var_178:8.q = *(arg1[3] + 0x138)
        else
            var_178:8.q = rax_19
        int32_t var_2b0_1 = arg1[0xcb].d
        int32_t var_2ac_1 = *(arg1 + 0x65c)
        
        if ((*(arg1 + 0x182) & 0x20) != 0)
            k = sub_141dcc830(arg1, &var_318)
        
        if (not(zmm9[0] f<= 0f))
            int128_t zmm10
            zmm10.d = 1f f/ zmm9[0]
            zmm1_1[0] = zmm1_1[0] f- *(arg1 + 0x26c)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            temp0_3[0] = temp0_3[0] f- *(arg1 + 0x274)
            float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            temp0_4[0] = temp0_4[0] f- arg1[0x4e].d
            zmm1_1[0] = zmm1_1[0] f* zmm10.d
            temp0_3[0] = temp0_3[0] f* zmm10.d
            temp0_4[0] = temp0_4[0] f* zmm10.d
            float var_370_1 = temp0_3[0]
            var_2c8.q = (_mm_unpacklo_ps(zmm1_1, temp0_4[0].q)).q
            float var_370_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            float temp0_8[0x4] = _mm_unpacklo_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)[0].q)
            var_2c8:8.d = var_370_1
            *(arg1 + 0x26c) = temp0_8.q
            *(arg1 + 0x274) = var_370_2
        
        arg1[0x30].b |= 0x10
        char rax_26 = arg1[0x30].b
        void*** var_390 = nullptr
        int32_t var_388_1 = 0
        
        if (*(arg1 + 0x185) == 0)
            goto label_141ddca4b
        
        char var_248
        
        if (sub_141c3c750(arg1 + 0x1ac) != 0)
            rax_26 = arg1[0x30].b
        label_141ddca4b:
            
            if ((rax_26 & 4) == 0)
                var_248 = 2
                
                if (rax_6 == 0)
                    zmm0_3 = *(arg1[0xa] + 0x2d4)
                else
                    zmm0_3 = *(rax_6 + 0x50)
                
                float var_234_1 = zmm0_3[0]
            else
                zmm8, zmm9 = sub_141ddb180(arg1, k, &var_318, arg1[0xda].d, nullptr)
            
            int64_t rax_31 = (*(*arg1 + 8))(arg1)
            int64_t* rcx_26 = arg1[3]
            int128_t var_188
            var_188:8.q = rax_31
            (*(*rcx_26 + 0x2c0))(rcx_26, arg1[0xa], 0, arg1, &var_318, &var_390)
            zmm0_3 = var_2a0_2
            
            if (not(zmm0_3[0] f>= arg1[0x33].d))
                arg1[0x33].d = zmm0_3[0]
        
        uint64_t rbx_5
        void*** rdi_2
        
        if ((arg1[0x30].b & 0x10) == 0)
            rbx_5 = sx.q(var_388_1)
            
            if (rbx_5.d s<= 0)
                rdi_2 = var_390
            else
                rdi_2 = var_390
                
                if ((*(arg1 + 0x183) & 0x10) != 0)
                    void* rcx_28 = &rdi_2[rbx_5]
                    int64_t rdx_12 = 0
                    uint64_t r8_8 = (rcx_28 - rdi_2 + 7) u>> 3
                    
                    if (rdi_2 u> rcx_28)
                        r8_8 = 0
                    
                    if (r8_8 != 0)
                        do
                            void** rax_33 = *rdi_2
                            rdi_2 = &rdi_2[1]
                            rdx_12 += 1
                            rax_33[0x20].d |= 0x8000
                        while (rdx_12 != r8_8)
                        
                        rbx_5 = zx.q(var_388_1)
                        rdi_2 = var_390
                
                if (not(zmm8[0] f> *(arg1 + 0x204)))
                    int64_t rsi_4 = 0
                    *(arg1 + 0x204) = 0
                    void* rcx_29 = &rdi_2[sx.q(rbx_5.d)]
                    uint64_t r15_6 = (rcx_29 - rdi_2 + 7) u>> 3
                    
                    if (rdi_2 u> rcx_29)
                        r15_6 = 0
                    
                    if (r15_6 != 0)
                        do
                            void** rbx_6 = *rdi_2
                            sub_141e632a0(rbx_6)
                            float zmm0_5
                            zmm0_5, zmm6_2 = sub_141e5f830(rbx_6)
                            zmm6_2 = zmm6_2 * zmm0_5
                            
                            if (not(zmm6_2 f<= *(arg1 + 0x204)))
                                *(arg1 + 0x204) = zmm6_2
                            
                            rdi_2 = &rdi_2[1]
                            rsi_4 += 1
                        while (rsi_4 != r15_6)
                    
                    zmm0_3 = sub_141dcc360(arg1)
                    rbx_5 = zx.q(var_388_1)
                    rdi_2 = var_390
                    
                    if (zmm0_3[0] <= 9.99999994e-09f)
                        *(arg1 + 0x204) = 0
                    else
                        zmm1_2 = *(arg1 + 0x204)
                        zmm1_2[0] = zmm1_2[0] / zmm0_3[0]
                        *(arg1 + 0x204) = zmm1_2[0]
                
                int64_t r9_3 = arg1[5]
                
                if (r9_3 != 0)
                    int64_t* (* var_358)(int64_t* arg1)
                    
                    if ((*(arg1 + 0x183) & 2) != 0)
                        zmm1_2 = zmm8
                        int64_t rdx_13 = 0
                        void* rcx_33 = &rdi_2[sx.q(rbx_5.d)]
                        uint64_t r8_12 = (rcx_33 - rdi_2 + 7) u>> 3
                        
                        if (rdi_2 u> rcx_33)
                            r8_12 = 0
                        
                        if (r8_12 != 0)
                            do
                                void** rax_36 = *rdi_2
                                rdx_13 += 1
                                rdi_2 = &rdi_2[1]
                                zmm0_3 = *(rax_36 + 0xd4)
                                zmm8[0] = zmm8[0] + zmm0_3[0]
                                zmm1_2 = _mm_max_ss(zmm0_3[0], zmm1_2[0])
                            while (rdx_13 != r8_12)
                        
                        float temp0_10[0x4] = _mm_cvtepi32_ps(zx.o(rbx_5.d))
                        void** const var_338_1 = &data_142e345d8
                        int32_t var_368_1 = rbx_5.d
                        int64_t var_348_1 = 0
                        var_358 = j_sub_141db90b0
                        zmm8[0] = zmm8[0] / temp0_10[0]
                        zmm0_3 = r9_3.o
                        float temp0_11[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xd2)
                        temp0_11[0] = zmm8[0]
                        float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x27)
                        temp0_12[0] = zmm1_2[0]
                        float var_330_1[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
                        int64_t var_320_1 = var_368_1.q
                        sub_141e85f30(&var_358)
                        rbx_5 = zx.q(var_388_1)
                        rdi_2 = var_390
                    
                    if ((*(arg1 + 0x183) & 4) != 0)
                        int64_t rsi_5 = 0
                        int64_t var_148
                        __builtin_memset(&var_148, 0, 0x2c)
                        void* rcx_35 = &rdi_2[sx.q(rbx_5.d)]
                        int32_t var_11c_1 = 0x80
                        uint64_t rbx_10 = (rcx_35 - rdi_2 + 7) u>> 3
                        int32_t var_118_1 = 0xffffffff
                        int32_t var_114_1 = 0
                        
                        if (rdi_2 u> rcx_35)
                            rbx_10 = 0
                        
                        int64_t var_108_1 = 0
                        int32_t var_100_1 = 0
                        
                        if (rbx_10 != 0)
                            do
                                void** rcx_36 = *rdi_2
                                zmm0_3 = zmm9
                                zmm0_3[0] = zmm0_3[0] f* *(rcx_36 + 0x144)
                                zmm0_3[0] = zmm0_3[0] f+ *(rcx_36 + 0x16c)
                                *(rcx_36 + 0x16c) = zmm0_3[0]
                                
                                if (rcx_36[0x1f].d != 0 && not(zmm0_3[0] f<= *(*rcx_36 + 0xf8)))
                                    *(rcx_36 + 0x16c) = 0
                                
                                int32_t var_380 = *(*rcx_36 + 0xc)
                                sub_141db29a0(&var_148, &var_380, rcx_36 + 0x16c)
                                rdi_2 = &rdi_2[1]
                                rsi_5 += 1
                            while (rsi_5 != rbx_10)
                        
                        int64_t rax_40 = arg1[5]
                        int64_t var_f0
                        __builtin_memset(&var_f0, 0, 0x2c)
                        int32_t var_c4_1 = 0x80
                        int32_t var_c0_1 = 0xffffffff
                        int32_t var_bc_1 = 0
                        int64_t var_b0_1 = 0
                        int32_t var_a8_1 = 0
                        sub_1417d6d70(&var_f0, &var_148)
                        void*** rax_41 = sub_140a82f30(0x60, 8)
                        *rax_41 = &data_14323d248
                        rax_41[1] = rax_40
                        void* rcx_41 = &rax_41[4]
                        rax_41[2] = 0
                        rax_41[3] = 0
                        *(rcx_41 + 0x10) = 0
                        *(rcx_41 + 0x18) = 0
                        *(rcx_41 + 0x1c) = 0x80
                        void* rax_42 = *(rcx_41 + 0x10)
                        
                        if (rax_42 != 0)
                            rcx_41 = rax_42
                        
                        *rcx_41 = 0
                        *(rcx_41 + 8) = 0
                        rax_41[8].d = 0xffffffff
                        *(rax_41 + 0x44) = 0
                        rax_41[0xa] = 0
                        rax_41[0xb].d = 0
                        sub_140780e10(&rax_41[2], &var_f0)
                        void var_b8
                        
                        if (var_b0_1 == 0)
                            memmove(&rax_41[9], &var_b8, (var_b0_1 + 4).d)
                        int64_t rcx_44 = rax_41[0xa]
                        
                        if (rcx_44 != 0)
                            sub_140a74f90(rcx_44)
                        
                        rax_41[0xa] = var_b0_1
                        rax_41[0xb].d = var_a8_1
                        *rax_41 = &data_14323d268
                        int64_t* (* rax_44)(int64_t* arg1) = var_358
                        
                        if (rax_41 != -8)
                            rax_44 = sub_141dbba00
                        
                        int64_t var_b0_2 = 0
                        var_358 = rax_44
                        int32_t var_a8_2 = 0
                        void*** var_348_2 = rax_41
                        sub_141e85f30(&var_358)
                        sub_1405ae180(&var_f0)
                        int32_t var_100_2 = 0
                        
                        if (var_108_1 != 0)
                            sub_140a74f90(var_108_1)
                        
                        int64_t var_140
                        var_140.d = 0
                        int32_t var_118_2 = 0xffffffff
                        int32_t var_114_2 = 0
                        int64_t var_138
                        sub_14059a8e0(&var_138, 0)
                        int64_t var_128
                        
                        if (var_128 != 0)
                            sub_140a74f90(var_128)
                        
                        int64_t rcx_51 = var_148
                        
                        if (rcx_51 != 0)
                            sub_140a74f90(rcx_51)
                        
                        rbx_5 = zx.q(var_388_1)
                        rdi_2 = var_390
        else
            sub_141e744f0(arg1[0xa], arg1)
            rbx_5 = zx.q(var_388_1)
            rdi_2 = var_390
        
        if (rbx_5.d != 0)
            int32_t rax_45 = arg2[1].d
            int32_t rdx_20 = rax_45 + rbx_5.d
            
            if (rdx_20 s> *(arg2 + 0xc))
                sub_1405c5570(arg2, rdx_20)
                rax_45 = arg2[1].d
                rdi_2 = var_390
            
            memcpy(*arg2 + (sx.q(rax_45) << 3), rdi_2, rbx_5.d << 3)
            arg2[1].d += rbx_5.d
            rdi_2 = var_390
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
        
        sub_141c4f800(&var_1a8)
        int64_t var_1c0
        
        if (var_1c0 != 0)
            sub_140a74f90(var_1c0)
        
        var_230 = &data_142d6a040
        int64_t var_1d8
        
        if (var_1d8 != 0)
            sub_140a74f90(var_1d8)
        
        void var_228
        sub_1405ae180(&var_228)
        int64_t i_2 = 2
        char* rsi_6 = &var_248
        
        do
            int32_t j_2 = *(rsi_6 - 8)
            rsi_6 = &rsi_6[-0x10]
            void* rcx_60 = *rsi_6
            i_2 -= 1
            
            if (j_2 != 0)
                int64_t* rbx_11 = rcx_60 + 0x98
                int32_t j_1
                
                do
                    int64_t rcx_61 = *rbx_11
                    
                    if (rcx_61 != 0)
                        sub_140a74f90(rcx_61)
                    
                    rbx_11[-0xe] = &data_142d6a040
                    int64_t rcx_62 = rbx_11[-3]
                    
                    if (rcx_62 != 0)
                        sub_140a74f90(rcx_62)
                    
                    sub_1405ae180(&rbx_11[-0xd])
                    rbx_11 = &rbx_11[0x16]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                rcx_60 = *rsi_6
            
            if (rcx_60 != 0)
                sub_140a74f90(rcx_60)
        while (i_2 != 0)
        
        result = sub_141c4f9c0(&var_278)
        int64_t rcx_65 = var_318
        
        if (rcx_65 != 0)
            result = sub_140a74f90(rcx_65)

__security_check_cookie(result_1 ^ &var_3c8)
return result
