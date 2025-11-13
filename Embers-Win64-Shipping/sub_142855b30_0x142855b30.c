// 函数: sub_142855b30
// 地址: 0x142855b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t* rax = sub_1428a6730(0x18)
int64_t* rax_1 = sub_1428a6730(0x10)

if (rax == 0 || rax_1 == 0)
    sub_1428a6780(rax)
    sub_1428a6780(rax_1)
    return 0

*rax = arg7
rax[1] = arg5
rax[2] = arg6
*rax_1 = arg9
rax_1[1] = arg8
int32_t rax_3 =
    sub_142855960(arg1, arg2, arg3, arg4, sub_142855ef0, sub_142855f90, rax, sub_142855ef0, rax_1)

if (rax_3 == 0)
    sub_1428a6780(rax)
    sub_1428a6780(rax_1)

return zx.q(rax_3)
