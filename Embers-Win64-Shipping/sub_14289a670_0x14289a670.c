// 函数: sub_14289a670
// 地址: 0x14289a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

int64_t result = arg1[8]
sub_142899cf0(arg1, 7, 0, arg1)
void* rdx = arg1[9]

if (rdx != 0)
    *(rdx + 0x40) = arg1[8]

void* rdx_1 = arg1[8]

if (rdx_1 != 0)
    *(rdx_1 + 0x48) = arg1[9]

arg1[8] = 0
arg1[9] = 0
return result
