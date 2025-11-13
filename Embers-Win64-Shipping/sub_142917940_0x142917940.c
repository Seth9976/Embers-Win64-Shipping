// 函数: sub_142917940
// 地址: 0x142917940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rsi = *(arg1 + 0x28)
int32_t* rbx = *(*(arg1 + 0x10) + 0x28)

if (*rbx != 0x20)
    return 0

sub_1428915a0(arg2, 0x100)
sub_1428915b0(arg2, sub_142917ad0)
sub_142902eb0(rsi + 0x18, *(rbx + 8))
return 1
