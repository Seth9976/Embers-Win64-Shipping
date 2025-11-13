// 函数: sub_1417b2ff0
// 地址: 0x1417b2ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* var_218 = arg3
int64_t* r15 = arg1
int64_t var_108
__builtin_memset(&var_108, 0, 0x2c)
int64_t* rsi = arg4
int32_t var_d4 = 0
int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t* var_188 = arg4
int32_t var_dc = 0x80
int32_t var_d8 = 0xffffffff
int32_t i_4
int64_t* result
int64_t var_f8
int64_t* var_e8

if (*sub_1405ba560(&arg1[0x2e], &i_4, arg3) != 0xffffffff)
    sub_1405ba560(&r15[0x2e], &i_4, arg3)
    int64_t i_6 = sx.q(i_4)
    void* const rdi_3
    
    if (i_6.d == 0xffffffff)
        rdi_3 = nullptr
    else
        rdi_3 = (i_6 << 5) + r15[0x2e]
    
    uint128_t zmm0 = data_1439b8e60
    zmm0.d f- 1f
    char var_228 = 0
    int64_t* var_180 = rdi_3 + 8
    i_6.b = zmm0.d f< 1f
    char var_220 = i_6.b
    int64_t rcx_8 = sx.q(arg3[1].d)
    int64_t r8_1 = rcx_8 * 3
    int64_t rcx_9 = rcx_8 << 4
    void* rax_3 = *arg3
    uint128_t* rcx_10
    int64_t rdx_3
    
    if (i_6.b == 0)
        rdx_3 = *(rax_3 + 0x3c8)
        rcx_10 = rcx_9 + *(rax_3 + 0x3e0)
    else
        rdx_3 = *(rax_3 + 0x28)
        rcx_10 = rcx_9 + *(rax_3 + 0x68)
    
    float zmm2[0x4] = *(rdx_3 + (r8_1 << 2) + 4)
    float zmm3[0x4] = *(rdx_3 + (r8_1 << 2))
    uint128_t var_b8 = *rcx_10
    zmm3 = _mm_unpacklo_ps(zmm3, (*(rdx_3 + (r8_1 << 2) + 8)).q)
    zmm0 = data_14399f670
    float var_a8_1[0x4] = _mm_unpacklo_ps(zmm3, _mm_unpacklo_ps(zmm2, 0)[0].q)
    zmm3 = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
        _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    uint128_t var_88 = var_b8
    var_b8:8.q = &var_218
    var_a8_1[0].q = &var_88
    var_a8_1[2].q = &var_220
    uint128_t var_78_1 = var_a8_1
    uint128_t var_68_1 = zmm3
    int32_t r14_1 = *(rdi_3 + 0x10)
    int32_t r14_2 = r14_1 - 1
    zmm3[0].q = &var_108
    var_b8.q = r15
    zmm3[2].q = &var_228
    
    if (r14_1 - 1 s>= 0)
        int64_t r12_1 = sx.q(r14_2) << 3
        int64_t r13_1 = r12_1
        int64_t* var_1b8
        int64_t* var_1a8
        int64_t* var_1a0
        void var_190
        uint128_t var_150
        int64_t var_130
        int32_t temp2_1
        
        do
            int64_t* rbx_1 = nullptr
            int64_t* rcx_11 = *(r12_1 + *(rdi_3 + 8))
            
            if (*(rcx_11 + 0xc) u>= 3)
                rbx_1 = rcx_11
            
            if (rbx_1 != 0)
                uint64_t rdx_6
                void* r8_3
                
                if (rsi == 0)
                    r8_3 = *rbx_1
                    rdx_6 = sx.q(rbx_1[1].d)
                    zmm0 = *(*(r8_3 + 0x4d0) + (rdx_6 << 2))
                else
                    sub_140865c40(rsi, &i_4, rbx_1)
                    int64_t i_7 = sx.q(i_4)
                    void* const rcx_13
                    
                    if (i_7.d == 0xffffffff)
                        rcx_13 = nullptr
                    else
                        rcx_13 = *rsi + i_7 * 0x18
                    
                    r8_3 = *rbx_1
                    uint128_t* rax_7 = rcx_13 + 8
                    
                    if (rcx_13 == 0)
                        rax_7 = nullptr
                    
                    if (rax_7 == 0)
                        rdx_6 = sx.q(rbx_1[1].d)
                        zmm0 = *(*(r8_3 + 0x4d0) + (rdx_6 << 2))
                    else
                        zmm0 = *rax_7
                        rdx_6 = zx.q(rbx_1[1].d)
                
                if (zmm0.d f>= *(*(r8_3 + 0x4e8) + (sx.q(rdx_6.d) << 2)) || arg5 != 0)
                    sub_1417a3a00(&var_b8, rbx_1)
                    int32_t rdx_8 = *(rdi_3 + 0x10)
                    int32_t rax_12 = rdx_8 - r14_2 - 1
                    
                    if (rax_12 s>= 1)
                        rax_12 = 1
                    
                    if (rax_12 != 0)
                        int64_t rcx_16 = *(rdi_3 + 8)
                        memcpy(rcx_16 + r13_1, rcx_16 + (sx.q(rdx_8 - rax_12) << 3), rax_12 << 3)
                        rdx_8 = *(rdi_3 + 0x10)
                    
                    *(rdi_3 + 0x10) = rdx_8 - 1
                    
                    if (*(sx.q(rbx_1[1].d) + *(*rbx_1 + 0x380)) != 0)
                        var_1a8 = rbx_1
                        sub_140946410(&r15[0xc], &var_190, &var_1a8, nullptr)
                    else if (*(r15 + 0x211) != 0)
                        int64_t* rsi_1 = &r15[0x43]
                        int64_t r15_1 = sx.q(rsi_1[1].d)
                        var_1a0 = nullptr
                        __builtin_memset(&var_150:8, 0, 0x24)
                        int32_t var_198_1 = 0
                        int32_t rax_26 = (r15_1 + 1).d
                        var_1b8 = nullptr
                        int32_t var_1b0_1 = 0
                        rsi_1[1].d = rax_26
                        
                        if (rax_26 s> *(rsi_1 + 0xc))
                            sub_1405c5060(rsi_1)
                        
                        int64_t rcx_24 = *rsi_1
                        int64_t r9_2 = r15_1 * 0xa
                        r15 = arg1
                        *(rcx_24 + (r9_2 << 3) + 0x10) = var_150:8.q
                        int128_t var_140
                        *(rcx_24 + (r9_2 << 3) + 0x18) = var_140.d
                        *(rcx_24 + (r9_2 << 3) + 0x1c) = var_140:4.q
                        *(rcx_24 + (r9_2 << 3) + 0x24) = var_140:0xc.d
                        *(rcx_24 + (r9_2 << 3) + 0x28) = var_130
                        int32_t var_128
                        *(rcx_24 + (r9_2 << 3) + 0x30) = var_128
                        zmm0 = zx.o(var_1b8)
                        *(rcx_24 + (r9_2 << 3)) = 0
                        *(rcx_24 + (r9_2 << 3) + 8) = 0
                        *(rcx_24 + (r9_2 << 3) + 0x34) = 0
                        *(rcx_24 + (r9_2 << 3) + 0x38) = zmm0.q
                        zmm0 = zx.o(var_1a0)
                        *(rcx_24 + (r9_2 << 3) + 0x40) = var_1b0_1
                        *(rcx_24 + (r9_2 << 3) + 0x44) = zmm0.q
                        *(rcx_24 + (r9_2 << 3) + 0x4c) = var_198_1
                        int64_t r8_8 = *rsi_1
                        rsi = var_188
                        *(r8_8 + (r9_2 << 3)) = rbx_1
                        *(r8_8 + (r9_2 << 3) + 8) = 0
                        int64_t rdx_17 = sx.q(rbx_1[1].d) * 3
                        int64_t rcx_25 = *(*rbx_1 + 0x28)
                        *(r8_8 + (r9_2 << 3) + 0x10) = *(rcx_25 + (rdx_17 << 2))
                        *(r8_8 + (r9_2 << 3) + 0x18) = *(rcx_25 + (rdx_17 << 2) + 8)
                        int64_t rdx_18 = sx.q(rbx_1[1].d) * 3
                        int64_t rcx_26 = *(*rbx_1 + 0x1b8)
                        *(r8_8 + (r9_2 << 3) + 0x1c) = *(rcx_26 + (rdx_18 << 2))
                        *(r8_8 + (r9_2 << 3) + 0x24) = *(rcx_26 + (rdx_18 << 2) + 8)
                        int64_t rdx_19 = sx.q(rbx_1[1].d) * 3
                        int64_t rcx_27 = *(*rbx_1 + 0x1d0)
                        *(r8_8 + (r9_2 << 3) + 0x28) = *(rcx_27 + (rdx_19 << 2))
                        *(r8_8 + (r9_2 << 3) + 0x30) = *(rcx_27 + (rdx_19 << 2) + 8)
                        *(r8_8 + (r9_2 << 3) + 0x34) =
                            *(*(*rbx_1 + 0x2c0) + (sx.q(rbx_1[1].d) << 2))
            
            r13_1 -= 8
            r12_1 -= 8
            temp2_1 = r14_2
            r14_2 -= 1
        while (temp2_1 - 1 s>= 0)
        
        if (var_228 != 0)
            if (*(rdi_3 + 0x10) == 0)
                bool cond:3_1 = *(rdi_3 + 0x14) == 0
                *(rdi_3 + 0x10) = 0
                
                if (not(cond:3_1))
                    sub_1405c5570(rdi_3 + 8, 0)
            
            int32_t var_210
            uint128_t var_1e0
            int64_t* var_158
            int32_t var_e0
            uint128_t zmm1
            
            if (data_1439b8e68 != 0)
                int32_t rcx_21 = 0
                var_210 = 0
                int32_t var_20c_1 = 1
                int32_t r8_7 = 0
                int32_t var_200_1 = 0xffffffff
                int64_t* var_208_1 = &var_f8
                int64_t var_1fc_1 = 0
                
                if (var_e0 != 0)
                    int64_t* r9 = &var_f8
                    
                    if (var_e8 != 0)
                        r9 = var_e8
                    
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(var_e0 - 1)
                    int32_t rdx_14 = *r9
                    
                    if (rdx_14 != 0)
                    label_1417b345c:
                        int32_t rax_24 = neg.d(rdx_14) & rdx_14
                        uint64_t rflags_1
                        int32_t temp0_7
                        temp0_7, rflags_1 = _bit_scan_reverse(rax_24)
                        int32_t var_20c_2 = rax_24
                        int32_t rax_25
                        
                        if (rax_24 == 0)
                            rax_25 = 0x20
                        else
                            rax_25 = 0x1f - temp0_7
                        
                        int32_t rax_43 = r8_7 - rax_25 + 0x1f
                        
                        if (rax_43 s> var_e0)
                            rax_43 = var_e0
                        
                        var_1fc_1.d = rax_43
                    else
                        while (true)
                            int64_t rdx_15 = sx.q(rcx_21)
                            r8_7 += 0x20
                            rcx_21 += 1
                            var_1fc_1:4.d = r8_7
                            var_210 = rcx_21
                            
                            if (rdx_15.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                var_1fc_1.d = var_e0
                                break
                            
                            rdx_14 = *(r9 + (rdx_15 << 2) + 4)
                            var_200_1 = 0xffffffff
                            
                            if (rdx_14 != 0)
                                goto label_1417b345c
                
                zmm2 = var_200_1.o
                var_1fc_1.d = var_e0
                var_150 = var_210.o
                float var_140_1[0x4] = zmm2
                var_158 = &var_108
                zmm0 = var_158.o
                zmm1 = var_150
                zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0].q)
                var_1e0 = zmm0
                uint128_t var_1d0_1 = zmm1
                int64_t var_1c0_1 = zmm2.q
                
                while (true)
                    int64_t rcx_31 = sx.q(var_1d0_1:0xc.d)
                    int64_t* rax_44 = var_1e0.q
                    
                    if (rcx_31.d == ((0xffffffff << (var_e0.b & 0x1f)).q u>> 0x20).d
                            && var_1d0_1.q == &var_f8 && rax_44 == &var_108)
                        break
                    
                    int64_t* rdx_22 = nullptr
                    int64_t* r8_10 = *(*rax_44 + rcx_31 * 0x10)
                    
                    if (*(r8_10 + 0xc) u>= 3)
                        rdx_22 = r8_10
                    
                    sub_1417b4780(r15, rdx_22)
                    var_1d0_1:8.d &= not.d(var_1e0:0xc.d)
                    sub_14059bdd0(&var_1e0:8)
                
                int64_t** rdi_5 = var_180
                int32_t rbx_4 = rdi_5[1].d
                
                if (rbx_4 != 0)
                    var_130:4.d = 0x80
                    var_1e0.q = 0
                    void* r12_2 = nullptr
                    var_1e0:0xc.d = 0
                    int32_t i_2 = 0
                    __builtin_memset(&var_158, 0, 0x2c)
                    int32_t r15_2 = 0
                    int32_t var_128_1 = 0xffffffff
                    int32_t var_124_1 = 0
                    int64_t var_118_1 = 0
                    int32_t var_110_1 = 0
                    
                    if (rbx_4 s> 0)
                        sub_1409d96c0(&var_158, rbx_4)
                        int32_t rdx_25
                        
                        if (rbx_4 u< 4)
                            rdx_25 = 1
                        else
                            uint32_t rbx_5 = rbx_4 u>> 1
                            uint64_t rflags_2
                            int32_t temp0_9
                            temp0_9, rflags_2 = _bit_scan_reverse(rbx_5 + 8)
                            int32_t rcx_36
                            
                            if (rbx_5 == 0xfffffff8)
                                rcx_36 = 0x20
                            else
                                rcx_36 = 0x1f - temp0_9
                            
                            int32_t rcx_38 = rcx_36 << 0x1a s>> 0x1f
                            uint64_t rflags_3
                            char temp0_10
                            temp0_10, rflags_3 = _bit_scan_reverse(rbx_5 + 7)
                            char rdx_24
                            
                            if (rcx_38 == 0)
                                rdx_24 = 0x20
                            else
                                rdx_24 = 0x1f - temp0_10
                            
                            rdx_25 = 1 << ((not.d(rcx_38)).b & (0x20 - rdx_24))
                        
                        if (var_110_1 == 0 || var_110_1 s< rdx_25)
                            int32_t var_110_2 = rdx_25
                            sub_1408370c0(&var_158)
                    
                    int64_t* r14_3 = *rdi_5
                    int64_t rax_52 = sx.q(rdi_5[1].d)
                    var_1a8 = r14_3
                    void* rax_53 = &r14_3[rax_52]
                    var_1b8 = rax_53
                    
                    if (r14_3 != rax_53)
                        do
                            int64_t rdi_6 = *r14_3
                            
                            if (*sub_1408296b0(&var_158, &var_190, rdi_6) == 0xffffffff)
                                int64_t i_5 = sx.q(i_2)
                                i_2 = (i_5 + 1).d
                                i_4 = i_2
                                var_1e0:8.d = i_2
                                
                                if (i_2 s> r15_2)
                                    sub_1405a4f90(&var_1e0)
                                    i_2 = var_1e0:8.d
                                    r12_2 = var_1e0.q
                                    i_4 = i_2
                                
                                int64_t var_1e8_1 = 1
                                int64_t rax_56 = i_5 * 2
                                *(r12_2 + (rax_56 << 3)) = 0
                                *(r12_2 + (rax_56 << 3) + 8) = 0
                                int64_t* r13_4 = (sx.q(i_2 - 1) << 4) + r12_2
                                int64_t* var_1f0 = nullptr
                                sub_1405a4d70(&var_1f0)
                                int64_t* r15_3 = var_1f0
                                int32_t i = var_1e8_1.d
                                *r15_3 = rdi_6
                                
                                if (i != 0)
                                    do
                                        int64_t* rsi_2 = r15_3[sx.q(i - 1)]
                                        
                                        if (0 != 0)
                                            memmove(&r15_3[sx.q(i - 1)], &r15_3[sx.q(i)], 0 << 3)
                                        
                                        var_1e8_1.d = i - 1
                                        sub_1405c53d0(&var_1f0)
                                        var_1a0 = rsi_2
                                        void var_170
                                        int32_t* rax_61 = sub_1408296b0(&var_158, &var_170, rsi_2)
                                        int64_t* rdi_8
                                        void* r12_5
                                        
                                        if (*rax_61 == 0xffffffff)
                                            sub_140946410(&var_158, &var_180, &var_1a0, nullptr)
                                            int64_t rbx_9 = sx.q(r13_4[1].d)
                                            int32_t rax_62 = (rbx_9 + 1).d
                                            r13_4[1].d = rax_62
                                            
                                            if (rax_62 s> *(r13_4 + 0xc))
                                                sub_1405a4d70(r13_4)
                                            
                                            *(*r13_4 + (rbx_9 << 3)) = rsi_2
                                            int64_t* rax_64 = nullptr
                                            
                                            if (*(rsi_2 + 0xc) u>= 3)
                                                rax_64 = rsi_2
                                            
                                            int64_t* rcx_53 =
                                                (sx.q(rax_64[1].d) << 4) + *(*rax_64 + 0x500)
                                            rdi_8 = *rcx_53
                                            r12_5 = &rdi_8[sx.q(rcx_53[1].d) * 2]
                                        
                                        if (*rax_61 != 0xffffffff || rdi_8 == r12_5)
                                            i = var_1e8_1.d
                                            r15_3 = var_1f0
                                        else
                                            i = var_1e8_1.d
                                            r15_3 = var_1f0
                                            
                                            do
                                                int64_t r14_4 = *rdi_8
                                                
                                                if (*sub_1408296b0(&var_158, &var_188, r14_4)
                                                        == 0xffffffff)
                                                    int64_t i_3 = sx.q(i)
                                                    i = (i_3 + 1).d
                                                    var_1e8_1.d = i
                                                    
                                                    if (i s> var_1e8_1:4.d)
                                                        sub_1405a4d70(&var_1f0)
                                                        r14_4 = *rdi_8
                                                        i = var_1e8_1.d
                                                        r15_3 = var_1f0
                                                    
                                                    r15_3[i_3] = r14_4
                                                
                                                rdi_8 = &rdi_8[2]
                                            while (rdi_8 != r12_5)
                                    while (i != 0)
                                    
                                    i_2 = i_4
                                    r14_3 = var_1a8
                                    r12_2 = var_1e0.q
                                
                                if (r15_3 != 0)
                                    sub_140a74f90(r15_3)
                                
                                r15_2 = var_1e0:0xc.d
                            
                            r14_3 = &r14_3[1]
                            var_1a8 = r14_3
                        while (r14_3 != var_1b8)
                    
                    int32_t var_110_3 = 0
                    
                    if (var_118_1 != 0)
                        sub_140a74f90(var_118_1)
                    
                    var_150.d = 0
                    
                    if (var_150:4.d != 0)
                        sub_1405a5410(&var_158, 0)
                    
                    int32_t var_128_2 = 0xffffffff
                    int32_t var_124_2 = 0
                    sub_14059a8e0(&var_150:8, 0)
                    int64_t rcx_60 = var_140_1[2].q
                    
                    if (rcx_60 != 0)
                        sub_140a74f90(rcx_60)
                    
                    int64_t* rcx_61 = var_158
                    
                    if (rcx_61 != 0)
                        sub_140a74f90(rcx_61)
                    
                    int32_t r14_5 = 0
                    void* rbx_10 = r12_2
                    void* rdi_11 = (sx.q(i_2) << 4) + r12_2
                    
                    if (r12_2 != rdi_11)
                        do
                            int32_t temp8_1 = *(rbx_10 + 8)
                            
                            if (temp8_1 == 1)
                                sub_1417a3a00(&var_b8, **rbx_10)
                            else if (temp8_1 s> 1)
                                r14_5 += 1
                            
                            rbx_10 += 0x10
                        while (rbx_10 != rdi_11)
                    
                    r15 = arg1
                    i_4.w = 0
                    i_4:2.b = 0
                    sub_1417ab2e0(*r15, &var_210, r14_5, 0, &i_4)
                    void* rbx_11 = r12_2
                    
                    if (r12_2 != rdi_11)
                        int64_t* r14_6 = nullptr
                        
                        do
                            if (*(rbx_11 + 8) s> 1)
                                var_1e0.d = 0x3e99999a
                                var_1e0:4.d = 0x64
                                int64_t rcx_64 = *(r14_6 + var_210.q)
                                r14_6 = &r14_6[1]
                                var_1d0_1:8.q = rcx_64
                                var_1e0:8.w = 0x101
                                var_1e0:0xa.b = 1
                                var_1e0:0xc.d = 2
                                var_1d0_1.q = 0
                                int64_t* rax_68 =
                                    sub_1417aa790(r15, rbx_11, var_218, &var_88, &var_1e0)
                                int64_t* rcx_66 = var_218
                                *(*(*rax_68 + 0x4e8) + (sx.q(rax_68[1].d) << 2)) =
                                    *(*(*rcx_66 + 0x4e8) + (sx.q(rcx_66[1].d) << 2))
                                int64_t rdx_40 = *(*r15 + 0x208)
                                *(rdx_40 + (sx.q(rax_68[2].d) << 3)) =
                                    *(rdx_40 + (sx.q(var_218[2].d) << 3))
                                int64_t* rcx_73 = var_218
                                int64_t r9_5 = sx.q(rcx_73[1].d) * 3
                                int64_t r8_21 = *(*rcx_73 + 0x1b8)
                                int64_t rdx_41 = sx.q(rax_68[1].d) * 3
                                int64_t rcx_74 = *(*rax_68 + 0x1b8)
                                *(rcx_74 + (rdx_41 << 2)) = *(r8_21 + (r9_5 << 2))
                                *(rcx_74 + (rdx_41 << 2) + 8) = *(r8_21 + (r9_5 << 2) + 8)
                                int64_t* rcx_75 = var_218
                                int64_t r9_6 = sx.q(rcx_75[1].d) * 3
                                int64_t r8_22 = *(*rcx_75 + 0x1d0)
                                int64_t rdx_42 = sx.q(rax_68[1].d) * 3
                                int64_t rcx_76 = *(*rax_68 + 0x1d0)
                                *(rcx_76 + (rdx_42 << 2)) = *(r8_22 + (r9_6 << 2))
                                *(rcx_76 + (rdx_42 << 2) + 8) = *(r8_22 + (r9_6 << 2) + 8)
                                int64_t* rcx_77 = var_218
                                int64_t r9_7 = sx.q(rcx_77[1].d) * 3
                                int64_t r8_23 = *(*rcx_77 + 0x3f8)
                                int64_t rdx_43 = sx.q(rax_68[1].d) * 3
                                int64_t rcx_78 = *(*rax_68 + 0x3f8)
                                *(rcx_78 + (rdx_43 << 2)) = *(r8_23 + (r9_7 << 2))
                                *(rcx_78 + (rdx_43 << 2) + 8) = *(r8_23 + (r9_7 << 2) + 8)
                                int64_t* rcx_79 = var_218
                                int64_t r9_8 = sx.q(rcx_79[1].d) * 3
                                int64_t r8_24 = *(*rcx_79 + 0x410)
                                int64_t rdx_44 = sx.q(rax_68[1].d) * 3
                                int64_t rcx_80 = *(*rax_68 + 0x410)
                                uint128_t zmm0_1 = zx.o(*(r8_24 + (r9_8 << 2)))
                                var_1b8 = rax_68
                                *(rcx_80 + (rdx_44 << 2)) = zmm0_1.q
                                *(rcx_80 + (rdx_44 << 2) + 8) = *(r8_24 + (r9_8 << 2) + 8)
                                int64_t r8_25 = sx.q(rax_68[1].d) * 3
                                void* rax_92 = *rax_68
                                int64_t rcx_81 = *(rax_92 + 0x28)
                                int64_t rdx_45 = *(rax_92 + 0x3c8)
                                *(rdx_45 + (r8_25 << 2)) = *(rcx_81 + (r8_25 << 2))
                                *(rdx_45 + (r8_25 << 2) + 8) = *(rcx_81 + (r8_25 << 2) + 8)
                                void* rax_94 = *rax_68
                                int64_t r8_27 = sx.q(rax_68[1].d) * 2
                                *(*(rax_94 + 0x3e0) + (r8_27 << 3)) =
                                    *(*(rax_94 + 0x68) + (r8_27 << 3))
                                sub_140946410(&var_108, &var_188, &var_1b8, nullptr)
                            
                            rbx_11 += 0x10
                        while (rbx_11 != rdi_11)
                    
                    int64_t rcx_84 = var_210.q
                    
                    if (rcx_84 != 0)
                        sub_140a74f90(rcx_84)
                    
                    void* rbx_12 = r12_2
                    
                    if (i_2 != 0)
                        int32_t i_1
                        
                        do
                            int64_t rcx_85 = *rbx_12
                            
                            if (rcx_85 != 0)
                                sub_140a74f90(rcx_85)
                            
                            rbx_12 += 0x10
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                    
                    if (r12_2 != 0)
                        sub_140a74f90(r12_2)
            
            int32_t var_200_3 = 0xffffffff
            int32_t var_20c_3 = 1
            int64_t* var_208_2 = &var_f8
            int32_t rcx_87 = 0
            var_210 = 0
            int32_t r8_29 = 0
            int64_t var_1fc_2 = 0
            
            if (var_e0 != 0)
                int64_t* r10_3 = &var_f8
                
                if (var_e8 != 0)
                    r10_3 = var_e8
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(var_e0 - 1)
                int32_t rdx_50 = *r10_3
                
                if (rdx_50 != 0)
                label_1417b3d58:
                    int32_t rax_102 = neg.d(rdx_50) & rdx_50
                    uint64_t rflags_4
                    int32_t temp0_11
                    temp0_11, rflags_4 = _bit_scan_reverse(rax_102)
                    int32_t var_20c_4 = rax_102
                    int32_t r14_7
                    
                    if (rax_102 == 0)
                        r14_7 = 0x20
                    else
                        r14_7 = 0x1f - temp0_11
                    
                    int32_t rax_103 = r8_29 - r14_7 + 0x1f
                    
                    if (rax_103 s> var_e0)
                        rax_103 = var_e0
                    
                    var_1fc_2.d = rax_103
                else
                    while (true)
                        int64_t rdx_51 = sx.q(rcx_87)
                        r8_29 += 0x20
                        rcx_87 += 1
                        var_1fc_2:4.d = r8_29
                        var_210 = rcx_87
                        
                        if (rdx_51.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            var_1fc_2.d = var_e0
                            break
                        
                        rdx_50 = *(r10_3 + (rdx_51 << 2) + 4)
                        var_200_3 = 0xffffffff
                        
                        if (rdx_50 != 0)
                            goto label_1417b3d58
            
            zmm2 = var_200_3.o
            zmm0 = var_210.o
            var_158 = &var_108
            float var_140_2[0x4] = zmm2
            var_150 = zmm0
            zmm0 = var_158.o
            var_1fc_2.d = var_e0
            zmm1 = var_150
            zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0].q)
            var_1e0 = zmm0
            uint128_t var_1d0_2 = zmm1
            int64_t var_1c0_2 = zmm2.q
            
            while (true)
                int64_t rax_104 = sx.q(var_1d0_2:0xc.d)
                int64_t* rdx_52 = var_1e0.q
                
                if (rax_104.d == ((0xffffffff << (var_e0.b & 0x1f)).q u>> 0x20).d
                        && var_1d0_2.q == &var_f8 && rdx_52 == &var_108)
                    break
                
                sub_1417ba180(r15, *(*rdx_52 + rax_104 * 0x10))
                var_1d0_2:8.d &= not.d(var_1e0:0xc.d)
                sub_14059bdd0(&var_1e0:8)
            
            sub_1417aba00(r15, var_218)
    
    sub_14077e140(arg2, &var_108)
    int32_t var_c0_2 = 0
    
    if (var_c8 != 0)
        sub_140a74f90(var_c8)
    
    sub_14100e680(&var_108)
    result = arg2
else
    sub_14077e140(arg2, &var_108)
    int32_t var_c0_1 = 0
    
    if (var_c8 != 0)
        sub_140a74f90(var_c8)
    
    int64_t var_100
    var_100.d = 0
    int32_t var_d8_1 = 0xffffffff
    int32_t var_d4_1 = 0
    sub_14059a8e0(&var_f8, 0)
    
    if (var_e8 != 0)
        sub_140a74f90(var_e8)
    
    int64_t rcx_6 = var_108
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    result = arg2
__security_check_cookie(rax_1 ^ &var_258)
return result
