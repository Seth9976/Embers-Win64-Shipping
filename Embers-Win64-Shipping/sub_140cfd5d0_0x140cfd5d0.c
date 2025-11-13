// 函数: sub_140cfd5d0
// 地址: 0x140cfd5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax_1 = (*(*arg1 + 0x180))(arg1, &var_18)
int32_t rcx = rax_1[1].d
int32_t r8 = rcx - 1

if (rcx == 0)
    r8 = 0

int64_t result = sub_140a20ba0(arg2, *rax_1, r8)
int64_t rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
