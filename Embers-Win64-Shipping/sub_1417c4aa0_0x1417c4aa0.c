// 函数: sub_1417c4aa0
// 地址: 0x1417c4aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = arg3
float zmm7[0x4] = arg2
uint128_t zmm9 = arg2
float zmm12[0x4] = arg4
int32_t rdx = int.d(zmm7[0])

if (rdx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx)).d f== zmm7[0]))
    zmm7 = _mm_cvtepi32_ps(zx.o(rdx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm7, zmm7[0].q)) & 1)))

int32_t rcx = int.d(arg3[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== arg3[0]))
    arg3 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))

arg2 = zmm12
int32_t rcx_2 = int.d(arg2[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== arg2[0]))
    arg2 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2[0].q)) & 1)))

zmm9.d = zmm9.d f- zmm7[0]
zmm5.d = zmm5.d f- arg3[0]
zmm12[0] = zmm12[0] - arg2[0]
uint32_t r8 = zx.d((int.d(arg3[0])).b)
float zmm4[0x4] = zmm9
zmm4[0] = zmm4[0] - 1f
uint128_t zmm14
zmm14.d = zmm9.d f* 6f
zmm14.d = zmm14.d f- 15f
uint32_t r9 = zx.d((int.d(arg2[0])).b)
uint128_t zmm6
zmm6.d = zmm5.d f- 1f
float zmm8[0x4] = zmm12
zmm8[0] = zmm8[0] - 1f
uint128_t zmm15
zmm15.d = zmm5.d f* 6f
uint64_t rdx_2 = zx.q((int.d(zmm7[0])).b)
uint128_t zmm0
zmm0.d = zmm9.d f* zmm9.d
zmm12[0] = zmm12[0] * 6f
zmm15.d = zmm15.d f- 15f
zmm0.d = zmm0.d f* zmm9.d
int64_t rcx_4 = sx.q(*(&data_1439b8f80 + (rdx_2 << 2)) + r8)
int32_t rax_12 = *((rdx_2 << 2) + 0x1439b8f84)
zmm12[0] = zmm12[0] - 15f
zmm14.d = zmm14.d f* zmm9.d
int32_t r11_1 = *(&data_1439b8f80 + (rcx_4 << 2)) + r9
int64_t rcx_5 = sx.q(rax_12 + r8)
zmm14.d = zmm14.d f+ 10f
zmm15.d = zmm15.d f* zmm5.d
int32_t r10_1 = *((rcx_4 << 2) + 0x1439b8f84) + r9
zmm12[0] = zmm12[0] * zmm12[0]
zmm15.d = zmm15.d f+ 10f
zmm14.d = zmm14.d f* zmm0.d
int64_t rbx = sx.q(*((rcx_5 << 2) + 0x1439b8f84) + r9)
int32_t r8_2 = *(&data_1439b8f80 + (rcx_5 << 2)) + r9
zmm12[0] = zmm12[0] + 10f
zmm0.d = zmm5.d f* zmm5.d
int32_t rcx_6 = *((rbx << 2) + 0x1439b8f84)
int32_t rax_17 = rcx_6 & 0xf
zmm0.d = zmm0.d f* zmm5.d
zmm15.d = zmm15.d f* zmm0.d
zmm0.d = zmm12.d f* zmm12[0]
zmm0.d = zmm0.d f* zmm12[0]
zmm12[0] = zmm12[0] f* zmm0.d
float arg_10 = zmm12[0]
float zmm13[0x4]

zmm13 = rax_17 u>= 8 ? zmm6 : zmm4

if (rax_17 u< 4)
    zmm0 = zmm6
else if (((rax_17 - 0xc) & 0xfffffffd) == 0)
    zmm0 = zmm4
else
    zmm0 = zmm8

if ((rcx_6.b & 1) != 0)
    zmm13 ^= 0x80000000

if ((rcx_6.b & 2) != 0)
    zmm0 ^= 0x80000000

int64_t rdx_3 = sx.q(r10_1)
int32_t rcx_7 = *((rdx_3 << 2) + 0x1439b8f84)
int32_t rax_20 = rcx_7 & 0xf

arg2 = rax_20 u>= 8 ? zmm6 : zmm9

uint128_t zmm10

if (rax_20 u< 4)
    zmm10 = zmm6
else if (((rax_20 - 0xc) & 0xfffffffd) == 0)
    zmm10 = zmm9
else
    zmm10 = zmm8

if ((rcx_7.b & 1) != 0)
    arg2 ^= 0x80000000

if ((rcx_7.b & 2) != 0)
    zmm10 ^= 0x80000000

int64_t r9_1 = sx.q(r8_2)
zmm10.d = zmm10.d f+ arg2[0]
int32_t rcx_8 = *((r9_1 << 2) + 0x1439b8f84)
int32_t rax_23 = rcx_8 & 0xf

zmm7 = rax_23 u>= 8 ? zmm5 : zmm4

if (rax_23 u< 4)
    arg4 = zmm5
else if (((rax_23 - 0xc) & 0xfffffffd) == 0)
    arg4 = zmm4
else
    arg4 = zmm8

if ((rcx_8.b & 1) != 0)
    zmm7 ^= 0x80000000

if ((rcx_8.b & 2) != 0)
    arg4 ^= 0x80000000

int64_t r8_3 = sx.q(r11_1)
int32_t rcx_9 = *((r8_3 << 2) + 0x1439b8f84)
int32_t rax_26 = rcx_9 & 0xf

arg2 = rax_26 u>= 8 ? zmm5 : zmm9

if (rax_26 u< 4)
    zmm8 = zmm5
else if (((rax_26 - 0xc) & 0xfffffffd) == 0)
    zmm8 = zmm9

if ((rcx_9.b & 1) != 0)
    arg2 ^= 0x80000000

if ((rcx_9.b & 2) != 0)
    zmm8 ^= 0x80000000

int32_t rcx_10 = *(&data_1439b8f80 + (rbx << 2))
arg4[0] = arg4[0] + zmm7[0]
zmm8[0] = zmm8[0] + arg2[0]
int32_t rax_29 = rcx_10 & 0xf
arg4[0] = arg4[0] - zmm8[0]
arg4[0] = arg4[0] f* zmm14.d
arg4[0] = arg4[0] + zmm8[0]
uint128_t zmm11

zmm11 = rax_29 u>= 8 ? zmm6 : zmm4

if (rax_29 u< 4)
    arg2 = zmm6
else if (((rax_29 - 0xc) & 0xfffffffd) == 0)
    arg2 = zmm4
else
    arg2 = zmm12

if ((rcx_10.b & 1) != 0)
    zmm11 ^= 0x80000000

if ((rcx_10.b & 2) != 0)
    arg2 ^= 0x80000000

int32_t rcx_11 = *(&data_1439b8f80 + (rdx_3 << 2))
int32_t rax_32 = rcx_11 & 0xf

zmm7 = rax_32 u>= 8 ? zmm6 : zmm9

if (rax_32 u>= 4)
    if (((rax_32 - 0xc) & 0xfffffffd) == 0)
        zmm6 = zmm9
    else
        zmm6 = zmm12

if ((rcx_11.b & 1) != 0)
    zmm7 ^= 0x80000000

if ((rcx_11.b & 2) != 0)
    zmm6 ^= 0x80000000

int32_t rcx_12 = *(&data_1439b8f80 + (r9_1 << 2))
zmm6.d = zmm6.d f+ zmm7[0]
int32_t rax_35 = rcx_12 & 0xf

zmm8 = rax_35 u>= 8 ? zmm5 : zmm4

if (rax_35 u< 4)
    zmm4 = zmm5
else if (((rax_35 - 0xc) & 0xfffffffd) != 0)
    zmm4 = zmm12

if ((rcx_12.b & 1) != 0)
    zmm8 ^= 0x80000000

if ((rcx_12.b & 2) != 0)
    zmm4 ^= 0x80000000

int32_t rcx_13 = *(&data_1439b8f80 + (r8_3 << 2))
int32_t result = rcx_13 & 0xf

zmm7 = result u>= 8 ? zmm5 : zmm9

if (result u>= 4)
    result -= 0xc
    
    if ((result & 0xfffffffd) == 0)
        zmm5 = zmm9
    else
        zmm5 = zmm12

if ((rcx_13.b & 1) != 0)
    zmm7 ^= 0x80000000

if ((rcx_13.b & 2) != 0)
    zmm5 ^= 0x80000000

zmm0.d = zmm0.d f+ zmm13[0]
arg2[0] = arg2[0] f+ zmm11.d
zmm4[0] = zmm4[0] + zmm8[0]
zmm5.d = zmm5.d f+ zmm7[0]
zmm0.d = zmm0.d f- zmm10.d
arg2[0] = arg2[0] f- zmm6.d
zmm4[0] = zmm4[0] f- zmm5.d
zmm0.d = zmm0.d f* zmm14.d
arg2[0] = arg2[0] f* zmm14.d
zmm0.d = zmm0.d f+ zmm10.d
zmm4[0] = zmm4[0] f* zmm14.d
arg2[0] = arg2[0] f+ zmm6.d
zmm4[0] = zmm4[0] f+ zmm5.d
zmm0.d = zmm0.d f- arg4[0]
arg2[0] = arg2[0] - zmm4[0]
zmm0.d = zmm0.d f* zmm15.d
zmm0.d = zmm0.d f+ arg4[0]
arg2[0] = arg2[0] f* zmm15.d
arg2[0] = arg2[0] + zmm4[0]
zmm0.d = zmm0.d f- arg2[0]
zmm0.d = zmm0.d f* arg_10
zmm0.d = zmm0.d f+ arg2[0]
*arg1 = zmm0.d
return result
