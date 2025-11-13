// 函数: sub_141c63a70
// 地址: 0x141c63a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)

if (rbx == 0)
    int64_t rax
    rax.b = 1
    return rax

bool z

if (0 == *(rbx + 0x78))
    *(rbx + 0x78) = 0
    z = true
else
    *(rbx + 0x78)
    z = false

uint64_t rax_1

if (not(z))
    rax_1.b = 0
    return rax_1

if (*(rbx + 0x88) != 0)
    int64_t* rcx = *(rbx + 0x80)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
    *(rbx + 0x88) = 0

rax_1.b = 1
return rax_1
