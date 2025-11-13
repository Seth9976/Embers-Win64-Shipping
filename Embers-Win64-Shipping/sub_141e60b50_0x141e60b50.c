// 函数: sub_141e60b50
// 地址: 0x141e60b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg3
arg3.b = 1
void* rax_1 = sub_141e5fc50(arg1, rdx, arg3.b)

if (rax_1 == 0)
    *arg2 = rax_1
    arg2[1] = rax_1
    return arg2

void* rax_3
void* rdi_1

if (arg4 == 0)
    rdi_1 = rax_1 + 0x50
    rax_3 = *(rax_1 + 0x50)

if (arg4 != 0 || rax_3 == 0 || *(rax_3 + 0x12) != 0 || *(rax_3 + 0x11) != 0)
    rdi_1 = rax_1 + 0x30

if (arg5 != 0)
    sub_140780c40(arg5, rdi_1 + 0x10)

*arg2 = *rdi_1
void* rax_5 = *(rdi_1 + 8)
arg2[1] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

return arg2
