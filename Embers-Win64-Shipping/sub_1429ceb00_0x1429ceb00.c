// 函数: sub_1429ceb00
// 地址: 0x1429ceb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u> 0xaaaaaaaaaaaaaaa)
    _invalid_parameter_noinfo_noreturn()
    noreturn

if (arg3 * 0x18 u>= 0x1000)
    if ((arg2.b & 0x1f) != 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* rax_2 = *(arg2 - 8)
    
    if (rax_2 u>= arg2)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    void* rdx = arg2 - rax_2
    
    if (rdx u< 8)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rdx u> 0x27)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    arg2 = rax_2

return j_sub_140a74f90(arg2) __tailcall
