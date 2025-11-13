// 函数: sub_141f8d230
// 地址: 0x141f8d230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f8d290(arg1, arg2, arg3, arg4)
void* r8 = *(arg1 + 0x28)
*(arg1 + 0x80) = *(*(r8 + 0x58) + 0x218)
void* rax_1 = *(r8 + 0x58)
float result[0x2] = *(rax_1 + 0x6c)
double zmm1 = *(rax_1 + 0x218)
*(arg1 + 0x90) &= 0xffffffdd
result = _mm_cvtps_pd(result)
*(arg1 + 0x7c) = 0x3f800000
*(arg1 + 0x88) = zmm1 f- result
return result
