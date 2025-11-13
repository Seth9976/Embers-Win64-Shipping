// 函数: sub_141c41c60
// 地址: 0x141c41c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rax
uint128_t zmm1
float zmm2

if (arg4 s>= 4)
    void* r8 = arg3 + 4
    int32_t r9 = 2
    float* r11_2 = arg2 - arg3
    
    do
        int32_t temp1_1 = mods.dp.d(sx.q(i), *(arg1 + 0x34))
        int32_t rax_3
        rax_3.b = temp1_1 == 0
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_3))
        int64_t rax_4 = sx.q(temp1_1)
        int64_t rdx_2 = *(arg1 + 0x20)
        zmm1.d = zmm1.d f* *(arg1 + 8)
        zmm1.d = zmm1.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm1.d
        zmm2 = (*(rdx_2 + (rax_4 << 2)) f- *(r8 + r11_2 - 4)) f* zmm1.d f+ *(r8 + r11_2 - 4)
        
        if (not(zmm2 <= -1.17549435e-38f) && not(zmm2 >= 1.17549435e-38f))
            zmm2 = (zx.o(0)).d
        
        *(rdx_2 + (rax_4 << 2)) = zmm2
        *(r8 - 4) = zmm2
        int32_t temp1_2 = mods.dp.d(sx.q(r9 - 1), *(arg1 + 0x34))
        int32_t rax_7
        rax_7.b = temp1_2 == 0
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_7))
        int64_t rax_8 = sx.q(temp1_2)
        int64_t rdx_5 = *(arg1 + 0x20)
        zmm1.d = zmm1.d f* *(arg1 + 8)
        zmm1.d = zmm1.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm1.d
        zmm2 = (*(rdx_5 + (rax_8 << 2)) f- *(r11_2 + r8)) f* zmm1.d f+ *(r11_2 + r8)
        
        if (not(zmm2 <= -1.17549435e-38f) && not(zmm2 >= 1.17549435e-38f))
            zmm2 = (zx.o(0)).d
        
        *(rdx_5 + (rax_8 << 2)) = zmm2
        *r8 = zmm2
        int32_t temp1_3 = mods.dp.d(sx.q(r9), *(arg1 + 0x34))
        int32_t rax_11
        rax_11.b = temp1_3 == 0
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_11))
        int64_t rax_12 = sx.q(temp1_3)
        int64_t rdx_8 = *(arg1 + 0x20)
        zmm1.d = zmm1.d f* *(arg1 + 8)
        zmm1.d = zmm1.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm1.d
        zmm2 = (*(rdx_8 + (rax_12 << 2)) f- *(r8 + r11_2 + 4)) f* zmm1.d f+ *(r8 + r11_2 + 4)
        
        if (not(zmm2 <= -1.17549435e-38f) && not(zmm2 >= 1.17549435e-38f))
            zmm2 = (zx.o(0)).d
        
        *(rdx_8 + (rax_12 << 2)) = zmm2
        *(r8 + 4) = zmm2
        int32_t temp1_4 = mods.dp.d(sx.q(r9 + 1), *(arg1 + 0x34))
        int32_t rax_15
        rax_15.b = temp1_4 == 0
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_15))
        rax = sx.q(temp1_4)
        int64_t rdx_11 = *(arg1 + 0x20)
        zmm1.d = zmm1.d f* *(arg1 + 8)
        zmm1.d = zmm1.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm1.d
        zmm2 = (*(rdx_11 + (rax << 2)) f- *(r8 + r11_2 + 8)) f* zmm1.d f+ *(r8 + r11_2 + 8)
        
        if (not(zmm2 <= -1.17549435e-38f) && not(zmm2 >= 1.17549435e-38f))
            zmm2 = (zx.o(0)).d
        
        *(r8 + 8) = zmm2
        i += 4
        r8 += 0x10
        *(rdx_11 + (rax << 2)) = zmm2
        r9 += 4
    while (i s< arg4 - 3)

if (i s>= arg4)
    return 

float* rdi_1 = arg2 - arg3
void* r8_1 = arg3 + (sx.q(i) << 2)

do
    int32_t temp1_5 = mods.dp.d(sx.q(i), *(arg1 + 0x34))
    int32_t rax_19
    rax_19.b = temp1_5 == 0
    zmm1 = _mm_cvtepi32_ps(zx.o(rax_19))
    rax = sx.q(temp1_5)
    int64_t rdx_14 = *(arg1 + 0x20)
    zmm1.d = zmm1.d f* *(arg1 + 8)
    zmm1.d = zmm1.d f+ *(arg1 + 4)
    *(arg1 + 4) = zmm1.d
    zmm2 = (*(rdx_14 + (rax << 2)) f- *(rdi_1 + r8_1)) f* zmm1.d f+ *(rdi_1 + r8_1)
    
    if (not(zmm2 <= -1.17549435e-38f) && not(zmm2 >= 1.17549435e-38f))
        zmm2 = (zx.o(0)).d
    
    *r8_1 = zmm2
    i += 1
    r8_1 += 4
    *(rdx_14 + (rax << 2)) = zmm2
while (i s< arg4)
