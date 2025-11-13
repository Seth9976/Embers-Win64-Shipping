// 函数: sub_1423940e0
// 地址: 0x1423940e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc40)
int32_t rbp = arg4

if (rax u>= 0x62)
    arg4.b = 1
    sub_14198a900(&data_143f02b98, arg1, rax, arg4.b, arg5, arg6)
    rax = 0

int32_t* rcx_1 = zx.q(rax) << 5
*(arg1 + 0xc40) = rax + 1
void* var_20 = arg3
char var_14 = arg7
*(rcx_1 + arg1 + 8) = arg2.o
*(rcx_1 + arg1) = 2
*(rcx_1 + arg1 + 0x18) = rbp.q
*(arg2 + 8) += 1

if (arg3 != 0)
    *(arg3 + 8) += 1

return arg7
