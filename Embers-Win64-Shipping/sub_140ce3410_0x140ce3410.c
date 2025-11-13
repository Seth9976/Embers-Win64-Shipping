// 函数: sub_140ce3410
// 地址: 0x140ce3410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = 0
char* var_10 = &arg_18
void*** (* var_18)() = j_sub_140cd6f60
void* result = sub_140a756e0(&var_18, &data_1439aa2e0)

if (*(result + 0x18) s> 0 || *(result + 0x28) s> 0)
    *(arg1 + 8) = *arg2
    int64_t rdi_1 = sx.q(*(result + 0x38))
    int32_t rax = (rdi_1 + 1).d
    *(result + 0x38) = rax
    
    if (rax s> *(result + 0x3c))
        sub_1405a4f90(result + 0x30)
    
    result = *(result + 0x30)
    *(result + rdi_1 * 0x10) = *arg2

return result
