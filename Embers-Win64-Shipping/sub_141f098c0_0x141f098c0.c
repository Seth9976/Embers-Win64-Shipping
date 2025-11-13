// 函数: sub_141f098c0
// 地址: 0x141f098c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rax = *(arg1 + 0x211)

if (rax != 2)
    return rax == 1

int64_t* rcx = *(arg1 + 0xa0)

if (rcx != 0 && (*(*rcx + 0x580))(rcx) != 0)
    return true

return false
