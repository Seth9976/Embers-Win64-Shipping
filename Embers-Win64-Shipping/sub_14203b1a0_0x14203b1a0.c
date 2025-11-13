// 函数: sub_14203b1a0
// 地址: 0x14203b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x4f]
int64_t* result = (*(*rcx + 0x710))(rcx)

if (result.b != 0)
    result = data_143f405e8
    
    if (arg1[0x58] != result)
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        sub_1405947f0(&var_18, 9)
        int32_t rax_1 = var_10_1 + 9
        var_10_1 = rax_1
        
        if (rax_1 s> 0)
            sub_140594770(&var_18)
        
        sub_1405a7220(var_18, 9, "?Restart", 9, 0x3f)
        char rax_3 = (*(*arg1 + 0x890))(arg1)
        int64_t rdx_2 = *arg1
        result = sub_142444880((*(rdx_2 + 0x150))(arg1, rdx_2), &var_18, rax_3, 0)
        int64_t rcx_7 = var_18
        
        if (rcx_7 != 0)
            return sub_140a74f90(rcx_7)

return result
