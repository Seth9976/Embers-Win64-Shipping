// 函数: sub_142649310
// 地址: 0x142649310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg2
void* r10 = zmm0.q
uint128_t temp0 = _mm_bsrli_si128(zmm0, 8)
void* rax = *(r10 + 0x380)

if (rax != 0)
    r10 = rax

void* r10_1 = r10 + sx.q(temp0.d) * 0x38
int64_t* rax_3 = *(r10_1 + 0x28)
void* r11 = *(r10_1 + 0x20)
int64_t* r15 = rax_3
uint128_t zmm1 = zx.o(*(r10_1 + 0x10))
void* rsi = r11
int32_t rdx = *(r10_1 + 0x18)
uint64_t var_e8 = zmm1.q
zmm0 = *r10_1
uint128_t var_f8 = zmm0

if (rax_3 != 0)
    rax_3[1].d += 1
    r15 = rax_3
    rsi = r11
    zmm1 = zx.o(var_e8)
    zmm0 = var_f8

int32_t rcx_1 = *(r10_1 + 0x30)
*arg5 = zmm0
arg5[1].q = zmm1.q
*(arg5 + 0x18) = rdx
arg5[2].q = r11
*(arg5 + 0x28) = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1
    r15 = rax_3
    rsi = r11

float zmm2[0x4] = var_f8:0xc.d
float zmm6[0x4] = var_f8:4.d
float zmm3[0x4] = var_f8:8.d
float zmm4[0x4] = zmm6
float zmm5[0x4] = var_f8.d
zmm4[0] = zmm4[0] f+ var_e8.d
zmm3[0] = zmm3[0] f+ var_e8:4.d
zmm6[0] = zmm6[0] f- var_e8.d
zmm3[0] = zmm3[0] f- var_e8:4.d
arg5[3].d = rcx_1
zmm2[0] = zmm2[0] + zmm5[0]
int32_t rax_4 = *(arg4 + 0x18)
zmm5[0] = zmm5[0] - zmm2[0]
float var_a4 = zmm6[0]
float var_a0 = zmm3[0]
float var_9c = zmm2[0]
float var_94 = zmm3[0]
uint64_t var_108 = arg4[1].q
int32_t var_100 = rax_4
zmm0 = *arg4
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]

if (rax_4.b == 0)
    zmm1 = zx.o(zmm4[0].q)
    zmm2 = zmm5[0].o
    zmm4 = zmm1.d
    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    int96_t var_118_1 = zmm2[0].12
    int32_t var_100_1 = 1.d
    zmm9 = var_118_1:8.d
    zmm8 = zmm0
    zmm6 = var_118_1:4.d
    zmm0 = zmm2
    zmm5 = var_118_1.d
    zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0xff)
else
    zmm5 = __minss_xmmss_memss(zmm5[0], zmm0.d)
    zmm6 = __minss_xmmss_memss(zmm6[0], zmm0:4.d)
    zmm7 = __maxss_xmmss_memss(zmm2[0], zmm0:0xc.d)
    zmm4 = __maxss_xmmss_memss(zmm4[0], var_108.d)
    zmm8 = __maxss_xmmss_memss(zmm3[0], var_108:4.d)
    zmm9 = _mm_min_ss(zmm0:8.d[0], zmm3[0])
    uint128_t var_118
    var_118.d = zmm5[0]
    var_118:4.d = zmm6[0]
    var_118:0xc.d = zmm7[0]
    var_108.d = zmm4[0]
    var_108:4.d = zmm8[0]
    var_118:8.d = zmm9[0]

zmm4[0] = zmm4[0] - zmm6[0]
zmm7[0] = zmm7[0] - zmm5[0]
zmm8[0] = zmm8[0] - zmm9[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] * 0.5f
zmm7[0] = zmm7[0] * 0.5f
zmm1.d = zmm8.d f* 0.5f
zmm6[0] = zmm6[0] + zmm4[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm0 = _mm_unpacklo_ps(zmm7, zmm4[0].q)
zmm9[0] = zmm9[0] f+ zmm1.d
uint64_t var_80 = zmm0.q
int32_t var_b0 = zmm1.d
zmm4[0] = zmm4[0] + zmm7[0]
zmm5[0] = zmm5[0] + zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
int32_t var_78 = var_b0
float var_84 = zmm9[0]
zmm4[0] = zmm4[0] + zmm8[0]
float temp0_10[0x4] = _mm_unpacklo_ps(zmm5, zmm6[0].q)
zmm4[0] = zmm4[0] * 0.25f
zmm1.q = temp0_10.q
*arg5 = zmm1
uint128_t var_8c_1 = zmm1
int32_t var_74 = _mm_sqrt_ss(0, zmm4[0]).d
arg5[1].q = var_80
*(arg5 + 0x18) = var_74

if (arg3 != 0)
    (*(*arg3 + 0x10))(arg3, arg5[2].q)

void* rbx = arg5[2].q

if (sub_141ded450(rbx) == 0)
    bool cond:0_1 = *(rbx + 0x1c) == 0
    *(rbx + 0x18) = 0
    
    if (not(cond:0_1))
        sub_1405c5510(rbx + 0x10, 0)
else
    sub_141df0090(rbx)

int32_t rdi = *(rsi + 0x1c)
int32_t rbx_1 = *(rsi + 0x2c)
int32_t rax_11 = sub_141dc56a0(rsi + 0x70)
void* rcx_7 = arg5[2].q
int32_t rdi_3 =
    *(rcx_7 + 0x1c) - (rbx_1 + rax_11 + rdi) + sub_141dc56a0(rcx_7 + 0x70) + *(rcx_7 + 0x2c)
*(arg1 + 0x4a8) += rdi_3
uint128_t var_b8 = *arg2
sub_142665790(arg1 + 0x10, &var_b8)
int32_t result = sub_142647a10(arg1 + 0x10, arg5, arg1 + 0x10, arg1 + 0x3f0)

if (r15 != 0)
    result = r15[1].d
    r15[1].d -= 1
    
    if (result == 1)
        result = (**rax_3)(rax_3)
        int32_t rdi_4 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rdi_4 == 1)
            return (*(*rax_3 + 8))(rax_3, zx.q(rdi_4))

return result
