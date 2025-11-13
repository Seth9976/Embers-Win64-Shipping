// 函数: sub_142bcaf70
// 地址: 0x142bcaf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xd8)
int64_t rsi = *(arg1 + 0x98)

if (rbx == 0)
    return 

if (*(rbx + 0xa0) != 0)
    sub_142b97020(*(arg1 + 0xa0), rbx + 0xa0)

sub_142b99980(rsi, *(rbx + 0xb0))
*(rbx + 0xb0) = 0
sub_142b99980(rsi, rbx)
*(arg1 + 0xd8) = 0
