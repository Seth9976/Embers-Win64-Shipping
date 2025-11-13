// 函数: sub_1423eb580
// 地址: 0x1423eb580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    arg4 = sub_1405c5570(arg2, 0)

void arg_8
void* rax_1 = (*(*arg1 + 0x18))(arg1, &arg_8)
int64_t r8 = *arg1
void arg_10
int32_t rax_5 = *(*(r8 + 0x18))(arg1, &arg_10, r8) * *(rax_1 + 4) + arg2[1].d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    arg4 = sub_1405a4d70(arg2)

return sub_1423eb340(arg1, *arg2, arg3, arg4) __tailcall
