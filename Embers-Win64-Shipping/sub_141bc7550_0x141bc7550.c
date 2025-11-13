// 函数: sub_141bc7550
// 地址: 0x141bc7550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result
int64_t r8
int512_t zmm1
int512_t zmm2_1
int32_t zmm6_1
result, r8, zmm1, zmm2_1, zmm6_1 = sub_141baf110(arg1, arg2)

if (result == 0)
    return result

zmm1.o = zx.o(0)
zmm2_1.o = zx.o(0)
uint64_t rdx_1 = zx.q(arg5)
zmm1.q = fconvert.d(zmm6_1)
sub_141bc77b0(result, rdx_1, r8, arg4, rdx_1.d, arg6, arg7)
(*(*arg1 + 0x2e8))(arg1, result)
sub_141bf4410(arg1)
return result
