// 函数: sub_142c6ee50
// 地址: 0x142c6ee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x7a0)

if (rbx == 0)
    return 

for (int64_t* i = *(rbx + 0x10); i != 0; i = i[2])
    if (*i == arg2)
        sub_142c6a090(rbx + 0x10, i, 0)
        *(rbx + 8) -= 1
        *(arg2 + 0x7a0) = 0
        break

if (*(rbx + 8) == 0)
    sub_142c6eef0(arg1, rbx)

if (arg1 != 0)
    arg1[6] -= 1
