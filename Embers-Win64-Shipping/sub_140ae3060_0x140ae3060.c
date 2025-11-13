// 函数: sub_140ae3060
// 地址: 0x140ae3060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _Y = (zx.o(0)).q
uint128_t zmm8 = arg2
modf(arg1.q, &_Y)
uint128_t zmm3 = arg1

if (arg1.q f>= 0.0)
    arg2 = 0x3fe0000000000000
    arg1.q = arg1.q f- arg2.q
    
    if (not(__andps_xmmxud_memxud(arg1, data_142d57d00).q f<= zmm8.q))
        arg2 = zmm3
    
    arg2.q = arg2.q f+ _Y
    return arg2

uint32_t zmm2[0x4] = arg1
arg1 = -0x4020000000000000
zmm2[0].q = zmm2[0].q f- arg1.q

if (not(__andps_xmmxud_memxud(zmm2, data_142d57d00)[0].q f<= zmm8.q))
    arg1 = zmm3

arg1.q = arg1.q f+ _Y
return arg1
