// 函数: sub_14239a380
// 地址: 0x14239a380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
bool z

if (1 == *(rbx + 0x48))
    *(rbx + 0x48) = 2
    z = true
else
    *(rbx + 0x48)
    z = false

if (z)
    sub_1423a7d70(rbx + 0x10, 0)
    *(rbx + 0x48) = 3

void* rbx_1 = *arg1
bool z_1

if (1 == *(rbx_1 + 0x38))
    *(rbx_1 + 0x38) = 2
    z_1 = true
else
    *(rbx_1 + 0x38)
    z_1 = false

if (z_1)
    sub_1423a7990(rbx_1 + 0x10)
    *(rbx_1 + 0x38) = 3

void* rbx_2 = arg1[1]

if (*(rbx_2 + 0x48) != 0)
    while (*(rbx_2 + 0x48) != 3)
        sub_140b73230(zx.o(0))
    
    sub_1423b6740(rbx_2 + 0x10)

*(rbx_2 + 0x48) = 0
void* rbx_3 = *arg1
int32_t result = *(rbx_3 + 0x38)

if (result != 0)
    while (*(rbx_3 + 0x38) != 3)
        sub_140b73230(zx.o(0))
    
    result = sub_1423b66b0(rbx_3 + 0x10)

*(rbx_3 + 0x38) = 0
return result
