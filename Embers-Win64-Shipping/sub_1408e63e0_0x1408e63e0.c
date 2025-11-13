// 函数: sub_1408e63e0
// 地址: 0x1408e63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_1408e4100()
void** r8 = *rax
r8[0x18](rax, arg1, r8)
sub_141f20b40(arg1)
*(arg1 + 0x444) = 0
*(arg1 + 0x470) = 0

if (*(arg1 + 0x474) == 0)
    return 0

return sub_1408e7380(arg1 + 0x468, 0) __tailcall
