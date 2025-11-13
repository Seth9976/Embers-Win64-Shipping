// 函数: sub_141cef620
// 地址: 0x141cef620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    rax[1] = arg1 + 0x28
    *rcx = &data_142e3fa48

int64_t* r8 = *(arg1 + 0x388)
*(arg1 + 0x388) = rcx

if (r8 != 0)
    (**r8)(r8, 1)
    rcx = *(arg1 + 0x388)

jump(*(*rcx + 8))
