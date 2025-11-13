// 函数: sub_142b7d630
// 地址: 0x142b7d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142b7df50(arg1, arg2, arg3)
void* rax = *(arg1 + 0x10)

if (rax != 0)
    arg2[7].d = *(rax + 0x38)
    arg2[9] = *(*(arg1 + 0x10) + 0x48)
    *(arg2 + 0x64) = *(*(arg1 + 0x10) + 0x64)
    arg2[0xd] = *(*(arg1 + 0x10) + 0x68)
    arg2[0xe] = *(*(arg1 + 0x10) + 0x70)
    arg2[0xf].d = *(*(arg1 + 0x10) + 0x78)

return sub_142b7dde0(arg1, arg2, arg3) __tailcall
