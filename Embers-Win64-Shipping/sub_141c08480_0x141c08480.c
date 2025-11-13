// 函数: sub_141c08480
// 地址: 0x141c08480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_278
sub_140ddd1b0(&var_278)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_278, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_278)

void*** rax_2 = *(arg2 + 0x38)
void*** rdx_2 = &var_278

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
sub_141be70a0(arg1, rdx_2)
sub_140de06c0(&var_278)
return &data_142d8ad00
