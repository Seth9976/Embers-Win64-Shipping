// 函数: sub_140dbd520
// 地址: 0x140dbd520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0
zmm0.d = sub_140da9cd0(arg1, arg2).d f/ *(arg1 + 0x58)
int32_t zmm7 = (zx.o(0)).d

if (not(zmm0.d f< 0f))
    zmm7 = _mm_min_ss(zmm0.d, 0x3f800000)

char rax = *(arg1 + 0x5c)
*(arg1 + 0x5c) = ((not.b(rax) ^ rax) & 1) ^ rax
int64_t* rcx_1 = data_143e20d08
int64_t result = (*(*rcx_1 + 0x50))(rcx_1)
float zmm6

if ((*(arg1 + 0x5c) & 1) == 0)
    zmm6 = zmm7
else
    zmm6 = 1f f- zmm7

*(arg1 + 0x48) = zmm0 f- fconvert.d(zmm6 f* *(arg1 + 0x58))
return result
