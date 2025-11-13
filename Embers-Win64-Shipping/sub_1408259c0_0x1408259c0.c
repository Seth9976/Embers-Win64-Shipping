// 函数: sub_1408259c0
// 地址: 0x1408259c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
int32_t rdx = 0x10
void* rcx = nullptr
void* var_c8 = nullptr
int32_t rdi = 0
int32_t var_bc = 0x10
int64_t rsi = 0x10
void var_248

while (true)
    if (rdi + 1 s> rdx)
        sub_14083a510(&var_248, rdi)
        rcx = var_c8
    
    void* rdx_2 = &var_248
    
    if (rcx != 0)
        rdx_2 = rcx
    
    sub_140767bd0(rdx_2 + sx.q(rdi) * 0x18, arg1)
    int64_t temp0_1 = rsi
    rsi -= 1
    
    if (temp0_1 == 1)
        break
    
    rdx = var_bc
    rdi += 1
    rcx = var_c8

void* rcx_4 = nullptr
int32_t rdx_4 = 4
void* var_258 = nullptr
int32_t rdi_1 = 0
int32_t var_24c = 4
int64_t rsi_1 = 4
void var_2b8
int64_t result

while (true)
    if (rdi_1 + 1 s> rdx_4)
        sub_14083a640(&var_2b8, rdi_1)
        rcx_4 = var_258
    
    void* rdx_6 = &var_2b8
    
    if (rcx_4 != 0)
        rdx_6 = rcx_4
    
    int64_t r9_1 = sx.q(rdi_1) * 3
    int16_t* rax_6 = *(arg1 + 0x10)
    uint32_t r8_1 = zx.d(*rax_6)
    *(arg1 + 0x10) = &rax_6[1]
    int32_t r8_2 = r8_1 & 0x7fff
    *(rdx_6 + (r9_1 << 3)) = r8_2
    result.b = r8_2 != 0x7fff
    *(rdx_6 + (r9_1 << 3) + 4) = result.d
    void* rcx_8
    
    if (r8_2 == 0x7fff)
        rcx_8 = rdx_6 + ((r9_1 + 1) << 3)
    else
        rcx_8 = zx.q(*(arg1 + 0x80) * r8_2) + *(arg1 + 0x70)
    
    *(rdx_6 + (r9_1 << 3) + 0x10) = rcx_8
    int64_t temp1_1 = rsi_1
    rsi_1 -= 1
    
    if (temp1_1 == 1)
        break
    
    rdx_4 = var_24c
    rdi_1 += 1
    rcx_4 = var_258

int32_t i = 0

if (*(arg1 + 0x40) s> 0)
    int128_t zmm6
    int128_t var_18_1 = zmm6
    int128_t zmm7
    int128_t var_28_1 = zmm7
    int128_t zmm8
    int128_t var_38_1 = zmm8
    int128_t zmm11
    int128_t var_68_1 = zmm11
    int128_t zmm12
    int128_t var_78_1 = zmm12
    int128_t zmm13
    int128_t var_88_1 = zmm13
    
    do
        void* r8_3 = &var_248
        
        if (var_c8 != 0)
            r8_3 = var_c8
        
        int32_t* rdx_7 = *(r8_3 + 8)
        *(r8_3 + 8) = &rdx_7[sx.q(*(r8_3 + 0x10))]
        void* r8_4 = &var_248
        float zmm2 = *rdx_7
        float var_2f8 = zmm2
        
        if (var_c8 != 0)
            r8_4 = var_c8
        
        int128_t* rdx_8 = *(r8_4 + 0x20)
        *(r8_4 + 0x20) = rdx_8 + (sx.q(*(r8_4 + 0x28)) << 2)
        void* r8_5 = &var_248
        zmm8 = *rdx_8
        int32_t var_2f4_1 = zmm8.d
        
        if (var_c8 != 0)
            r8_5 = var_c8
        
        int128_t* rdx_9 = *(r8_5 + 0x38)
        *(r8_5 + 0x38) = rdx_9 + (sx.q(*(r8_5 + 0x40)) << 2)
        void* r8_6 = &var_248
        zmm11 = *rdx_9
        int32_t var_2f0_1 = zmm11.d
        
        if (var_c8 != 0)
            r8_6 = var_c8
        
        int128_t* rdx_10 = *(r8_6 + 0x50)
        *(r8_6 + 0x50) = rdx_10 + (sx.q(*(r8_6 + 0x58)) << 2)
        void* r8_7 = &var_248
        int32_t var_2ec_1 = (*rdx_10).d
        
        if (var_c8 != 0)
            r8_7 = var_c8
        
        int128_t* rdx_11 = *(r8_7 + 0x68)
        *(r8_7 + 0x68) = rdx_11 + (sx.q(*(r8_7 + 0x70)) << 2)
        void* r8_8 = &var_248
        zmm12 = *rdx_11
        int32_t var_2e8_1 = zmm12.d
        
        if (var_c8 != 0)
            r8_8 = var_c8
        
        int128_t* rdx_12 = *(r8_8 + 0x80)
        *(r8_8 + 0x80) = rdx_12 + (sx.q(*(r8_8 + 0x88)) << 2)
        void* r8_9 = &var_248
        int128_t zmm3 = *rdx_12
        int32_t var_2e4_1 = zmm3.d
        
        if (var_c8 != 0)
            r8_9 = var_c8
        
        int128_t* rdx_13 = *(r8_9 + 0x98)
        *(r8_9 + 0x98) = rdx_13 + (sx.q(*(r8_9 + 0xa0)) << 2)
        void* r8_10 = &var_248
        zmm6 = *rdx_13
        int32_t var_2e0_1 = zmm6.d
        
        if (var_c8 != 0)
            r8_10 = var_c8
        
        int128_t* rdx_14 = *(r8_10 + 0xb0)
        *(r8_10 + 0xb0) = rdx_14 + (sx.q(*(r8_10 + 0xb8)) << 2)
        void* r8_11 = &var_248
        int32_t var_2dc_1 = (*rdx_14).d
        int128_t zmm1
        zmm1.d = zmm3.d f+ zmm2
        
        if (var_c8 != 0)
            r8_11 = var_c8
        
        int128_t* rdx_15 = *(r8_11 + 0xc8)
        *(r8_11 + 0xc8) = rdx_15 + (sx.q(*(r8_11 + 0xd0)) << 2)
        void* r8_12 = &var_248
        zmm7 = *rdx_15
        int32_t var_2d8_1 = zmm7.d
        
        if (var_c8 != 0)
            r8_12 = var_c8
        
        int128_t* rdx_16 = *(r8_12 + 0xe0)
        *(r8_12 + 0xe0) = rdx_16 + (sx.q(*(r8_12 + 0xe8)) << 2)
        void* r8_13 = &var_248
        zmm13 = *rdx_16
        int32_t var_2d4_1 = zmm13.d
        
        if (var_c8 != 0)
            r8_13 = var_c8
        
        int128_t* rdx_17 = *(r8_13 + 0xf8)
        *(r8_13 + 0xf8) = rdx_17 + (sx.q(*(r8_13 + 0x100)) << 2)
        void* r8_14 = &var_248
        int128_t zmm4 = *rdx_17
        int32_t var_2d0_1 = zmm4.d
        
        if (var_c8 != 0)
            r8_14 = var_c8
        
        int128_t* rdx_18 = *(r8_14 + 0x110)
        *(r8_14 + 0x110) = rdx_18 + (sx.q(*(r8_14 + 0x118)) << 2)
        void* r8_15 = &var_248
        int32_t var_2cc_1 = (*rdx_18).d
        
        if (var_c8 != 0)
            r8_15 = var_c8
        
        int128_t* rdx_19 = *(r8_15 + 0x128)
        *(r8_15 + 0x128) = rdx_19 + (sx.q(*(r8_15 + 0x130)) << 2)
        void* r8_16 = &var_248
        int32_t var_2c8_1 = (*rdx_19).d
        
        if (var_c8 != 0)
            r8_16 = var_c8
        
        int128_t* rdx_20 = *(r8_16 + 0x140)
        *(r8_16 + 0x140) = rdx_20 + (sx.q(*(r8_16 + 0x148)) << 2)
        void* r8_17 = &var_248
        int32_t var_2c4_1 = (*rdx_20).d
        
        if (var_c8 != 0)
            r8_17 = var_c8
        
        int128_t* rdx_21 = *(r8_17 + 0x158)
        *(r8_17 + 0x158) = rdx_21 + (sx.q(*(r8_17 + 0x160)) << 2)
        void* r8_18 = &var_248
        int32_t var_2c0_1 = (*rdx_21).d
        
        if (var_c8 != 0)
            r8_18 = var_c8
        
        int128_t* rdx_22 = *(r8_18 + 0x170)
        *(r8_18 + 0x170) = rdx_22 + (sx.q(*(r8_18 + 0x178)) << 2)
        int32_t var_2bc_1 = (*rdx_22).d
        zmm1.d = zmm1.d f+ zmm4.d
        int128_t zmm0
        
        if (zmm1.d f<= 0f)
            int64_t r9_2
            r9_2.b = zmm3.d f> zmm2
            
            if (zmm4.d f> (&var_2f8)[r9_2 * 5])
                r9_2 = 2
            
            int64_t rdx_23 = sx.q(*(&data_142dd6e10 + (r9_2 << 2)))
            int64_t r8_19 = sx.q(*(&data_142dd6e10 + (rdx_23 << 2)))
            zmm0.d = (&var_2f8)[r9_2 * 5].d f- (&var_2f8)[rdx_23 * 5]
            zmm0.d = zmm0.d f- (&var_2f8)[r8_19 * 5]
            zmm0.d = zmm0.d f+ 1f
            zmm4 = _mm_rsqrt_ss(zmm0.d, zmm0.d)
            zmm3.d = zmm0.d f* 0.5f
            zmm0.d = zmm4.d f* zmm4.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm0.d = zmm4.d f* (0.5f f- zmm1.d)
            zmm4.d = zmm4.d f+ zmm0.d
            zmm1.d = zmm4.d f* zmm4.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = 0.5f f- zmm3.d
            zmm1.d = zmm4.d f* zmm0.d
            zmm4.d = zmm4.d f+ zmm1.d
            zmm0.d = 0.5f f/ zmm4.d
            zmm4.d = zmm4.d f* 0.5f
            int32_t var_b8
            (&var_b8)[r9_2] = zmm0.d
            zmm0.d = (&var_2f8)[r8_19 + (rdx_23 << 2)].d f- (&var_2f8)[rdx_23 + (r8_19 << 2)]
            zmm0.d = zmm0.d f* zmm4.d
            int32_t var_ac_1 = zmm0.d
            zmm0.d = (&var_2f8)[rdx_23 + (r9_2 << 2)].d f+ (&var_2f8)[r9_2 + (rdx_23 << 2)]
            zmm0.d = zmm0.d f* zmm4.d
            (&var_b8)[rdx_23] = zmm0.d
            zmm0.d = (&var_2f8)[r9_2 + (r8_19 << 2)].d f+ (&var_2f8)[r8_19 + (r9_2 << 2)]
            zmm0.d = zmm0.d f* zmm4.d
            (&var_b8)[r8_19] = zmm0.d
            zmm6 = var_b8
            int32_t var_b4
            zmm7 = var_b4
            int32_t var_b0
            zmm8 = var_b0
            zmm0 = var_ac_1
        else
            zmm1.d = zmm1.d f+ 1f
            zmm6.d = zmm6.d f- zmm13.d
            zmm7.d = zmm7.d f- zmm11.d
            zmm8.d = zmm8.d f- zmm12.d
            zmm4 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
            zmm3.d = zmm1.d f* 0.5f
            zmm0.d = zmm4.d f* zmm4.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm0.d = zmm4.d f* (0.5f f- zmm1.d)
            zmm4.d = zmm4.d f+ zmm0.d
            zmm1.d = zmm4.d f* zmm4.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = 0.5f f- zmm3.d
            zmm1.d = zmm4.d f* zmm0.d
            zmm4.d = zmm4.d f+ zmm1.d
            zmm0.d = 0.5f f/ zmm4.d
            zmm4.d = zmm4.d f* 0.5f
            zmm6.d = zmm6.d f* zmm4.d
            zmm7.d = zmm7.d f* zmm4.d
            zmm8.d = zmm8.d f* zmm4.d
        
        void* r8_20 = &var_2b8
        
        if (var_258 != 0)
            r8_20 = var_258
        
        int32_t* rdx_24 = *(r8_20 + 0x10)
        *(r8_20 + 0x10) = &rdx_24[sx.q(*(r8_20 + 4))]
        void* r8_21 = &var_2b8
        *rdx_24 = zmm6.d
        
        if (var_258 != 0)
            r8_21 = var_258
        
        int32_t* rdx_25 = *(r8_21 + 0x28)
        *(r8_21 + 0x28) = &rdx_25[sx.q(*(r8_21 + 0x1c))]
        void* r8_22 = &var_2b8
        *rdx_25 = zmm7.d
        
        if (var_258 != 0)
            r8_22 = var_258
        
        int32_t* rdx_26 = *(r8_22 + 0x40)
        *(r8_22 + 0x40) = &rdx_26[sx.q(*(r8_22 + 0x34))]
        void* r8_23 = &var_2b8
        *rdx_26 = zmm8.d
        
        if (var_258 != 0)
            r8_23 = var_258
        
        i += 1
        int32_t* rdx_27 = *(r8_23 + 0x58)
        result = sx.q(*(r8_23 + 0x4c))
        *(r8_23 + 0x58) = &rdx_27[result]
        *rdx_27 = zmm0.d
    while (i s< *(arg1 + 0x40))

if (var_258 != 0)
    result = sub_140a74f90(var_258)

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

__security_check_cookie(rax_1 ^ &var_328)
return result
