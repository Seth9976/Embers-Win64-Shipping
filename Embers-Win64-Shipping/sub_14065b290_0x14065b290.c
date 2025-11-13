// 函数: sub_14065b290
// 地址: 0x14065b290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int32_t rsi = 0
uint64_t var_18 = 0
int64_t rax
rax.b = rcx != 0
*(arg2 + 0x20) = rax + rcx
int32_t rbp = data_143f024c0
int64_t rdi = data_143f024b8
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
    int64_t rcx_3 = *arg3
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
    
    *arg3 = rdi_1
    arg3[1].d = rbp
    *(arg3 + 0xc) = rsi
else if (rdi_1 != 0)
    return sub_140a74f90(rdi_1)

return result
