// 函数: sub_142c39670
// 地址: 0x142c39670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0xb

if ((*(arg3 + 0x38) & 0xfffffffe) != 4)
    rdx = 0xc

char result = sub_142bf3c40(arg2, rdx)
int32_t r8
r8.b = result == 0

if (r8 == 0)
    int32_t rdi_2 = *(arg3 + 0x38) & 0xfffffffd
    
    if (rdi_2 == 5)
        sub_142bf5780(arg3)
    
    int32_t r9_1 = *(arg1 + 0xb0)
    int32_t var_20_1 = *(arg3 + 0x38)
    void* var_28 = arg2
    void** var_18 = &var_28
    char var_10_1 = 0
    result = sub_142c39bc0(&var_18, arg2, arg3, r9_1, 0)
    
    if (rdi_2 == 5)
        return sub_142bf5780(arg3)

return result
