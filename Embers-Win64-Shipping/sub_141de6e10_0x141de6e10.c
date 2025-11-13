// 函数: sub_141de6e10
// 地址: 0x141de6e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
uint32_t zmm3 = 0x3f800000
uint32_t zmm1[0x4]

if (rax == 0)
    zmm1 = 0x3f800000
else
    zmm1 = *(rax + 0x94)

zmm1[0] = zmm1[0] f* *(arg1 + 0x14)

if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f<= 9.99999994e-09f))
    zmm3 = zmm1[0]

uint32_t result[0x4] = *arg2
int32_t rax_1 = 0
result[0] = result[0] f- arg1[1].d
int128_t zmm7 = arg1[2].d
int32_t zmm4 = *(arg1 + 0xc)
int32_t rdx = arg1[3].d
int128_t zmm6
zmm6.d = zmm7.d f- zmm4
result[0] = result[0] f* zmm3
uint32_t temp0_1[0x4] = _mm_and_ps(result, 0x7fffffff)
temp0_1[0] = temp0_1[0] f/ zmm6.d
temp0_1[0] = temp0_1[0] f+ temp0_1[0]
temp0_1[0] = temp0_1[0] f- 0.5f
int32_t rcx_1 = int.d(temp0_1[0]) s>> 1

if (rdx - 1 s>= 0)
    rax_1 = rdx - 1

if (rcx_1 s<= rax_1)
    rax_1 = rcx_1

zmm1 = _mm_cvtepi32_ps(zx.o(rax_1))

if (not(zmm3 f>= 0f))
    zmm4 = zmm7.d

zmm1[0] = zmm1[0] f* zmm6.d
result[0] = result[0] f- zmm1[0]
result[0] = result[0] f+ zmm4
return result
