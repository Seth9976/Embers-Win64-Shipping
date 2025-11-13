// 函数: sub_141e61a20
// 地址: 0x141e61a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg3
arg3.b = 1
void* rax_1 = sub_141e5fc50(arg1, rdx, arg3.b)

if (rax_1 != 0)
    *arg2 = *(rax_1 + 0x18)
    sub_140596d10(&arg2[1], rax_1 + 0x20)
    return arg2

*arg2 = rax_1
arg2[1] = rax_1
arg2[2] = rax_1
return arg2
