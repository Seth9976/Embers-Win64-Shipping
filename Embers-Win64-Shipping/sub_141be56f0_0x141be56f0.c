// 函数: sub_141be56f0
// 地址: 0x141be56f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = *arg2
void* rbx = *(arg1 + 0x1a8)
*(arg1 + 0x218) = result

if (rbx != 0)
    int128_t* arg_8 = arg2
    int64_t rax_1 = *(rbx + 0x28)
    
    if (rax_1 != 0)
        int64_t arg_10 = rax_1
        sub_141b96fb0(&arg_8, &arg_10)
        void* rcx_1 = *(rbx + 0x28)
        void (* var_18)(int128_t** arg1, int64_t* arg2) = sub_141b96fb0
        int128_t** var_10_1 = &arg_8
        return sub_141ba8640(rcx_1, &var_18)

return result
