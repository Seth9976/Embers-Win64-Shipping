// 函数: sub_140f48840
// 地址: 0x140f48840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_2

if (arg1[0x9e].b == 0)
    rax_2 = (*(*arg1 + 0x1c8))()

int128_t zmm0

if (arg1[0x9e].b != 0 || rax_2 != 0)
    zmm0 = data_142d3f670
else if (*(arg1 + 0x521) == rax_2)
    if (arg1[0xa4].b == 0)
        zmm0 = data_142e6da00
    else
        zmm0 = data_142ee7650
else if (9.99999975e-05f f< *(arg1[0x9f] + 0x2d4) || arg1[0xa4].b != 0)
    zmm0 = data_142ee7650
else
    zmm0 = data_142e6da00

*arg2 = zmm0
arg2[1].b = 0
*(arg2 + 0x18) = 0
arg2[2].q = 0
return arg2
