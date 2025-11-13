// 函数: sub_14233a1a0
// 地址: 0x14233a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t* rsi = arg1
int32_t rcx = data_143f0f1a0
int32_t var_1c4 = arg3
sub_1419803d0(rcx)
int32_t rbx = 0
rsi[0x4a].d = 0

if (*(rsi + 0x254) != 0)
    sub_1405dadb0(&rsi[0x49], 0)

rsi[0x4c].d = 0

if (*(rsi + 0x264) != 0)
    sub_14083ad30(&rsi[0x4b], 0)

rsi[0x4e].d = 0

if (*(rsi + 0x274) != 0)
    sub_1405dadb0(&rsi[0x4d], 0)

rsi[0x50].d = 0

if (*(rsi + 0x284) != 0)
    sub_1405a5410(&rsi[0x4f], 0)

rsi[0x52].d = 0

if (*(rsi + 0x294) != 0)
    sub_1405a5410(&rsi[0x51], 0)

rsi[0x54].d = 0

if (*(rsi + 0x2a4) != 0)
    sub_1405dadb0(&rsi[0x53], 0)

rsi[0x56].d = 0

if (*(rsi + 0x2b4) != 0)
    sub_1405dadb0(&rsi[0x55], 0)

rsi[0x58].d = 0

if (*(rsi + 0x2c4) != 0)
    sub_1405dadb0(&rsi[0x57], 0)

rsi[0x5a].d = 0

if (*(rsi + 0x2d4) != 0)
    sub_1405dadb0(&rsi[0x59], 0)

rsi[0x5c].d = 0

if (*(rsi + 0x2e4) != 0)
    sub_1405dadb0(&rsi[0x5b], 0)

rsi[0x5e].d = 0

if (*(rsi + 0x2f4) != 0)
    sub_14083ad30(&rsi[0x5d], 0)

rsi[0x5e].d = 0

if (*(rsi + 0x2f4) != 0)
    sub_14083ad30(&rsi[0x5d], 0)

rsi[0x5f] = 0
sub_1422a4d10(&rsi[2])
sub_141997e80(&rsi[0x17])
sub_141997e80(&rsi[6])

if (data_143a2d2a0 == 3)
    sub_141e49500(&rsi[0x60], arg5, arg3)

int128_t zmm6 = sub_1422b9a20(&rsi[0x27])

if (arg2 != 0)
    zmm6 = sub_141997e80(&rsi[0x1f])

if (*(rsi + 0x204) u> 0)
    zmm6 = sub_141997e80(&rsi[0x38])

if (sub_1419803d0(data_143f0f1a0) != 0)
    zmm6 = sub_1422a4d10(&rsi[4])

int32_t r15_1 = data_143f0f1a0

if (sub_1405fba70(r15_1, 3) != 0)
    void* rdi_1 = *rsi
    void* r14_2 = sx.q(rsi[1].d) * 0xe8 + rdi_1
    
    if (rdi_1 != r14_2)
        do
            zmm6 = sub_141997e80(rdi_1 + 0x58)
            rdi_1 += 0xe8
        while (rdi_1 != r14_2)
        
        r15_1 = data_143f0f1a0

void* result = sub_1405fba70(r15_1, 3)

if (result.b != 0 && arg4[1].d s> 0)
    void* rax_5 = &rsi[0x49]
    *(rax_5 + 8) = 0
    
    if (*(rax_5 + 0xc) != 0)
        sub_1405dadb0(rax_5, 0)
    
    void* rcx_26 = &rsi[0x4b]
    *(rcx_26 + 8) = 0
    
    if (*(rcx_26 + 0xc) != 0)
        sub_14083ad30(rcx_26, 0)
    
    *(rsi + 0x2fc) = 0
    void* r12_1 = &rsi[0x53]
    int32_t rdx_1 = arg4[1].d
    *(r12_1 + 8) = 0
    
    if (*(r12_1 + 0xc) != rdx_1)
        sub_1405dadb0(r12_1, rdx_1)
    
    int32_t rdx_2 = arg4[1].d
    void* r15_2 = &rsi[0x55]
    void* var_180_1 = r15_2
    *(r15_2 + 8) = 0
    
    if (*(r15_2 + 0xc) != rdx_2)
        sub_1405dadb0(r15_2, rdx_2)
    
    int32_t rdx_3 = arg4[1].d
    void* r14_3 = &rsi[0x4f]
    *(r14_3 + 8) = 0
    
    if (*(r14_3 + 0xc) != rdx_3)
        sub_1405a5410(r14_3, rdx_3)
    
    int32_t rdx_4 = arg4[1].d
    void* r13_1 = &rsi[0x51]
    *(r13_1 + 8) = 0
    
    if (*(r13_1 + 0xc) != rdx_4)
        sub_1405a5410(r13_1, rdx_4)
    
    int32_t rdx_5 = arg4[1].d
    void* rcx_31 = &rsi[0x5b]
    void* var_170_1 = rcx_31
    *(rcx_31 + 8) = 0
    
    if (*(rcx_31 + 0xc) != rdx_5)
        sub_1405dadb0(rcx_31, rdx_5)
        rcx_31 = &rsi[0x5b]
    
    int32_t rax_33 = 0
    int32_t var_1f4_1 = 0
    int32_t i_9 = 0
    int32_t i_14
    int32_t j_2
    void** var_1e0
    void* var_1d8
    void* var_1c0
    void* var_1b0
    
    if (arg4[1].d s> 0)
        int128_t var_48_1 = zmm6
        void** r9 = nullptr
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        uint128_t zmm13
        uint128_t var_b8_1 = zmm13
        uint128_t zmm14
        uint128_t var_c8_1 = zmm14
        uint128_t zmm15
        uint128_t var_d8_1 = zmm15
        void* var_198_1 = nullptr
        var_1e0 = nullptr
        int32_t i
        
        do
            int64_t rdi_3 = sx.q(*(rcx_31 + 8))
            int32_t var_1f0_1 = *(rsi + 0x2fc)
            int32_t rax_7 = (rdi_3 + 1).d
            *(rcx_31 + 8) = rax_7
            
            if (rax_7 s> *(rcx_31 + 0xc))
                sub_1405a4cf0(rcx_31)
                r9 = var_1e0
                rcx_31 = &rsi[0x5b]
            
            zmm6 = data_142fc73d0
            zmm7 = data_142ff88c0
            int32_t rdx_7 = var_1c4
            *(*rcx_31 + (rdi_3 << 2)) = 0
            int64_t rax_9 = *arg4
            __builtin_memcpy(&var_1c0, 
                "\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\x"
            "ff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f", 
                0x20)
            void* rcx_33 = *(r9 + rax_9)
            i_14 = 0
            void* rax_10 = sub_1421496a0(rcx_33, rdx_7, &i_14)
            int32_t i_18 = i_14
            
            if (i_18 != 0)
                j_2 = 0
                
                if (i_18 s> 0)
                    int32_t var_1b4
                    zmm8 = var_1b4
                    void* rdi_4 = rax_10 + 8
                    int32_t var_1b8
                    zmm9 = var_1b8
                    zmm10 = var_1c0:4.d
                    zmm11 = var_1c0.d
                    int32_t var_1a4
                    zmm12 = var_1a4
                    int32_t var_1a8
                    zmm13 = var_1a8
                    zmm14 = var_1b0:4.d
                    zmm15 = var_1b0.d
                    int32_t r15_3 = var_1f4_1
                    int32_t j_4
                    
                    do
                        zmm7 = *(rdi_4 - 8)
                        uint128_t zmm5_1 = *(rdi_4 - 4)
                        uint128_t zmm4_1 = *rdi_4
                        uint128_t zmm0_1 = _mm_max_ss(zmm7.d, zmm11.d)
                        uint128_t zmm3 = *(rdi_4 + 4)
                        zmm7 = _mm_min_ss(zmm7.d, zmm15.d)
                        zmm6 = *(rdi_4 + 8)
                        bool cond:0_1 = *(rdi_4 + 0x10) u>= r15_3
                        int32_t temp0_3 = __maxss_xmmss_memss(zmm6.d, *(rdi_4 + 0xc))
                        zmm6 = __minss_xmmss_memss(zmm6.d, *(rdi_4 + 0xc))
                        int64_t rsi_1 = sx.q(*(rax_5 + 8))
                        zmm11 = zmm0_1
                        
                        if (cond:0_1)
                            r15_3 = *(rdi_4 + 0x10)
                        
                        zmm0_1 = _mm_max_ss(zmm5_1.d, zmm10.d)
                        zmm15 = zmm7
                        zmm5_1 = _mm_min_ss(zmm5_1.d, zmm14.d)
                        int32_t rax_11 = (rsi_1 + 1).d
                        *(rax_5 + 8) = rax_11
                        zmm10 = zmm0_1
                        zmm0_1 = _mm_max_ss(zmm4_1.d, zmm9.d)
                        zmm14 = zmm5_1
                        zmm4_1 = _mm_min_ss(zmm4_1.d, zmm13.d)
                        zmm9 = zmm0_1
                        zmm0_1 = _mm_max_ss(zmm3.d, temp0_3)
                        zmm13 = zmm4_1
                        zmm3 = _mm_min_ss(zmm3.d, zmm6.d)
                        zmm8 = _mm_max_ss(zmm0_1.d, zmm8.d)
                        zmm12 = _mm_min_ss(zmm3.d, zmm12.d)
                        
                        if (rax_11 s> *(rax_5 + 0xc))
                            sub_1405a4cf0(rax_5)
                        
                        *(*rax_5 + (rsi_1 << 2)) = *(rdi_4 + 0x10)
                        int64_t rsi_2 = sx.q(*(rcx_26 + 8))
                        int32_t rax_13 = (rsi_2 + 1).d
                        *(rcx_26 + 8) = rax_13
                        
                        if (rax_13 s> *(rcx_26 + 0xc))
                            sub_14083a7e0(rcx_26)
                        
                        int64_t rdx_11 = *rcx_26
                        int32_t rax_14 = *(rdi_4 + 0xc)
                        uint64_t var_168 = *(rdi_4 + 4)
                        int32_t var_160_1 = rax_14
                        int32_t rax_15 = *rdi_4
                        var_1d8 = *(rdi_4 - 8)
                        int32_t var_1d0_1 = rax_15
                        sub_142329b00(rdx_11 + rsi_2 * 0xc, &var_1d8, &var_168)
                        rdi_4 += 0x1c
                        rsi = arg1
                        j_4 = j_2 + 1
                        j_2 = j_4
                        *(rsi + 0x2fc) += 1
                    while (j_4 s< i_14)
                    var_1b4 = zmm8.d
                    r14_3 = &rsi[0x4f]
                    var_1b8 = zmm9.d
                    r13_1 = &rsi[0x51]
                    var_1c0:4.d = zmm10.d
                    var_1c0.d = zmm11.d
                    zmm6 = var_1c0.o
                    var_1f4_1 = r15_3
                    r15_2 = &rsi[0x55]
                    var_1a4 = zmm12.d
                    var_1a8 = zmm13.d
                    var_1b0:4.d = zmm14.d
                    var_1b0.d = zmm7.d
                    zmm7 = var_1b0.o
            else
                zmm6 = zx.o(0)
                zmm7 = zx.o(0)
            
            int32_t j = *(rsi + 0x2fc) - var_1f0_1
            int32_t* rdx_19
            
            do
                int64_t rsi_3 = sx.q(*(r12_1 + 8))
                int32_t rax_16 = (rsi_3 + 1).d
                *(r12_1 + 8) = rax_16
                
                if (rax_16 s> *(r12_1 + 0xc))
                    sub_1405a4cf0(r12_1)
                
                *(*r12_1 + (rsi_3 << 2)) = var_1f0_1
                int32_t j_3 = -1
                int64_t rsi_4 = sx.q(*(r15_2 + 8))
                int64_t rax_18 = sx.q(data_1439c7a6c) << 5
                
                if (rax_18 u<= 0xffffffff)
                    j_3 = rax_18.d
                
                int32_t j_1 = j
                
                if (j u> j_3)
                    j_1 = j_3
                
                j_2 = j_1
                int32_t rax_19 = (rsi_4 + 1).d
                *(r15_2 + 8) = rax_19
                
                if (rax_19 s> *(r15_2 + 0xc))
                    sub_1405a4cf0(r15_2)
                
                *(*r15_2 + (rsi_4 << 2)) = j_2
                int64_t rsi_5 = sx.q(*(r14_3 + 8))
                int32_t rax_20 = (rsi_5 + 1).d
                *(r14_3 + 8) = rax_20
                
                if (rax_20 s> *(r14_3 + 0xc))
                    sub_1405a4f90(r14_3)
                
                *((rsi_5 << 4) + *r14_3) = zmm6
                int64_t rsi_6 = sx.q(*(r13_1 + 8))
                int32_t rax_24 = (rsi_6 + 1).d
                *(r13_1 + 8) = rax_24
                
                if (rax_24 s> *(r13_1 + 0xc))
                    sub_1405a4f90(r13_1)
                
                rdx_19 = var_198_1
                int32_t rcx_45 = -1
                *((rsi_6 << 4) + *r13_1) = zmm7
                int64_t rax_29 = *var_170_1
                *(rdx_19 + rax_29) += 1
                int64_t rax_31 = sx.q(data_1439c7a6c) << 5
                
                if (rax_31 u<= 0xffffffff)
                    rcx_45 = rax_31.d
                
                if (j u<= rcx_45)
                    j = 0
                else
                    j -= rcx_45
                
                var_1f0_1 += rcx_45
            while (j != 0)
            
            i = i_9 + 1
            r9 = &var_1e0[1]
            rsi = arg1
            i_9 = i
            var_1e0 = r9
            var_198_1 = &rdx_19[1]
            rcx_31 = &rsi[0x5b]
        while (i s< arg4[1].d)
        rax_33 = var_1f4_1
    
    int32_t r9_2 = rsi[0x54].d
    int32_t i_12 = rax_33 + 1
    int32_t var_1f8_1 = r9_2
    int32_t rsi_7 = 0
    var_1c0 = nullptr
    void* rax_34 = nullptr
    int32_t i_17 = 0
    int32_t i_16 = i_12
    int32_t var_1b4_1 = 0
    var_1b0 = nullptr
    int32_t var_1f4_2 = 0
    int32_t var_1a4_1 = 0
    var_1d8 = nullptr
    int32_t var_1cc_1 = 0
    i_14 = i_12
    
    if (i_12 s> 0)
        sub_1405c4e40(&var_1d8)
        i_16 = i_12
        rax_34 = var_1d8
        r9_2 = var_1f8_1
        i_14 = i_16
    
    void* rdx_22 = rax_34
    
    if (i_12 != 0)
        int32_t i_1
        
        do
            *(rdx_22 + 0x10) = 0
            void* rcx_47 = rdx_22
            *(rdx_22 + 0x18) = 0
            *(rdx_22 + 0x1c) = 0x80
            void* rax_35 = *(rdx_22 + 0x10)
            
            if (rax_35 != 0)
                rcx_47 = rax_35
            
            rdx_22 += 0x20
            *rcx_47 = 0
            *(rcx_47 + 8) = 0
            i_1 = i_12
            i_12 -= 1
        while (i_1 != 1)
        rax_34 = var_1d8
    
    if (i_16 s> 0)
        void** rdi_6 = rax_34 + 0x18
        uint64_t i_10 = zx.q(i_16)
        uint64_t r14_6 = zx.q((r9_2 + 0x1f) u>> 5)
        var_1e0 = rdi_6
        uint64_t i_2
        
        do
            void* rsi_8 = &rdi_6[-3]
            int32_t r13_4 = *(rdi_6 + 4) + 0x1f
            *rdi_6 = r9_2
            uint32_t r13_5 = r13_4 u>> 5
            
            if (r14_6.d u<= r13_5)
                void* rax_41 = rdi_6[-1]
                
                if (r14_6.d == 0)
                    if (rax_41 != 0)
                        rsi_8 = rax_41
                    
                    if (r13_5 u> 8)
                        memset(rsi_8, 0, zx.q(r13_5) << 2)
                        r9_2 = var_1f8_1
                    else if (r13_5 != 0)
                        __builtin_memset(rsi_8, 0, zx.q(r13_5) << 2)
                        rdi_6 = var_1e0
                else
                    if (rax_41 != 0)
                        rsi_8 = rax_41
                    
                    int32_t rax_42 = (r14_6 - 1).d
                    
                    if (rax_42 s> 8)
                        memset(rsi_8, 0xff, (r14_6 << 2) + -fffffffffffffffc)
                    else if (rax_42 s> 0)
                        __builtin_memset(rsi_8, 0xffffffff, 
                            ((r14_6 << 2) + -fffffffffffffffc) u>> 2 << 2)
                        rdi_6 = var_1e0
                    
                    void* r9_3 = rsi_8 + (r14_6 << 2)
                    *(rsi_8 + (zx.q((r14_6 - 1).d) << 2)) =
                        0xffffffff u>> ((neg.d(*rdi_6)).b & 0x1f)
                    int32_t rdx_26 = r13_5 - r14_6.d
                    
                    if (rdx_26 s<= 8)
                        if (rdx_26 s> 0)
                            __builtin_memset(r9_3, 0, (zx.q(r13_5) - zx.q(r14_6.d)) << 2)
                            rdi_6 = var_1e0
                        
                        r9_2 = var_1f8_1
                    else
                        memset(r9_3, 0, (zx.q(r13_5) - zx.q(r14_6.d)) << 2)
                        r9_2 = var_1f8_1
            else
                sub_1405a4a00(rsi_8, 0, r14_6.d, 4)
                *(rdi_6 + 4) = r14_6.d << 5
                void* rax_39 = rdi_6[-1]
                
                if (rax_39 != 0)
                    rsi_8 = rax_39
                
                if (r14_6.d u> 8)
                    memset(rsi_8, 0xff, zx.q(r14_6.d) << 2)
                else if (r14_6.d != 0)
                    __builtin_memset(rsi_8, 0xffffffff, zx.q(r14_6.d) << 2)
                    rdi_6 = var_1e0
                
                uint64_t rdx_23 = zx.q((r14_6 - 1).d)
                *(rsi_8 + (rdx_23 << 2)) &= 0xffffffff u>> ((neg.d(*rdi_6)).b & 0x1f)
                r9_2 = var_1f8_1
            
            rdi_6 = &rdi_6[4]
            i_2 = i_10
            i_10 -= 1
            var_1e0 = rdi_6
        while (i_2 != 1)
        r15_2 = var_180_1
        rsi_7 = 0
    
    int32_t r11_1 = 0
    
    if (r9_2 s> 0)
        int64_t r10_1 = 0
        
        do
            int32_t i_3 = 0
            int32_t r14_7 = *(*r12_1 + r10_1)
            
            if (*(*r15_2 + r10_1) u> 0)
                void* rbx_1 = var_1d8
                uint64_t r8_12 = zx.q(r11_1) u>> 5
                
                do
                    void* rcx_66 = (sx.q(*(*rax_5 + (sx.q(i_3 + r14_7) << 2))) << 5) + rbx_1
                    void* rax_48 = *(rcx_66 + 0x10)
                    
                    if (rax_48 != 0)
                        rcx_66 = rax_48
                    
                    i_3 += 1
                    *(rcx_66 + (r8_12 << 2)) &= not.d(1 << (r11_1.b & 0x1f))
                while (i_3 u< *(*r15_2 + r10_1))
                
                r9_2 = var_1f8_1
                rbx = 0
            
            r11_1 += 1
            r10_1 += 4
        while (r11_1 s< r9_2)
        
        rsi_7 = var_1f4_2
    
    int32_t i_13 = i_14
    int64_t r13_7 = 0
    void* r12_2 = var_1d8
    int64_t rcx_67 = 0
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x2c)
    int32_t r8_13 = 0
    int32_t var_10c_1 = 0x80
    int32_t var_108_1 = 0xffffffff
    int32_t var_104_1 = 0
    int64_t var_f8_1 = 0
    int32_t var_f0_1 = 0
    j_2 = 0
    var_1c4 = 0
    
    if (i_13 s> 0)
        void* r14_8 = r12_2 + 0x18
        
        do
            void* rax_50 = *(r14_8 - 8)
            void* r15_4 = r14_8 - 0x18
            int32_t r9_6 = *r14_8
            void* rcx_68 = r15_4
            int32_t rdx_28 = 0
            
            if (rax_50 != 0)
                rcx_68 = rax_50
            
            int64_t rax_51 = 0
            uint64_t rdi_10 = zx.q((r9_6 + 0x1f) u>> 5)
            
            if (rdi_10 != 0)
                while (*(rcx_68 + (rax_51 << 2)) == 0xffffffff)
                    rdx_28 += 1
                    rax_51 += 1
                    
                    if (rax_51 s>= rdi_10)
                        break
            
            if (rdx_28 s< rdi_10.d)
                uint64_t rflags_1
                int32_t temp0_13
                temp0_13, rflags_1 = _bit_scan_forward(not.d(*(rcx_68 + (rax_51 << 2))))
                int32_t rdx_30 = (rdx_28 << 5) + temp0_13
                
                if (rdx_30 s< r9_6 && rdx_30 != 0xffffffff)
                    sub_142336dc0(&var_138, &var_1e0, r12_2)
                    int64_t rax_54 = sx.q(var_1e0.d)
                    int64_t rax_56
                    void* rax_57
                    
                    if (rax_54.d != 0xffffffff)
                        rax_56 = rax_54 * 0x30
                        rax_57 = rax_56 + r13_7
                    
                    int32_t j_5
                    
                    if (rax_54.d == 0xffffffff || rax_56 == neg.q(r13_7) || rax_57 == -0x20)
                        sub_142322b30(&var_138, r12_2, &j_2)
                        int64_t i_20 = sx.q(i_17)
                        j_5 = j_2
                        int32_t i_19 = (i_20 + 1).d
                        i_17 = i_19
                        j_2 = j_5 + 1
                        
                        if (i_19 s> var_1b4_1)
                            sub_1405a4f90(&var_1c0)
                            i_17 = i_19
                        
                        void* rax_64 = (i_20 << 4) + var_1c0
                        *rax_64 = 0
                        *(rax_64 + 8) = 0
                        var_1f4_2 = rsi_7 + 1
                        
                        if (rsi_7 + 1 s> var_1a4_1)
                            sub_1405c4e40(&var_1b0)
                            var_1f4_2 = rsi_7 + 1
                        
                        void* rsi_11 = (sx.q(rsi_7) << 5) + var_1b0
                        *(rsi_11 + 0x10) = 0
                        *(rsi_11 + 0x18) = 0
                        
                        if (rsi_11 != r15_4)
                            sub_14059a8e0(rsi_11, *r14_8)
                            int32_t rax_67 = *r14_8
                            *(rsi_11 + 0x18) = rax_67
                            
                            if (rax_67 != 0)
                                void* rdi_13 = *(r14_8 - 8)
                                void* r9_7 = *(rsi_11 + 0x10)
                                
                                if (rdi_13 != 0)
                                    r15_4 = rdi_13
                                
                                if (r9_7 != 0)
                                    rsi_11 = r9_7
                                
                                memcpy(rsi_11, r15_4, (zx.q(rax_67 + 0x1f) u>> 5 << 2).d)
                    else
                        j_5 = *(rax_57 + 0x20)
                    
                    int64_t* rdi_16 = (sx.q(j_5) << 4) + var_1c0
                    int64_t rsi_12 = sx.q(rdi_16[1].d)
                    int32_t rax_68 = (rsi_12 + 1).d
                    rdi_16[1].d = rax_68
                    
                    if (rax_68 s> *(rdi_16 + 0xc))
                        sub_1405a4cf0(rdi_16)
                    
                    r8_13 = var_1c4
                    *(*rdi_16 + (rsi_12 << 2)) = r8_13
                    r13_7 = var_138
            
            rsi_7 = var_1f4_2
            r8_13 += 1
            r12_2 += 0x20
            var_1c4 = r8_13
            r14_8 += 0x20
        while (r8_13 s< i_14)
        
        rcx_67 = var_f8_1
        r12_2 = var_1d8
        i_13 = i_14
    
    int32_t var_f0_2 = 0
    
    if (rcx_67 != 0)
        sub_140a74f90(rcx_67)
    
    sub_1417eaf00(&var_138)
    
    if (i_13 != 0)
        void* rdi_17 = r12_2 + 0x10
        int32_t i_4
        
        do
            int64_t rcx_81 = *rdi_17
            
            if (rcx_81 != 0)
                sub_140a74f90(rcx_81)
            
            rdi_17 += 0x20
            i_4 = i_13
            i_13 -= 1
        while (i_4 != 1)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)
    
    int64_t* r14_9 = arg1
    int32_t r12_3 = 1
    __builtin_memset(&var_138, 0, 0x2c)
    r14_9[0x5f].d = 1
    int32_t var_10c_2 = 0x80
    int32_t var_108_2 = 0xffffffff
    int32_t var_104_2 = 0
    int64_t var_f8_2 = 0
    int32_t var_f0_3 = 0
    var_1d8 = nullptr
    int32_t var_1d0_2
    var_1d0_2.q = 1
    sub_140679a80(&var_1d8)
    int32_t r13_8 = 0
    int32_t r15_5 = var_1f8_1
    *var_1d8 = 1
    
    if (r15_5 s> 0)
        uint64_t rsi_14 = zx.q((r15_5 + 0x1f) u>> 5)
        
        do
            int32_t var_13c_1 = 0x80
            int64_t var_158
            __builtin_memset(&var_158, 0, 0x18)
            int64_t* var_148
            
            if (rsi_14.d u> 4)
                sub_1405a4a00(&var_158, 0, rsi_14.d, 4)
                int64_t* r15_6 = &var_158
                int32_t var_13c_2 = rsi_14.d << 5
                
                if (var_148 != 0)
                    r15_6 = var_148
                
                if (rsi_14.d u> 8)
                    memset(r15_6, 0xff, zx.q(rsi_14.d) << 2)
                else if (rsi_14.d != 0)
                    __builtin_memset(r15_6, 0xffffffff, zx.q(rsi_14.d) << 2)
                
                uint64_t rdx_39 = zx.q((rsi_14 - 1).d)
                *(r15_6 + (rdx_39 << 2)) &= 0xffffffff u>> ((neg.d(r15_5)).b & 0x1f)
                r15_5 = var_1f8_1
            else if (rsi_14.d != 0)
                int32_t rax_75 = (rsi_14 - 1).d
                
                if (rax_75 s> 8)
                    memset(&var_158, 0xff, (rsi_14 << 2) + -fffffffffffffffc)
                else if (rax_75 s> 0)
                    __builtin_memset(&var_158, 0xffffffff, 
                        ((rsi_14 << 2) + -fffffffffffffffc) u>> 2 << 2)
                
                void* rdi_19 = &var_158 + (rsi_14 << 2)
                *(&var_158 + (zx.q((rsi_14 - 1).d) << 2)) = 0xffffffff u>> ((neg.d(r15_5)).b & 0x1f)
                
                if (4 - rsi_14.d s> 8)
                    memset(rdi_19, 0, sx.q(4 - rsi_14.d) << 2)
                else if (4 - rsi_14.d s> 0)
                    __builtin_memset(rdi_19, 0, sx.q(4 - rsi_14.d) << 2)
            
            int64_t* rdx_42 = &var_158
            
            if (var_148 != 0)
                rdx_42 = var_148
            
            uint64_t rcx_99 = zx.q(r13_8) u>> 5
            *(rdx_42 + (rcx_99 << 2)) &= not.d(r12_3)
            r13_8 += 1
            var_1e0.d = r13_8
            sub_142322b30(&var_138, &var_158, &var_1e0)
            int64_t rdi_20 = sx.q(var_1d0_2)
            int32_t rax_80 = (rdi_20 + 1).d
            var_1d0_2 = rax_80
            
            if (rax_80 s> var_1cc_1)
                sub_140679a80(&var_1d8)
            
            *(rdi_20 + var_1d8) = 1
            
            if (var_148 != 0)
                sub_140a74f90(var_148)
            
            r12_3 = rol.d(r12_3, 1)
        while (r13_8 s< r15_5)
        
        r14_9 = arg1
    
    int64_t r12_4 = sx.q(var_1f4_2)
    void* r13_9 = &r14_9[0x5f]
    *r13_9 += r15_5
    int32_t i_5 = 0
    int32_t rax_82 = *r13_9
    
    if (r12_4.d s> 0)
        int32_t r15_7 = r15_5 + 1
        
        do
            void* rdi_23 = (sx.q(i_5) << 5) + var_1b0
            sub_142336dc0(&var_138, &var_1e0, rdi_23)
            int64_t rax_83 = sx.q(var_1e0.d)
            
            if (rax_83.d == 0xffffffff)
            label_14233b1d9:
                var_1c4 = i_5 + r15_7
                sub_142322b30(&var_138, rdi_23, &var_1c4)
                int64_t rdi_27 = sx.q(var_1d0_2)
                int32_t rax_92 = (rdi_27 + 1).d
                var_1d0_2 = rax_92
                
                if (rax_92 s> var_1cc_1)
                    sub_140679a80(&var_1d8)
                
                *(rdi_27 + var_1d8) = 0
            else
                int64_t rax_85 = rax_83 * 0x30
                
                if (rax_85 == neg.q(var_138))
                    goto label_14233b1d9
                
                int32_t* r13_10 = rax_85 + var_138 + 0x20
                
                if (r13_10 == 0)
                    goto label_14233b1d9
                
                int64_t rdi_24 = sx.q(r14_9[0x5e].d)
                int32_t rax_87 = (rdi_24 + 1).d
                r14_9[0x5e].d = rax_87
                
                if (rax_87 s> *(r14_9 + 0x2f4))
                    sub_14083a7e0(&r14_9[0x5d])
                
                int32_t rcx_105 = *r13_10
                int64_t rdi_25 = rdi_24 * 3
                int64_t rdx_47 = r14_9[0x5d]
                r15_7 = var_1f8_1 + 1
                *(rdx_47 + (rdi_25 << 2) + 4) = 0
                *(rdx_47 + (rdi_25 << 2) + 8) = rcx_105
                *(rdx_47 + (rdi_25 << 2)) = i_5 + r15_7
                char* rdi_26 = sx.q(var_1d0_2)
                int32_t rax_89 = (&rdi_26[1]).d
                var_1d0_2 = rax_89
                
                if (rax_89 s> var_1cc_1)
                    sub_140679a80(&var_1d8)
                
                *(rdi_26 + var_1d8) = 1
            
            i_5 += 1
        while (i_5 s< r12_4.d)
        
        r13_9 = &r14_9[0x5f]
        rax_82 = *r13_9
    
    void* r15_9 = var_1b0
    *r13_9 = rax_82 + r12_4.d
    char var_1c8
    sub_142323920(r15_9, r12_4.d, var_1c8)
    void* rdi_28 = r15_9
    void* rsi_17 = (r12_4 << 5) + r15_9
    
    if (r15_9 != rsi_17)
        do
            sub_142322750(rdi_28, &var_138, &var_1d8, &r14_9[0x5d], r13_9)
            rdi_28 += 0x20
        while (rdi_28 != rsi_17)
        
        r15_9 = var_1b0
    
    void* rcx_111 = var_1d8
    
    if (rcx_111 != 0)
        sub_140a74f90(rcx_111)
    
    int32_t var_f0_4 = 0
    
    if (var_f8_2 != 0)
        sub_140a74f90(var_f8_2)
    
    result = sub_1417eaf00(&var_138)
    
    if (r12_4.d != 0)
        void* rdi_29 = r15_9 + 0x10
        int32_t i_6
        
        do
            int64_t rcx_114 = *rdi_29
            
            if (rcx_114 != 0)
                result = sub_140a74f90(rcx_114)
            
            rdi_29 += 0x20
            i_6 = r12_4.d
            r12_4 = zx.q(r12_4.d - 1)
        while (i_6 != 1)
    
    if (r15_9 != 0)
        result = sub_140a74f90(r15_9)
    
    uint64_t i_15 = zx.q(i_17)
    
    if (i_15.d s> 0)
        int32_t* r12_6 = var_1c0 + 8
        uint64_t i_11 = i_15
        uint64_t i_7
        
        do
            int64_t rsi_18 = sx.q(r14_9[0x58].d)
            int32_t rax_95 = (rsi_18 + 1).d
            r14_9[0x58].d = rax_95
            
            if (rax_95 s> *(r14_9 + 0x2c4))
                sub_1405a4cf0(&r14_9[0x57])
            
            *(r14_9[0x57] + (rsi_18 << 2)) = rbx
            int64_t rsi_19 = sx.q(r14_9[0x5a].d)
            var_1e0.d = *r12_6
            int32_t rax_98 = (rsi_19 + 1).d
            r14_9[0x5a].d = rax_98
            
            if (rax_98 s> *(r14_9 + 0x2d4))
                sub_1405a4cf0(&r14_9[0x59])
            
            result = r14_9[0x59]
            *(result + (rsi_19 << 2)) = var_1e0.d
            int64_t rsi_20 = sx.q(*r12_6)
            rbx += rsi_20.d
            
            if (rsi_20.d != 0)
                int32_t rax_99 = r14_9[0x4e].d
                int32_t rdx_56 = rsi_20.d + rax_99
                
                if (rdx_56 s> *(r14_9 + 0x274))
                    sub_1405dadb0(&r14_9[0x4d], rdx_56)
                    rax_99 = r14_9[0x4e].d
                
                result = memcpy(r14_9[0x4d] + (sx.q(rax_99) << 2), *(r12_6 - 8), (rsi_20 << 2).d)
                r14_9[0x4e].d += rsi_20.d
            
            r12_6 = &r12_6[4]
            i_7 = i_11
            i_11 -= 1
        while (i_7 != 1)
        i_15 = zx.q(i_17)
    
    if (*(r14_9 + 0x2fc) u> 0)
        result = sub_141997e80(&r14_9[0x41])
    
    void* rbx_2 = var_1c0
    void* rdi_31 = rbx_2
    
    if (i_15.d != 0)
        int32_t i_8
        
        do
            int64_t rcx_122 = *rdi_31
            
            if (rcx_122 != 0)
                result = sub_140a74f90(rcx_122)
            
            rdi_31 += 0x10
            i_8 = i_15.d
            i_15 = zx.q(i_15.d - 1)
        while (i_8 != 1)
    
    if (rbx_2 != 0)
        result = sub_140a74f90(rbx_2)

__security_check_cookie(rax_1 ^ &var_228)
return result
