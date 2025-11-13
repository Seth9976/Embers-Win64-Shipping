// 函数: sub_141cccc80
// 地址: 0x141cccc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg3
int128_t zmm0 = *arg4
arg1[5].d = arg6
arg1[4] = arg5
*(arg1 + 0xc) = zmm0
__builtin_memset(&arg1[6], 0, 0x18)
uint64_t rbx_1 = zx.q(arg3 + 7) u>> 3
int64_t rax_1 = j_sub_140a82f30(rbx_1)
*arg1 = rax_1
memcpy(rax_1, arg2, rbx_1.d)
return arg1
