// 函数: sub_141fe5160
// 地址: 0x141fe5160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int128_t zmm0
int128_t zmm7

if (arg5 != 0)
    int32_t rax_2 = *(arg5 + 4) * 0xbb38435 + 0x3619636b
    *(arg5 + 4) = rax_2
    zmm7.d = (rax_2 u>> 9 | 0x3f800000).d f- 1f
else
    zmm0, zmm6 = sub_140a50670()
    zmm7 = zmm0

zmm6.d = zmm6.d f- arg1[1]
zmm6.d = zmm6.d f* *arg1

if (not(zmm6.d f>= zx.o(0).d))
    zmm6 = zx.o(0)

truncf(zmm6.d)
uint32_t r8 = zx.d(*(arg1 + 0x1a))
float zmm4 = zmm6.d f- zmm6.d
int64_t r10 = *(arg1 + 8)
int32_t r9_1 = zx.d(*(arg1 + 0x19)) - 1
int32_t rax_5 = r9_1
int32_t rcx = int.d(zmm6.d)

if (rcx u<= r9_1)
    rax_5 = rcx

if (rcx + 1 u<= r9_1)
    r9_1 = rcx + 1

int64_t r11 = sx.q(rax_5 * r8)
int64_t rdx_2 = sx.q(r9_1 * r8)
int64_t rcx_1

if (arg4 s> 0 || (arg4 == 0 && zmm7.d f> 0.5f))
    rcx_1 = 3
else
    rcx_1 = 0

zmm0 = *(r10 + ((rcx_1 + r11) << 2) + 4)
float zmm3 = (*(r10 + ((rcx_1 + rdx_2) << 2) + 4) f- zmm0.d) * zmm4 f+ zmm0.d
zmm0 = *(r10 + ((rcx_1 + r11) << 2) + 8)
arg2 = *(r10 + ((r11 + rcx_1) << 2))
int64_t result = rdx_2 + rcx_1
float zmm2 = (*(r10 + ((rcx_1 + rdx_2) << 2) + 8) f- zmm0.d) * zmm4 f+ zmm0.d
zmm0.d = (*(r10 + (result << 2))).d f- arg2.d
arg3[1] = zmm3
arg3[2] = zmm2
zmm0.d = zmm0.d f* zmm4
zmm0.d = zmm0.d f+ arg2.d
*arg3 = zmm0.d
return result
