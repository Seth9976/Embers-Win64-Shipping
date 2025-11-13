// 函数: sub_141b98170
// 地址: 0x141b98170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0
int64_t rax = arg1[0x5d]
arg1[0x5d] = 0
int64_t var_28 = rax
int32_t var_20 = arg1[0x5e].d
int32_t rax_2 = *(arg1 + 0x2f4)
arg1[0x5e] = 0
int32_t var_1c = rax_2
int64_t result = (*(*arg1 + 0x2d8))(arg1, &var_18, &var_28)
int64_t* rcx_1 = arg1[0x41]

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x240))(rcx_1)

int64_t rcx_2 = var_28

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
