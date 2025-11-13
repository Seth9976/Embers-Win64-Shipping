// 函数: sub_142978660
// 地址: 0x142978660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg2

if (arg3 * 0x130 u>= 0x1000)
    void* rcx = *(rax - 8)
    
    if (rax - rcx - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rax = rcx

return j_sub_140a74f90(rax) __tailcall
