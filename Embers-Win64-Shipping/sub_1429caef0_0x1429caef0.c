// 函数: sub_1429caef0
// 地址: 0x1429caef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx == 0)
    return 

if (arg1[2] - rcx u>= 0x1000)
    if ((rcx.b & 0x1f) != 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* rax_3 = *(rcx - 8)
    
    if (rax_3 u>= rcx)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* rcx_1 = rcx - rax_3
    
    if (rcx_1 u< 8)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rcx_1 u> 0x27)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rcx = rax_3

j_sub_140a74f90(rcx)
__builtin_memset(arg1, 0, 0x18)
