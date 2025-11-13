// 函数: sub_140698bd0
// 地址: 0x140698bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18 = 0
int64_t var_10 = 0

if (&var_18 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rsi_1 = *arg2
    var_10.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_18, rbx_1, 0)
        memcpy(var_18, rsi_1, rbx_1 * 2)

int64_t result = sub_1405a9f90(arg1, &var_18)
uint64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
