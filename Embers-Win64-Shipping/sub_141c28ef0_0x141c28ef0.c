// 函数: sub_141c28ef0
// 地址: 0x141c28ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
int32_t rsi = 0
uint64_t var_18 = 0
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int32_t rbp = *(arg1 + 0x888)
int64_t rdi = *(arg1 + 0x880)
uint64_t rdi_1

if (rbp != 0)
    sub_1405a4c70(&var_18, rbp, 0)
    rdi_1 = var_18
    memcpy(rdi_1, rdi, rbp * 2)
    int32_t var_c
    rsi = var_c
else
    rdi_1 = 0

uint64_t* result = &var_18

if (arg3 != &var_18)
    int64_t rcx_2 = *arg3
    
    if (rcx_2 != 0)
        result = sub_140a74f90(rcx_2)
    
    *arg3 = rdi_1
    arg3[1].d = rbp
    *(arg3 + 0xc) = rsi
else if (rdi_1 != 0)
    return sub_140a74f90(rdi_1)

return result
