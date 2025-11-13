// 函数: sub_1408b32e0
// 地址: 0x1408b32e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = *(arg2 + 8)
uint128_t zmm6 = *arg2
uint128_t zmm7 = *(arg2 + 4)
uint128_t zmm1
zmm1.d = zmm6.d f+ zmm7.d
zmm1.d = zmm1.d f+ zmm5.d
zmm1.d = zmm1.d f* 0.333333343f
uint128_t zmm0
zmm0.d = zmm6.d f+ zmm1.d
zmm0.d = zmm0.d f+ zmm0.d
zmm0.d = zmm0.d f- 0.5f
int32_t rdi = int.d(zmm0.d)
zmm0.d = zmm7.d f+ zmm1.d
int32_t rdi_1 = rdi s>> 1
zmm0.d = zmm0.d f+ zmm0.d
zmm0.d = zmm0.d f- 0.5f
int32_t rsi = int.d(zmm0.d)
zmm0.d = zmm5.d f+ zmm1.d
int32_t rsi_1 = rsi s>> 1
zmm1.d = float.s(rsi_1)
zmm0.d = zmm0.d f+ zmm0.d
zmm0.d = zmm0.d f- 0.5f
int32_t r14 = int.d(zmm0.d)
zmm0.d = float.s(rdi_1)
int32_t r14_1 = r14 s>> 1
uint128_t result
result.d = float.s(r14_1 + rsi_1 + rdi_1)
result.d = result.d f* 0.166666672f
zmm0.d = zmm0.d f- result.d
zmm1.d = zmm1.d f- result.d
zmm6.d = zmm6.d f- zmm0.d
zmm0.d = float.s(r14_1)
zmm7.d = zmm7.d f- zmm1.d
zmm0.d = zmm0.d f- result.d
zmm5.d = zmm5.d f- zmm0.d
int32_t rdx
int32_t rbx
int32_t r8
int32_t r9
int32_t r10
int32_t r11

if (zmm6.d f< zmm7.d)
    r8 = 0
    
    if (zmm7.d f>= zmm5.d)
        r9 = 0
        rdx = 1
        r10 = 1
        
        if (zmm6.d f>= zmm5.d)
            rbx = 1
            r11 = 0
        else
            rbx = 0
            r11 = 1
    else
        r9 = 1
        rdx = 0
        rbx = 0
        r10 = 1
        r11 = 1
else if (not(zmm7.d f< zmm5.d))
    r8 = 1
    r9 = 0
    r11 = 0
    r10 = 1
    rdx = 0
    rbx = 1
else if (zmm6.d f< zmm5.d)
    r9 = 1
    r8 = 0
    r10 = 0
    r11 = 1
    rdx = 0
    rbx = 1
else
    r8 = 1
    r9 = 0
    r10 = 0
    r11 = 1
    rdx = 0
    rbx = 1

zmm0.d = float.s(r8)
uint128_t zmm12
zmm12.d = zmm6.d f- zmm0.d
zmm0.d = float.s(rdx)
zmm12.d = zmm12.d f+ 0.166666672f
uint128_t zmm13
zmm13.d = zmm7.d f- zmm0.d
zmm1.d = zmm5.d f* zmm5.d
zmm0.d = float.s(r9)
uint128_t zmm15
zmm15.d = zmm6.d f- 0.5f
uint128_t zmm14
zmm14.d = zmm5.d f- zmm0.d
zmm0.d = float.s(rbx)
zmm13.d = zmm13.d f+ 0.166666672f
uint128_t zmm9
zmm9.d = zmm6.d f- zmm0.d
zmm0.d = float.s(r10)
zmm9.d = zmm9.d f+ 0.333333343f
uint128_t zmm10
zmm10.d = zmm7.d f- zmm0.d
zmm0.d = float.s(r11)
zmm10.d = zmm10.d f+ 0.333333343f
uint128_t zmm11
zmm11.d = zmm5.d f- zmm0.d
zmm0.d = zmm7.d f- 0.5f
zmm14.d = zmm14.d f+ 0.166666672f
zmm11.d = zmm11.d f+ 0.333333343f
int32_t arg_10 = zmm0.d
zmm0.d = zmm5.d f- 0.5f
uint128_t zmm3 = zx.o(0)
int32_t arg_18 = zmm0.d
zmm0.d = zmm6.d f* zmm6.d
result.d = 0.600000024f f- zmm0.d
zmm0.d = zmm7.d f* zmm7.d
result.d = result.d f- zmm0.d
result.d = result.d f- zmm1.d
uint128_t zmm8

if (result.d f>= 0f)
    result.d = result.d f* result.d
    result.d = result.d f* result.d
    int32_t rcx_3 = (rsi_1 * 0x7a69) ^ (r14_1 * 0x1b3b) ^ (rdi_1 * 0x653) ^ *arg1
    int64_t rcx_4 = sx.q(rcx_3 * rcx_3 * rcx_3 * 0xec4d)
    uint64_t rax_12 = ((zx.q((rcx_4 s>> 0xd).d) ^ zx.q(rcx_4.d)) & 0xf) * 3
    zmm0 = zx.o(*(&data_143980be0 + (rax_12 << 2)))
    int32_t rax_13 = *((rax_12 << 2) + 0x143980be8)
    zmm8.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f* zmm7.d
    zmm0.d = zmm0.d f* zmm6.d
    zmm8.d = zmm8.d f+ zmm0.d
    zmm0.d = rax_13.d f* zmm5.d
    zmm8.d = zmm8.d f+ zmm0.d
    zmm8.d = zmm8.d f* result.d
else
    zmm8 = zx.o(0)

zmm0.d = zmm12.d f* zmm12.d
zmm1.d = zmm13.d f* zmm13.d
result.d = 0.600000024f f- zmm0.d
zmm0.d = zmm14.d f* zmm14.d
result.d = result.d f- zmm1.d
result.d = result.d f- zmm0.d

if (result.d f>= 0f)
    result.d = result.d f* result.d
    result.d = result.d f* result.d
    int32_t rdx_4 =
        ((rdx + rsi_1) * 0x7a69) ^ ((r9 + r14_1) * 0x1b3b) ^ ((r8 + rdi_1) * 0x653) ^ *arg1
    int64_t rcx_7 = sx.q(rdx_4 * rdx_4 * rdx_4 * 0xec4d)
    uint64_t rax_25 = ((zx.q((rcx_7 s>> 0xd).d) ^ zx.q(rcx_7.d)) & 0xf) * 3
    zmm0 = zx.o(*(&data_143980be0 + (rax_25 << 2)))
    int32_t rax_26 = *((rax_25 << 2) + 0x143980be8)
    zmm6.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f* zmm13.d
    zmm0.d = zmm0.d f* zmm12.d
    zmm6.d = zmm6.d f+ zmm0.d
    zmm0.d = rax_26.d f* zmm14.d
    zmm6.d = zmm6.d f+ zmm0.d
    zmm6.d = zmm6.d f* result.d
else
    zmm6 = zx.o(0)

zmm0.d = zmm9.d f* zmm9.d
zmm1.d = zmm10.d f* zmm10.d
zmm5.d = 0.600000024f f- zmm0.d
zmm0.d = zmm11.d f* zmm11.d
zmm5.d = zmm5.d f- zmm1.d
zmm5.d = zmm5.d f- zmm0.d

if (zmm5.d f>= 0f)
    zmm5.d = zmm5.d f* zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    int32_t rdx_8 =
        ((r10 + rsi_1) * 0x7a69) ^ ((r11 + r14_1) * 0x1b3b) ^ ((rbx + rdi_1) * 0x653) ^ *arg1
    int64_t rcx_10 = sx.q(rdx_8 * rdx_8 * rdx_8 * 0xec4d)
    uint64_t rax_38 = ((zx.q((rcx_10 s>> 0xd).d) ^ zx.q(rcx_10.d)) & 0xf) * 3
    zmm0 = zx.o(*(&data_143980be0 + (rax_38 << 2)))
    int32_t rax_39 = *((rax_38 << 2) + 0x143980be8)
    result.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f* zmm10.d
    zmm0.d = zmm0.d f* zmm9.d
    result.d = result.d f+ zmm0.d
    zmm0.d = rax_39.d f* zmm11.d
    result.d = result.d f+ zmm0.d
    result.d = result.d f* zmm5.d
else
    result = zx.o(0)

zmm5 = arg_10
zmm0.d = zmm15.d f* zmm15.d
zmm1.d = zmm5.d f* zmm5.d
float zmm4 = 0.600000024f f- zmm0.d f- zmm1.d
zmm1 = arg_18
zmm0.d = zmm1.d f* zmm1.d
zmm4 = zmm4 f- zmm0.d

if (not(zmm4 < 0f))
    zmm4 = zmm4 * zmm4
    int32_t rdx_12 = ((rsi_1 + 1) * 0x7a69) ^ ((r14_1 + 1) * 0x1b3b) ^ ((rdi_1 + 1) * 0x653) ^ *arg1
    int64_t rcx_13 = sx.q(rdx_12 * rdx_12 * rdx_12 * 0xec4d)
    uint64_t rax_51 = ((zx.q((rcx_13 s>> 0xd).d) ^ zx.q(rcx_13.d)) & 0xf) * 3
    zmm0 = zx.o(*(&data_143980be0 + (rax_51 << 2)))
    int32_t rax_52 = *((rax_51 << 2) + 0x143980be8)
    zmm3.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f* zmm5.d
    zmm0.d = zmm0.d f* zmm15.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm0.d = rax_52.d f* zmm1.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm4 * zmm4

result.d = result.d f+ zmm3.d
zmm6.d = zmm6.d f+ zmm8.d
result.d = result.d f+ zmm6.d
result.d = result.d f* 32f
return result
