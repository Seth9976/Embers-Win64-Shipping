// 函数: sub_141b90930
// 地址: 0x141b90930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[0x5e].d)
int32_t rax = (rdi + 1).d
arg1[0x5e].d = rax

if (rax s> *(arg1 + 0x2f4))
    sub_1405a4d70(&arg1[0x5d])

*(arg1[0x5d] + (rdi << 3)) = arg2
int64_t* var_28 = nullptr
int64_t var_18 = 0
int64_t var_10 = 0
int64_t var_20 = 1
sub_1405a4d70(&var_28)
*var_28 = arg2
int64_t result = (*(*arg1 + 0x2d8))(arg1, &var_28, &var_18)
int64_t* rcx_3 = arg1[0x41]

if (rcx_3 != 0)
    result = (*(*rcx_3 + 0x240))(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t* rcx_5 = var_28

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
