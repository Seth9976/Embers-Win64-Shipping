// 函数: sub_14106a430
// 地址: 0x14106a430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa0)
void*** rcx_1

if (rax == 0)
    rcx_1 = nullptr
else
    rcx_1 = sub_14106a8d0(rax)

void arg_8

if (arg1 + 8 != &arg_8)
    void*** r8_1 = *(arg1 + 8)
    *(arg1 + 8) = rcx_1
    
    if (r8_1 != 0)
        jump(**r8_1)
else if (rcx_1 != 0)
    jump(**rcx_1)

return arg1 + 8
