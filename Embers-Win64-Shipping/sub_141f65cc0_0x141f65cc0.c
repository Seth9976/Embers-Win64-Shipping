// 函数: sub_141f65cc0
// 地址: 0x141f65cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
int32_t rcx = 0
int128_t zmm10 = arg3
void* r10_1 = sx.q(arg2) * 0x2c + r9

if (arg2 != arg1[1].d - 1)
    rcx = arg2 + 1

char rax_3 = *(r10_1 + 0x28)
void* rcx_2 = sx.q(rcx) * 0x2c + r9
int64_t zmm0
float zmm1[0x4]

if (rax_3 == 0)
    zmm0.d = (*(rcx_2 + 0xc)).d f- *(r10_1 + 0xc)
    arg3.d = (*(rcx_2 + 4)).d f- *(r10_1 + 4)
    zmm1 = *(rcx_2 + 8)
    zmm1[0] = zmm1[0] f- *(r10_1 + 8)
    zmm0.d = zmm0.d f* arg4[2]
    arg3.d = arg3.d f* *arg4
    zmm1[0] = zmm1[0] f* arg4[1]
    zmm0.d = zmm0.d f* zmm0.d
    zmm1[0] = zmm1[0] * zmm1[0]
    arg3.d = arg3.d f* arg3.d
    zmm1[0] = zmm1[0] f+ arg3.d
    zmm1[0] = zmm1[0] f+ zmm0.d
    zmm0.d = _mm_sqrt_ss(0, zmm1[0]).d f* zmm10.d
    return zmm0

if (rax_3 == 2)
    return (zx.o(0)).q

float zmm5 = *(rcx_2 + 0x14)
zmm1 = *(r10_1 + 4)
int64_t zmm4 = *(r10_1 + 0x20)
float zmm3 = *(rcx_2 + 0x10)
arg3 = *(r10_1 + 0x1c)
int32_t rax_5 = *(r10_1 + 0x24)
zmm10.d = zmm10.d f* 0.5f
int128_t zmm6 = *(r10_1 + 8)
int128_t zmm7 = *(rcx_2 + 0x18)
int128_t zmm8 = *(r10_1 + 0x24)
float zmm9[0x4] = *(r10_1 + 0xc)
zmm9[0] = zmm9[0] f- *(rcx_2 + 0xc)
int128_t zmm14 = *(rcx_2 + 4)
zmm1[0] = zmm1[0] f- zmm14.d
int128_t zmm15 = *(rcx_2 + 8)
zmm14.d = zmm14.d f- zmm1[0]
int128_t zmm12
zmm12.d = zmm6.d f- zmm15.d
zmm15.d = zmm15.d f- zmm6.d
zmm6 = *arg4
zmm9[0] = zmm9[0] + zmm9[0]
zmm1[0] = zmm1[0] + zmm1[0]
zmm14.d = zmm14.d f* 6f
zmm12.d = zmm12.d f+ zmm12.d
zmm15.d = zmm15.d f* 6f
zmm9[0] = zmm9[0] f+ zmm8.d
zmm1[0] = zmm1[0] f+ arg3.d
zmm12.d = zmm12.d f+ zmm4.d
zmm9[0] = zmm9[0] f+ zmm7.d
zmm1[0] = zmm1[0] + zmm3
zmm7.d = zmm7.d f+ zmm7.d
zmm12.d = zmm12.d f+ zmm5
zmm9[0] = zmm9[0] * 3f
zmm1[0] = zmm1[0] * 3f
zmm12.d = zmm12.d f* 3f
zmm4.d = zmm4.d f* 4f
zmm8.d = zmm8.d f* 4f
zmm15.d = zmm15.d f- zmm4.d
arg3.d = arg3.d f* 4f
zmm4 = (zx.o(0)).q
int64_t var_b8 = *(r10_1 + 0x1c)
zmm14.d = zmm14.d f- arg3.d
zmm15.d = zmm15.d f- (zmm5 + zmm5)
void* const i = &data_14327f148
zmm14.d = zmm14.d f- (zmm3 + zmm3)
zmm5 = (*(rcx_2 + 0xc) - zmm9[0]) * 6f f- zmm8.d
zmm8 = arg4[2]
zmm5 = zmm5 f- zmm7.d
zmm7 = arg4[1]

do
    zmm0.d = (*i).d f+ 1f
    zmm3 = zmm1[0]
    zmm0.d = zmm0.d f* zmm10.d
    zmm9[0] = zmm9[0] f* zmm0.d
    arg3.d = zmm12.d f* zmm0.d
    zmm9[0] = zmm9[0] + zmm5
    arg3.d = arg3.d f+ zmm15.d
    zmm9[0] = zmm9[0] f* zmm0.d
    arg3.d = arg3.d f* zmm0.d
    zmm9[0] = zmm9[0] + rax_5[0]
    arg3.d = arg3.d f+ var_b8:4.d
    zmm9[0] = zmm9[0] f* zmm8.d
    arg3.d = arg3.d f* zmm7.d
    zmm9[0] = zmm9[0] * zmm9[0]
    arg3.d = arg3.d f* arg3.d
    zmm3 = ((zmm3 f* zmm0.d f+ zmm14.d) f* zmm0.d f+ var_b8.d) f* zmm6.d
    arg3.d = arg3.d f+ zmm3 * zmm3
    arg3.d = arg3.d f+ zmm9[0]
    float temp0_2[0x4] = _mm_sqrt_ss(0, arg3.d)
    temp0_2[0] = temp0_2[0] f* *(i + 4)
    i += 8
    zmm4.d = zmm4.d f+ temp0_2[0]
while (i != u"SplineCurves")

zmm4.d = zmm4.d f* zmm10.d
return zmm4
