// 函数: sub_1408b26b0
// 地址: 0x1408b26b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm5 = *arg2
int128_t zmm11 = *(arg2 + 4)
float zmm1 = (zmm5.d f+ zmm11.d) * 0.5f
int32_t zmm0 = zmm5.d f+ zmm1
int32_t r8 = int.d(zmm0 f+ zmm0 f- 0.5f)
zmm0 = zmm11.d f+ zmm1
int32_t r8_1 = r8 s>> 1
int32_t r9_1 = int.d(zmm0 f+ zmm0 f- 0.5f) s>> 1
int32_t zmm2 = float.s(r9_1 + r8_1) f* 0.25f
zmm5.d = zmm5.d f- (float.s(r8_1) f- zmm2)
zmm11.d = zmm11.d f- (float.s(r9_1) f- zmm2)
zmm5.d f- zmm11.d
int128_t zmm9
zmm9.d = zmm5.d f- 0.5f
int32_t rdx
rdx.b = zmm5.d f> zmm11.d
int32_t r11
r11.b = zmm5.d f<= zmm11.d
int128_t zmm10
zmm10.d = zmm11.d f- 0.5f
int128_t zmm7
zmm7.d = zmm5.d f- float.s(rdx)
zmm7.d = zmm7.d f+ 0.25f
int128_t zmm8
zmm8.d = zmm11.d f- float.s(r11)
zmm8.d = zmm8.d f+ 0.25f
float zmm3 = (zx.o(0)).d
zmm2 = 0.5f f- zmm5.d f* zmm5.d f- zmm11.d f* zmm11.d
int128_t zmm6

if (zmm2 f>= 0f)
    zmm2 = zmm2 f* zmm2
    int32_t rcx_2 = (r9_1 * 0x7a69) ^ (r8_1 * 0x653) ^ *arg1
    int64_t rcx_3 = sx.q(rcx_2 * rcx_2 * rcx_2 * 0xec4d)
    uint64_t rax_9 = (zx.q((rcx_3 s>> 0xd).d) ^ zx.q(rcx_3.d)) & 7
    zmm6.d = (*((rax_9 << 3) + 0x143980ba4)).d f* zmm11.d
    zmm6.d = zmm6.d f+ *(&data_143980ba0 + (rax_9 << 3)) f* zmm5.d
    zmm6.d = zmm6.d f* zmm2 f* zmm2
else
    zmm6 = zx.o(0)

zmm5.d = 0.5f f- zmm7.d f* zmm7.d
zmm5.d = zmm5.d f- zmm8.d f* zmm8.d

if (zmm5.d f>= 0f)
    zmm5.d = zmm5.d f* zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    int32_t rdx_3 = ((rdx + r8_1) * 0x653) ^ ((r11 + r9_1) * 0x7a69) ^ *arg1
    int64_t rcx_5 = sx.q(rdx_3 * rdx_3 * rdx_3 * 0xec4d)
    uint64_t rax_19 = (zx.q((rcx_5 s>> 0xd).d) ^ zx.q(rcx_5.d)) & 7
    zmm2 = (*((rax_19 << 3) + 0x143980ba4) f* zmm8.d f+
        *(&data_143980ba0 + (rax_19 << 3)) f* zmm7.d) f* zmm5.d
else
    zmm2 = (zx.o(0)).d

float zmm4 = 0.5f f- zmm9.d f* zmm9.d - zmm10.d f* zmm10.d

if (not(zmm4 < 0f))
    zmm4 = zmm4 * zmm4
    int32_t rdx_6 = ((r9_1 + 1) * 0x7a69) ^ ((r8_1 + 1) * 0x653) ^ *arg1
    int64_t rcx_7 = sx.q(rdx_6 * rdx_6 * rdx_6 * 0xec4d)
    uint64_t rax_29 = (zx.q((rcx_7 s>> 0xd).d) ^ zx.q(rcx_7.d)) & 7
    zmm3 = (*((rax_29 << 3) + 0x143980ba4) f* zmm10.d
        + *(&data_143980ba0 + (rax_29 << 3)) f* zmm9.d) * zmm4 * zmm4

return (zmm2 f+ zmm6.d f+ zmm3) f* 50f
