// 函数: sub_142522d20
// 地址: 0x142522d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_28 = 0
int32_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_2 = *(arg2 + 0x20)
uint64_t var_18 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rdi_1 = var_28
uint64_t rdi_2

if (var_20 != 0)
    sub_1405a4c70(&var_18, var_20, 0)
    rdi_2 = var_18
    memcpy(rdi_2, rdi_1, var_20 * 2)
    int32_t var_c
    rbx = var_c
else
    rdi_2 = 0

uint64_t* result = &var_18

if (arg3 != &var_18)
    int64_t rcx_5 = *arg3
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
    
    *arg3 = rdi_2
    arg3[1].d = var_20
    *(arg3 + 0xc) = rbx
else if (rdi_2 != 0)
    result = sub_140a74f90(rdi_2)

int64_t rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
