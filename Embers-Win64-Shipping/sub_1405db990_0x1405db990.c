// 函数: sub_1405db990
// 地址: 0x1405db990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)

if (rcx == 0)
    int64_t result
    result.b = 0
    return result

int64_t var_18 = 0
int64_t var_10 = 0
char rax_1 = (*(*rcx + 0x260))(rcx, &var_18)
int64_t rcx_1 = var_18
int64_t rbx
rbx.b = rax_1 != 0

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return zx.q(rbx.b)
