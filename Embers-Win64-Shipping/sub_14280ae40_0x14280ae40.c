// 函数: sub_14280ae40
// 地址: 0x14280ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x48))(arg2, arg1 + 0x48)
(*(*arg2 + 0x50))(arg2, arg1 + 0x64)
(*(*arg2 + 0x58))(arg2, arg1 + 0x70)
(*(*arg2 + 0x80))(arg2, arg1 + 0x84)
(*(*arg2 + 0x90))(arg2)
*(arg1 + 0x88) = arg3.d
(*(*arg2 + 0xa0))(arg2)
*(arg1 + 0x8c) = arg3.d
(*(*arg2 + 0xb0))(arg2)
*(arg1 + 0x90) = arg3.d
(*(*arg2 + 0xc0))(arg2)
*(arg1 + 0x94) = arg3.d
*(arg1 + 0x98) = (*(*arg2 + 0xc8))(arg2)
*(arg1 + 0xa0) = (*(*arg2 + 0xd8))(arg2)
*(arg1 + 0xa8) = (*(*arg2 + 0xe0))(arg2)
*(arg1 + 0xb0) = arg2[2]
(*(*arg2 + 0x30))(arg2, arg1, arg1 + 8)
int32_t i = 0
void* rbx = arg1 + 0x28

do
    int128_t var_28
    (*(*arg2 + 0x40))(arg2, &var_28, zx.q(i))
    rbx += 0x1c
    i += 1
    *(rbx - 0x34) = var_28
    int32_t var_18
    *(rbx - 0x24) = var_18.d
    int32_t var_10
    *(rbx - 0x1c) = var_10.d
    int32_t var_14
    *(rbx - 0x20) = var_14
while (i u< 2)

(*(*arg2 + 0x68))(arg2, arg1 + 0x7c, arg1 + 0x80)
return arg1
