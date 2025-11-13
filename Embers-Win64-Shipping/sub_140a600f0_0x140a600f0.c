// 函数: sub_140a600f0
// 地址: 0x140a600f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e61a30
arg1[1] = arg2
int64_t rax_1 = (*(*arg2 + 8))(arg2)
arg1[2] = rax_1
arg1[3] = rax_1
arg1[4] = (*(*arg2 + 0x40))(arg2)
arg1[5].b = arg4
*(arg1 + 0x29) = arg3
arg1[0x400a].d = 0
__builtin_memset(&arg1[0x4006], 0xff, 0x20)
return arg1
