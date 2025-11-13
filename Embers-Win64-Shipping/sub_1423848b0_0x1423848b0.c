// 函数: sub_1423848b0
// 地址: 0x1423848b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) != 0 || *(arg1 + 0x58) == 0)
    return 

bool cond:1_1 = *(arg1 + 0x388) == 0
*(arg1 + 0x54) = 1

if (cond:1_1)
    return 

void*** rax_1 = j_sub_140a82f30(0x10)
void*** rcx = rax_1

if (rax_1 == 0)
    rcx = nullptr
else
    *rcx = &data_143336918
    rcx[1] = arg1
    *(arg1 + 0x5c) += 1

int64_t* r8 = data_143db7ac8

if (r8 == 0)
    return sub_142389cc0(rcx) __tailcall

jump(*(*r8 + 0x10))
