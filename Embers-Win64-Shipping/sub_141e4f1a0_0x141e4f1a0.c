// 函数: sub_141e4f1a0
// 地址: 0x141e4f1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
*arg1 = arg2
int32_t arg_18 = 0
arg1[1] = 0
arg1[2].d = arg3

if (arg4 != 0)
    arg1[1] = (*(*arg4 + 0xa0))(arg4)
    return arg1

void* rcx_1 = data_143f5b298
void var_28
char rax_5

if (rcx_1 != 0)
    rdi = 1
    rax_5 = sub_141e80b60(sub_1423ddaf0(rcx_1, &var_28))

int64_t rsi

if (rcx_1 == 0 || rax_5 == 0)
    rsi.b = 0
else
    rsi = 1

if ((rdi & 1) != 0)
    sub_141e71cd0(&var_28)

if (rsi.b != 0)
    int64_t* rcx_5 = sub_1423ddaf0(data_143f5b298, &var_28)[1]
    arg1[1] = (*(*rcx_5 + 0xa0))(rcx_5, *arg1)
    sub_141e71cd0(&var_28)

return arg1
