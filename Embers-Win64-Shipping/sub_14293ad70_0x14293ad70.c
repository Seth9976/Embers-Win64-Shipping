// 函数: sub_14293ad70
// 地址: 0x14293ad70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r14 = 0
sub_1428d8e50(arg5)
int64_t* rax = sub_1428d8ba0(arg5)

if (rax != 0)
    if (arg3 == 0)
        r14 = sub_14293aae0(nullptr, arg1, arg2, arg4, arg5)
    else if (arg2 != arg3)
        if (sub_1428d9290(rax, arg2, arg3, arg5) != 0)
            r14 = sub_14293aae0(nullptr, arg1, rax, arg4, arg5)
    else if (sub_14291c760(rax, arg2, arg5) != 0)
        r14 = sub_14293aae0(nullptr, arg1, rax, arg4, arg5)

sub_1428d8a60(arg5)
return zx.q(r14)
