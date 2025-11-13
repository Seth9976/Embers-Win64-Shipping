// 函数: sub_1403e9d90
// 地址: 0x1403e9d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg9)
int32_t r11 = *(arg1 + 0x844)
float zmm4 = *(arg1 + 0x848)
float zmm1 = *(arg1 + 0x84c)
int128_t zmm6 = arg7
int128_t zmm7 = arg6
int128_t zmm8 = arg5
int64_t rbp = 0
float zmm2
float zmm3

if (rdi s>= 4)
    float* rdx = arg3 + 4
    float* r8_1 = arg2 - arg3
    int64_t i_2 = ((rdi - 4) u>> 2) + 1
    rbp = i_2 << 2
    int64_t i
    
    do
        if (arg8 s<= 0)
            zmm2 = (zx.o(0)).d
        else
            int32_t rcx = r11 + arg8
            zmm2 = *(arg1 + ((zx.q(rcx - 1) & 0x1ff) << 2)) * arg4[1]
                + *(arg1 + ((zx.q(rcx - 2) & 0x1ff) << 2)) * *arg4
                + *(arg1 + ((zx.q(rcx) & 0x1ff) << 2)) * arg4[2]
        
        int32_t r11_2 = (r11 - 1) & 0x1ff
        float zmm5 = *(r8_1 + rdx - 4) - zmm4 f* zmm8.d
        zmm3 = zmm5 - (zmm1 f* zmm7.d + zmm4 f* zmm6.d)
        *(arg1 + (sx.q(r11_2) << 2)) = zmm3
        rdx[-1] = zmm3 - zmm2
        
        if (arg8 s<= 0)
            zmm1 = (zx.o(0)).d
        else
            int32_t rcx_1 = r11_2 + arg8
            zmm1 = *(arg1 + ((zx.q(rcx_1 - 1) & 0x1ff) << 2)) * arg4[1]
                + *(arg1 + ((zx.q(rcx_1 - 2) & 0x1ff) << 2)) * *arg4
                + *(arg1 + ((zx.q(rcx_1) & 0x1ff) << 2)) * arg4[2]
        
        int32_t r11_4 = (r11_2 - 1) & 0x1ff
        zmm4 = *(r8_1 + rdx) - zmm5 f* zmm8.d
        zmm2 = zmm4 - (zmm3 f* zmm7.d + zmm5 f* zmm6.d)
        *(arg1 + (sx.q(r11_4) << 2)) = zmm2
        *rdx = zmm2 - zmm1
        
        if (arg8 s<= 0)
            zmm1 = (zx.o(0)).d
        else
            int32_t rcx_2 = r11_4 + arg8
            zmm1 = *(arg1 + ((zx.q(rcx_2 - 1) & 0x1ff) << 2)) * arg4[1]
                + *(arg1 + ((zx.q(rcx_2 - 2) & 0x1ff) << 2)) * *arg4
                + *(arg1 + ((zx.q(rcx_2) & 0x1ff) << 2)) * arg4[2]
        
        int32_t r11_6 = (r11_4 - 1) & 0x1ff
        zmm5 = *(r8_1 + rdx + 4) - zmm4 f* zmm8.d
        zmm3 = zmm5 - (zmm2 f* zmm7.d + zmm4 f* zmm6.d)
        *(arg1 + (sx.q(r11_6) << 2)) = zmm3
        rdx[1] = zmm3 - zmm1
        
        if (arg8 s<= 0)
            zmm2 = (zx.o(0)).d
        else
            int32_t rcx_3 = r11_6 + arg8
            zmm2 = *(arg1 + ((zx.q(rcx_3 - 1) & 0x1ff) << 2)) * arg4[1]
                + *(arg1 + ((zx.q(rcx_3 - 2) & 0x1ff) << 2)) * *arg4
                + *(arg1 + ((zx.q(rcx_3) & 0x1ff) << 2)) * arg4[2]
        
        zmm4 = *(r8_1 + rdx + 8)
        r11 = (r11_6 - 1) & 0x1ff
        rdx = &rdx[4]
        zmm4 = zmm4 - zmm5 f* zmm8.d
        zmm1 = zmm4 - (zmm3 f* zmm7.d + zmm5 f* zmm6.d)
        *(arg1 + (sx.q(r11) << 2)) = zmm1
        rdx[-2] = zmm1 - zmm2
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbp s< rdi)
    void* rdx_1 = arg3 + (rbp << 2)
    int64_t i_3 = rdi - rbp
    int64_t i_1
    
    do
        if (arg8 s<= 0)
            zmm3 = (zx.o(0)).d
        else
            int32_t rcx_4 = r11 + arg8
            zmm3 = *(arg1 + ((zx.q(rcx_4 - 1) & 0x1ff) << 2)) * arg4[1]
                + *(arg1 + ((zx.q(rcx_4 - 2) & 0x1ff) << 2)) * *arg4
                + *(arg1 + ((zx.q(rcx_4) & 0x1ff) << 2)) * arg4[2]
        
        r11 = (r11 - 1) & 0x1ff
        rdx_1 += 4
        zmm2 = zmm1 f* zmm7.d + zmm4 f* zmm6.d
        zmm4 = *(rdx_1 + arg2 - arg3 - 4) - zmm4 f* zmm8.d
        zmm1 = zmm4 - zmm2
        *(arg1 + (sx.q(r11) << 2)) = zmm1
        *(rdx_1 - 4) = zmm1 - zmm3
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(arg1 + 0x848) = zmm4
*(arg1 + 0x84c) = zmm1
*(arg1 + 0x844) = r11
