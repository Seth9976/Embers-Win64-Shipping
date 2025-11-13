// 函数: sub_14207c780
// 地址: 0x14207c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x50) == 0)
    return 0xffffffff

int128_t var_18 = data_142d3f660
int64_t rbx = sx.q(sub_14207d2c0(&arg1[0xe], arg2, &var_18))
*(rbx * 0x38 + arg1[0xe] + 0x34) = arg4
int64_t r9 = *arg1
(*(r9 + 0x2a0))(arg1, zx.q(rbx.d), arg3, r9, var_18)
sub_14207d710(&arg1[0xe], arg1[0x11].d, 1)
return zx.q(rbx.d)
