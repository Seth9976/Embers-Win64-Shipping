// 函数: sub_142911e60
// 地址: 0x142911e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* r14 = *(*(arg1 + 0x10) + 0x28)
void* rcx = *(*(arg1 + 0x28) + 0x18)

if (rcx != 0 && arg5.q != sx.q(sub_1428916c0(rcx)))
    return 0

int32_t arg_8
int32_t result = sub_1428f0740(0, arg4, arg5, arg2, &arg_8, r14)

if (result s<= 0)
    return result

*arg3 = zx.q(arg_8)
return 1
