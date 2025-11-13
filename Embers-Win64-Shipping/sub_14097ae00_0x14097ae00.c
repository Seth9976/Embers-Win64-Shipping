// 函数: sub_14097ae00
// 地址: 0x14097ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x15]

if (rcx != 0)
    *(arg1 + 0xd4) = (*(*rcx + 0x38))(rcx, arg1 + 0xcc)

sub_14097bc50(arg1)
sub_141c40150(&arg1[0x35])
uint64_t result = 0
bool z

if (0 == arg1[0x5d].d)
    arg1[0x5d].d = 0
    z = true
else
    result = zx.q(arg1[0x5d].d)
    z = false

if (z)
    return result

return (*(*arg1 + 0x180))(arg1)
