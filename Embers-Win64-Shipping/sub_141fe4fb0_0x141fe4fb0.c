// 函数: sub_141fe4fb0
// 地址: 0x141fe4fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
zmm6.d = arg2.d f- arg1[1]
zmm6.d = zmm6.d f* *arg1

if (not(zmm6.d f>= 0f))
    zmm6 = zx.o(0)

int32_t _X = zmm6.d
truncf(_X)
uint32_t r8 = zx.d(*(arg1 + 0x1a))
int64_t r9 = *(arg1 + 8)
int32_t r10_1 = zx.d(*(arg1 + 0x19)) - 1
int32_t rcx = int.d(zmm6.d)
int32_t rax = r10_1

if (rcx u<= r10_1)
    rax = rcx

if (rcx + 1 u<= r10_1)
    r10_1 = rcx + 1

arg2 = *(r9 + (sx.q(rax * r8) << 2))
int64_t result = sx.q(r10_1 * r8)
*arg3 = (*(r9 + (result << 2)) f- arg2.d) f* (zmm6.d f- _X) f+ arg2.d
return result
