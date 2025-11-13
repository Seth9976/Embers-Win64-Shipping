// 函数: sub_1407715d0
// 地址: 0x1407715d0
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

void* rax_10 = *(rsi + 0x58)

if (rax_10 != 0)
    void* r15_1 = *(**(rax_10 + 0x58) + (sx.q(rsi[0x1a]) << 3))
    
    if (rsi[0x86].b != 0)
        void* rax_13 = sub_140d3c6e0(rsi)
        void* rax_14
        void* rcx_12
        int64_t rdx_8
        
        if (rax_13 != 0)
            rax_14 = sub_142591550()
            rcx_12 = *(rax_13 + 0x10)
            rdx_8 = sx.q(*(rax_14 + 0x38))
        
        void* rax_16
        
        if (rax_13 == 0 || rdx_8.d s> *(rcx_12 + 0x38)
                || *(*(rcx_12 + 0x30) + (rdx_8 << 3)) != rax_14 + 0x30 || *(rax_13 + 0x430) == 0)
            rax_16 = r15_1 + 0x138
        else
            rax_16 = sub_141f66050(rax_13, rsi[0x1a])
        
        if (rax_16 != 0)
            int32_t result = *(r15_1 + 0xec)
            
            if (result s> 0)
                if (*(arg2 + 0x40) s> 0)
                    int64_t r10_1 = 0
                    int32_t* rsi_1 = var_68
                    int32_t* r14_2 = var_80
                    int32_t* r15_2 = var_98
                    int64_t rcx_16 = sx.q(var_60) << 2
                    int64_t arg_18 = rcx_16
                    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(result))
                    
                    do
                        int32_t rax_17 = *r14_2
                        r14_2 = &r14_2[sx.q(var_78)]
                        int32_t r8 = *rsi_1
                        rsi_1 += rcx_16
                        int32_t r9_1 = *r15_2
                        r15_2 = &r15_2[sx.q(var_90)]
                        uint128_t zmm1
                        
                        if (r8 == 0xffffffff)
                            int32_t rax_24 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                            *(arg2 + 0x8c) = rax_24
                            zmm1.d = (rax_24 u>> 9 | 0x3f800000).d f- 1f
                        else
                            int32_t* rcx_17 = *(arg2 + 0x90)
                            int32_t rdx_10 = *(rcx_17 + r10_1)
                            *(rcx_17 + r10_1) = rdx_10 + 1
                            int32_t r9_3 = r9_1 * 0x19660d
                                + ((r8 << 0x10 | rdx_10) * 0x19660d + 0x3c6ef35f)
                                * (rax_17 * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                            int32_t rcx_23 = r9_3 * ((r8 << 0x10 | rdx_10) * 0x19660d + 0x3c6ef35f)
                                + rax_17 * 0x19660d + 0x3c6ef35f
                            zmm1.d = _mm_cvtepi32_ps(zx.o((r9_3
                                + (rcx_23 * r9_3 + (r8 << 0x10 | rdx_10) * 0x19660d + 0x3c6ef35f)
                                * rcx_23) s>> 8) & 0xffffff).d f* 5.96046448e-08f
                        
                        int32_t* rdx_13 = var_b8
                        i_1 += 1
                        r10_1 += 4
                        var_b8 = &rdx_13[sx.q(rax_8)]
                        rcx_16 = arg_18
                        result = int.d(zmm2.d f* zmm1.d)
                        *rdx_13 = result
                    while (i_1 s< *(arg2 + 0x40))
                
                return result

return memset(var_b8, 0xff, sx.q(*(arg2 + 0x40)) << 2)
