// 函数: sub_1420291f0
// 地址: 0x1420291f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f5b298
uint64_t result

if (rcx != 0 && (*(*rcx + 0x388))(rcx).b != 0)
    result = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (result != 0)
        void var_30
        float zmm6_1 = sub_142435ed0(result, &var_30)
        
        if (sub_141e80b60(&var_30) != 0)
            int32_t var_38
            void* var_28
            int32_t rax_2 = sub_141e7ab30(var_28, arg2, &var_38, arg4)
            
            if (rax_2 != 0xffffffff && not(zmm6_1 * zmm6_1 f< var_38))
                char rax_3 = sub_141e7dd40(var_28, rax_2, arg5, arg4)
                sub_141e71cd0(&var_30)
                return zx.q(rax_3)
        
        sub_141e71cd0(&var_30)
        return 0

result.b = 0
return result
