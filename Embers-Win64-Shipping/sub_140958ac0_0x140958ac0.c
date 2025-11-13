// 函数: sub_140958ac0
// 地址: 0x140958ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xd6]
int64_t* r8
void arg_10

if (rcx == 0)
    int64_t arg_8 = 0
    r8 = &arg_8
else
    r8 = (*(*rcx + 0xa0))(rcx, &arg_10)
int64_t* var_18
void* rax_4 = (*(*arg1 + 0x448))(arg1, &var_18, r8)
int64_t result = *(rax_4 + 8)
*(rax_4 + 8) = 0
int64_t* rcx_2 = var_18
int64_t var_10

if (rcx_2 != 0 && var_10 != 0)
    int64_t r8_1 = *rcx_2
    (*(r8_1 + 0x38))(rcx_2, var_10, r8_1)

return result
