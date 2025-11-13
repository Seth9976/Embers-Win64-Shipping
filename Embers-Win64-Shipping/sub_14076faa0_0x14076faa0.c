// 函数: sub_14076faa0
// 地址: 0x14076faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
int16_t rcx = *rax
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
uint32_t i = zx.d(rcx) & 0x7fff

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
int32_t var_c8 = rdx_7
int32_t rax_8
rax_8.b = rdx_7 != 0x7fff
void* var_b8
void var_c0

if (rdx_7 == 0x7fff)
    var_b8 = &var_c0
else
    var_b8 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

void* r15 = *(rsi + 0x58)

if (r15 != 0 && rsi[0x86].b != 0)
    void* rax_10 = sub_140d3c6e0(rsi)
    
    if (rax_10 != 0)
        void* rax_11 = sub_142591550()
        void* rcx_11 = *(rax_10 + 0x10)
        int64_t rdx_8 = sx.q(*(rax_11 + 0x38))
        
        if (rdx_8.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rdx_8 << 3)) == rax_11 + 0x30
                && *(rax_10 + 0x430) != 0)
            sub_141f66050(rax_10, rsi[0x1a])

int32_t result = rsi[0x65]
int32_t rcx_14 = 0
int32_t result_1 = result

if (r15 != 0)
    result s>>= 0x1f
    int32_t rcx_16 = *(r15 + 0x1b0) - result
    rcx_14 = rcx_16 - 2
    
    if (rcx_16 - 2 s< 0)
        return memset(var_b8, 0xff, sx.q(*(arg2 + 0x40)) << 2)

if (*(arg2 + 0x40) s> 0)
    int64_t r11_1 = 0
    int32_t* rsi_1 = var_68
    int32_t* r14_2 = var_80
    int32_t* r15_1 = var_98
    int64_t rdx_11 = sx.q(var_60) << 2
    int64_t arg_20 = rdx_11
    uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rcx_14 + 1))
    
    do
        int32_t rax_15 = *r14_2
        r14_2 = &r14_2[sx.q(var_78)]
        int32_t r8_2 = *rsi_1
        rsi_1 += rdx_11
        int32_t r9_1 = *r15_1
        r15_1 = &r15_1[sx.q(var_90)]
        uint128_t zmm1
        
        if (r8_2 == 0xffffffff)
            int32_t rax_22 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg2 + 0x8c) = rax_22
            zmm1.d = (rax_22 u>> 9 | 0x3f800000).d f- 1f
        else
            int32_t* rcx_18 = *(arg2 + 0x90)
            int32_t rdx_12 = *(rcx_18 + r11_1)
            *(rcx_18 + r11_1) = rdx_12 + 1
            int32_t r9_3 = r9_1 * 0x19660d + ((r8_2 << 0x10 | rdx_12) * 0x19660d + 0x3c6ef35f)
                * (rax_15 * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
            int32_t rcx_24 = r9_3 * ((r8_2 << 0x10 | rdx_12) * 0x19660d + 0x3c6ef35f)
                + rax_15 * 0x19660d + 0x3c6ef35f
            zmm1.d = _mm_cvtepi32_ps(zx.o((r9_3
                + (rcx_24 * r9_3 + (r8_2 << 0x10 | rdx_12) * 0x19660d + 0x3c6ef35f) * rcx_24) s>> 8)
                & 0xffffff).d f* 5.96046448e-08f
        
        int32_t* rdx_15 = var_b8
        int32_t result_2 = int.d(zmm3.d f* zmm1.d)
        var_b8 = &rdx_15[sx.q(rax_8)]
        result = result_2 + 1
        
        if (result_2 == result_1)
            result_2 = result
        
        i_1 += 1
        *rdx_15 = result_2
        r11_1 += 4
        rdx_11 = arg_20
    while (i_1 s< *(arg2 + 0x40))

return result
