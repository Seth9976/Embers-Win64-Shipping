// 函数: sub_1403858f0
// 地址: 0x1403858f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_1 = (1 << arg3) + 1
uint128_t zmm7 = zx.o(0)
uint128_t zmm0 = zx.o(0)

if (arg4 s< r11_1)
    r11_1 = arg4

int64_t r9 = 0
uint128_t zmm6 = zx.o(0)
int64_t rcx_1 = sx.q(r11_1)

if (rcx_1 s>= 4)
    void* rdx = arg2 - arg1
    void* rax_1 = arg1 + 8
    int64_t i_3 = ((rcx_1 - 4) u>> 2) + 1
    r9 = i_3 << 2
    int64_t i
    
    do
        zmm0.d = zmm0.d f+ *(rax_1 - 8)
        zmm6.d = zmm6.d f+ *(rdx + rax_1 - 8)
        rax_1 += 0x10
        zmm0.d = zmm0.d f+ *(rax_1 - 0x14)
        zmm6.d = zmm6.d f+ *(rdx + rax_1 - 0x14)
        zmm0.d = zmm0.d f+ *(rax_1 - 0x10)
        zmm6.d = zmm6.d f+ *(rdx + rax_1 - 0x10)
        zmm0.d = zmm0.d f+ *(rax_1 - 0xc)
        zmm6.d = zmm6.d f+ *(rdx + rax_1 - 0xc)
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r9 s< rcx_1)
    int32_t* rax_2 = arg2 + (r9 << 2)
    int64_t i_2 = rcx_1 - r9
    int64_t i_1
    
    do
        zmm0.d = zmm0.d f+ *(arg1 - arg2 + rax_2)
        zmm6.d = zmm6.d f+ *rax_2
        rax_2 = &rax_2[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

zmm6.d = zmm6.d f* zmm0.d
zmm6.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(r11_1 * r11_1)).d
zmm6.d = zmm6.d f- 2f
zmm6.d = zmm6.d f* 0.0500000007f

if (0f f<= zmm6.d)
    zmm0 = zmm6
else
    zmm0 = zx.o(0)

zmm0.q = fconvert.d(zmm0.d)
double result = 1f

if (not(fconvert.s(sqrt(zmm0.q)) > 1f))
    if (not(0f f> zmm6.d))
        zmm7 = zmm6
    
    result.d = fconvert.s(sqrt(fconvert.d(zmm7.d)))

return result
