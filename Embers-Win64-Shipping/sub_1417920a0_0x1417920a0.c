// 函数: sub_1417920a0
// 地址: 0x1417920a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *arg3
int128_t zmm5 = arg3[1]
int128_t zmm6 = arg3[2]
int128_t zmm10
zmm10.d = 1f f/ *(arg1 + 0x28)
int128_t zmm11
zmm11.d = 1f f/ *(arg1 + 0x2c)
int128_t zmm15 = *(arg1 + 0x24)
int128_t zmm12 = *arg1
int128_t zmm13 = *(arg1 + 4)
float zmm1 = zmm4 f- zmm12.d
int128_t zmm14 = *(arg1 + 8)
int128_t zmm7
zmm7.d = zmm5.d f- zmm13.d
int128_t zmm9
zmm9.d = 1f f/ zmm15.d
int128_t zmm8
zmm8.d = zmm6.d f- zmm14.d
int32_t r9 = int.d(zmm9.d * zmm1)
int32_t r8 = int.d(zmm10.d f* zmm7.d)
int32_t r11 = int.d(zmm11.d f* zmm8.d)

if (not(zmm1 >= 0f))
    r9 -= 1

if (not(zmm7.d f>= 0f))
    r8 -= 1

if (not(zmm8.d f>= 0f))
    r11 -= 1

if (zmm4 <= (float.s(r9) + 0.5f) f* zmm15.d f+ zmm12.d)
    r9 -= 1

int32_t rsi = r9

if (zmm5.d f<= (float.s(r8) + 0.5f) f* *(arg1 + 0x28) f+ zmm13.d)
    r8 -= 1

int32_t rbp = r8

if (zmm6.d f<= (float.s(r11) + 0.5f) f* *(arg1 + 0x2c) f+ zmm14.d)
    r11 -= 1

int32_t rdx = 0
int32_t rbx = r11
zmm4 = (zmm4 - ((float.s(r9) + 0.5f) f* zmm15.d f+ zmm12.d)) f* zmm9.d
zmm5.d = zmm5.d f- ((float.s(r8) + 0.5f) f* *(arg1 + 0x28) f+ zmm13.d)
zmm5.d = zmm5.d f* zmm10.d
zmm6.d = zmm6.d f- ((float.s(r11) + 0.5f) f* *(arg1 + 0x2c) f+ zmm14.d)
zmm6.d = zmm6.d f* zmm11.d

if (r9 == 0xffffffff)
    rsi = 0
    zmm4 = (zx.o(0)).d

int32_t rdi = *(arg1 + 0x18)
int32_t rcx = 0

if (r9 != 0xffffffff)
    rcx = r9

if (rcx == rdi - 1)
    rsi = rdi - 2
    zmm4 = 1f

if (r8 == 0xffffffff)
    rbp = 0
    zmm5 = zx.o(0)

int32_t r9_1 = *(arg1 + 0x1c)
int32_t rcx_1 = 0

if (r8 != 0xffffffff)
    rcx_1 = r8

if (rcx_1 == r9_1 - 1)
    rbp = r9_1 - 2
    zmm5 = 0x3f800000

bool cond:6 = rbx != 0xffffffff

if (rbx == 0xffffffff)
    rbx = 0
    zmm6 = zx.o(0)

int32_t rcx_2 = arg1[2].d

if (cond:6)
    rdx = r11

if (rdx == rcx_2 - 1)
    rbx = rcx_2 - 2
    zmm6 = 0x3f800000

int32_t r8_1 = *(arg2 + 4)
int32_t r9_2 = *(arg2 + 8)
int64_t r10_1 = *(arg2 + 0x10)
float zmm0 = *(r10_1 + (sx.q((rsi * r8_1 + rbp) * r9_2 + rbx) << 2))
zmm1 = (*(r10_1 + (sx.q(((rsi + 1) * r8_1 + rbp) * r9_2 + rbx) << 2)) - zmm0) * zmm4 + zmm0
zmm0 = *(r10_1 + (sx.q((rsi * r8_1 + rbp) * r9_2 + rbx + 1) << 2))
float zmm3 =
    (*(r10_1 + (sx.q(((rsi + 1) * r8_1 + rbp) * r9_2 + rbx + 1) << 2)) - zmm0) * zmm4 + zmm0
zmm0 = *(r10_1 + (sx.q((rsi * r8_1 + rbp + 1) * r9_2 + rbx) << 2))
int32_t zmm2 = ((*(r10_1 + (sx.q(((rsi + 1) * r8_1 + rbp + 1) * r9_2 + rbx) << 2)) f- zmm0) f* zmm4
    f+ zmm0 f- zmm1) f* zmm5.d f+ zmm1
zmm1 = *(r10_1 + (sx.q((rbp + 1 + rsi * r8_1) * r9_2 + rbx + 1) << 2))
zmm0 = ((*(r10_1 + (sx.q((rbp + 1 + (rsi + 1) * r8_1) * r9_2 + rbx + 1) << 2)) - zmm1) * zmm4 + zmm1
    - zmm3) f* zmm5.d + zmm3
return (zmm0 f- zmm2) f* zmm6.d f+ zmm2
