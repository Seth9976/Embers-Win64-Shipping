// 函数: sub_14073f550
// 地址: 0x14073f550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
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
int32_t* rsi = *(rax_5 + (rdx_2 << 3))
int32_t* var_68 = nullptr
int32_t var_60 = 0
sub_140767bd0(&var_a0, arg2)
sub_140767bd0(&var_88, arg2)
sub_140767bd0(&var_70, arg2)
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_7 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
int32_t var_d8 = rdx_7
int32_t rax_8
rax_8.b = rdx_7 != 0x7fff
void* var_c8
void var_d0

if (rdx_7 == 0x7fff)
    var_c8 = &var_d0
else
    var_c8 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

int64_t rax_11 = *(rsi + 0x58)

if (rax_11 == 0)
label_14073f8a4:
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_17 = var_c8
            i_1 += 1
            rax_11 = sx.q(rax_8)
            var_c8 = rdx_17 + (rax_11 << 2)
            *rdx_17 = 0xffffffff
        while (i_1 s< *(arg2 + 0x40))
else
    int64_t rcx_10 = **(rax_11 + 0x58)
    rax_11 = sx.q(rsi[0x1a])
    void* rdx_8 = *(rcx_10 + (rax_11 << 3))
    
    if (rsi[0x86].b == 0)
        goto label_14073f8a4
    
    void* rax_12 = sub_140d3c6e0(rsi)
    void* rax_13
    void* rcx_12
    int64_t rdx_9
    
    if (rax_12 != 0)
        rax_13 = sub_142591550()
        rcx_12 = *(rax_12 + 0x10)
        rdx_9 = sx.q(*(rax_13 + 0x38))
    
    void* r9_1
    
    if (rax_12 == 0 || rdx_9.d s> *(rcx_12 + 0x38)
            || *(*(rcx_12 + 0x30) + (rdx_9 << 3)) != rax_13 + 0x30 || *(rax_12 + 0x430) == 0)
        r9_1 = rdx_8
        rax_11 = r9_1 + 0x138
    else
        rax_11 = sub_141f66050(rax_12, rsi[0x1a])
        r9_1 = rdx_8
    
    if (rax_11 == 0)
        goto label_14073f8a4
    
    if (*(arg2 + 0x40) s> 0)
        int64_t r10 = 0
        int32_t* r14_2 = var_68
        int32_t* r12 = var_98
        int64_t rcx_16 = sx.q(var_78) << 2
        int64_t rdx_12 = sx.q(var_60) << 2
        int32_t* r15 = var_80
        int64_t var_b8 = rdx_12
        int64_t var_c0 = rcx_16
        int32_t rax_26
        
        do
            int32_t rax_15 = *r12
            r12 = &r12[sx.q(var_90)]
            int32_t r8 = *r14_2
            r14_2 += rdx_12
            int32_t rsi_1 = *(r9_1 + 0xec)
            int32_t rax_16 = *r15
            r15 += rcx_16
            uint128_t zmm1
            
            if (r8 == 0xffffffff)
                int32_t rax_22 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                *(arg2 + 0x8c) = rax_22
                zmm1.d = (rax_22 u>> 9 | 0x3f800000).d f- 1f
            else
                int32_t* rcx_17 = *(arg2 + 0x90)
                int32_t rdx_13 = *(rcx_17 + r10)
                *(rcx_17 + r10) = rdx_13 + 1
                int32_t r9_4 = rax_15 * 0x19660d + 0x3c6ef35f + (rax_16 * 0x19660d + 0x3c6ef35f)
                    * ((r8 << 0x10 | rdx_13) * 0x19660d + 0x3c6ef35f)
                int32_t rcx_22 = ((r8 << 0x10 | rdx_13) * 0x19660d + 0x3c6ef35f) * r9_4
                    + rax_16 * 0x19660d + 0x3c6ef35f
                r9_1 = rdx_8
                zmm1.d = _mm_cvtepi32_ps(zx.o((r9_4
                    + rcx_22 * (r9_4 * rcx_22 + (r8 << 0x10 | rdx_13) * 0x19660d + 0x3c6ef35f)) s>> 8)
                    & 0xffffff).d f* 5.96046448e-08f
            
            int32_t* rdx_16 = var_c8
            i_1 += 1
            r10 += 4
            var_c8 = &rdx_16[sx.q(rax_8)]
            rcx_16 = var_c0
            uint128_t zmm0
            zmm0.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* zmm1.d
            rax_26 = int.d(zmm0.d)
            *rdx_16 = rax_26
            rdx_12 = var_b8
        while (i_1 s< *(arg2 + 0x40))
        
        return rax_26

return rax_11
