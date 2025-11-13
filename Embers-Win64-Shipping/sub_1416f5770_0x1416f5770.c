// 函数: sub_1416f5770
// 地址: 0x1416f5770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg2
void*** rax = sub_141750b40(arg1, rbx)

if (rax != 0)
    rbx = rax
    *arg2 = rax

void arg_8
(*rbx)[0x14](rbx, &arg_8)
int512_t zmm1 = sub_141755af0(rbx, arg1)
return sub_14152dda0(sub_14152dda0(arg1, &rbx[2], zmm1), rbx + 0x1c, zmm1) __tailcall
