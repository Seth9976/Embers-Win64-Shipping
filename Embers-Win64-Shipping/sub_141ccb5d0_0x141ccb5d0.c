// 函数: sub_141ccb5d0
// 地址: 0x141ccb5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_38

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
uint64_t var_28[0x2]
int64_t* result = sub_140ae7d20(arg3, sub_141cc4270(&var_28, rdx_2))
int64_t var_18

if (var_18 != 0)
    result = sub_140a74f90(var_18)

uint64_t rcx_4 = var_28[0]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_38

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
