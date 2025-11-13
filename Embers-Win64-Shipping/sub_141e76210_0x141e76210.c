// 函数: sub_141e76210
// 地址: 0x141e76210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
float zmm1[0x4] = *(rax + 0x230)
void* rdi = *(rax + 0x50)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_18 = zmm1[0]
float var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_14 = temp0[0]
sub_140a80ea0()

if (data_143de5480 != 0)
    GetCurrentThreadId()

int32_t arg_8
int32_t rax_1
float zmm1_1
rax_1, zmm1_1 = sub_141e7ab30(rdi, &var_18, &arg_8, 1)

if (rax_1 != 0xffffffff)
    zmm1_1 = __sqrtss_xmmss_memss(zmm1_1, arg_8)
else
    zmm1_1 = 2097152f

void* result = *(arg1 + 0x10)
int32_t zmm2 = (zx.o(0)).d
float temp0_3 = _mm_max_ss(data_143a2d450, 0x3f800000)
zmm1_1 = (zmm1_1 f- *(result + 0x210)) / temp0_3

if (not(zmm1_1 < 0f))
    zmm2 = _mm_min_ss(zmm1_1, 0x3f800000)

*(arg1 + 8) = (data_143a2d45c f- data_143a2d458) f* zmm2 f+ data_143a2d458
return result
