// 函数: sub_142c7bf30
// 地址: 0x142c7bf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
arg1[0x7e].b = 0
int64_t rax = data_143ccb8b8(0x28, 1)
*(rbx + 0x250) = rax

if (rax == 0)
    return 0x1b

*(rbx + 0x4e38) += 1
return 0
