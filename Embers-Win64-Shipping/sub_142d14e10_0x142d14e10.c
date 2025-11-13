// 函数: sub_142d14e10
// 地址: 0x142d14e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = data_143b869d8:8

if (rdx u>= 0x10)
    void* rcx_1 = data_143b869c8.q
    void* rax_1 = rcx_1
    
    if (rdx + 1 u>= 0x1000)
        rcx_1 = *(rcx_1 - 8)
        
        if (rax_1 - rcx_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_1)

int128_t result = data_143702ea0
data_143b869d8 = result
data_143b869c8 = 0
return result
