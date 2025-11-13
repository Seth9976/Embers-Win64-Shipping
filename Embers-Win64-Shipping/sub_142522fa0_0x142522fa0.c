// 函数: sub_142522fa0
// 地址: 0x142522fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void var_28
int64_t* result = sub_141ddfdd0(arg3, sub_1420cc730(&var_28, &var_38))
int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t rcx_4 = var_38

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
