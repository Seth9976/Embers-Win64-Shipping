// 函数: sub_142384830
// 地址: 0x142384830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) != 0 || *(arg1 + 0x58) == 0)
    return 

bool cond:1_1 = *(arg1 + 0x3c8) == 0
*(arg1 + 0x54) = 1

if (cond:1_1)
    return 

void*** rax_1 = j_sub_140a82f30(0x10)
void*** rcx = rax_1

if (rax_1 == 0)
    rcx = nullptr
else
    *rcx = &data_143336800
    rcx[1] = arg1

int64_t* r8 = data_143db7ac8

if (r8 == 0)
    return sub_142389c40(rcx) __tailcall

jump(*(*r8 + 0x10))
