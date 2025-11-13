// 函数: sub_1429a31b0
// 地址: 0x1429a31b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = *(arg1 + 8)
int32_t rax = arg_8
arg_8.b = rax.b
arg_8:1.b = (rax u>> 8).b
arg_8:3.b = (rax u>> 0x18).b
arg_8:2.b = (rax u>> 0x10).b
(*(*arg2 + 8))(arg2, &arg_8, 4)
arg_8 = *(arg1 + 0xc)
int32_t rax_3 = arg_8
arg_8:1.b = (rax_3 u>> 8).b
arg_8.b = rax_3.b
arg_8:3.b = (rax_3 u>> 0x18).b
arg_8:2.b = (rax_3 u>> 0x10).b
return (*(*arg2 + 8))(arg2, &arg_8, 4)
