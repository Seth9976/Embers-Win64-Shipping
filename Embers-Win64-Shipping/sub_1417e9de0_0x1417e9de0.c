// 函数: sub_1417e9de0
// 地址: 0x1417e9de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
int64_t* result = &var_18
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rbx_1 = var_18

if (arg1 + 0x40 != &var_18)
    int32_t r8_2 = *(arg1 + 0x4c)
    *(arg1 + 0x48) = var_10
    
    if (var_10 != 0 || r8_2 != 0)
        sub_1405a4c70(arg1 + 0x40, var_10, r8_2)
        result = memcpy(*(arg1 + 0x40), rbx_1, var_10 * 2)
        rbx_1 = var_18
    else
        *(arg1 + 0x4c) = 0

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
