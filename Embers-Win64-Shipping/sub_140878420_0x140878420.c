// 函数: sub_140878420
// 地址: 0x140878420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void var_28
int64_t* rax_3 = sub_140830d30(arg1, &var_28, &var_18)
int64_t rcx_2 = var_18
*arg3 = *rax_3
int32_t result = rax_3[1].d
arg3[1].d = result

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
