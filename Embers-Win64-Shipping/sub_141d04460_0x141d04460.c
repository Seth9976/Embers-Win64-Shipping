// 函数: sub_141d04460
// 地址: 0x141d04460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b25050(&var_18)
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int64_t var_28
sub_140a2e390(&var_28, u"%sPaks/%s-", r8)
char rax_1 = sub_140a32a50(arg1, &var_28, 1)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

if (rax_1 != 0)
    return 4

char rax_4 = sub_140a32a50(arg1, sub_140b25050(&var_18), 1)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (rax_4 != 0)
    return 3

char rax_7 = sub_140a32a50(arg1, sub_140b139e0(&var_18), 1)
int64_t rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

if (rax_7 != 0)
    return 2

int32_t rcx_12
rcx_12.b = sub_140a32a50(arg1, sub_140b257f0(), 1) != 0
return zx.q(rcx_12)
