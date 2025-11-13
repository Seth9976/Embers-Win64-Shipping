// 函数: sub_140bd0550
// 地址: 0x140bd0550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x18)
uint8_t result = (r9 u>> 5).b

if ((result & 1) != 0 || arg4 == 0)
    return result

if (((r9 u>> 1).b & 1) == 0)
    return (*(*arg2 + 0x150))(arg2, arg3, arg4)

int32_t rax_3

if ((r9.b & 2) != 0)
    void arg_8
    int32_t* rax_4
    rax_4, arg5 = sub_140b5e500(&arg_8, 0x101)
    rax_3 = *rax_4
else
    rax_3 = 0

int32_t var_14 = 0
return sub_140b54270(arg2, arg3, arg4, rax_3.q, arg5, 0, 0)
