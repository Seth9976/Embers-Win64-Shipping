// 函数: sub_142c90c50
// 地址: 0x142c90c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
void* rbx = **(result + 0x4ed8)
void* rdx = *(rbx + 0x10)

if (rdx != 0)
    result = sub_142c8cc00(0, rdx)

*(rbx + 0xc) = arg2
*(rbx + 0x10) = 0
return result
