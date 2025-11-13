// 函数: sub_141b408a0
// 地址: 0x141b408a0
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
int64_t rdx_1
rdx_1.b = 1
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
uint8_t result = sub_141a6b7c0(arg1)
int64_t rdi_1

if (result == 0)
    rdi_1 = var_18
else
    result = &var_18
    
    if (arg1 + 0x158 == &var_18)
        rdi_1 = var_18
    else
        rdi_1 = var_18
        int32_t r8_2 = *(arg1 + 0x164)
        *(arg1 + 0x160) = var_10
        
        if (var_10 != 0 || r8_2 != 0)
            sub_1405a4c70(arg1 + 0x158, var_10, r8_2)
            result = memcpy(*(arg1 + 0x158), rdi_1, var_10 * 2)
            rdi_1 = var_18
        else
            *(arg1 + 0x164) = 0

if (rdi_1 == 0)
    return result

return sub_140a74f90(rdi_1)
