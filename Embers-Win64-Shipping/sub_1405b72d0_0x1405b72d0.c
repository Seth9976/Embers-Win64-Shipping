// 函数: sub_1405b72d0
// 地址: 0x1405b72d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141edf050(arg1)
void* result = arg1[0x3f]

if (result != 0)
    *(result + 0x30) = 0
    arg1[0x3f] = 0

int64_t* rcx = arg1[0x3e]

if (rcx != 0)
    result = (*(*rcx + 0x3a0))(rcx, 0)
    arg1[0x3e] = 0

return result
