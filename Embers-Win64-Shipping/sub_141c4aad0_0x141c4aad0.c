// 函数: sub_141c4aad0
// 地址: 0x141c4aad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))()
*arg4 = arg5
int32_t rax_2 = (*(*arg1 + 0x10))(arg1)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_2))
*arg6 = rax_2
zmm1.d = zmm1.d f* arg3.d
zmm1.d = zmm1.d f* *arg4
zmm1.d = zmm1.d f+ zmm1.d
int32_t rbx_3 = neg.d(int.d(-0.5f f- zmm1.d) s>> 1)

if ((*(*arg1 + 0x18))(arg1) != 0)
    int32_t rax_7 = (*(*arg1 + 0x20))(arg1) * *arg6
    
    if (rax_7 s>= rbx_3)
        rbx_3 = rax_7

sub_141c33270(&arg1[0xa], arg2, rbx_3 * 2, 0x3f800000)
return arg2
