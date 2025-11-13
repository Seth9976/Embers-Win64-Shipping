// 函数: sub_14067ae60
// 地址: 0x14067ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t rsi = *arg2
int64_t var_18 = 0
int32_t var_10 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_18, rbx, 0)
    memcpy(var_18, rsi, rbx * 2)
else
    int32_t var_c_1 = 0

sub_140a360c0(&var_18)
sub_140a35cd0(&var_18)
int64_t* rcx_4 = *(arg1 + 0x1b0)
int64_t result = (*(*rcx_4 + 0x50))(rcx_4, &var_18)
int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
