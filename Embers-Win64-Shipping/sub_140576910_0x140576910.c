// 函数: sub_140576910
// 地址: 0x140576910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0x38
    *(rax + 0xc) = 8
    *rbx = &data_143484c08

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"AIDataProviderBoolValue", 1), rbx)
