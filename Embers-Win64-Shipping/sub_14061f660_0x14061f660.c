// 函数: sub_14061f660
// 地址: 0x14061f660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[2] != &arg2[2])
    void* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        if (*(arg1 + 0x18) - rcx u>= 0x1000)
            void* r8_1 = *(rcx - 8)
            
            if (rcx - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx = r8_1
        
        j_sub_140a74f90(rcx)
        __builtin_memset(&arg1[2], 0, 0x18)
    
    *(arg1 + 8) = *(arg2 + 8)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg1 + 0x18) = *(arg2 + 0x18)
    __builtin_memset(&arg2[2], 0, 0x18)

return arg1
