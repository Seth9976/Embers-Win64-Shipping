// 函数: sub_141d4cc20
// 地址: 0x141d4cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x18)
int128_t zmm1 = arg2[1]
int128_t var_28 = *arg2
int128_t var_18 = zmm1

if ((*(rax + 8))(arg1 + 0x18, arg3) != 0)
    int64_t* rcx_1 = *arg3
    int64_t arg_8
    (*(*rcx_1 + 0x30))(rcx_1, &arg_8)
    int64_t* rcx_2 = *arg3
    void arg_10
    int64_t* rax_4 = (*(*rcx_2 + 0x10))(rcx_2, &arg_10)
    int64_t rcx_3 = arg_8
    int64_t var_40_1 = rcx_3
    char var_48 = 1
    char var_38_1 = 0
    int64_t var_30_1 = *rax_4 + rcx_3
    
    if (sub_1405da820(&var_28, &var_48) != 0)
        (*(*(arg1 + 0x18) + 0x10))(arg1 + 0x18)
        int64_t result
        result.b = 1
        return result

return 0
