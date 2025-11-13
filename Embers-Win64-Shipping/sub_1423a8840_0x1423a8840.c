// 函数: sub_1423a8840
// 地址: 0x1423a8840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x3c0) == 0
*(arg1 + 0x54) = 1

if (cond:0)
    return 

void*** rax = j_sub_140a82f30(0x10)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    *rcx = &data_143339690
    rcx[1] = arg1
    *(arg1 + 0x5c) += 1

int64_t* r8 = data_143db7ac8

if (r8 == 0)
    return sub_1423ae010(rcx) __tailcall

jump(*(*r8 + 0x10))
