// 函数: sub_140907680
// 地址: 0x140907680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
uint64_t var_18 = 0
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int32_t rsi = *(arg1 + 0xa8)
int64_t rdi = *(arg1 + 0xa0)
uint64_t rdi_1

if (rsi != 0)
    sub_1405a4c70(&var_18, rsi, 0)
    rdi_1 = var_18
    memcpy(rdi_1, rdi, rsi * 2)
else
    rdi_1 = 0

uint64_t* result = &var_18

if (arg3 != &var_18)
    int32_t r8_2 = *(arg3 + 0xc)
    arg3[1].d = rsi
    
    if (rsi != 0 || r8_2 != 0)
        sub_1405a4c70(arg3, rsi, r8_2)
        result = memcpy(*arg3, rdi_1, rsi * 2)
    else
        *(arg3 + 0xc) = rsi

if (rdi_1 == 0)
    return result

return sub_140a74f90(rdi_1)
