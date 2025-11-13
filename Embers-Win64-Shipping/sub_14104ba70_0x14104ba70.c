// 函数: sub_14104ba70
// 地址: 0x14104ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int32_t rdx = *(rbx + 0x128)
int64_t* rcx = *(rbx + 0x30)

if (rdx != 0)
    (*(*rcx + 0xd0))(rcx, rdx, *(rbx + 0x120))
    *(rbx + 0x128) = 0
