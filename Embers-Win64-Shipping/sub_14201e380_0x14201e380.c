// 函数: sub_14201e380
// 地址: 0x14201e380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f5b298
void* result

if (rcx != 0 && (*(*rcx + 0x388))(rcx).b != 0)
    result = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (result != 0)
        void var_38
        int128_t zmm6_1 = sub_142435ed0(result, &var_38)
        
        if (sub_141e80b60(&var_38) != 0)
            void* var_30
            bool rax_2 = sub_141e81570(var_30, arg2, zmm6_1)
            sub_141e71cd0(&var_38)
            return zx.q(rax_2)
        
        sub_141e71cd0(&var_38)

result.b = 0
return result
