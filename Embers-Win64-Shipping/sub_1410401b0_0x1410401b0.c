// 函数: sub_1410401b0
// 地址: 0x1410401b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (rbx == 0)
    return 

int32_t rax = *(rbx + 0x68)
*(rbx + 0x68) -= 1

if (rax != 1)
    return 

if (*(rbx + 0x70) != 0)
    jump(**(rbx + 0x60))

if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
    jump(**(rbx + 0x60))

bool z_1

if (0 == *(rbx + 0x6c))
    *(rbx + 0x6c) = 1
    z_1 = true
else
    *(rbx + 0x6c)
    z_1 = false

if (z_1)
    return sub_1405dcc10(&data_143f02390, rbx + 0x60) __tailcall
