// 函数: sub_1405d7390
// 地址: 0x1405d7390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405db200(arg1, 0)

if ((*(*arg1 + 0x270))(arg1) != 0)
    arg1[0x1a].b = *arg3
    *(arg1 + 0xd4) = *(arg3 + 4)
    arg1[0x1b].d = *(arg3 + 8)
    *(arg1 + 0xdc) = arg3[0xc]
    *(arg1 + 0xdd) = arg3[0xd]
    int32_t rdx = sub_1405d6ab0(arg1, 0)
    
    if (arg1[0x1f].b != 0)
        arg1[0x17].d = arg2[0x18].d
        *(arg1 + 0xbc) = *(arg2 + 0xc4)
    else if (*(arg1 + 0xdc) != 0)
        rdx = sub_1423c84a0(arg2, zx.q(arg1[0x17].d), zx.q(*(arg1 + 0xbc)))
    
    sub_1405d6d90(arg1, rdx)
    char var_18_1 = 0
    
    if (sub_1405dbb50(arg2, &arg1[0x1a], &arg1[0x17], arg1[0x18].d) != 0)
        sub_1405daf00(arg1, 2)
        bool result_1 = (*(*arg1 + 0x280))(arg1, arg2)
        bool result = result_1
        
        if (result_1 != 0)
            sub_1405d98f0(arg1, *(arg1[0xa] + 0x28))
            char rax_11 = (*(*arg1 + 0x260))(arg1)
            result = rax_11 != 4
            
            if (rax_11 != 4)
                arg1[0xf] = arg2
                arg1[0xd].d = 0
                void arg_8
                sub_1405d4d00(&data_14399fd90, &arg_8, arg1, sub_1405d9c20)
                return result
        
        sub_1405daf00(arg1, 4)
        return result

return false
