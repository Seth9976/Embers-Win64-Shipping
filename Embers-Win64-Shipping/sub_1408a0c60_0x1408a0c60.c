// 函数: sub_1408a0c60
// 地址: 0x1408a0c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 1)
    *(arg2 + 0x10) = 0
    *(arg2 + 0x18) = 0xf
    *arg2 = 0
    sub_14058ad40(arg2, "iostream stream error", 0x15)
    return arg2

char* rax_1 = std::_Syserror_map(arg3)
*(arg2 + 0x10) = 0
int64_t r8 = -1
*(arg2 + 0x18) = 0xf
*arg2 = 0

do
    r8 += 1
while (rax_1[r8] != 0)

sub_14058ad40(arg2, rax_1, r8)
return arg2
