// 函数: sub_1407411f0
// 地址: 0x1407411f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
int32_t r9 = 0
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
uint32_t i = zx.d(*rax) & 0x7fff

if (i s>= *rdx)
    int64_t rax_2 = 0
    int32_t* rcx_1 = nullptr
    
    do
        i -= *(rcx_1 + rdx)
        rax_2 += 1
        rcx_1 = rax_2 << 2
        r9 += 1
    while (i s>= *(rcx_1 + rdx))

int64_t rax_3 = *(arg2 + 0x18)
uint32_t var_a0 = 0xffffffff
int64_t rax_4 = *(rax_3 + (sx.q(r9) << 3))
int32_t* var_98 = nullptr
int32_t var_90 = 0
uint32_t var_88 = 0xffffffff
int64_t rdx_2 = sx.q(*(sx.q(i) + rax_4))
int64_t rax_5 = *(arg2 + 0x38)
int32_t* var_80 = nullptr
int32_t var_78 = 0
uint32_t var_70 = 0xffffffff
int32_t* r14 = *(rax_5 + (rdx_2 << 3))
int32_t* var_68 = nullptr
int32_t var_60 = 0
sub_140767bd0(&var_a0, arg2)
sub_140767bd0(&var_88, arg2)
sub_140767bd0(&var_70, arg2)
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_7 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
int32_t var_138 = rdx_7
int32_t rax_7
rax_7.b = rdx_7 != 0x7fff
void* var_128
void var_130

if (rdx_7 == 0x7fff)
    var_128 = &var_130
else
    var_128 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t rcx_10 = zx.d(rax_6[1]) & 0x7fff
*(arg2 + 0x10) = &rax_6[2]
int32_t var_120 = rcx_10
int32_t rax_8
rax_8.b = rcx_10 != 0x7fff
void* var_110
void var_118

if (rcx_10 == 0x7fff)
    var_110 = &var_118
else
    var_110 = zx.q(rcx_10 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_14 = zx.d(rax_6[2]) & 0x7fff
*(arg2 + 0x10) = &rax_6[3]
int32_t var_108 = rcx_14
int32_t rax_9
rax_9.b = rcx_14 != 0x7fff
void* var_f8
void var_100

if (rcx_14 == 0x7fff)
    var_f8 = &var_100
else
    var_f8 = zx.q(rcx_14 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_17 = zx.d(rax_6[3])
*(arg2 + 0x10) = &rax_6[4]
int32_t rdx_11 = rcx_17 & 0x7fff
int32_t var_f0 = rdx_11
int32_t result_1
result_1.b = rdx_11 != 0x7fff
void* var_e0
void var_e8

if (rdx_11 == 0x7fff)
    var_e0 = &var_e8
else
    var_e0 = zx.q(*(arg2 + 0x80) * rdx_11) + *(arg2 + 0x70)

if (sub_140d3c6e0(r14) != 0)
    sub_142591550()

int64_t result = *(r14 + 0x58)

if (result == 0)
label_140741771:
    int32_t i_1 = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_29 = var_128
            i_1 += 1
            var_128 = rdx_29 + (sx.q(rax_7) << 2)
            *rdx_29 = 0xffffffff
            void* rdx_30 = var_110
            var_110 = rdx_30 + (sx.q(rax_8) << 2)
            *rdx_30 = 0
            void* rdx_31 = var_f8
            var_f8 = rdx_31 + (sx.q(rax_9) << 2)
            *rdx_31 = 0
            void* rdx_32 = var_e0
            result = sx.q(result_1)
            var_e0 = rdx_32 + (result << 2)
            *rdx_32 = 0
        while (i_1 s< *(arg2 + 0x40))
else
    int64_t rcx_22 = **(result + 0x58)
    result = sx.q(r14[0x1a])
    int64_t r15_1 = *(rcx_22 + (result << 3))
    
    if (r14[0x86].b == 0)
        goto label_140741771
    
    void* rax_13 = sub_140d3c6e0(r14)
    void* rax_14
    void* rcx_24
    int64_t rdx_12
    
    if (rax_13 != 0)
        rax_14 = sub_142591550()
        rcx_24 = *(rax_13 + 0x10)
        rdx_12 = sx.q(*(rax_14 + 0x38))
    
    if (rax_13 == 0 || rdx_12.d s> *(rcx_24 + 0x38)
            || *(*(rcx_24 + 0x30) + (rdx_12 << 3)) != rax_14 + 0x30 || *(rax_13 + 0x430) == 0)
        result = r15_1 + 0x138
    else
        result = sub_141f66050(rax_13, r14[0x1a])
    
    if (result == 0)
        goto label_140741771
    
    if (*(arg2 + 0x40) s> 0)
        int32_t* r8_1 = nullptr
        int32_t* r9_1 = var_80
        int32_t* r10_1 = var_98
        int64_t rcx_28 = sx.q(var_90) << 2
        int64_t rdx_15 = sx.q(var_78) << 2
        int32_t* r12_1 = var_68
        int64_t r11_2 = sx.q(var_60) << 2
        int64_t var_b8_1 = r11_2
        int64_t var_c8_1 = rcx_28
        int64_t var_c0_1 = rdx_15
        int32_t* arg_20 = nullptr
        
        do
            int32_t rax_16 = *r10_1
            r10_1 += rcx_28
            int32_t r15_2 = *r12_1
            r12_1 += r11_2
            int32_t rax_17 = *r9_1
            r9_1 += rdx_15
            int64_t r11_3 = sx.q(r14[0x1a]) * 9
            int64_t rsi_2 = *(*(r14 + 0x58) + 0x318)
            uint128_t zmm1
            uint128_t zmm2
            
            if (r15_2 == 0xffffffff)
                int32_t rcx_40 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                zmm2.d = (rcx_40 u>> 9 | 0x3f800000).d f- 1f
                *(arg2 + 0x8c) = rcx_40 * 0xbb38435 + 0x3619636b
                zmm1.d = ((rcx_40 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
            else
                int64_t rcx_29 = *(arg2 + 0x90)
                int32_t r15_3 = r15_2 << 0x10
                int32_t rdx_16 = *(r8_1 + rcx_29)
                *(r8_1 + rcx_29) = rdx_16 + 1
                int32_t r8_4 =
                    (rax_17 * 0x19660d + 0x3c6ef35f) * ((rdx_16 | r15_3) * 0x19660d + 0x3c6ef35f)
                    + rax_16 * 0x19660d + 0x3c6ef35f
                int32_t rcx_32 = ((rdx_16 | r15_3) * 0x19660d + 0x3c6ef35f) * r8_4
                    + rax_17 * 0x19660d + 0x3c6ef35f
                int64_t rcx_34 = *(arg2 + 0x90)
                zmm2 = _mm_cvtepi32_ps(zx.o((r8_4
                    + rcx_32 * (r8_4 * rcx_32 + (rdx_16 | r15_3) * 0x19660d + 0x3c6ef35f)) s>> 8)
                    & 0xffffff)
                int32_t rdx_20 = *(arg_20 + rcx_34)
                zmm2.d = zmm2.d f* 5.96046448e-08f
                *(arg_20 + rcx_34) = rdx_20 + 1
                int32_t r8_11 =
                    (rax_17 * 0x19660d + 0x3c6ef35f) * ((rdx_20 | r15_3) * 0x19660d + 0x3c6ef35f)
                    + rax_16 * 0x19660d + 0x3c6ef35f
                int32_t rcx_37 = ((rdx_20 | r15_3) * 0x19660d + 0x3c6ef35f) * r8_11
                    + rax_17 * 0x19660d + 0x3c6ef35f
                zmm1.d = _mm_cvtepi32_ps(zx.o((r8_11
                    + rcx_37 * (r8_11 * rcx_37 + (rdx_20 | r15_3) * 0x19660d + 0x3c6ef35f)) s>> 8)
                    & 0xffffff).d f* 5.96046448e-08f
            
            int64_t rax_35 = *(rsi_2 + ((r11_3 + 1) << 3))
            uint128_t zmm0
            zmm0.d = _mm_cvtepi32_ps(zx.o(*(rsi_2 + (r11_3 << 3) + 0x10))).d f* zmm1.d
            int32_t r8_15 = int.d(zmm0.d)
            
            if ((rax_35.b & 1) != 0)
                rax_35 = (rax_35 s>> 1) + rsi_2 + ((r11_3 + 1) << 3)
            
            int64_t rdx_24 = sx.q(r8_15)
            
            if (not(zmm2.d f< *(rax_35 + (rdx_24 << 2))))
                int64_t rax_37 = *(rsi_2 + ((r11_3 + 3) << 3))
                
                if ((rax_37.b & 1) != 0)
                    rax_37 = (rax_37 s>> 1) + rsi_2 + ((r11_3 + 3) << 3)
                
                r8_15 = *(rax_37 + (rdx_24 << 2))
            
            int32_t* rdx_25 = var_128
            r11_2 = var_b8_1
            i_2 += 1
            var_128 = &rdx_25[sx.q(rax_7)]
            *rdx_25 = r8_15
            int32_t* rdx_26 = var_110
            r8_1 = &arg_20[1]
            arg_20 = r8_1
            int32_t rcx_47 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            zmm0.d = (rcx_47 u>> 9 | 0x3f800000).d f- 1f
            float temp0_4 = _mm_sqrt_ss((zx.o(0)).d, zmm0.d)
            *(arg2 + 0x8c) = rcx_47 * 0xbb38435 + 0x3619636b
            var_110 = &rdx_26[sx.q(rax_8)]
            zmm1.d = ((rcx_47 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
            zmm2.d = 1f - temp0_4
            zmm0.d = 1f f- zmm1.d
            *rdx_26 = zmm2.d
            int32_t* rdx_27 = var_f8
            zmm0.d = zmm0.d f* temp0_4
            var_f8 = &rdx_27[sx.q(rax_9)]
            *rdx_27 = zmm0.d
            float* rdx_28 = var_e0
            result = sx.q(result_1)
            var_e0 = &rdx_28[result]
            rcx_28 = var_c8_1
            *rdx_28 = temp0_4 f* zmm1.d
            rdx_15 = var_c0_1
        while (i_2 s< *(arg2 + 0x40))

return result
