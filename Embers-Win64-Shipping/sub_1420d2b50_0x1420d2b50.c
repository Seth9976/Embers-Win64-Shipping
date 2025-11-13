// 函数: sub_1420d2b50
// 地址: 0x1420d2b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg3) * 0x38
int64_t rax = *(arg1 + 0x48)

if (arg2 == 0)
    *(rcx + rax + 4) = arg4
    arg3.b = 1
    return sub_14207d710(arg1 + 0x48, zx.o(0), arg3.b) __tailcall

if (arg2 == 1)
    *(rax + rcx + 8) = arg4
    return sub_14207d710(arg1 + 0x48, zx.o(0), arg2.b) __tailcall

if (arg2 != 2)
    *(rax + rcx + 0x10) = arg4
    arg3.b = 1
    return sub_14207d710(arg1 + 0x48, zx.o(0), arg3.b) __tailcall

*(rax + rcx + 0xc) = arg4
arg3.b = 1
return sub_14207d710(arg1 + 0x48, zx.o(0), arg3.b) __tailcall
