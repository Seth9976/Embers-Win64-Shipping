// 函数: sub_142274830
// 地址: 0x142274830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd15d0(arg1)
int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x129)
    result = arg1[0x87].d
    arg1[0x87].d = (((result * 2) ^ result) & 4) ^ result

return result
