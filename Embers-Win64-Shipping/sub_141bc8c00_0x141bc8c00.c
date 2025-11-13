// 函数: sub_141bc8c00
// 地址: 0x141bc8c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x18d)
    void* rdx_1 = arg1[0x23]
    
    if (rdx_1 != 0)
        result = sub_140693270(&arg1[0x24], rdx_1 + 0x28)
        arg1[0x23] = 0

return result
