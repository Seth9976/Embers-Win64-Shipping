// 函数: sub_141eaf840
// 地址: 0x141eaf840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x150))()

if (result != 0)
    result = sub_142435f50(result)
    
    if (result != 0)
        int128_t var_a8
        sub_141e901e0(&var_a8, arg1)
        int128_t var_110_1 = var_a8
        int128_t var_58
        int128_t var_c0_1 = var_58
        void*** rax_1 = sub_140a82f30(0x70, 8)
        *rax_1 = &data_1432595a8
        *(rax_1 + 8) = result.o
        *(rax_1 + 0x18) = var_110_1
        int128_t var_98
        *(rax_1 + 0x28) = var_98
        int128_t var_88
        *(rax_1 + 0x38) = var_88
        int128_t var_78
        *(rax_1 + 0x48) = var_78
        int128_t var_68
        *(rax_1 + 0x58) = var_68
        rax_1[0xd] = var_58:8.q
        void*** var_38_1 = rax_1
        void* (* var_48)(int64_t* arg1)
        void* (* rax_2)(int64_t* arg1) = var_48
        
        if (rax_1 != -8)
            rax_2 = j_sub_141e91580
        
        var_48 = rax_2
        return sub_141e85cb0(&var_48, arg2)

return result
