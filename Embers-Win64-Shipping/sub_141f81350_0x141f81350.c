// 函数: sub_141f81350
// 地址: 0x141f81350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(8)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    *rcx = &data_142fdd540

void arg_10

if (arg2 + 0x88 != &arg_10)
    void*** r8_1 = *(arg2 + 0x88)
    *(arg2 + 0x88) = rcx
    
    if (r8_1 != 0)
        jump(*(*r8_1 + 0x10))
else if (rcx != 0)
    jump(*(*rcx + 0x10))

return arg2 + 0x88
