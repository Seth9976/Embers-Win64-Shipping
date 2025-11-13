// 函数: sub_140a49340
// 地址: 0x140a49340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x58))()
int64_t r9 = *arg1

if (rax_1 != 0)
    int64_t* rax_2 = (*(r9 + 0x58))(arg1, arg5, arg6, r9)
    return (*(*rax_2 + 0x130))(rax_2, arg2, arg3, arg4, arg7)

void arg_8
*arg4 = *(*(r9 + 0xa0))(arg1, &arg_8, arg2, r9)
*arg7 = *(*(*arg1 + 0xa0))(arg1, &arg_8, arg3)
return arg7
