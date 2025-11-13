// 函数: sub_1421580b0
// 地址: 0x1421580b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r11 = &arg1[3]
int32_t rax_1 = arg3 - *r11
float* r10 = arg1
int32_t zmm1 = (zx.o(0)).d
uint128_t zmm2

if (rax_1 s<= 0)
    zmm2 = zx.o(0)
else
    zmm2.d = _mm_cvtepi32_ps(zx.o(arg2)).d f/ _mm_cvtepi32_ps(zx.o(rax_1)).d

arg1[4] = zmm2.d
int64_t rdx_2 = 3
arg1[sx.q(arg4 u% 3)] = zmm2.d
int64_t result = 0

if (r10 u> r11)
    rdx_2 = 0

if (r10 u<= r11)
    do
        zmm1 = zmm1 f+ *arg1
        arg1 = &arg1[1]
        result += 1
    while (result != rdx_2)

*r11 = arg3
r10[5] = zmm1 f* 0.333333343f
return result
