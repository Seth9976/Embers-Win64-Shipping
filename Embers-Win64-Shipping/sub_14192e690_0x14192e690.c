// 函数: sub_14192e690
// 地址: 0x14192e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t rdi = arg1[1].d

if (rdi == *(rbx + 0x2d0))
    *(rbx + 0x2d0) = 0
    memset(rbx + 0x318, 0, 0x80)
    *(rbx + 0x398) = 0
    *(rbx + 0x3ac) = 1

if (rdi == *(rbx + 0x14ba8))
    *(rbx + 0x14ba8) = 0xffffffff

if (rdi == *(rbx + 0x15440))
    *(rbx + 0x15440) = 0xffffffff

jump(data_143f00100)
