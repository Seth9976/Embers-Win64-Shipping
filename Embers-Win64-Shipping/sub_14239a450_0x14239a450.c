// 函数: sub_14239a450
// 地址: 0x14239a450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
bool z

if (1 == *(rbx + 0x30))
    *(rbx + 0x30) = 2
    z = true
else
    *(rbx + 0x30)
    z = false

if (z)
    sub_1423a80f0(rbx + 0x10)
    *(rbx + 0x30) = 3

void* rbx_1 = arg1[1]
bool z_1

if (1 == *(rbx_1 + 0x18))
    *(rbx_1 + 0x18) = 2
    z_1 = true
else
    *(rbx_1 + 0x18)
    z_1 = false

if (z_1)
    sub_1423a7a80(rbx_1 + 0x10)
    *(rbx_1 + 0x18) = 3

void* rbx_2 = *arg1

if (*(rbx_2 + 0x30) != 0)
    while (*(rbx_2 + 0x30) != 3)
        sub_140b73230(zx.o(0))
    
    sub_1423b67c0(rbx_2 + 0x10)

*(rbx_2 + 0x30) = 0
void* rbx_3 = arg1[1]
int32_t i = *(rbx_3 + 0x18)

if (i != 0)
    for (i = *(rbx_3 + 0x18); i != 3; i = *(rbx_3 + 0x18))
        sub_140b73230(zx.o(0))
    
    int64_t* rcx_3 = *(rbx_3 + 0x10)
    *(rbx_3 + 0x10) = 0
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            i = (**rcx_3)(rcx_3, 1)

*(rbx_3 + 0x18) = 0
return i
