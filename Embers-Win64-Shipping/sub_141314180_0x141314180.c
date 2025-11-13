// 函数: sub_141314180
// 地址: 0x141314180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg2 + 0x109c)
int64_t zmm3 = *(arg2 + 0x107c)

if (zmm4 >= 0f)
    zmm4 = _mm_min_ss(zmm4, 0x3f800000)
else
    zmm4 = (zx.o(0)).d

if (zmm3.d f>= 0f)
    zmm3 = _mm_min_ss(zmm3.d, 0x3f800000)
else
    zmm3 = (zx.o(0)).q

int32_t rdx = *(data_143eb4558 + 4)
__builtin_memset(arg1, 0, 0x18)
__builtin_memset(&arg1[4], 0, 0x18)
arg1[8] = 0
arg1[9] = 0
arg1[0xb] = 0
arg1[0xc] = 0
*(arg1 + 0x84) = 0
*(arg1 + 0x7c) = 0
*arg1 = *(*arg3 + 0x80) + 8
arg1[1].d = arg3[1].d
*(arg1 + 0xc) = *(arg3 + 0xc)
int32_t rcx_2 = arg3[2].d
arg1[2].d = rcx_2
int32_t rax_4 = *(arg3 + 0x14)
*(arg1 + 0x14) = rax_4
int32_t rcx_3 = rcx_2 - arg1[1].d
*(arg1 + 0x1c) = rax_4 - *(arg1 + 0xc)
arg1[3].d = rcx_3
int32_t rax_5
rax_5.b = rdx == 1
*(arg1 + 0x85) = rax_5.b
int32_t rax_19

if (rdx != 1)
    arg1[8] = *arg1
    arg1[0xa].d = rcx_3
    *(arg1 + 0x54) = *(arg1 + 0x1c)
    arg1[0xb].d = arg1[1].d
    *(arg1 + 0x5c) = *(arg1 + 0xc)
    arg1[0xc].d = arg1[2].d
    rax_19 = *(arg1 + 0x14)
else
    arg1[4] = *(arg3[3] + 0x80) + 8
    arg1[5].d = arg3[4].d
    *(arg1 + 0x2c) = *(arg3 + 0x24)
    arg1[6].d = arg3[5].d
    *(arg1 + 0x34) = *(arg3 + 0x2c)
    int32_t rcx_7 = arg3[5].d - arg3[4].d
    *(arg1 + 0x3c) = *(arg3 + 0x2c) - *(arg3 + 0x24)
    arg1[7].d = rcx_7
    arg1[8] = arg1[4]
    arg1[0xa].d = arg1[7].d
    *(arg1 + 0x54) = *(arg1 + 0x3c)
    arg1[0xb].d = arg1[5].d
    *(arg1 + 0x5c) = *(arg1 + 0x2c)
    arg1[0xc].d = arg1[6].d
    rax_19 = *(arg1 + 0x34)

*(arg1 + 0x64) = rax_19
arg1[9] = *(arg4 + 0x10)
*(arg1 + 0x7c) = zmm3.d
arg1[0x10].d = zmm4
float zmm2[0x4] = *(arg2 + 0x4fd4)
int64_t zmm0 = *(arg2 + 0x1098)
double zmm1[0x2] = zmm2
zmm1[0].d = zmm1[0].d f* *(arg2 + 0x1090)
zmm2[0] = zmm2[0] f* *(arg2 + 0x1094)
arg1[0xe] = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
arg1[0xf].d = zmm0.d
int32_t r15_1 = arg1[0xc].d - arg1[0xb].d
int32_t r12_1 = *(arg1 + 0x64) - *(arg1 + 0x5c)
int32_t r14 = r12_1

if (r15_1 s>= r12_1)
    r14 = r15_1

zmm1 = _mm_cvtepi32_ps(zx.o(r14))
zmm1[0].d = zmm1[0].d f* zmm3.d
zmm1[0].d = zmm1[0].d f+ zmm1[0].d
zmm0.d = -0.5f f- zmm1[0].d
int32_t rsi_2 = neg.d(int.d(zmm0.d) s>> 1)

if (not(zmm4 <= 0f))
    zmm3 = _mm_min_ss(zmm3.d, zmm4)

zmm3.d = zmm3.d f* 0.5f
double temp0_6[0x2] = _mm_cvtps_pd(zmm3)
temp0_6[0] = temp0_6[0] f* float.d(r15_1)
float temp0_7[0x4] = _mm_cvtpd_ps(temp0_6)
temp0_7[0] = temp0_7[0] + temp0_7[0]
int128_t zmm6
zmm6.d = -0.5f - temp0_7[0]
int32_t rdi_2 = neg.d(int.d(zmm6.d) s>> 1)

if (r14 + rdi_2 s> 0x1000 && r14 s< 0x1000)
    rdi_2 = 0x1000 - r14

int32_t rax_27 = r15_1 + rdi_2
int32_t r11 = rsi_2
int32_t rcx_9 = r12_1 + rdi_2

if (rax_27 s>= rsi_2)
    r11 = rax_27

bool cond:5 = rcx_9 == rsi_2

if (rcx_9 s>= rsi_2)
    rsi_2 = rcx_9

uint64_t rflags
int32_t temp0_8
temp0_8, rflags = _bit_scan_reverse(rsi_2)
int32_t r9

r9 = cond:5 ? 0x20 : 0x1f - temp0_8

int32_t r9_2 = r9 << 0x1a s>> 0x1f
bool cond:7 = r9_2 == 0
uint64_t rflags_1
int32_t temp0_9
temp0_9, rflags_1 = _bit_scan_reverse(rsi_2 - 1)
char rdi_3

if (r9_2 == 0)
    rdi_3 = 0x20
else
    rdi_3 = 0x1f - temp0_9.b
    cond:7 = 0x1f == temp0_9

uint64_t rflags_2
int32_t temp0_10
temp0_10, rflags_2 = _bit_scan_reverse(r11)
int32_t rcx_11

rcx_11 = cond:7 ? 0x20 : 0x1f - temp0_10

int32_t rcx_13 = rcx_11 << 0x1a s>> 0x1f
uint64_t rflags_3
char temp0_11
temp0_11, rflags_3 = _bit_scan_reverse(r11 - 1)
char rdx_1

if (rcx_13 == 0)
    rdx_1 = 0x20
else
    rdx_1 = 0x1f - temp0_11

int32_t r8_1 = 1 << ((not.d(rcx_13)).b & (0x20 - rdx_1))
arg1[0xd].d = r8_1
int32_t rdx_2 = 1 << ((0x20 - rdi_3) & (not.d(r9_2)).b)
*(arg1 + 0x6c) = rdx_2
int32_t rax_34
rax_34.b = rdx_2 * r11 s> r8_1 * rsi_2
*(arg1 + 0x84) = rax_34.b
return arg1
