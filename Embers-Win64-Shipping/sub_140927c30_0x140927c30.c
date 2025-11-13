// 函数: sub_140927c30
// 地址: 0x140927c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t rsi = *arg2
uint64_t var_18 = 0
int32_t var_10 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_18, rbx, 0)
    memcpy(var_18, rsi, rbx * 2)
else
    int32_t var_c_1 = 0

char rax_1 = (*(*arg1 + 0x28))(arg1, &var_18)
uint64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rax_1)
