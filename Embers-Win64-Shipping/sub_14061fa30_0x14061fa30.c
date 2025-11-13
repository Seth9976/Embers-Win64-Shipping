// 函数: sub_14061fa30
// 地址: 0x14061fa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d684b0

if (arg1[2].b != 0)
    void* rbx_1 = arg1[1]
    midiOutReset(*(rbx_1 + 8))
    midiOutClose(*(rbx_1 + 8))
    *(rbx_1 + 8) = 0
    arg1[2].b = 0

void* rbx_2 = arg1[1]

if (rbx_2 != 0)
    void* rcx_2 = *(rbx_2 + 0x18)
    
    if (rcx_2 != 0)
        if (*(rbx_2 + 0x28) - rcx_2 u>= 0x1000)
            void* r8_1 = *(rcx_2 - 8)
            
            if (rcx_2 - r8_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_2 = r8_1
        
        j_sub_140a74f90(rcx_2)
        __builtin_memset(rbx_2 + 0x18, 0, 0x18)
    
    j_sub_140a74f90(rbx_2)

*arg1 = &data_142d68400
sub_14061f450(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
