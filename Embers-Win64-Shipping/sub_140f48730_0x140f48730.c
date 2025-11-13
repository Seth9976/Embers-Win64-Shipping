// 函数: sub_140f48730
// 地址: 0x140f48730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = zx.o(0)

if (not(0f f< *(arg1[0x9f] + 0x2d4)))
    *arg2 = 0x3f800000
    arg2[1] = 0x3f800000
    *(arg2 + 8) = 0x3f800000
    return arg2

char rax_3

if (arg1[0x9e].b == 0)
    rax_3 = (*(*arg1 + 0x1c8))()

if (arg1[0x9e].b != 0 || rax_3 != 0)
    arg2[3] = 0x3f800000
else if (*(arg1 + 0x523) == rax_3 || arg1[0xa4].b != rax_3)
    arg2[3] = 0x3f400000
else
    if (*(arg1 + 0x524) == rax_3)
        int64_t* rcx = data_143e29f28
        (*(*rcx + 0x50))(rcx)
        arg3 = arg3 f- arg1[0xa5]
    else
        arg3 = (zx.o(0)).q
    
    float zmm2[0x4] = zx.o(0)
    zmm2[0] = fconvert.s((arg3 - 0.20000000000000001) * 5.0)
    
    if (not(zmm2[0] < 0f))
        zmm6 = _mm_min_ss(zmm2[0], 0x3f800000)
    
    arg2[3] = 1f - zmm6[0]

*arg2 = 0x3f800000
arg2[1] = 0x3f800000
arg2[2] = 0x3f800000
return arg2
