// 函数: sub_140741800
// 地址: 0x140741800
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
int64_t result_1 = 0
int32_t var_90 = 0
uint32_t var_88 = 0xffffffff
int64_t rdx_2 = sx.q(*(sx.q(i) + rax_4))
int64_t rax_5 = *(arg2 + 0x38)
int32_t* var_80 = nullptr
int32_t var_78 = 0
uint32_t var_70 = 0xffffffff
int32_t* rsi = *(rax_5 + (rdx_2 << 3))
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
int32_t* var_128
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
int32_t result_2
result_2.b = rdx_11 != 0x7fff
void* var_e0
void var_e8

if (rdx_11 == 0x7fff)
    var_e0 = &var_e8
else
    var_e0 = zx.q(*(arg2 + 0x80) * rdx_11) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

int64_t result = *(rsi + 0x58)

if (result == 0)
label_140741da2:
    int32_t i_1 = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            int32_t* rdx_29 = var_128
            i_1 += 1
            var_128 = &rdx_29[sx.q(rax_7)]
            *rdx_29 = 0xffffffff
            void* rdx_30 = var_110
            var_110 = rdx_30 + (sx.q(rax_8) << 2)
            *rdx_30 = 0
            void* rdx_31 = var_f8
            var_f8 = rdx_31 + (sx.q(rax_9) << 2)
            *rdx_31 = 0
            void* rdx_32 = var_e0
            result = sx.q(result_2)
            var_e0 = rdx_32 + (result << 2)
            *rdx_32 = 0
        while (i_1 s< *(arg2 + 0x40))
else
    int64_t rcx_22 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    void* r15_1 = *(rcx_22 + (result << 3))
    
    if (rsi[0x86].b == 0)
        goto label_140741da2
    
    void* rax_13 = sub_140d3c6e0(rsi)
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
        result = sub_141f66050(rax_13, rsi[0x1a])
    
    if (result == 0)
        goto label_140741da2
    
    if (*(arg2 + 0x40) s> 0)
        int64_t r8_1 = 0
        int32_t* rcx_27 = var_80
        result = result_1
        int64_t rdx_15 = sx.q(var_90) << 2
        int64_t r9_2 = sx.q(var_78) << 2
        int64_t r10_2 = sx.q(var_60) << 2
        int32_t* r13_1 = var_68
        int64_t var_b8_1 = r10_2
        int64_t var_c8_1 = rdx_15
        int64_t var_c0_1 = r9_2
        int64_t arg_20 = 0
        
        do
            int32_t r12_1 = *result
            int32_t r14_2 = *rcx_27
            int32_t* rax_16 = r13_1
            int32_t rsi_1 = *(r15_1 + 8)
            void* rcx_28 = rcx_27 + r9_2
            r13_1 += r10_2
            int32_t r10_3 = *rax_16
            uint128_t zmm1
            
            if (r10_3 == 0xffffffff)
                int32_t rax_22 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                *(arg2 + 0x8c) = rax_22
                zmm1.d = (rax_22 u>> 9 | 0x3f800000).d f- 1f
            else
                int32_t* rcx_29 = *(arg2 + 0x90)
                int32_t rdx_17 = *(rcx_29 + r8_1)
                *(rcx_29 + r8_1) = rdx_17 + 1
                int32_t r9_4 = r12_1 * 0x19660d + (r14_2 * 0x19660d + 0x3c6ef35f)
                    * ((r10_3 << 0x10 | rdx_17) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                int32_t rcx_38 = ((r10_3 << 0x10 | rdx_17) * 0x19660d + 0x3c6ef35f) * r9_4
                    + r14_2 * 0x19660d + 0x3c6ef35f
                r8_1 = arg_20
                zmm1.d = _mm_cvtepi32_ps(zx.o((r9_4
                    + rcx_38 * (r9_4 * rcx_38 + (r10_3 << 0x10 | rdx_17) * 0x19660d + 0x3c6ef35f))
                    s>> 8) & 0xffffff).d f* 5.96046448e-08f
            
            uint128_t zmm0
            zmm0.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* zmm1.d
            void* rsi_3 = sx.q(int.d(zmm0.d)) * 0xe8 + *r15_1
            int32_t rax_26 = *(rsi_3 + 8)
            
            if (r10_3 == 0xffffffff)
                int32_t rax_32 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                *(arg2 + 0x8c) = rax_32
                zmm1.d = (rax_32 u>> 9 | 0x3f800000).d f- 1f
            else
                int32_t* rcx_41 = *(arg2 + 0x90)
                int32_t rdx_20 = *(rcx_41 + r8_1)
                *(rcx_41 + r8_1) = rdx_20 + 1
                int32_t r9_9 = r12_1 * 0x19660d + (r14_2 * 0x19660d + 0x3c6ef35f)
                    * ((r10_3 << 0x10 | rdx_20) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                int32_t rcx_47 = ((r10_3 << 0x10 | rdx_20) * 0x19660d + 0x3c6ef35f) * r9_9
                    + r14_2 * 0x19660d + 0x3c6ef35f
                zmm1.d = _mm_cvtepi32_ps(zx.o((r9_9
                    + rcx_47 * (r9_9 * rcx_47 + (r10_3 << 0x10 | rdx_20) * 0x19660d + 0x3c6ef35f))
                    s>> 8) & 0xffffff).d f* 5.96046448e-08f
            
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = mulu.dp.d(0xaaaaaaab, *(rsi_3 + 4))
            i_2 += 1
            r9_2 = var_c0_1
            r10_2 = var_b8_1
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_26)).d f* zmm1.d
            int32_t* rdx_25 = var_128
            var_128 = &rdx_25[sx.q(rax_7)]
            *rdx_25 = int.d(zmm0.d) + (temp0_4 u>> 1)
            float* rdx_26 = var_110
            r8_1 = arg_20 + 4
            arg_20 = r8_1
            int32_t rcx_51 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            zmm0.d = (rcx_51 u>> 9 | 0x3f800000).d f- 1f
            float temp0_6 = _mm_sqrt_ss((zx.o(0)).d, zmm0.d)
            *(arg2 + 0x8c) = rcx_51 * 0xbb38435 + 0x3619636b
            var_110 = &rdx_26[sx.q(rax_8)]
            zmm1.d = ((rcx_51 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
            zmm0.d = 1f f- zmm1.d
            *rdx_26 = 1f - temp0_6
            int32_t* rdx_27 = var_f8
            zmm0.d = zmm0.d f* temp0_6
            var_f8 = &rdx_27[sx.q(rax_9)]
            *rdx_27 = zmm0.d
            float* rdx_28 = var_e0
            result += rdx_15
            var_e0 = &rdx_28[sx.q(result_2)]
            rcx_27 = rcx_28
            *rdx_28 = temp0_6 f* zmm1.d
            rdx_15 = var_c8_1
        while (i_2 s< *(arg2 + 0x40))

return result
