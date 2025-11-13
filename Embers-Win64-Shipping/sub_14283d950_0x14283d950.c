// 函数: sub_14283d950
// 地址: 0x14283d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t entry_r8

if (arg1[9] s< 0)
    entry_r8 = sub_142833a04(2, "chorus: number blocks must be >=0! Setting value to 0.", entry_r8)
    arg1[9] = 0
else if (arg1[9] s> 0x63)
    entry_r8 = sub_142833a04(2, 
        "chorus: number blocks larger than max. allowed! Setting value to %d.", 0x63)
    arg1[9] = 0x63

uint64_t zmm1 = arg1[7]
double i_1 = 0.28999999999999998

if (not(i_1 <= _mm_cvtps_pd(zmm1)))
    entry_r8 = sub_142833a04(2, "chorus: speed is too low (min %f)! Setting value to min.", i_1)
    arg1[7] = 0x3e947ae1
else if (not(zmm1.d f<= 5f))
    entry_r8 = sub_142833a04(2, "chorus: speed must be below %f Hz! Setting value to max.", 5.0)
    arg1[7] = 0x40a00000

if (not(0f f<= arg1[3]))
    entry_r8 = sub_142833a04(2, "chorus: depth must be positive! Setting value to 0.", entry_r8)
    arg1[3] = 0

double zmm0 = arg1[5]

if (not(0f f<= zmm0.d))
    entry_r8 = sub_142833a04(2, "chorus: level must be positive! Setting value to 0.", entry_r8)
    arg1[5] = 0
else if (not(zmm0.d f<= 10f))
    entry_r8 = sub_142833a04(2, 
        "chorus: level must be < 10. A reasonable level is << 1! Setting it to 0.1.", entry_r8)
    arg1[5] = 0x3dcccccd

i_1 = arg1[0x74]
zmm0.d = i_1.d f/ arg1[7]
zmm1 = _mm_cvtps_pd(arg1[3]) f/ 1000.0
arg1[0x70] = int.d(zmm0.d)
int32_t rdi = int.d(zmm1 f* _mm_cvtps_pd(i_1))

if (rdi s> 0x800)
    entry_r8 = sub_142833a04(2, "chorus: Too high depth. Setting it to max (%d).", 0x800)
    rdi = 0x800

if (*arg1 == 0)
    sub_14283d844(*(arg1 + 0x1c8), arg1[0x70], rdi)
else if (*arg1 != 1)
    sub_142833a04(2, "chorus: Unknown modulation type. Using sinewave.", entry_r8)
    *arg1 = 0
    sub_14283d844(*(arg1 + 0x1c8), arg1[0x70], rdi)
else
    sub_14283d8e8(*(arg1 + 0x1c8), arg1[0x70], rdi)

int32_t i = 0

if (arg1[8] s> 0)
    int32_t* rdx_2 = &arg1[0xd]
    
    do
        i_1 = zx.q(i)
        i += 1
        *rdx_2 = int.d(_mm_cvtepi32_pd(i_1)
            * _mm_cvtepi32_pd(zx.q(arg1[0x70])) f/ _mm_cvtepi32_pd(zx.q(arg1[8])))
        rdx_2 = &rdx_2[1]
    while (i s< arg1[8])

int32_t rax_2 = arg1[1]
arg1[0xc] = 0
*arg1 = rax_2
arg1[2] = arg1[3]
arg1[4] = arg1[5]
arg1[6] = arg1[7]
arg1[8] = arg1[9]
return 0
