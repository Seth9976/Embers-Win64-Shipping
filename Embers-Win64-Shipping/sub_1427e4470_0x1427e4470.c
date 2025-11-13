// 函数: sub_1427e4470
// 地址: 0x1427e4470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x30))(arg1, arg5)
char rax_2

if (rax_1 != 0)
    rax_2 = (*(*arg1 + 0x28))(arg1, rax_1, arg3, arg4, arg5, arg6)

if (rax_1 == 0 || rax_2 == 0)
    *arg2 = &data_1434cce10
    arg2[1] = 0
    arg2[2] = 0
else
    arg2[1] = rax_1
    *arg2 = "PxMaterial"
    arg2[2] = rax_1

return arg2
