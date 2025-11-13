// 函数: sub_142396e90
// 地址: 0x142396e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) += 1
void*** rax = j_sub_140a82f30(0x10)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    *rcx = &data_143336708
    rcx[1] = arg1
    *(arg1 + 0x5c) += 1

int64_t* r8 = data_143db7ac8

if (r8 == 0)
    return sub_142389d40(rcx) __tailcall

jump(*(*r8 + 0x10))
