// 函数: sub_142609670
// 地址: 0x142609670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 2
int64_t r11 = sx.q(arg2)
float zmm6[0x4] = zx.o(0)
float zmm5[0x4] = zx.o(0)
int32_t r8 = 2
float zmm1[0x4]
float zmm4[0x4]

if (r11.d s> 2)
    float zmm0[0x4]
    
    if ((r11 - 2).d s>= 4)
        void* rcx = &arg1[0xb]
        void* rdx = arg3 + 0x10
        uint64_t i_2 = zx.q(((r11 - 6).d u>> 2) + 1)
        r8 = ((i_2 << 2) + 2).d
        uint64_t i
        
        do
            zmm4 = *(rcx - 0x18)
            zmm4[0] = zmm4[0] f- arg1[2]
            zmm0 = *(rcx - 0x14)
            zmm0[0] = zmm0[0] f- *arg1
            zmm1 = *(rcx - 0x20)
            zmm1[0] = zmm1[0] f- *arg1
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm0 = *(rcx - 0xc)
            zmm0[0] = zmm0[0] f- arg1[2]
            zmm1[0] = zmm1[0] * zmm0[0]
            zmm4[0] = zmm4[0] - zmm1[0]
            *(rdx - 8) = zmm4[0]
            float temp0_1[0x4] = _mm_max_ss(zmm4[0], 0x3a83126f)
            zmm0 = *(rcx - 0xc)
            zmm0[0] = zmm0[0] f- arg1[2]
            zmm1 = *(rcx - 0x14)
            zmm1[0] = zmm1[0] f- *arg1
            zmm5[0] = zmm5[0] + temp0_1[0]
            zmm4 = *(rcx - 8)
            zmm4[0] = zmm4[0] f- *arg1
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm0 = *rcx
            zmm0[0] = zmm0[0] f- arg1[2]
            zmm1[0] = zmm1[0] * zmm0[0]
            zmm4[0] = zmm4[0] - zmm1[0]
            *(rdx - 4) = zmm4[0]
            float temp0_2[0x4] = _mm_max_ss(zmm4[0], 0x3a83126f)
            zmm0 = *rcx
            zmm0[0] = zmm0[0] f- arg1[2]
            zmm1 = *(rcx - 8)
            zmm1[0] = zmm1[0] f- *arg1
            zmm5[0] = zmm5[0] + temp0_2[0]
            zmm4 = *(rcx + 4)
            zmm4[0] = zmm4[0] f- *arg1
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm0 = *(rcx + 0xc)
            zmm0[0] = zmm0[0] f- arg1[2]
            zmm1[0] = zmm1[0] * zmm0[0]
            zmm4[0] = zmm4[0] - zmm1[0]
            *rdx = zmm4[0]
            float temp0_3[0x4] = _mm_max_ss(zmm4[0], 0x3a83126f)
            zmm0 = *(rcx + 0xc)
            zmm0[0] = zmm0[0] f- arg1[2]
            zmm1 = *(rcx + 0x18)
            zmm1[0] = zmm1[0] f- arg1[2]
            zmm5[0] = zmm5[0] + temp0_3[0]
            zmm4 = *(rcx + 0x10)
            zmm4[0] = zmm4[0] f- *arg1
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm0 = *(rcx + 4)
            rcx += 0x30
            zmm0[0] = zmm0[0] f- *arg1
            zmm1[0] = zmm1[0] * zmm0[0]
            zmm4[0] = zmm4[0] - zmm1[0]
            *(rdx + 4) = zmm4[0]
            float temp0_4[0x4] = _mm_max_ss(zmm4[0], 0x3a83126f)
            rdx += 0x10
            zmm5[0] = zmm5[0] + temp0_4[0]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (r8 s< r11.d)
        int64_t rax_4 = sx.q(r8)
        float* rdx_1 = arg3 + (rax_4 << 2)
        uint64_t i_3 = zx.q(r11.d - r8)
        void* rcx_3 = &arg1[(rax_4 - 1) * 3]
        uint64_t i_1
        
        do
            zmm0 = *(rcx_3 + 0xc)
            zmm0[0] = zmm0[0] f- *arg1
            zmm4 = *(rcx_3 + 8)
            zmm4[0] = zmm4[0] f- arg1[2]
            zmm1 = *(rcx_3 + 0x14)
            zmm1[0] = zmm1[0] f- arg1[2]
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm0 = *rcx_3
            rcx_3 += 0xc
            zmm0[0] = zmm0[0] f- *arg1
            zmm1[0] = zmm1[0] * zmm0[0]
            zmm4[0] = zmm4[0] - zmm1[0]
            *rdx_1 = zmm4[0]
            float temp0_5[0x4] = _mm_max_ss(zmm4[0], 0x3a83126f)
            rdx_1 = &rdx_1[1]
            zmm5[0] = zmm5[0] + temp0_5[0]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

uint64_t rdx_2 = 0
zmm5[0] = zmm5[0] * arg4[0]
float zmm2 = (zx.o(0)).d

if (r11 s> 2)
    int64_t rax_7 = 2
    
    do
        bool cond:0_1 = zmm5[0] < zmm6[0]
        zmm1 = *(arg3 + (rax_7 << 2))
        zmm1[0] = zmm1[0] + zmm6[0]
        
        if (not(cond:0_1) && zmm5[0] < zmm1[0])
            rdx_2 = zx.q(r10)
            zmm2 = (zmm5[0] - zmm6[0]) / zmm1[0]
            break
        
        r10 += 1
        rax_7 += 1
        zmm6 = zmm1
    while (rax_7 s< r11)

float temp0_6[0x4] = __sqrtss_xmmss_memss(zmm5[0], arg5)
int64_t rcx_4 = sx.q((rdx_2 * 3).d)
zmm4 = 0x3f800000
arg4 = 0x3f800000
zmm4[0] = 1f - zmm2
arg4[0] = 1f - temp0_6[0]
zmm4[0] = zmm4[0] * temp0_6[0]
temp0_6[0] = temp0_6[0] * zmm2
zmm2 = arg4[0] f* *arg1
zmm4[0] = zmm4[0] f* arg1[rcx_4 - 3]
temp0_6[0] = temp0_6[0] f* arg1[rcx_4]
*arg6 = zmm2 + zmm4[0] + temp0_6[0]
zmm2 = zmm4[0] f* arg1[rcx_4 - 2]
arg4[0] = arg4[0] f* arg1[1]
temp0_6[0] = temp0_6[0] f* arg1[rcx_4 + 1]
arg6[1] = zmm2 + arg4[0] + temp0_6[0]
zmm4[0] = zmm4[0] f* arg1[rcx_4 - 1]
arg4[0] = arg4[0] f* arg1[2]
temp0_6[0] = temp0_6[0] f* arg1[rcx_4 + 2]
zmm4[0] = zmm4[0] + arg4[0]
zmm4[0] = zmm4[0] + temp0_6[0]
arg6[2] = zmm4[0]
return arg4
