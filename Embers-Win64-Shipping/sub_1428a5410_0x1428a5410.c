// 函数: sub_1428a5410
// 地址: 0x1428a5410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t result = sub_1428a51c0()

if (result == 0)
    return result

int32_t i = *arg2
int32_t* rcx = arg2

for (; i != 0; i = *rcx)
    *rcx = i | arg1 << 0x18
    rcx = &rcx[4]

sub_1428a5a10(arg2)
return 1
