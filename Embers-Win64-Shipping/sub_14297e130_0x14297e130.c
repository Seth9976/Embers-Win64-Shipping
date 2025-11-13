// 函数: sub_14297e130
// 地址: 0x14297e130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &Imf_2_3::TypedAttribute<class std::vector<float> >::`vftable'{for `Imf_2_3::Attribute'}
void* rcx = arg1[1]

if (rcx != 0)
    if (((arg1[3] - rcx) & 0xfffffffffffffffc) u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)
    __builtin_memset(&arg1[1], 0, 0x18)

sub_14298c720(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
