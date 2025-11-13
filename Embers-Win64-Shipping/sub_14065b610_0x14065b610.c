// 函数: sub_14065b610
// 地址: 0x14065b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rcx_1 = &var_18

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
uint64_t result = j_sub_140d77160(rcx_1)
int64_t rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
