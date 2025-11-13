// 函数: sub_14095e2a0
// 地址: 0x14095e2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int64_t var_20 = 0
int64_t var_18 = 0
int32_t rcx = *(rbx + 0x7c)
char var_28 = rcx.b
int64_t* rcx_1 = &var_20
void* rcx_2

if (rcx != 6)
    sub_14094d5c0(rcx_1, rbx + 0x80)
    rcx_2 = rbx + 0x38
else
    sub_14094d5c0(rcx_1, rbx + 0x80)
    rcx_2 = rbx + 0x28

sub_1405a9f90(rcx_2, &var_28)
return sub_14094ac80(&var_20)
