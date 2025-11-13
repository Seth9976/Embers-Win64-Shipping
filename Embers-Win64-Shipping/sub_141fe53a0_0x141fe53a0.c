// 函数: sub_141fe53a0
// 地址: 0x141fe53a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int128_t zmm0
int128_t zmm8
int128_t zmm9
int128_t zmm10

if (arg4 != 0)
    int32_t rcx_1 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
    zmm8.d = (rcx_1 u>> 9 | 0x3f800000).d f- 1f
    zmm9.d = ((rcx_1 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
    *(arg4 + 4) = (rcx_1 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
    zmm10.d =
        (((rcx_1 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
else
    zmm8 = sub_140a50670()
    zmm9 = sub_140a50670()
    zmm0, zmm6 = sub_140a50670()
    zmm10 = zmm0

uint32_t rcx_4 = zx.d(arg1[7].b)

if (rcx_4 == 1)
    zmm9 = zmm8
else if (rcx_4 == 2)
    zmm10 = zmm8
else if (rcx_4 == 3)
    zmm10 = zmm9
else if (rcx_4 == 4)
    zmm10 = zmm8
    zmm9 = zmm8

zmm6.d = zmm6.d f- arg1[1]
zmm6.d = zmm6.d f* *arg1

if (not(zmm6.d f>= zx.o(0).d))
    zmm6 = zx.o(0)

truncf(zmm6.d)
int64_t r10 = *(arg1 + 8)
uint32_t r8 = zx.d(*(arg1 + 0x1a))
int128_t zmm7
zmm7.d = zmm6.d f- zmm6.d
int32_t r9_1 = zx.d(*(arg1 + 0x19)) - 1
int32_t rcx_8 = int.d(zmm6.d)
int32_t rax_11 = r9_1

if (rcx_8 u<= r9_1)
    rax_11 = rcx_8

if (rcx_8 + 1 u<= r9_1)
    r9_1 = rcx_8 + 1

int64_t rcx_9 = sx.q(rax_11 * r8)
int64_t result = sx.q(r9_1 * r8)
zmm6.d = (*(r10 + (result << 2))).d f- *(r10 + (rcx_9 << 2))
zmm0.d = (*(r10 + (result << 2) + 0xc)).d f- *(r10 + (rcx_9 << 2) + 0xc)
zmm0.d = zmm0.d f* zmm7.d
zmm6.d = zmm6.d f* zmm7.d
zmm0.d = zmm0.d f+ *(r10 + (rcx_9 << 2) + 0xc)
zmm6.d = zmm6.d f+ *(r10 + (rcx_9 << 2))
float zmm5 =
    (*(r10 + (result << 2) + 4) f- *(r10 + (rcx_9 << 2) + 4)) f* zmm7.d f+ *(r10 + (rcx_9 << 2) + 4)
float zmm4 =
    (*(r10 + (result << 2) + 8) f- *(r10 + (rcx_9 << 2) + 8)) f* zmm7.d f+ *(r10 + (rcx_9 << 2) + 8)
zmm0.d = zmm0.d f- zmm6.d
zmm0.d = zmm0.d f* zmm8.d
float zmm3 = ((*(r10 + (result << 2) + 0x10) f- *(r10 + (rcx_9 << 2) + 0x10)) f* zmm7.d f+
    *(r10 + (rcx_9 << 2) + 0x10) - zmm5) f* zmm9.d
zmm0.d = zmm0.d f+ zmm6.d
float zmm2 = ((*(r10 + (result << 2) + 0x14) f- *(r10 + (rcx_9 << 2) + 0x14)) f* zmm7.d f+
    *(r10 + (rcx_9 << 2) + 0x14) - zmm4) f* zmm10.d
*arg3 = zmm0.d
arg3[1] = zmm3 + zmm5
arg3[2] = zmm2 + zmm4
return result
