// 函数: sub_14203bfc0
// 地址: 0x14203bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f5b298 == 0 || (*(*arg1 + 0x150))() == 0)
    return 

int128_t zmm6 = zx.o(0)
float zmm7[0x4] = 0x3f800000

if (not(arg2.d f<= 0f))
    zmm6.d = 1f f/ arg2.d

void* rax_2 = data_143f5b298
int64_t rdi

if (data_143dbb3b5 != 0 || data_143dbb3b6 != 0 || (*(rax_2 + 0x7b8) & 0x40) != 0)
    rdi.b = 1
else
    rdi.b = 0

float zmm0[0x4] = *(rax_2 + 0x920)

if (zmm0[0] >= 1f)
    zmm0 = _mm_min_ss(zmm0[0], 0x42c80000)
else
    zmm0 = 0x3f800000

int64_t rsi

if (zmm6.d f>= zmm0[0] || rdi.b != 0)
    rsi.b = 0
else
    rsi.b = 8

void* rax_4 = (*(*arg1 + 0x150))(arg1)
*(rax_4 + 0x11c) &= 0xf7
*(rax_4 + 0x11c) |= rsi.b
zmm0 = *(data_143f5b298 + 0x920)
zmm0[0] = zmm0[0] - 5f

if (not(zmm0[0] < 1f))
    zmm7 = _mm_min_ss(zmm0[0], 0x42c80000)

if (zmm6.d f>= zmm7[0] || rdi.b != 0)
    rdi.b = 0
else
    rdi.b = 0x10

void* rax = (*(*arg1 + 0x150))(arg1)
*(rax + 0x11c) &= 0xef
*(rax + 0x11c) |= rdi.b
