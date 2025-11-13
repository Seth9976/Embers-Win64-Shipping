// 函数: sub_142bce9b0
// 地址: 0x142bce9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142bcdc30(arg1)
char* rax = *arg1
int64_t rdx = arg1[2]
void* arg_8 = rax

if (rax u< rdx)
    if (arg5 != 0)
        if (*rax != 0x3c)
            return 3
        
        arg_8 = &rax[1]
    
    int32_t rax_2 = sub_142bd00f0(&arg_8, rdx, arg2, arg3)
    void* rcx_1 = arg_8
    *arg4 = rax_2
    *arg1 = rcx_1
    
    if (arg5 != 0)
        if (rcx_1 u< arg1[2] && *rcx_1 != 0x3e)
            return 3
        
        *arg1 = rcx_1 + 1

return 0
