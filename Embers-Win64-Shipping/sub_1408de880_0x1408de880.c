// 函数: sub_1408de880
// 地址: 0x1408de880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd7d40(arg1)
*(arg1 + 0x58) = 0
int64_t result = sub_1408e1fa0(arg1 + 0x60, 0)
bool cond:0 = *(arg1 + 0x7c) == 0
*(arg1 + 0x78) = 0

if (cond:0)
    return result

return sub_1405dadb0(arg1 + 0x70, 0) __tailcall
