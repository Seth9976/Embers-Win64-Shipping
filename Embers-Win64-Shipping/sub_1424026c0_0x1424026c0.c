// 函数: sub_1424026c0
// 地址: 0x1424026c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x80)

if (rcx == 0 && *(arg1 + 0x84) == rcx && *(arg1 + 0x88) == rcx && *(arg1 + 0x8c) == rcx)
    return 

void* rax_1 = *(arg1 + 0x268)
int32_t r15_1 = 0
int32_t rdx_1 = 0
int32_t r8_1 = 0

if (rax_1 != 0)
    rdx_1 = *(rax_1 + 0x258)
    r8_1 = *(rax_1 + 0x25c)

int32_t rbx_1 = *(arg1 + 0x40)
int32_t rdi_1 = *(arg1 + 0x44)
int32_t rbp_1 = 0
int32_t r10_1 = *(arg1 + 0x94)
int32_t rsi_1 = 0
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_1))
*(arg1 + 0x78) = rbx_1
*(arg1 + 0x7c) = rdi_1
zmm0.d = zmm0.d f+ *(arg1 + 0x28)
int32_t rdx_2 = int.d(zmm0.d)
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(r8_1)).d f+ *(arg1 + 0x2c)
int32_t rcx_1 = *(arg1 + 0x84)
zmm0 = _mm_cvtepi32_ps(zx.o(rbx_1))

if (rdx_2 s< rcx)
    rbp_1 = rcx - rdx_2

int32_t r8_2 = rbx_1 + rdx_2
int32_t rdx_3 = *(arg1 + 0x88)
int32_t r9_1 = int.d(zmm1.d)
zmm0.d = zmm0.d f- *(arg1 + 0x30)
zmm1 = _mm_cvtepi32_ps(zx.o(rdi_1))

if (r9_1 s< rcx_1)
    rsi_1 = rcx_1 - r9_1

int32_t r11_1 = rdi_1 + r9_1
int32_t rax_6 = *(arg1 + 0x90)
int32_t rax_7 = *(arg1 + 0x8c)
int32_t rdx_5 = rdx_3 - rax_6 + r8_2
zmm1.d = zmm1.d f- *(arg1 + 0x34)

if (r8_2 s<= rax_6 - rdx_3)
    rdx_5 = 0

int32_t r8_5 = rbx_1 - rbp_1 - rdx_5
*(arg1 + 0x40) = r8_5

if (r11_1 s> r10_1 - rax_7)
    r15_1 = rax_7 - (r10_1 - r11_1)

int32_t rcx_6 = rdi_1 - r15_1 - rsi_1
*(arg1 + 0x44) = rcx_6
int128_t var_58
__builtin_memcpy(&var_58, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x
        00", 
    0x30)
*(arg1 + 0x30) = _mm_cvtepi32_ps(zx.o(r8_5 - int.d(zmm0.d))).d
int32_t var_24_1 = _mm_cvtepi32_ps(zx.o(rsi_1)).d
*(arg1 + 0x34) = _mm_cvtepi32_ps(zx.o(rcx_6 - int.d(zmm1.d))).d
int32_t var_1c_1 = 0x3f800000
int32_t var_28_1 = _mm_cvtepi32_ps(zx.o(rbp_1)).d
int32_t var_20_1 = 0
sub_14241d720(*(arg1 + 0x260), &var_58)
