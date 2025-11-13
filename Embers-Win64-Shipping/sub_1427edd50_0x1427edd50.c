// 函数: sub_1427edd50
// 地址: 0x1427edd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, *(arg1 + 0x60))
int64_t* rcx_1 = *(arg1 + 0x60)
int64_t arg_8 = 0
int64_t arg_10 = 0
int64_t result = (*(*rcx_1 + 0x30))(rcx_1, &arg_8, &arg_10)
int64_t rdx_2 = arg_8

if (rdx_2 != 0)
    result = (*(*arg2 + 8))(arg2, rdx_2)

int64_t rdx_3 = arg_10

if (rdx_3 == 0)
    return result

return (*(*arg2 + 8))(arg2, rdx_3)
