// 函数: sub_140909b10
// 地址: 0x140909b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx == 0)
    return 

if (((arg1[2] - rcx) & 0xfffffffffffffffc) u>= 0x1000)
    void* r8_1 = *(rcx - 8)
    
    if (rcx - r8_1 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rcx = r8_1

j_sub_140a74f90(rcx)
__builtin_memset(arg1, 0, 0x18)
