// 函数: sub_142149430
// 地址: 0x142149430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t arg_18 = 0
(*(*arg1 + 0x648))(arg1, &arg_8, &arg_18)
uint128_t zmm0 = zx.o(arg_18)
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(arg_8)).d f* 1.33000004f
zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zmm0).d
*arg3 = int.d(zmm2.d)
void* rax_2 = arg1[0x15]
uint32_t rcx_1

if (rax_2 != 0)
    rcx_1 = zx.d(*(rax_2 + 0x118))
else
    rax_2 = sub_141ee69e0(arg1)
    
    if (rax_2 == 0)
        rcx_1 = data_1439c7a08
    else
        rcx_1 = zx.d(*(rax_2 + 0x118))

char rax_3 = sub_1423d2320(rcx_1)
zmm0 = zx.o(arg_18)
zmm2 = _mm_cvtepi32_ps(zx.o(arg_8))
zmm0 = _mm_cvtepi32_ps(zmm0)

if (rax_3 == 0)
    zmm2.d = zmm2.d f* 1.33000004f
else
    zmm2.d = zmm2.d f* 2.66000009f

zmm2.d = zmm2.d f* zmm0.d
int32_t result = int.d(zmm2.d)
*arg2 = result
return result
