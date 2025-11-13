// 函数: sub_1407efae0
// 地址: 0x1407efae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int16_t* rax = *(arg2 + 0x10)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_c8 = rdx_1
int32_t rax_1
rax_1.b = rdx_1 != 0x7fff
int32_t* var_b8
void var_c0

if (rdx_1 == 0x7fff)
    var_b8 = &var_c0
else
    var_b8 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)
int32_t rcx_4 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_b0 = rcx_4
int32_t rax_2
rax_2.b = rcx_4 != 0x7fff
int32_t* var_a0
void var_a8

if (rcx_4 == 0x7fff)
    var_a0 = &var_a8
else
    var_a0 = zx.q(rcx_4 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_8 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_98 = rcx_8
int32_t rax_3
rax_3.b = rcx_8 != 0x7fff
int32_t* var_88
void var_90

if (rcx_8 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_8 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_12 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_80 = rcx_12
int32_t rax_4
rax_4.b = rcx_12 != 0x7fff
uint32_t* var_70
void var_78

if (rcx_12 == 0x7fff)
    var_70 = &var_78
else
    var_70 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_68 = rcx_16
int32_t rax_5
rax_5.b = rcx_16 != 0x7fff
int32_t* var_58
void var_60

if (rcx_16 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_19 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rdx_7 = rcx_19 & 0x7fff
int32_t var_50 = rdx_7
uint64_t result
result.b = rdx_7 != 0x7fff
int32_t var_4c = result.d
int32_t* result_1

if (rdx_7 == 0x7fff)
    void var_48
    result = &var_48
    result_1 = &var_48
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)

void* rsi = *(arg1 + 0x30)
uint128_t zmm6
int128_t zmm7
int128_t zmm8

if (rsi == 0)
label_1407efce9:
    zmm7 = 0xbf800000
    zmm8 = 0xbf800000
    zmm6 = 0xbf800000
else
    void* rax_7 = sub_1425b89f0()
    void* rdx_8 = *(rsi + 0x10)
    result = sx.q(*(rax_7 + 0x38))
    
    if (result.d s> *(rdx_8 + 0x38))
        goto label_1407efce9
    
    uint64_t result_2 = result
    result = *(rdx_8 + 0x30)
    
    if (*(result + (result_2 << 3)) != rax_7 + 0x30)
        goto label_1407efce9
    
    uint128_t zmm0_1 = zx.o(*(rsi + 0x28))
    result = zx.q(*(rsi + 0x30))
    zmm7 = result.d
    zmm8 = zmm0_1.d
    zmm6 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)

void* rsi_1 = *(arg1 + 0x30)
uint128_t zmm1
int32_t zmm2
uint32_t zmm3

if (rsi_1 == 0)
label_1407efd4f:
    zmm2 = 0x3f800000
    zmm3 = 0x3f800000
    zmm1 = 0x3f800000
else
    void* rax_8 = sub_1425b89f0()
    void* rdx_9 = *(rsi_1 + 0x10)
    result = sx.q(*(rax_8 + 0x38))
    
    if (result.d s> *(rdx_9 + 0x38))
        goto label_1407efd4f
    
    uint64_t result_3 = result
    result = *(rdx_9 + 0x30)
    
    if (*(result + (result_3 << 3)) != rax_8 + 0x30)
        goto label_1407efd4f
    
    uint128_t zmm0_2 = zx.o(*(rsi_1 + 0x34))
    result = zx.q(*(rsi_1 + 0x3c))
    zmm2 = result.d
    zmm3 = zmm0_2.d
    zmm1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)

if (*(arg2 + 0x40) s> 0)
    do
        i += 1
        *var_b8 = zmm8.d
        *var_a0 = zmm6.d
        *var_88 = zmm7.d
        *var_70 = zmm3
        *var_58 = zmm1.d
        *result_1 = zmm2
        var_b8 = &var_b8[sx.q(rax_1)]
        var_a0 = &var_a0[sx.q(rax_2)]
        var_88 = &var_88[sx.q(rax_3)]
        var_70 = &var_70[sx.q(rax_4)]
        result = result_1
        var_58 = &var_58[sx.q(rax_5)]
        result_1 = result + (sx.q(var_4c) << 2)
    while (i s< *(arg2 + 0x40))

return result
