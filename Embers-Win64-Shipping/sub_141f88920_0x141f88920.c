// 函数: sub_141f88920
// 地址: 0x141f88920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *(arg1 + 0xf0)
int64_t* r9 = r10
void* rcx = &r10[sx.q(*(arg1 + 0xf8))]
int32_t r9_1

if (r10 == rcx)
label_141f8894e:
    r9_1 = -1
else
    while (*r9 != arg2)
        r9 = &r9[1]
        
        if (r9 == rcx)
            goto label_141f8894e
    
    r9_1 = ((r9 - r10) s>> 3).d

*arg3 = 0
int64_t result

if (r9_1 == 0xffffffff)
    result.b = 0
    return result

result.b = 1
*arg3 = _mm_cvtepi32_ps(zx.o(r9_1)).d
return result
