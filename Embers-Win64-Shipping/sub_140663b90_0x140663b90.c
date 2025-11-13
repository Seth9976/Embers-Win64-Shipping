// 函数: sub_140663b90
// 地址: 0x140663b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[4]

if (rcx == 0)
    return 

bool z_1

if (0 == *(rcx + 0x78))
    *(rcx + 0x78) = 0
    z_1 = true
else
    *(rcx + 0x78)
    z_1 = false

if (z_1 && (*(*arg1 + 0x10))(arg1, 0) == 0)
    (*(*arg1 + 8))(arg1, 0)
    arg1[6].b = 1
