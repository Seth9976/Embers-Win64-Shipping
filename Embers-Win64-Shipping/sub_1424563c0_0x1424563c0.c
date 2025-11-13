// 函数: sub_1424563c0
// 地址: 0x1424563c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
void* rax_1 = *(arg1 + 0x130)
int64_t var_18
float result

if (rax_1 == 0)
    var_18 = data_143dbb1f8.q
    result = data_143dbb200
else
    float zmm1[0x4] = *(rax_1 + 0x1d0)
    var_18.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    result = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_18:4.d = temp0_1[0]

*arg3 = var_18
arg3[1].d = result
return result
