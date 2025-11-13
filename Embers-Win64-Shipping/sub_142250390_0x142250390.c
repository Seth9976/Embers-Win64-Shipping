// 函数: sub_142250390
// 地址: 0x142250390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd15d0(arg1)
uint32_t result = sub_140cdd6a0(arg1)

if (result s< 0xf6)
    void* rcx_1 = arg1[0x44]
    
    if (rcx_1 != 0)
        *(rcx_1 + 0x1f0) = arg1[0x45]
        *(arg1[0x44] + 0x200) = arg1[0x46]
        void* rcx_3 = arg1[0x44]
        result.b = arg1[0x47].b ^ *(rcx_3 + 0x3c4)
        result.b &= 1
        *(rcx_3 + 0x3c4) ^= result.b

return result
