// 函数: sub_141bdfad0
// 地址: 0x141bdfad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg2

if (arg1[0x2a] != result)
    (*(*arg1 + 0x308))()
    result = sub_140e24dd0(&arg1[0x21], *arg2)
    void* var_38
    
    if (arg3 != 0)
        int64_t* rcx_1
        
        if (*arg2 != 0)
            rcx_1 = arg2[1]
        
        if (*arg2 == 0 || rcx_1 == 0)
            arg1[0x22] = 0
        else
            result = (*(*rcx_1 + 0x10))(rcx_1, &var_38)
            void* rcx_2 = var_38
            int128_t zmm6
            
            if (rcx_2 == 0)
                arg4 = zx.o(0)
                zmm6 = zx.o(0)
            else
                (*(*rcx_2 + 0x340))(rcx_2)
                void* rcx_3 = var_38
                int64_t var_28
                zmm6.d = arg4.d f* var_28:4.d
                result = (*(*rcx_3 + 0x338))(rcx_3)
                arg4.d = arg4.d f* var_28.d
            
            *(arg1 + 0x114) = zmm6.d
            arg1[0x22].d = arg4.d
    
    int64_t* rcx_4 = arg1[0x3b]
    
    if (rcx_4 != 0)
        var_38 = &arg1[0x21]
        char var_30_1 = 1
        int64_t var_28_1 = 0
        int32_t var_20_1 = 0
        return sub_140e24960(rcx_4, &var_38)

return result
