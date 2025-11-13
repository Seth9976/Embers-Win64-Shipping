// 函数: sub_140b0d5f0
// 地址: 0x140b0d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = arg3
zmm0[0] = zmm0[0] + 0.5
int64_t rcx = int.q(zmm0[0])

if (rcx != -0x8000000000000000)
    double zmm1[0x2] = zx.o(0)
    zmm1[0] = float.d(rcx)
    
    if (not(zmm1[0] == zmm0[0]))
        uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
        zmm0 = zx.o(0)
        zmm0[0] = float.d(rcx - (zx.q(temp0_2) & 1))

if (zmm0[0] != arg3[0] || arg3[0] <= 0.0 || arg3[0] >= 2147483647.0)
    sub_140b204a0(arg2, arg3)
    return arg2

int32_t rax_3 = int.d(arg3[0])
int32_t arg_18 = 1
int32_t arg_1c = rax_3
int32_t* arg_20 = &arg_18
sub_140b07c30(arg2, &arg_20)
return arg2
