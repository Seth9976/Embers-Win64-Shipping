// 函数: sub_141ba65a0
// 地址: 0x141ba65a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
int64_t rsi = *(arg1 + 0x10)
void** var_a8
sub_14068e310(&var_a8, arg1 + 0x18)
char var_20 = *(arg1 + 0xa0)
int64_t var_18 = 0
int32_t var_10 = 0

if (arg1 + 0xa8 != &var_18 && *(arg1 + 0xb0) != 0)
    int64_t* rcx_4 = *(arg1 + 0xa8)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x40))(rcx_4, &var_18)

return rsi(rax, &var_a8)
