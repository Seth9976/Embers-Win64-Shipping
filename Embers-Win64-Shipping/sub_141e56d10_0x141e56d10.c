// 函数: sub_141e56d10
// 地址: 0x141e56d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
__builtin_memset(&var_48, 0, 0x30)
int64_t var_38
int64_t var_28
char rax = sub_141e621d0(arg1, &var_48, &var_28, arg4, &var_38, 0)
int64_t rcx = var_38

if (rcx != 0)
    sub_140a74f90(rcx)

if (rax == 0)
    if (arg5[1].d != 0)
        int64_t* rcx_3 = *arg5
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (arg5[1].d == 0)
                rcx_4 = nullptr
            else
                rcx_4 = *arg5
            
            (*(*rcx_4 + 0x50))(rcx_4)
    
    *arg2 = 0
    arg2[1] = 0
else
    var_38 = 0
    int64_t var_30
    var_30.d = 0
    
    if (arg5 != &var_38 && arg5[1].d != 0)
        int64_t* rcx_1 = *arg5
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1, &var_38)
    
    (*(*arg1 + 0x330))(arg1, arg2, &var_48, arg3, arg4, 0, &var_38, arg6)

int64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140745b20(arg5)
return arg2
