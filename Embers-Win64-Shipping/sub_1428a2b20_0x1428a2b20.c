// 函数: sub_1428a2b20
// 地址: 0x1428a2b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbx = *arg2

if (arg1 == 1)
    *(rbx + 0xc8) = -1
    *(rbx + 0xd0) = 0
    *(rbx + 0xe0) = 0
    *(rbx + 0xe8) = 0
    *(rbx + 0x110) = 0
    *(rbx + 0x118) = 0
    *(rbx + 0x138) = 0
    *(rbx + 0xf8) = 0
    int32_t result = sub_1428a62f0(3, rbx, rbx + 0xc0)
    
    if (result == 0)
        return result
else if (arg1 == 3)
    sub_1428a5f50(3, rbx, rbx + 0xc0)
    sub_1428f12e0(*(rbx + 0x138))
    sub_1428c3460(*(rbx + 0xe0))
    sub_1428f15b0(*(rbx + 0xe8))
    sub_1428f1d30(*(rbx + 0xf8))
    sub_1428f24d0(*(rbx + 0xf0))
    sub_1428e7a10(*(rbx + 0x100))
    sub_1428e8200(*(rbx + 0x108))
    sub_142898cb0(*(rbx + 0x110), sub_1428eca10)
    sub_1428eb600(*(rbx + 0x118))

return 1
