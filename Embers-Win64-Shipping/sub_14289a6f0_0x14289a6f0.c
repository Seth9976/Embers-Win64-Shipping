// 函数: sub_14289a6f0
// 地址: 0x14289a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return arg2

int64_t* i = arg1[8]
int64_t* i_1 = arg1

for (; i != 0; i = i[8])
    i_1 = i

i_1[8] = arg2

if (arg2 != 0)
    *(arg2 + 0x48) = i_1

sub_142899cf0(arg1, 6, 0, i_1)
return arg1
