// 函数: sub_1422a11b0
// 地址: 0x1422a11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
int64_t rax = arg3
arg3.b = 1
void* rax_1 = (*(r9 + 0x6a8))(arg1, rax, arg3, r9)

if (rax_1 != 0)
    sub_142218a40(rax_1, arg2)
    return arg2

*arg2 = rax_1
arg2[1].d = rax_1.d
return arg2
