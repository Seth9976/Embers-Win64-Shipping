// 函数: sub_142252be0
// 地址: 0x142252be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xb8)

if (rcx != 0 && *(arg1 + 0xe0) != 0)
    sub_141f4d050(rcx, arg1 + 0xe0)

*(arg1 + 0xb8) = arg2
bool cond:0 = *(arg1 + 0xdc) == 0
*(arg1 + 0xd8) = 0

if (not(cond:0))
    sub_140991380(arg1 + 0xd0, 0)

sub_142251a80(arg1)
return sub_14224fb90(arg1) __tailcall
