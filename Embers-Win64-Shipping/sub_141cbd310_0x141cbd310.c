// 函数: sub_141cbd310
// 地址: 0x141cbd310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = int.d(arg2)
int128_t zmm7 = zx.o(0)

if (i_2 s<= 1)
    i_2 = 1

if (i_2 != 0)
    int128_t zmm6
    int128_t var_28_1 = zmm6
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        arg3()
        data_143f35844 = data_143f35844 f+ arg4[0].d
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        arg4 = zx.o(0)
        arg4[0] = float.d(performanceCount_1)
        arg4[0] = arg4[0] f* data_143d796f8
        arg4[0] = arg4[0] f- zmm6.q
        arg4 = _mm_cvtpd_ps(arg4)
        zmm7.d = zmm7.d f+ arg4[0].d
        i = i_1
        i_1 -= 1
    while (i != 1)

arg4 = zx.o(0)
*arg1 = zmm7.d
arg4[0].d = float.s(zx.q(i_2))
zmm7.d = zmm7.d f/ arg4[0].d
arg1[1] = zmm7.d
return arg1
