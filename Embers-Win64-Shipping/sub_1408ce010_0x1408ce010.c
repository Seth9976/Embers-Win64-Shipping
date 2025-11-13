// 函数: sub_1408ce010
// 地址: 0x1408ce010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd7d40(arg1)
bool cond:0 = *(arg1 + 0x44) == 0
*(arg1 + 0x40) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x38, 0)

char* result = sub_1423cb370(arg1 + 0x58)
*(arg1 + 0x80) = 0
return result
