// 函数: sub_140da9cd0
// 地址: 0x140da9cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x5c)

if ((result & 4) == 0)
    int64_t* rcx = data_143e20d08
    (*(*rcx + 0x50))(rcx)
    result = *(arg1 + 0x5c)
else
    arg2 = zx.o(*(arg1 + 0x50))

float zmm1[0x4]

if ((result & 1) == 0)
    zmm1 = arg2
    zmm1[0].q = zmm1[0].q f- *(arg1 + 0x48)
else
    arg2.q = arg2.q f- *(arg1 + 0x48)
    zmm1 = _mm_cvtps_pd((*(arg1 + 0x58))[0].q)
    zmm1[0].q = zmm1[0].q f- arg2.q

arg2.d = fconvert.s(zmm1[0].q)

if ((result & 2) == 0)
    return result

return sub_140a454f0(arg2, *(arg1 + 0x58)) __tailcall
