// 函数: sub_14238d480
// 地址: 0x14238d480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3 = (zx.o(0)).d
float zmm5 = (zx.o(0)).d
int32_t rax
rax.b = *(arg1 + 0x170) != 0
*arg2 = rax
float result = *(arg1 + 0x84)
float zmm2 = *(arg1 + 0x80)
float zmm1 = *(arg1 + 0x88)
zmm2 = zmm2 * zmm2 + result * result + zmm1 * zmm1

if (not(zmm2 <= 9.99999994e-09f))
    zmm5 = _mm_sqrt_ss(0, zmm2)

result = *(arg1 + 0x94)
float result_1 = (zx.o(0)).d
zmm2 = *(arg1 + 0x90)
zmm1 = *(arg1 + 0x98)
zmm2 = zmm2 * zmm2 + result * result + zmm1 * zmm1

if (not(zmm2 <= 9.99999994e-09f))
    result_1 = _mm_sqrt_ss(0, zmm2)

result = *(arg1 + 0xa4)
zmm2 = *(arg1 + 0xa0)
zmm1 = *(arg1 + 0xa8)
zmm2 = zmm2 * zmm2 + result * result + zmm1 * zmm1

if (not(zmm2 <= 9.99999994e-09f))
    zmm3 = _mm_sqrt_ss(0, zmm2)

void* rax_1 = *(arg1 + 0x150)
result_1 = result_1 f* *(rax_1 + 0x50)
zmm5 = zmm5 f* *(rax_1 + 0x4c)
zmm3 = zmm3 f* *(rax_1 + 0x54)
result_1 = result_1 + result_1
zmm5 = zmm5 + zmm5
zmm3 = zmm3 f+ zmm3
result = result_1
result_1 = result_1 * zmm5
result = result f* zmm3
result = result + result
*arg3 = result_1 + result_1 + result + (zmm5 + zmm5) f* zmm3
return result
