// 函数: sub_141e0cc70
// 地址: 0x141e0cc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
float zmm8[0x4] = arg10
bool cond:0 = arg9[0] > 9.99999975e-06f
int64_t* r11 = arg3
float zmm7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
int64_t* result

if (cond:0)
    int32_t* i = *(arg1 + 0x658)
    int64_t rbx_1 = 0
    int64_t rax_3 = sx.q(*(arg1 + 0x660))
    void* rsi_1 = nullptr
    int32_t i_13 = 0
    char* r14_1 = nullptr
    int32_t i_14 = 0
    char* var_1f8 = nullptr
    void* rax_4 = &i[rax_3 * 6]
    int32_t var_1ec_1 = 0
    void* var_1d8 = nullptr
    int32_t var_1cc_1 = 0
    int128_t var_168
    var_168.q = rax_4
    char var_158
    char var_108
    char var_b8
    
    if (i != rax_4)
        do
            if (sub_140d3e110(i) == 0)
                sub_141a911c0(arg7, arg3)
                arg7[2] = arg3[2]
                result = sub_141a91450(arg8, arg4)
                rsi_1 = var_1d8
                goto label_141e0d657
            
            int64_t* rax_6 = sub_140d3c6e0(i)
            
            if (sub_141e2af70(rax_6, *arg2) != 0)
                void* rax_8 = sub_141e21f60(rax_6, *arg2)
                int32_t r14_4
                
                if (sub_141ded410(rax_8) == 0)
                    r14_4 = 0
                else
                    int32_t r14_3
                    r14_3.b = sub_141ded690(rax_8) != 0
                    r14_4 = r14_3 + 1
                
                int32_t rdx_4 = 0
                float var_154_1 = i[2][0]
                int32_t rcx_9 = 0
                var_158 = r14_4.b
                int64_t var_150 = 0
                int64_t var_148_1 = 0
                int32_t* var_138
                __builtin_memset(&var_138, 0, 0x1b)
                int32_t rax_11 = *(arg1 + 0x4a8)
                
                if (rax_11 s> 0)
                    sub_141acba60(&var_150, rax_11)
                    rcx_9 = var_148_1:4.d
                    rdx_4 = var_148_1.d
                
                int32_t rax_12 = rax_11 + rdx_4
                var_148_1.d = rax_12
                
                if (rax_12 s> rcx_9)
                    sub_141acb8e0(&var_150, rdx_4)
                
                sub_141abd4c0(&var_138, arg1 + 0x4a0)
                void* rax_14
                
                if ((*(*rax_6 + 0x2d0))(rax_6).b == 0 || *(arg1 + 0x280) == 0)
                    rax_14.b = 0
                else
                    rax_14.b = 1
                
                int32_t var_b4_1 = i[4]
                var_b8 = rax_14.b
                int64_t var_b0
                __builtin_memset(&var_b0, 0, 0x20)
                zmm7, zmm8 = sub_141de9d60(rax_8, &var_150, &var_138, &var_b8)
                int32_t* var_1a0 = nullptr
                int32_t var_198_1 = 0
                int64_t var_190_1 = 0
                int16_t var_188_1 = 0
                char var_186_1 = 0
                arg5 = sub_141abd4c0(&var_1a0, arg1 + 0x4a0)
                (*(*rax_6 + 0x298))(rax_6, &var_1a0, i[4], 0)
                int32_t rcx_17 = var_198_1
                int32_t r8_1 = 0
                
                if (rcx_17 s> 0)
                    int64_t rdx_10 = 0
                    
                    do
                        int32_t* rax_16 = var_1a0
                        
                        if (*(rax_16 + rdx_10 + 4) != 0)
                            int32_t* rcx_18 = var_138
                            *(rcx_18 + rdx_10) = *(rax_16 + rdx_10)
                            *(rcx_18 + rdx_10 + 4) = 1
                            rcx_17 = var_198_1
                        
                        r8_1 += 1
                        rdx_10 += 8
                    while (r8_1 s< rcx_17)
                
                var_108 = var_158
                int64_t var_100_1 = var_150
                int32_t var_f8_1 = var_148_1.d
                int32_t var_f4_1 = var_148_1:4.d
                void* var_f0_1 = arg1 + 0x4a0
                int32_t* var_e8_1 = var_138
                int32_t var_e0
                __builtin_memset(&var_e0, 0, 0x12)
                float var_104_1 = var_154_1[0]
                char var_ce_1 = 1
                __builtin_memset(&var_150, 0, 0x33)
                
                if (r14_4 != 0)
                    int64_t i_16 = sx.q(i_13)
                    i_13 = (i_16 + 1).d
                    
                    if (i_13 s> var_1ec_1)
                        sub_1405c4fe0(&var_1f8)
                    
                    r14_1 = var_1f8
                    sub_141df25f0(&r14_1[i_16 << 6], &var_108)
                else
                    int64_t i_15 = sx.q(i_14)
                    i_14 = (i_15 + 1).d
                    
                    if (i_14 s> var_1cc_1)
                        sub_1405c4fe0(&var_1d8)
                    
                    sub_141df25f0((i_15 << 6) + var_1d8, &var_108)
                    r14_1 = var_1f8
                
                int64_t var_a0
                
                if (var_a0 != 0)
                    sub_140a74f90(var_a0)
                
                int64_t rcx_28 = var_b0
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
            
            i = &i[6]
        while (i != var_168.q)
        
        rsi_1 = var_1d8
        r11 = arg3
    
    float zmm0[0x4] = arg6
    float zmm5[0x4] = 0x3f800000
    float var_58_1[0x4] = arg5
    arg5 = zx.o(0)
    
    if (not(zmm0[0] < arg5[0]))
        arg5 = _mm_min_ss(zmm0[0], 0x3f800000)
    
    bool cond:3_1
    
    if (zmm8[0] <= 1.00001001f)
        cond:3_1 = i_14 != 0
    else
        int32_t i_1 = 0
        int32_t r8_2 = 2
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        
        if (i_13 s> 0)
            if (i_13 u>= 8)
                int32_t rax_25 = i_13 & 0x80000007
                
                if (rax_25 s< 0)
                    rax_25 = ((rax_25 - 1) | 0xfffffff8) + 1
                
                float temp0_2[0x4] = _mm_rcp_ps(zmm7)
                void* rcx_29 = &r14_1[0x84]
                int32_t r9_1 = 2
                float temp0_3[0x4] = _mm_mul_ps(temp0_2, temp0_2)
                float temp0_6[0x4] =
                    _mm_sub_ps(_mm_add_ps(temp0_2, temp0_2), _mm_mul_ps(temp0_3, zmm7))
                
                do
                    zmm1 = *(rcx_29 + 0x40)
                    zmm0 = *rcx_29
                    zmm2 = *(rcx_29 - 0x40)
                    zmm3 = *(rcx_29 - 0x80)
                    rcx_29 += 0x200
                    float temp0_10[0x4] = _mm_mul_ps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), 
                            _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q), 
                        temp0_6)
                    int64_t i_7 = sx.q(i_1)
                    i_1 += 8
                    *((i_7 << 6) + r14_1 + 4) = temp0_10[0]
                    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xe5)
                    *((sx.q(r9_1) << 6) + r14_1 - 0x3c) = temp0_11[0]
                    zmm2 = *(rcx_29 - 0x140)
                    float temp0_12[0x4] = _mm_unpackhi_ps(temp0_11, temp0_11)
                    *((sx.q(r9_1) << 6) + r14_1 + 4) = temp0_12[0]
                    zmm0 = *(rcx_29 - 0x100)
                    *((sx.q(r9_1) << 6) + r14_1 + 0x44) = _mm_unpackhi_ps(temp0_12, temp0_12)[0]
                    float temp0_17[0x4] = _mm_mul_ps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(*(rcx_29 - 0x180), zmm0[0].q), 
                            _mm_unpacklo_ps(zmm2, (*(rcx_29 - 0xc0))[0].q)[0].q), 
                        temp0_6)
                    *((sx.q(r9_1) << 6) + r14_1 + 0x84) = temp0_17[0]
                    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe5)
                    *((sx.q(r9_1) << 6) + r14_1 + 0xc4) = temp0_18[0]
                    float temp0_19[0x4] = _mm_unpackhi_ps(temp0_18, temp0_18)
                    *((sx.q(r9_1) << 6) + r14_1 + 0x104) = temp0_19[0]
                    int64_t rax_41 = sx.q(r9_1)
                    r9_1 += 8
                    *((rax_41 << 6) + r14_1 + 0x144) = _mm_unpackhi_ps(temp0_19, temp0_19)[0]
                while (i_1 s< i_13 - rax_25)
            
            if (i_1 s< i_13)
                zmm1 = 0x3f800000
                void* rcx_31 = &r14_1[4 + (sx.q(i_1) << 6)]
                uint64_t i_9 = zx.q(i_13 - i_1)
                zmm1[0] = 1f / zmm8[0]
                uint64_t i_2
                
                do
                    rcx_31 += 0x40
                    zmm1[0] = zmm1[0] f* *(rcx_31 - 0x40)
                    *(rcx_31 - 0x40) = zmm1[0]
                    i_2 = i_9
                    i_9 -= 1
                while (i_2 != 1)
        
        int32_t i_3 = 0
        cond:3_1 = i_14 != 0
        
        if (i_14 s> 0)
            if (i_14 u>= 8)
                int32_t rax_48 = i_14 & 0x80000007
                
                if (rax_48 s< 0)
                    rax_48 = ((rax_48 - 1) | 0xfffffff8) + 1
                
                float temp0_22[0x4] = _mm_rcp_ps(zmm7)
                void* rcx_32 = rsi_1 + 0x84
                float temp0_23[0x4] = _mm_mul_ps(temp0_22, temp0_22)
                float temp0_26[0x4] =
                    _mm_sub_ps(_mm_add_ps(temp0_22, temp0_22), _mm_mul_ps(temp0_23, zmm7))
                
                do
                    zmm1 = *(rcx_32 + 0x40)
                    zmm0 = *rcx_32
                    zmm2 = *(rcx_32 - 0x40)
                    zmm3 = *(rcx_32 - 0x80)
                    rcx_32 += 0x200
                    float temp0_30[0x4] = _mm_mul_ps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), 
                            _mm_unpacklo_ps(zmm2, zmm1[0].q)[0].q), 
                        temp0_26)
                    int64_t i_8 = sx.q(i_3)
                    i_3 += 8
                    *((i_8 << 6) + rsi_1 + 4) = temp0_30[0]
                    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xe5)
                    *((sx.q(r8_2) << 6) + rsi_1 - 0x3c) = temp0_31[0]
                    zmm2 = *(rcx_32 - 0x140)
                    float temp0_32[0x4] = _mm_unpackhi_ps(temp0_31, temp0_31)
                    *((sx.q(r8_2) << 6) + rsi_1 + 4) = temp0_32[0]
                    zmm0 = *(rcx_32 - 0x100)
                    *((sx.q(r8_2) << 6) + rsi_1 + 0x44) = _mm_unpackhi_ps(temp0_32, temp0_32)[0]
                    float temp0_37[0x4] = _mm_mul_ps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(*(rcx_32 - 0x180), zmm0[0].q), 
                            _mm_unpacklo_ps(zmm2, (*(rcx_32 - 0xc0))[0].q)[0].q), 
                        temp0_26)
                    *((sx.q(r8_2) << 6) + rsi_1 + 0x84) = temp0_37[0]
                    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xe5)
                    *((sx.q(r8_2) << 6) + rsi_1 + 0xc4) = temp0_38[0]
                    float temp0_39[0x4] = _mm_unpackhi_ps(temp0_38, temp0_38)
                    *((sx.q(r8_2) << 6) + rsi_1 + 0x104) = temp0_39[0]
                    int64_t rax_64 = sx.q(r8_2)
                    r8_2 += 8
                    *((rax_64 << 6) + rsi_1 + 0x144) = _mm_unpackhi_ps(temp0_39, temp0_39)[0]
                while (i_3 s< i_14 - rax_48)
            
            if (i_3 s< i_14)
                void* rcx_34 = rsi_1 + 4 + (sx.q(i_3) << 6)
                uint64_t i_10 = zx.q(i_14 - i_3)
                zmm5[0] = 1f / zmm8[0]
                uint64_t i_4
                
                do
                    rcx_34 += 0x40
                    zmm5[0] = zmm5[0] f* *(rcx_34 - 0x40)
                    *(rcx_34 - 0x40) = zmm5[0]
                    i_4 = i_10
                    i_10 -= 1
                while (i_4 != 1)
            
            cond:3_1 = i_14 != 0
    
    int64_t* r15_1
    uint32_t zmm1_1[0x8]
    int512_t zmm6
    
    if (cond:3_1)
        char* var_c8_1 = nullptr
        char* r8_3 = nullptr
        int32_t var_bc_1 = 8
        int32_t rax_72
        rax_72.b = arg5[0] > 9.99999975e-06f
        int32_t rdi_3 = rax_72 + i_14
        
        if (rdi_3 s> 8)
            sub_140809370(&var_108, 0)
            r8_3 = var_c8_1
        
        char* var_98_1 = nullptr
        int32_t var_8c_1 = 8
        
        if (rdi_3 s> 8)
            sub_14083a280(&var_b8, 0)
            r8_3 = var_c8_1
        
        char* var_118_1 = nullptr
        int32_t var_10c_1 = 8
        
        if (rdi_3 s> 8)
            sub_140809370(&var_158, 0)
            r8_3 = var_c8_1
        
        if (i_14 s> 0)
            void* rdx_19 = rsi_1 + 0x20
            uint64_t i_12 = zx.q(i_14)
            void* r10_3 = rsi_1 + 4
            void* rdi_5 = rsi_1 - rdx_19
            int64_t r9_4 = 0
            uint64_t i_5
            
            do
                char* rax_73 = &var_108
                rbx_1 += 4
                r9_4 += 8
                
                if (r8_3 != 0)
                    rax_73 = r8_3
                
                r10_3 += 0x40
                *(rax_73 + r9_4 - 8) = rdx_19 + 8 + rdi_5
                char* rcx_44 = &var_158
                
                if (var_118_1 != 0)
                    rcx_44 = var_118_1
                
                *(rcx_44 + r9_4 - 8) = rdx_19
                char* rcx_45 = &var_b8
                
                if (var_98_1 != 0)
                    rcx_45 = var_98_1
                
                rdx_19 += 0x40
                *(rcx_45 + rbx_1 - 4) = *(r10_3 - 0x40)
                r8_3 = var_c8_1
                i_5 = i_12
                i_12 -= 1
            while (i_5 != 1)
        
        if (not(arg5[0] <= 9.99999975e-06f))
            char* rcx_46 = &var_158
            int64_t rdx_20 = sx.q(rdi_3 - 1)
            char* rax_79 = &var_108
            
            if (r8_3 != 0)
                rax_79 = r8_3
            
            *(rax_79 + (rdx_20 << 3)) = arg3
            
            if (var_118_1 != 0)
                rcx_46 = var_118_1
            
            *(rcx_46 + (rdx_20 << 3)) = arg4
            char* rcx_47 = &var_b8
            
            if (var_98_1 != 0)
                rcx_47 = var_98_1
            
            *(rcx_47 + (rdx_20 << 2)) = arg5[0]
            r8_3 = var_c8_1
        
        char* rcx_48 = &var_b8
        r15_1 = arg8
        int32_t var_208
        var_208.q = r15_1
        
        if (var_98_1 != 0)
            rcx_48 = var_98_1
        
        int32_t var_1f0_2 = rdi_3
        var_1f8 = rcx_48
        char* rcx_49 = &var_158
        
        if (var_118_1 != 0)
            rcx_49 = var_118_1
        
        var_1d8.o = var_1f8.o
        int32_t var_1f0_3 = rdi_3
        char* rax_87 = &var_108
        var_1f8 = rcx_49
        
        if (r8_3 != 0)
            rax_87 = r8_3
        
        zmm0 = var_1f8.o
        var_1f8 = rax_87
        int32_t var_1f0_4 = rdi_3
        var_168 = zmm0
        var_1f8.o = var_1f8.o
        zmm1_1, zmm6 = sub_141de3e10(&var_1f8, &var_168, &var_1d8, arg7, var_208)
        
        if (var_118_1 != 0)
            zmm1_1 = sub_140a74f90(var_118_1)
        
        if (var_98_1 != 0)
            zmm1_1 = sub_140a74f90(var_98_1)
        
        if (var_c8_1 != 0)
            zmm1_1 = sub_140a74f90(var_c8_1)
    else
        sub_141a911c0(arg7, r11)
        r15_1 = arg8
        arg7[2] = arg3[2]
        zmm1_1, zmm6 = sub_141a91450(r15_1, arg4)
    
    zmm6.o = var_58_1
    
    if (i_13 s> 0)
        int64_t* rbx_3 = &r14_1[0x20]
        uint64_t i_11 = zx.q(i_13)
        uint64_t i_6
        
        do
            zmm1_1 = sub_141de0cd0(arg7, &rbx_3[-3], r15_1, rbx_3, zmm1_1, *(rbx_3 - 0x1c), 
                zx.d(rbx_3[-4].b))
            rbx_3 = &rbx_3[8]
            i_6 = i_11
            i_11 -= 1
        while (i_6 != 1)
    
    result = sub_141e451a0(arg7, zmm1_1)
label_141e0d657:
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
    
    if (r14_1 != 0)
        result = sub_140a74f90(r14_1)
else
    sub_141a911c0(arg7, arg3)
    arg7[2] = arg3[2]
    result = sub_141a91450(arg8, arg4)

__security_check_cookie(rax_1 ^ &var_228)
return result
