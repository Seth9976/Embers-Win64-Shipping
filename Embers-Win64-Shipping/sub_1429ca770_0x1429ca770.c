// 函数: sub_1429ca770
// 地址: 0x1429ca770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> divu.dp.q(-1, arg3))
    _invalid_parameter_noinfo_noreturn()
    noreturn

if (arg2 * arg3 u>= 0x1000)
    if ((arg1.b & 0x1f) != 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* rax_1 = *(arg1 - 8)
    
    if (rax_1 u>= arg1)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* rcx = arg1 - rax_1
    
    if (rcx u< 8)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rcx u> 0x27)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    arg1 = rax_1

return j_sub_140a74f90(arg1) __tailcall
