// 函数: sub_141051a90
// 地址: 0x141051a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x160)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *rbx = &data_142f00958
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100

memset(rbx + 0x1c, 0, 0x144)
rbx[3].d = 0
void* r8 = arg3 + 2
void* r9 = &rbx[5]
*(rbx + 0x1c) = zx.d(*(arg3 + 0x38))
int64_t i_1 = 8
int64_t i

do
    int32_t rax_2
    
    if (*(r8 - 2) != 0 || *r8 != 0 || *(r8 - 1) != 1 || *(r8 + 1) != 0 || *(r8 + 3) != 0
            || *(r8 + 2) != 1)
        rax_2 = 1
    else
        rax_2 = 0
    
    *(r9 - 8) = rax_2
    uint32_t rax_3 = zx.d(*(r8 - 2))
    int32_t rax_7
    
    if (rax_3 == 1)
        rax_7 = 2
    else if (rax_3 == 2)
        rax_7 = 4
    else if (rax_3 == 3)
        rax_7 = 5
    else if (rax_3 == 4)
        rax_7 = 3
    else
        rax_7 = 1
    
    *(r9 + 8) = rax_7
    *r9 = sub_140ffde40(zx.d(*(r8 - 1)))
    *(r9 + 4) = sub_140ffde40(zx.d(*r8))
    uint32_t rcx_3 = zx.d(*(r8 + 1))
    int32_t rax_10
    
    if (rcx_3 == 1)
        rax_10 = 2
    else if (rcx_3 == 2)
        rax_10 = 4
    else if (rcx_3 == 3)
        rax_10 = 5
    else if (rcx_3 == 4)
        rax_10 = 3
    else
        rax_10 = 1
    
    *(r9 + 0x14) = rax_10
    *(r9 + 0xc) = sub_140ffde40(zx.d(*(r8 + 2)))
    *(r9 + 0x10) = sub_140ffde40(zx.d(*(r8 + 3)))
    char rax_13 = *(r8 + 4)
    r8 += 7
    *(r9 + 0x1c) = rax_13 & 0xf
    r9 += 0x28
    i = i_1
    i_1 -= 1
while (i != 1)
*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
