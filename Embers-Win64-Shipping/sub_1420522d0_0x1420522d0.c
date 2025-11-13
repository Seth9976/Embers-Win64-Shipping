// 函数: sub_1420522d0
// 地址: 0x1420522d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *arg1
int32_t r10 = *arg2

if (r11 == r10)
    return 

int128_t zmm11 = *arg3
float zmm5 = *arg4 f+ zmm11.d
int128_t zmm12 = *(arg3 + 8)
zmm11.d = zmm11.d f- *arg4
float zmm3 = arg4[2] f+ zmm12.d
int128_t zmm13 = *(arg3 + 4)
zmm12.d = zmm12.d f- arg4[2]
float zmm4 = arg4[1] f+ zmm13.d
zmm5 = zmm5 * 0.5f
zmm13.d = zmm13.d f- arg4[1]
zmm3 = zmm3 * 0.5f
float i = *arg5 - zmm5
zmm11.d = zmm11.d f* zmm11.d
float zmm0 = arg5[2] f- zmm3
zmm4 = zmm4 * 0.5f
zmm13.d = zmm13.d f* zmm13.d
float zmm2 = arg5[1] f- zmm4
zmm13.d = zmm13.d f+ zmm11.d
zmm12.d = zmm12.d f* zmm12.d
zmm2 = zmm2 * zmm2 + i * i
i = *arg6 - zmm5
zmm13.d = zmm13.d f+ zmm12.d
zmm2 = zmm2 + zmm0 * zmm0
zmm0 = arg6[2] - zmm3
float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2)
zmm2 = arg6[1] - zmm4
float temp0_2 = _mm_sqrt_ss(0, zmm13.d)
float temp0_3 = _mm_sqrt_ss(0, zmm2 * zmm2 + i * i + zmm0 * zmm0)
zmm0 = temp0_2 * 0.5f
float temp0_4 = _mm_min_ss(temp0_3, temp0_1[0])
i = _mm_max_ss(temp0_3, temp0_1[0]) + zmm0

if (r11 s< r10)
    int32_t rcx = r11
    
    while (not(temp0_4 - zmm0 f<= *(arg8 + (sx.q(rcx) << 2))))
        r11 = rcx + 1
        *arg1 = r11
        rcx = r11
        r10 = *arg2
        
        if (r10 s<= r11)
            break

if (r10 s<= r11)
    return 

while (not(i f>= *(arg7 + (sx.q(r10) << 2) - 4)))
    r10 -= 1
    *arg2 = r10
    
    if (r10 s<= *arg1)
        break
