// 函数: sub_141fe4ea0
// 地址: 0x141fe4ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int128_t zmm7

if (arg5 != 0)
    int32_t rax_2 = *(arg5 + 4) * 0xbb38435 + 0x3619636b
    *(arg5 + 4) = rax_2
    zmm7.d = (rax_2 u>> 9 | 0x3f800000).d f- 1f
else
    int128_t zmm0
    zmm0, zmm6 = sub_140a50670()
    zmm7 = zmm0

zmm6.d = zmm6.d f- arg1[1]
zmm6.d = zmm6.d f* *arg1

if (not(zmm6.d f>= zx.o(0).d))
    zmm6 = zx.o(0)

truncf(zmm6.d)
uint32_t r8 = zx.d(*(arg1 + 0x1a))
int64_t r9 = *(arg1 + 8)
int32_t r10_1 = zx.d(*(arg1 + 0x19)) - 1
int32_t rcx = int.d(zmm6.d)
int32_t rax_5 = r10_1

if (rcx u<= r10_1)
    rax_5 = rcx

if (rcx + 1 u<= r10_1)
    r10_1 = rcx + 1

int64_t rcx_1 = r9 + (sx.q(rax_5 * r8) << 2)
int128_t* result

if (arg4 s> 0 || (arg4 == 0 && zmm7.d f> 0.5f))
    result = 4
else
    result = nullptr

arg2.d = (*(result + r9 + (sx.q(r10_1 * r8) << 2))).d f- *(result + rcx_1)
arg2.d = arg2.d f* (zmm6.d f- zmm6.d)
arg2.d = arg2.d f+ *(result + rcx_1)
*arg3 = arg2.d
return result
