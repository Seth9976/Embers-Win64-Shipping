// 函数: sub_14170ea00
// 地址: 0x14170ea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = *arg1
int128_t zmm4 = *(arg3 + 4)
int64_t zmm2 = *arg3
float zmm3 = arg3[1].d
int64_t zmm0
zmm0.d = zmm2.d f* *rax
float zmm5 = zmm4.d f* rax[4]
int128_t zmm6
zmm6.d = zmm4.d f* rax[1]
zmm4.d = zmm4.d f* rax[7]
zmm6.d = zmm6.d f+ zmm0.d
zmm0.d = zmm2.d f* rax[3]
zmm2.d = zmm2.d f* rax[6]
zmm6.d = zmm6.d f+ zmm3 f* rax[2]
zmm4.d = zmm4.d f+ zmm2.d
zmm5 = zmm5 f+ zmm0.d + zmm3 f* rax[5]
zmm4.d = zmm4.d f+ zmm3 f* rax[8]

if (not(zmm6.d f< zmm5) && not(zmm6.d f< zmm4.d))
    int32_t rax_1 = rax[2]
    *arg2 = *rax
    arg2[1].d = rax_1
    return arg2

if (not(zmm5 f< zmm6.d) && not(zmm5 f< zmm4.d))
    int32_t rax_3 = rax[5]
    *arg2 = *(rax + 0xc)
    arg2[1].d = rax_3
    return arg2

int32_t rax_5 = rax[8]
*arg2 = *(rax + 0x18)
arg2[1].d = rax_5
return arg2
