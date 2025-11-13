// 函数: sub_141fe5050
// 地址: 0x141fe5050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int128_t zmm0
int128_t zmm7

if (arg4 != 0)
    int32_t rax_2 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
    *(arg4 + 4) = rax_2
    zmm7.d = (rax_2 u>> 9 | 0x3f800000).d f- 1f
else
    zmm0, zmm6 = sub_140a50670()
    zmm7 = zmm0

zmm6.d = zmm6.d f- arg1[1]
zmm6.d = zmm6.d f* *arg1

if (not(zmm6.d f>= zx.o(0).d))
    zmm6 = zx.o(0)

truncf(zmm6.d)
int64_t r10 = *(arg1 + 8)
uint32_t r8 = zx.d(*(arg1 + 0x1a))
float zmm3 = zmm6.d f- zmm6.d
int32_t r9_1 = zx.d(*(arg1 + 0x19)) - 1
int32_t rcx = int.d(zmm6.d)
int32_t rax_5 = r9_1

if (rcx u<= r9_1)
    rax_5 = rcx

if (rcx + 1 u<= r9_1)
    r9_1 = rcx + 1

int64_t rcx_1 = sx.q(rax_5 * r8)
int64_t result = sx.q(r9_1 * r8)
zmm0.d = (*(r10 + (result << 2) + 4)).d f- *(r10 + (rcx_1 << 2) + 4)
zmm0.d = zmm0.d f* zmm3
float zmm2 = (*(r10 + (result << 2)) f- *(r10 + (rcx_1 << 2))) * zmm3 f+ *(r10 + (rcx_1 << 2))
zmm0.d = zmm0.d f+ *(r10 + (rcx_1 << 2) + 4)
zmm0.d = zmm0.d f- zmm2
zmm0.d = zmm0.d f* zmm7.d
zmm0.d = zmm0.d f+ zmm2
*arg3 = zmm0.d
return result
