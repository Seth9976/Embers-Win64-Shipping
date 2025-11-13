// 函数: sub_141d05f90
// 地址: 0x141d05f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_7 = arg1[6]
void* rdx = *rax_7

if ((rdx.b & 1) != 0)
    rdx = (rdx s>> 1) + rax_7

int64_t* r8_1 = **arg1 + 0x10
void* rcx = *r8_1

if ((rcx.b & 1) != 0)
    rcx = (rcx s>> 1) + r8_1

return sx.q(*((sx.q(*(arg1 + 0x4c)) << 5) + rdx + 0x10)) * 0x50 + rcx
