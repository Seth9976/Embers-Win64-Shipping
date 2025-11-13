// 函数: sub_142997030
// 地址: 0x142997030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &Imf_2_3::DwaCompressor::LossyDctEncoderBase::`vftable'
sub_142996ec0(&arg1[0xb])
void* rcx_1 = arg1[8]

if (rcx_1 != 0)
    if (((arg1[0xa] - rcx_1) & 0xfffffffffffffffc) u>= 0x1000)
        void* r8_1 = *(rcx_1 - 8)
        
        if (rcx_1 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_1 = r8_1
    
    j_sub_140a74f90(rcx_1)
    __builtin_memset(&arg1[8], 0, 0x18)

return sub_142997940(&arg1[5]) __tailcall
