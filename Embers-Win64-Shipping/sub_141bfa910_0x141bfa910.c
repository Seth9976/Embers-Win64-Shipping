// 函数: sub_141bfa910
// 地址: 0x141bfa910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_288
sub_140dd6180(&var_288)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_288, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_288)

void*** rax_2 = *(arg2 + 0x38)
void*** rdx_2 = &var_288

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
sub_141be69e0(arg1, rdx_2)
var_288 = &data_142d8ad20
void** var_e8
sub_140691a20(&var_e8)
void** var_170
sub_140691a20(&var_170)
void** var_1f8
sub_140691a20(&var_1f8)
void** var_280
return sub_140691a20(&var_280)
