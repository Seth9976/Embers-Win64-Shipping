// 函数: sub_141527890
// 地址: 0x141527890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x30)
double zmm0 = rdx[1]
void* r8 = &rdx[3]
double result = *rdx
double zmm1 = rdx[2]
void* rcx = &rdx[sx.q(*(arg1 + 0x18) * 3)]
result = result * result + zmm0 * zmm0 + zmm1 * zmm1

while (r8 u< rcx)
    double zmm2 = *(r8 + 8)
    zmm0 = *r8
    zmm1 = *(r8 + 0x10)
    r8 += 0x18
    result = _mm_max_sd(zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1, result)

return result
