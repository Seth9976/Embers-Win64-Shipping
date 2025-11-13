// 函数: sub_14061f3b0
// 地址: 0x14061f3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    void* rcx_1 = *(i + 0x10)
    
    if (rcx_1 != 0)
        if (*(i + 0x20) - rcx_1 u>= 0x1000)
            void* r8_1 = *(rcx_1 - 8)
            
            if (rcx_1 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_1 = r8_1
        
        j_sub_140a74f90(rcx_1)
        __builtin_memset(i + 0x10, 0, 0x18)
    
    j_sub_140a74f90(i)
