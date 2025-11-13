// 函数: sub_140e5e0d0
// 地址: 0x140e5e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

if (*(rbx + 0x6c) != 0)
    *(rbx + 0x6c) = 0

if (*(rbx + 0x64) != 0)
    *(rbx + 0x64) = 0

if (*(rbx + 0x5c) != 0)
    *(rbx + 0x5c) = 0

if (*(rbx + 0x54) != 0)
    *(rbx + 0x54) = 0

int64_t rcx = *(rbx + 0x38)

if (rcx != 0)
    sub_140a74f90(rcx)

return j_sub_140a74f90(rbx) __tailcall
