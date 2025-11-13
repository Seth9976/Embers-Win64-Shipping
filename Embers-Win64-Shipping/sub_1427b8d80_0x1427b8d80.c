// 函数: sub_1427b8d80
// 地址: 0x1427b8d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427b8ff0(&arg1[0x19], arg3, arg1[0x25])

if ((*(*arg1 + 0x2d0))(arg1, arg3) == 0)
    *arg2 = 2
else
    char* rax_5
    
    if (arg1[0x18].b != 0)
        int64_t rbx_1 = *arg1[0x25]
        void var_58
        int64_t rax_4 = (*(*arg1 + 0x2e8))(arg1, &var_58, arg3)
        void var_30
        rax_5 = (*(rbx_1 + 0x10))(arg1[0x25], &var_30, rax_4)
    
    if (arg1[0x18].b == 0 || *rax_5 != 0)
        (*(*arg1 + 0x318))(arg1, arg3, arg4)
    
    *arg2 = 3

arg2[4] = 0x63
*(arg2 + 8) = 0
*(arg2 + 0x18) = 0
return arg2
