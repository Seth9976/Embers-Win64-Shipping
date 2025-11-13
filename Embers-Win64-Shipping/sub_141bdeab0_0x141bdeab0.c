// 函数: sub_141bdeab0
// 地址: 0x141bdeab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = data_143e29f28

if (r9 == 0 || *(arg1 + 0x200) == 0)
    int64_t rcx_3 = *arg2
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    void* const* result
    result.b = 0
    return result

int64_t rsi
rsi.b = 0
int32_t rdi = 0
int16_t* r14 = nullptr

while (true)
    int32_t rcx = arg2[1].d
    int32_t rax = rcx - 1
    
    if (rcx == 0)
        rax = 0
    
    if (rdi s>= rax)
        break
    
    int16_t r8_1 = *(r14 + *arg2)
    int32_t var_3c_1 = *(*(arg1 + 0x200) + 8)
    int16_t var_40_1 = *(arg1 + 0x258)
    char r8
    char var_3e_1 = r8
    int64_t var_38_1 = 0
    void** const var_48 = &data_142ecfd70
    int16_t var_30_1 = r8_1
    char rax_4 = sub_140e7baa0(r9, &var_48)
    r9 = data_143e29f28
    rsi.b |= rax_4
    rdi += 1
    r14 = &r14[1]

int64_t rcx_2 = *arg2

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return zx.q(rsi.b)
