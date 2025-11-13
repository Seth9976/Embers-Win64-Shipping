// 函数: sub_141771780
// 地址: 0x141771780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x50)
uint64_t r14 = 0
int64_t* r11 = arg4
void* r9 = arg3
uint64_t var_1d8 = 0
int32_t var_1e0 = 0
int64_t rcx = sx.q(*(arg1 + 0x58)) << 2
uint64_t rcx_1 = rcx u>> 2

if (rdi u> rcx + rdi)
    rcx_1 = 0

int64_t rcx_2
int64_t rdi_1

if (rcx_1 != 0)
    rdi_1, rcx_2 = __memfill_u32(rdi, 0x7f7fffff, rcx_1)
void* r15 = arg6
int64_t rdi_2 = *(r15 + 0x10)
int64_t count = sx.q(*(r15 + 0x18))

if (rdi_2 u> count + rdi_2)
    count = 0

if (count != 0)
    __builtin_memset(rdi_2, 0, count)

void* r13 = arg7
int64_t rdi_3 = *(r13 + 0x10)
int64_t count_1 = sx.q(*(r13 + 0x18))

if (rdi_3 u> count_1 + rdi_3)
    count_1 = 0

if (count_1 != 0)
    __builtin_memset(rdi_3, 0, count_1)

void* r12 = arg8
int64_t rdi_4 = *(r12 + 0x10)
int64_t count_2 = sx.q(*(r12 + 0x18))

if (rdi_4 u> count_2 + rdi_4)
    count_2 = 0

if (count_2 != 0)
    __builtin_memset(rdi_4, 0, count_2)

int64_t* r10 = arg5
uint64_t result
uint128_t zmm1

if (r10[1].d s<= 0)
    *(arg1 + 0x98) = *(arg1 + 0x80)
    *(arg1 + 0xa0) = *(arg1 + 0x88)
    *(arg1 + 0xa4) = *(arg1 + 0x8c)
    *(arg1 + 0xac) = *(arg1 + 0x94)
else
    result = *(r9 + 0x28)
    int64_t rdx = sx.q(**r10) * 3
    zmm1 = zx.o(*(result + (rdx << 2)))
    int32_t rcx_4 = *(result + (rdx << 2) + 8)
    *(arg1 + 0x98) = zmm1.q
    *(arg1 + 0xa4) = zmm1.q
    *(arg1 + 0xa0) = rcx_4
    *(arg1 + 0xac) = rcx_4

int32_t var_1e0_1 = 0

if (r10[1].d s> 0)
    int64_t rcx_5 = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    int128_t zmm12 = 0x3f000000
    int128_t zmm13 = zx.o(0)
    int128_t zmm14 = 0x3f00068e
    int64_t var_1c0_1 = 0
    
    do
        void* r8
        r8.b = 2
        void* rsi_1 = *r11
        int32_t* rax_8 = *r10 + rcx_5
        int64_t rbx_1 = *(r9 + 0x28)
        int64_t rdi_5 = sx.q(*rax_8)
        void** const var_120
        sub_1417048d0(&var_120, 0, r8.b)
        int64_t rcx_7 = rdi_5 * 3
        var_120 = &data_142fc47b8
        int64_t rdx_2 = *(arg3 + 0x28)
        uint64_t var_110_1 = *(rbx_1 + (rcx_7 << 2))
        int32_t var_108_1 = *(rbx_1 + (rcx_7 << 2) + 8)
        uint64_t var_104_1 = *(rsi_1 + var_1c0_1)
        int32_t var_fc_1 = *(rsi_1 + var_1c0_1 + 8)
        int64_t rcx_8 = sx.q(*rax_8) * 3
        zmm1 = zx.o(*(rdx_2 + (rcx_8 << 2)))
        int32_t rax_13 = *(rdx_2 + (rcx_8 << 2) + 8)
        uint128_t zmm2 = zmm1
        uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        int64_t rcx_9 = sx.q(rax_8[1]) * 3
        int64_t rax_15 = sx.q(rax_8[2])
        float zmm5[0x4] = *(rdx_2 + (rcx_9 << 2))
        zmm7 = *(rdx_2 + (rcx_9 << 2) + 8)
        zmm6 = *(rdx_2 + (rcx_9 << 2) + 4)
        float temp0_2[0x4] = _mm_min_ss(zmm5[0], zmm1.d)
        float temp0_3[0x4] = _mm_max_ss(zmm5[0], zmm2.d)
        float temp0_4[0x4] = _mm_min_ss(zmm6[0], zmm0.d)
        zmm1 = __minss_xmmss_memss(zmm7.d, rax_13)
        zmm7 = __maxss_xmmss_memss(zmm7.d, rax_13)
        int64_t rcx_10 = rax_15 * 3
        zmm10 = *(rdx_2 + (rcx_10 << 2) + 4)
        zmm11 = *(rdx_2 + (rcx_10 << 2) + 8)
        zmm9 = *(rdx_2 + (rcx_10 << 2))
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_8[0x4] = _mm_max_ss(zmm6[0], zmm0.d)
        float temp0_9[0x4] = _mm_min_ss(zmm9[0], temp0_2[0])
        float temp0_10[0x4] = _mm_min_ss(zmm10[0], temp0_4[0])
        float temp0_11[0x4] = _mm_min_ss(zmm11[0], zmm1.d)
        zmm1 = *(arg1 + 0x98)
        float temp0_12[0x4] = _mm_max_ss(zmm9[0], temp0_3[0])
        float temp0_13[0x4] = _mm_max_ss(zmm10[0], temp0_8[0])
        zmm1 = _mm_min_ss(zmm1.d, temp0_9[0])
        float temp0_15[0x4] = _mm_max_ss(zmm11[0], zmm7.d)
        zmm2 = __minss_xmmss_memss(temp0_10.d, *(arg1 + 0x9c))
        zmm0 = __minss_xmmss_memss(temp0_11.d, *(arg1 + 0xa0))
        zmm1 = _mm_unpacklo_ps(zmm1, zmm2.q)
        zmm2 = __maxss_xmmss_memss(temp0_13.d, *(arg1 + 0xa8))
        *(arg1 + 0x98) = zmm1.q
        int32_t var_d8_1 = zmm0.d
        zmm1 = _mm_max_ss((*(arg1 + 0xa4)).d, temp0_12[0])
        *(arg1 + 0xa0) = var_d8_1
        zmm0 = __maxss_xmmss_memss(temp0_15.d, *(arg1 + 0xac))
        *(arg1 + 0xa4) = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
        *(arg1 + 0xac) = zmm0.d
        zmm0.d = (*(arg1 + 0x34)).d f* zmm14.d
        temp0_9[0] = temp0_9[0] f- zmm0.d
        zmm0.d = (*(arg1 + 0x38)).d f* zmm14.d
        temp0_9[0] = temp0_9[0] f- *(arg1 + 0x10)
        temp0_10[0] = temp0_10[0] f- zmm0.d
        zmm0.d = (*(arg1 + 0x3c)).d f* zmm14.d
        bool cond:1_1 = temp0_9[0] f>= zmm13.d
        temp0_10[0] = temp0_10[0] f- *(arg1 + 0x14)
        temp0_11[0] = temp0_11[0] f- zmm0.d
        zmm2.d = temp0_9.d f/ *(arg1 + 0x34)
        temp0_11[0] = temp0_11[0] f- *(arg1 + 0x18)
        zmm1.d = temp0_10.d f/ *(arg1 + 0x38)
        zmm0.d = temp0_11.d f/ *(arg1 + 0x3c)
        int32_t rax_18 = int.d(zmm2.d)
        int32_t rdx_3 = int.d(zmm0.d)
        int32_t var_1b0 = rax_18
        int32_t rcx_11 = int.d(zmm1.d)
        int32_t var_1a8_1 = rdx_3
        int32_t var_1ac_1 = rcx_11
        
        if (not(cond:1_1))
            var_1b0 = rax_18 - 1
        
        if (not(temp0_10[0] f>= zmm13.d))
            int32_t var_1ac_2 = rcx_11 - 1
        
        if (not(temp0_11[0] f>= zmm13.d))
            int32_t var_1a8_2 = rdx_3 - 1
        
        int32_t var_198
        sub_1417a90d0(arg1 + 0x10, &var_198, &var_1b0)
        float zmm3[0x4] = *(arg1 + 0x3c)
        zmm1.d = (*(arg1 + 0x34)).d f* zmm14.d
        zmm2.d = (*(arg1 + 0x38)).d f* zmm14.d
        zmm1.d = zmm1.d f+ temp0_12[0]
        zmm3[0] = zmm3[0] f* zmm14.d
        zmm2.d = zmm2.d f+ temp0_13[0]
        zmm3[0] = zmm3[0] + temp0_15[0]
        zmm1.d = zmm1.d f- *(arg1 + 0x10)
        zmm2.d = zmm2.d f- *(arg1 + 0x14)
        zmm3[0] = zmm3[0] f- *(arg1 + 0x18)
        zmm0.d = zmm1.d f/ *(arg1 + 0x34)
        int32_t rax_22 = int.d(zmm0.d)
        zmm0.d = zmm2.d f/ *(arg1 + 0x38)
        int32_t var_1a4 = rax_22
        int32_t rcx_13 = int.d(zmm0.d)
        zmm0.d = zmm3.d f/ *(arg1 + 0x3c)
        int32_t var_1a0_1 = rcx_13
        int32_t rdx_5 = int.d(zmm0.d)
        int32_t var_19c_1 = rdx_5
        
        if (not(zmm1.d f>= zmm13.d))
            var_1a4 = rax_22 - 1
        
        if (not(zmm2.d f>= zmm13.d))
            int32_t var_1a0_2 = rcx_13 - 1
        
        if (not(zmm3[0] f>= zmm13.d))
            int32_t var_19c_2 = rdx_5 - 1
        
        int32_t var_1d0
        sub_1417a90d0(arg1 + 0x10, &var_1d0, &var_1a4)
        int32_t rdx_7 = var_198
        int32_t rdi_7 = var_1d0
        int32_t var_1cc
        int32_t rcx_15 = var_1cc
        int32_t var_1e4_1 = rdx_7
        int32_t var_1c8
        int32_t var_194
        int32_t var_190
        
        if (rdx_7 s<= rdi_7)
            do
                int32_t rax_26 = var_194
                int32_t var_1e8_1 = rax_26
                
                if (rax_26 s<= rcx_15)
                    do
                        int32_t rbx_2 = var_190
                        
                        if (rbx_2 s<= var_1c8)
                            zmm9 = _mm_cvtepi32_ps(zx.o(rdx_7))
                            int32_t var_158 = rdx_7
                            int32_t var_154_1 = rax_26
                            zmm10 = _mm_cvtepi32_ps(zx.o(rax_26))
                            zmm9[0] = zmm9[0] f+ zmm12.d
                            zmm10[0] = zmm10[0] f+ zmm12.d
                            
                            do
                                int64_t rdx_8 = *(arg3 + 0x28)
                                int64_t rax_27 = sx.q(rax_8[2])
                                zmm9[0] = zmm9[0] f* *(arg1 + 0x34)
                                int32_t var_150_1 = rbx_2
                                zmm7.d = zmm10.d f* *(arg1 + 0x38)
                                int64_t rax_28 = sx.q(rax_8[1])
                                zmm9[0] = zmm9[0] f+ *(arg1 + 0x10)
                                zmm7.d = zmm7.d f+ *(arg1 + 0x14)
                                int64_t rax_29 = sx.q(*rax_8)
                                float temp0_25[0x4] = _mm_cvtepi32_ps(zx.o(rbx_2))
                                float var_178 = zmm9[0]
                                temp0_25[0] = temp0_25[0] f+ zmm12.d
                                int32_t var_174_1 = zmm7.d
                                temp0_25[0] = temp0_25[0] f* *(arg1 + 0x3c)
                                temp0_25[0] = temp0_25[0] f+ *(arg1 + 0x18)
                                float var_170_1 = temp0_25[0]
                                int32_t var_168
                                r8, zmm6, zmm7, zmm8, zmm9, zmm10, zmm12, zmm13, zmm14 =
                                    sub_1415c6840(&var_168, &var_120, rdx_8 + rax_29 * 0xc, 
                                    rdx_8 + rax_28 * 0xc, rdx_8 + rax_27 * 0xc, &var_178)
                                int32_t var_164
                                zmm0.d = var_164.d f- zmm7.d
                                zmm2.d = var_168.d f- zmm8[0]
                                int32_t var_160
                                zmm1.d = var_160.d f- zmm6[0]
                                rdx_7 = var_1e4_1
                                zmm0.d = zmm0.d f* zmm0.d
                                zmm2.d = zmm2.d f* zmm2.d
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm1.d
                                int64_t rcx_20 = sx.q(
                                    (*(arg1 + 0x44) * rdx_7 + var_1e8_1) * *(arg1 + 0x48) + rbx_2)
                                int64_t rax_35 = *(arg1 + 0x50)
                                zmm0 = _mm_sqrt_ss(0, zmm2.d)
                                
                                if (not(zmm0.d f>= *(rax_35 + (rcx_20 << 2))))
                                    *(rax_35 + (rcx_20 << 2)) = zmm0.d
                                    sub_14175cee0(arg9, &var_158)
                                    rdx_7 = var_1e4_1
                                
                                rbx_2 += 1
                            while (rbx_2 s<= var_1c8)
                            
                            rcx_15 = var_1cc
                            rax_26 = var_1e8_1
                        
                        rax_26 += 1
                        var_1e8_1 = rax_26
                    while (rax_26 s<= rcx_15)
                    
                    rdi_7 = var_1d0
                
                rdx_7 += 1
                var_1e4_1 = rdx_7
            while (rdx_7 s<= rdi_7)
            
            rdx_7 = var_198
            r14 = var_1d8
            r15 = arg6
            r13 = arg7
            r12 = arg8
        
        for (int32_t i = rdx_7 + 1; i s<= rdi_7; i += 1)
            int32_t rbx_4 = var_194 + 1
            
            if (rbx_4 s<= rcx_15)
                do
                    int32_t rdi_10 = var_190 + 1
                    
                    if (rdi_10 s<= var_1c8)
                        int32_t i_1 = i
                        int32_t var_184_1 = rbx_4
                        
                        do
                            int32_t var_180_1 = rdi_10
                            int64_t* rax_41
                            
                            if (*(sx.q((*(r15 + 4) * i + rbx_4) * *(r15 + 8) + rdi_10)
                                    + *(r15 + 0x10)) == 0)
                                r14 = zx.q(r14.d) | 1
                                int32_t var_148 = i - 1
                                int32_t var_144_1 = rbx_4
                                int32_t var_140_1 = rdi_10
                                rax_41, r8, zmm12, zmm13, zmm14 =
                                    sub_14177a920(arg1, arg3, rax_8, &var_120, &i_1, &var_148)
                            
                            if (*(sx.q((*(r15 + 4) * i + rbx_4) * *(r15 + 8) + rdi_10)
                                    + *(r15 + 0x10)) != 0 || rax_41.b == 0)
                                rax_41.b = 0
                            else
                                rax_41.b = 1
                            
                            if ((r14.b & 1) != 0)
                                r14 = zx.q(r14.d) & 0xfffffffe
                            
                            if (rax_41.b != 0)
                                *(sx.q((*(r15 + 4) * i + rbx_4) * *(r15 + 8) + rdi_10)
                                    + *(r15 + 0x10)) = 1
                            
                            int64_t* rax_54
                            
                            if (*(sx.q((*(r13 + 4) * i + rbx_4) * *(r13 + 8) + rdi_10)
                                    + *(r13 + 0x10)) == 0)
                                r14 = zx.q(r14.d) | 2
                                int32_t var_138_1 = rbx_4 - 1
                                int32_t i_2 = i
                                int32_t var_134_1 = rdi_10
                                rax_54, r8, zmm12, zmm13, zmm14 =
                                    sub_14177a920(arg1, arg3, rax_8, &var_120, &i_1, &i_2)
                            
                            if (*(sx.q((*(r13 + 4) * i + rbx_4) * *(r13 + 8) + rdi_10)
                                    + *(r13 + 0x10)) != 0 || rax_54.b == 0)
                                rax_54.b = 0
                            else
                                rax_54.b = 1
                            
                            if ((r14.b & 2) != 0)
                                r14 = zx.q(r14.d) & 0xfffffffd
                            
                            if (rax_54.b != 0)
                                *(sx.q((*(r13 + 4) * i + rbx_4) * *(r13 + 8) + rdi_10)
                                    + *(r13 + 0x10)) = 1
                            
                            int64_t* rax_67
                            
                            if (*(sx.q((*(r12 + 4) * i + rbx_4) * *(r12 + 8) + rdi_10)
                                    + *(r12 + 0x10)) == 0)
                                r14 = zx.q(r14.d) | 4
                                int32_t var_128_1 = rdi_10 - 1
                                int32_t i_3 = i
                                int32_t var_12c_1 = rbx_4
                                rax_67, r8, zmm12, zmm13, zmm14 =
                                    sub_14177a920(arg1, arg3, rax_8, &var_120, &i_1, &i_3)
                            
                            if (*(sx.q((*(r12 + 4) * i + rbx_4) * *(r12 + 8) + rdi_10)
                                    + *(r12 + 0x10)) != 0 || rax_67.b == 0)
                                rax_67.b = 0
                            else
                                rax_67.b = 1
                            
                            if ((r14.b & 4) != 0)
                                r14 = zx.q(r14.d) & 0xfffffffb
                            
                            if (rax_67.b != 0)
                                *(sx.q((*(r12 + 4) * i + rbx_4) * *(r12 + 8) + rdi_10)
                                    + *(r12 + 0x10)) = 1
                            
                            rdi_10 += 1
                        while (rdi_10 s<= var_1c8)
                        
                        rcx_15 = var_1cc
                        var_1d8 = r14
                    
                    rbx_4 += 1
                while (rbx_4 s<= rcx_15)
                
                rdi_7 = var_1d0
        
        var_120 = &data_142fc47b8
        sub_141706890(&var_120)
        result = zx.q(var_1e0_1 + 1)
        r10 = arg5
        rcx_5 = var_1c0_1 + 0xc
        r9 = arg3
        r11 = arg4
        var_1e0_1 = result.d
        var_1c0_1 = rcx_5
    while (result.d s< r10[1].d)

result.b = 1
return result
