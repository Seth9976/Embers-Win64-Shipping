// 函数: sub_141528360
// 地址: 0x141528360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg10)
uint64_t rsi = zx.q(arg9)
uint64_t rdi = zx.q(arg8)
sub_141528480(arg1, arg2, arg3, arg4, arg5, arg6, arg7, rdi.d, rsi.d, rbp.d, arg11, arg12, arg13, 
    arg14, 3)

if (arg13 != 0)
    rbp = zx.q(((rbp << 1) + 1).d)

if (arg12 != 0)
    rsi = zx.q(((rsi << 1) + 1).d)

if (arg11 != 0)
    rdi = zx.q(((rdi << 1) + 1).d)

int64_t var_78
var_78.d = rbp.d
sub_14152bd50(&arg1[0x34], arg1, rdi.d, rsi.d, var_78.d)
return arg1
