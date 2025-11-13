// 函数: sub_141ce0440
// 地址: 0x141ce0440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    *rcx = &data_142e3fa38
    rcx[1] = arg1 + 0x28

void arg_8

if (arg1 + 0x388 != &arg_8)
    void*** r8_1 = *(arg1 + 0x388)
    *(arg1 + 0x388) = rcx
    
    if (r8_1 != 0)
        (**r8_1)(r8_1, 1)
else if (rcx != 0)
    (**rcx)(rcx, 1)

jump(*(**(arg1 + 0x388) + 8))
