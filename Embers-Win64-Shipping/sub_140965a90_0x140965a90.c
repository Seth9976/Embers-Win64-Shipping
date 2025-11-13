// 函数: sub_140965a90
// 地址: 0x140965a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg6

if (r10 == 0 || r10 s> 0x400)
    r10 = 0x400

int32_t rax = arg7

if (rax == 0)
    rax = 0x1c

void* result = sub_14214bdd0(arg1, arg2, arg3, arg4, arg5, r10, rax)

if (*(arg1 + 0x1acc) == 1)
    arg1[0x346] = arg3

return result
