// 函数: sub_1403c3790
// 地址: 0x1403c3790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58
__builtin_strncpy(&var_58, "fixed point overflow in ", 0x18)
int64_t i = 0
void var_40

if (arg2 != 0)
    do
        char rax_1 = arg2[i]
        
        if (rax_1 == 0)
            break
        
        *(&var_40 + i) = rax_1
        char rax_2 = arg2[i + 1]
        
        if (rax_2 == 0)
            i += 1
            break
        
        void var_3f
        *(&var_3f + i) = rax_2
        char rax_3 = arg2[i + 2]
        
        if (rax_3 == 0)
            i += 2
            break
        
        char var_3e[0x3e]
        var_3e[i] = rax_3
        i += 3
    while (i u< 0x3f)

*(&var_40 + zx.q(i.d)) = 0
png_error(arg1, &var_58)
noreturn
