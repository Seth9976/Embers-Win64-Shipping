// 函数: sub_141246530
// 地址: 0x141246530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x168) == 0)
    return &__return_addr

sub_1412392c0(arg1 + 0x198, *(arg1 + 0xa8))
int128_t zmm6 = 0x3a83126f
float temp0_1 = *(arg1 + 0x15c)
0.00100000005f - temp0_1
int128_t zmm7 = *(arg1 + 0x158)
float temp1_1 = *(*(arg1 + 0xa8) + 0x98)
0.00100000005f - temp1_1
uint64_t rax
rax.b = 0.00100000005f < temp1_1
int64_t var_1f0
void* var_1e8
int64_t var_158

if (*(arg1 + 0x120) != 0)
    *(arg1 + 0x16c) = 1 - *(arg1 + 0x16c)
    sub_1419a2ec0(*(arg3 + 0x5150), &var_1f0, &data_143e82950, 0)
    int64_t r13_1 = var_1f0
    void* r15_1 = nullptr
    
    if (r13_1 != 0)
        int64_t rdx_2 = sx.q(*(r13_1 + 0x10c))
        int32_t var_1f8
        var_1f8.q = rdx_2
        int64_t* rsi_1 = *(var_1e8 + 0x10)
        int64_t rax_3 = rdx_2
        int64_t r15_2 = rsi_1[3]
        
        if (*(r15_2 + (rdx_2 << 3)) == 0)
            sub_1419ccf30(rsi_1, rdx_2.d)
            rax_3 = var_1f8.q
            r15_2 = rsi_1[3]
        
        r15_1 = *(r15_2 + (rax_3 << 3))
    
    *(arg2 + 0x1b0) = r15_1
    sub_14198aa60(r15_1)
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_6[3]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_6[3]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    var_158 = 0
    *rax_5 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142dd5b40
    rcx_6[2] = r15_1
    sub_141227d40(arg1, &var_158)
    sub_14123aef0(r13_1, arg2, &var_158)
    sub_1419cd1c0(arg2, r13_1, 8, 8, 8)
    sub_141245b70(r13_1, arg2, &var_158)
    zmm6 = sub_1405d1550(&var_158)
    rax = zx.q(rax.b)

char arg_8

if (rax.b != 0)
    *(arg1 + 0x16c) = 1 - *(arg1 + 0x16c)
    sub_1419a2ec0(*(arg3 + 0x5150), &var_1f0, &data_143e82a50, 0)
    int64_t r13_2 = var_1f0
    void* r15_3 = nullptr
    
    if (r13_2 != 0)
        int64_t rdx_8 = sx.q(*(r13_2 + 0x10c))
        arg_8.q = rdx_8
        int64_t* rsi_2 = *(var_1e8 + 0x10)
        int64_t rax_9 = rdx_8
        int64_t r15_4 = rsi_2[3]
        
        if (*(r15_4 + (rdx_8 << 3)) == 0)
            sub_1419ccf30(rsi_2, rdx_8.d)
            rax_9 = arg_8.q
            r15_4 = rsi_2[3]
        
        r15_3 = *(r15_4 + (rax_9 << 3))
    
    *(arg2 + 0x1b0) = r15_3
    sub_14198aa60(r15_3)
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_20[3]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_20[3]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    var_158 = 0
    *rax_11 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    *rcx_20 = &data_142dd5b40
    rcx_20[2] = r15_3
    sub_141227d40(arg1, &var_158)
    sub_14123aef0(r13_2, arg2, &var_158)
    sub_1412392c0(arg1 + 0x198, *(arg1 + 0xa8))
    sub_1419cd1c0(arg2, r13_2, 8, 8, 8)
    sub_141245b70(r13_2, arg2, &var_158)
    zmm6 = sub_1405d1550(&var_158)

int32_t r13_3 = 0
arg_8.d = 0
int32_t rax_14 = *(data_143e81e98 + 4)
void* var_1e0
void* var_1d8

if (rax_14 s> 0)
    int32_t rax_15
    rax_15.b = zmm7.d f> zmm6.d
    int32_t r15_6 = rax_15 | 2
    
    if (0.00100000005f < temp0_1 == 0)
        r15_6 = rax_15
    
    uint64_t rcx_31 = zx.q(r15_6) | 4
    bool arg_20
    arg_20.d = rcx_31.d
    
    do
        *(arg1 + 0x16c) = 1 - *(arg1 + 0x16c)
        
        if (r13_3 s>= *(data_143e81ff8 + 4))
            rcx_31 = zx.q(r15_6)
        
        void* rax_18
        void* rsi_3
        
        switch (rcx_31)
            case 0
                void* var_1c8
                sub_1419a2ec0(*(arg3 + 0x5150), &var_1c8, &data_143e86480, 0)
                void* var_1c0
                rax_18 = var_1c0
                rsi_3 = var_1c8
            case 1
                void* var_1b8
                sub_1419a2ec0(*(arg3 + 0x5150), &var_1b8, &data_143e865e0, 0)
                void* var_1b0
                rax_18 = var_1b0
                rsi_3 = var_1b8
            case 2
                void* var_1a8
                sub_1419a2ec0(*(arg3 + 0x5150), &var_1a8, &data_143e86740, 0)
                void* var_1a0
                rax_18 = var_1a0
                rsi_3 = var_1a8
            case 3
                void* var_198
                sub_1419a2ec0(*(arg3 + 0x5150), &var_198, &data_143e868a0, 0)
                void* var_190
                rax_18 = var_190
                rsi_3 = var_198
            case 4
                void* var_188
                sub_1419a2ec0(*(arg3 + 0x5150), &var_188, &data_143e86a00, 0)
                void* var_180
                rax_18 = var_180
                rsi_3 = var_188
            case 5
                void* var_178
                sub_1419a2ec0(*(arg3 + 0x5150), &var_178, &data_143e86b60, 0)
                void* var_170
                rax_18 = var_170
                rsi_3 = var_178
            case 6
                void* var_168
                sub_1419a2ec0(*(arg3 + 0x5150), &var_168, &data_143e86cc0, 0)
                void* var_160
                rax_18 = var_160
                rsi_3 = var_168
            case 7
                sub_1419a2ec0(*(arg3 + 0x5150), &var_1e0, &data_143e86e20, 0)
                rax_18 = var_1d8
                rsi_3 = var_1e0
        
        void* r13_4 = nullptr
        
        if (rsi_3 != 0)
            int64_t rdx_22 = sx.q(*(rsi_3 + 0x10c))
            int64_t* rax_19 = *(rax_18 + 0x10)
            int64_t rcx_42 = rdx_22
            var_1f0 = rdx_22
            int64_t r13_5 = rax_19[3]
            
            if (*(r13_5 + (rdx_22 << 3)) == 0)
                sub_1419ccf30(rax_19, rdx_22.d)
                rcx_42 = var_1f0
                r13_5 = rax_19[3]
            
            r13_4 = *(r13_5 + (rcx_42 << 3))
        
        *(arg2 + 0x1b0) = r13_4
        sub_14198aa60(r13_4)
        void* r8_4 = arg2 + 0x30
        void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_20 = &rcx_47[3]
        
        if (rax_20 u> *(r8_4 + 8))
            sub_140b0e3d0(r8_4, 0x20)
            r8_4 = arg2 + 0x30
            rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_20 = &rcx_47[3]
        
        *r8_4 = rax_20
        void**** rax_21 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        var_158 = 0
        *rax_21 = rcx_47
        *(arg2 + 8) = &rcx_47[1]
        rcx_47[1] = 0
        rcx_47[2] = r13_4
        int32_t r13_7 = arg_8.d
        *rcx_47 = &data_142dd5b40
        *(*(arg1 + 0xa8) + 0xbc) = r13_7
        sub_141227d40(arg1, &var_158)
        sub_14123aef0(rsi_3, arg2, &var_158)
        sub_1419cd1c0(arg2, rsi_3, 8, 8, 8)
        sub_141245b70(rsi_3, arg2, &var_158)
        sub_1405d1550(&var_158)
        rcx_31 = zx.q(arg_20.d)
        r13_3 = r13_7 + 1
        arg_8.d = r13_3
    while (r13_3 s< rax_14)

*(arg1 + 0x16c) = 1 - *(arg1 + 0x16c)
sub_1419a2ec0(*(arg3 + 0x5150), &var_1e0, &data_143e82b50, 0)
void* r15_7 = var_1e0
void* r14_1 = nullptr

if (r15_7 != 0)
    int64_t rdx_28 = sx.q(*(r15_7 + 0x10c))
    int64_t* rsi_4 = *(var_1d8 + 0x10)
    int64_t r14_2 = rsi_4[3]
    
    if (*(r14_2 + (rdx_28 << 3)) == 0)
        sub_1419ccf30(rsi_4, rdx_28.d)
        r14_2 = rsi_4[3]
    
    r14_1 = *(r14_2 + (rdx_28 << 3))

*(arg2 + 0x1b0) = r14_1
sub_14198aa60(r14_1)
void*** rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_25 = &rcx_61[3]

if (rax_25 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_25 = &rcx_61[3]

*(arg2 + 0x30) = rax_25
void**** rax_26 = *(arg2 + 8)
*(arg2 + 0x14) += 1
var_158 = 0
*rax_26 = rcx_61
*(arg2 + 8) = &rcx_61[1]
rcx_61[1] = 0
*rcx_61 = &data_142dd5b40
rcx_61[2] = r14_1
sub_141227d40(arg1, &var_158)
sub_14123aef0(r15_7, arg2, &var_158)
sub_1412392c0(arg1 + 0x198, *(arg1 + 0xa8))
sub_1419cd1c0(arg2, r15_7, 8, 8, 8)
sub_141245b70(r15_7, arg2, &var_158)
return sub_1405d1550(&var_158)
