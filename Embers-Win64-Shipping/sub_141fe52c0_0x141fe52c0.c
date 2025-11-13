// 函数: sub_141fe52c0
// 地址: 0x141fe52c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
zmm6.d = arg2.d f- arg1[1]
zmm6.d = zmm6.d f* *arg1

if (not(zmm6.d f>= 0f))
    zmm6 = zx.o(0)

int32_t _X = zmm6.d
truncf(_X)
int64_t r10 = *(arg1 + 8)
uint32_t r8 = zx.d(*(arg1 + 0x1a))
float zmm4 = zmm6.d f- _X
int32_t r9_1 = zx.d(*(arg1 + 0x19)) - 1
int32_t rcx = int.d(zmm6.d)
int32_t rax = r9_1

if (rcx u<= r9_1)
    rax = rcx

if (rcx + 1 u<= r9_1)
    r9_1 = rcx + 1

int64_t rcx_1 = sx.q(rax * r8)
int64_t rax_2 = sx.q(r9_1 * r8)
arg2.d = (*(r10 + (rax_2 << 2))).d f- *(r10 + (rcx_1 << 2))
arg2.d = arg2.d f* zmm4
float zmm2 =
    (*(r10 + (rax_2 << 2) + 8) f- *(r10 + (rcx_1 << 2) + 8)) * zmm4 f+ *(r10 + (rcx_1 << 2) + 8)
arg2.d = arg2.d f+ *(r10 + (rcx_1 << 2))
arg3[1] =
    (*(r10 + (rax_2 << 2) + 4) f- *(r10 + (rcx_1 << 2) + 4)) * zmm4 f+ *(r10 + (rcx_1 << 2) + 4)
arg3[2] = zmm2
*arg3 = arg2.d
return _X
