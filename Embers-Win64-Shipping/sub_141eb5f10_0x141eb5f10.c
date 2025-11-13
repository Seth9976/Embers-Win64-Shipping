// 函数: sub_141eb5f10
// 地址: 0x141eb5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = 0
void* r9 = arg4 + 1
arg1[1].d = 0
int32_t r10 = 1

do
    char rax_1 = *(r9 - 1)
    
    if (rax_1 == 2)
        *arg1 |= r10
    else if (rax_1 == 1)
        *(arg1 + 4) |= r10
    
    char rax_2 = *r9
    
    if (rax_2 == 2)
        *arg1 |= rol.d(r10, 1)
    else if (rax_2 == 1)
        *(arg1 + 4) |= rol.d(r10, 1)
    
    char rax_7 = *(r9 + 1)
    
    if (rax_7 == 2)
        *arg1 |= rol.d(r10, 2)
    else if (rax_7 == 1)
        *(arg1 + 4) |= rol.d(r10, 2)
    
    char rax_12 = *(r9 + 2)
    
    if (rax_12 == 2)
        *arg1 |= rol.d(r10, 3)
    else if (rax_12 == 1)
        *(arg1 + 4) |= rol.d(r10, 3)
    
    char rax_17 = *(r9 + 3)
    
    if (rax_17 == 2)
        *arg1 |= rol.d(r10, 4)
    else if (rax_17 == 1)
        *(arg1 + 4) |= rol.d(r10, 4)
    
    char rax_22 = *(r9 + 4)
    
    if (rax_22 == 2)
        *arg1 |= rol.d(r10, 5)
    else if (rax_22 == 1)
        *(arg1 + 4) |= rol.d(r10, 5)
    
    char rax_27 = *(r9 + 5)
    
    if (rax_27 == 2)
        *arg1 |= rol.d(r10, 6)
    else if (rax_27 == 1)
        *(arg1 + 4) |= rol.d(r10, 6)
    
    char rax_32 = *(r9 + 6)
    
    if (rax_32 == 2)
        *arg1 |= rol.d(r10, 7)
    else if (rax_32 == 1)
        *(arg1 + 4) |= rol.d(r10, 7)
    
    char rax_37 = *(r9 + 7)
    
    if (rax_37 == 2)
        *arg1 |= rol.d(r10, 8)
    else if (rax_37 == 1)
        *(arg1 + 4) |= rol.d(r10, 8)
    
    char rax_42 = *(r9 + 8)
    
    if (rax_42 == 2)
        *arg1 |= rol.d(r10, 9)
    else if (rax_42 == 1)
        *(arg1 + 4) |= rol.d(r10, 9)
    
    char rax_47 = *(r9 + 9)
    
    if (rax_47 == 2)
        *arg1 |= rol.d(r10, 0xa)
    else if (rax_47 == 1)
        *(arg1 + 4) |= rol.d(r10, 0xa)
    
    char rax_52 = *(r9 + 0xa)
    
    if (rax_52 == 2)
        *arg1 |= rol.d(r10, 0xb)
    else if (rax_52 == 1)
        *(arg1 + 4) |= rol.d(r10, 0xb)
    
    char rax_57 = *(r9 + 0xb)
    
    if (rax_57 == 2)
        *arg1 |= rol.d(r10, 0xc)
    else if (rax_57 == 1)
        *(arg1 + 4) |= rol.d(r10, 0xc)
    
    char rax_62 = *(r9 + 0xc)
    
    if (rax_62 == 2)
        *arg1 |= rol.d(r10, 0xd)
    else if (rax_62 == 1)
        *(arg1 + 4) |= rol.d(r10, 0xd)
    
    char rax_67 = *(r9 + 0xd)
    
    if (rax_67 == 2)
        *arg1 |= rol.d(r10, 0xe)
    else if (rax_67 == 1)
        *(arg1 + 4) |= rol.d(r10, 0xe)
    
    char rax_72 = *(r9 + 0xe)
    
    if (rax_72 == 2)
        *arg1 |= rol.d(r10, 0xf)
    else if (rax_72 == 1)
        *(arg1 + 4) |= rol.d(r10, 0xf)
    
    i += 0x10
    r10 = rol.d(r10, 0x10)
    r9 += 0x10
while (i u< 0x20)

arg1[1].d = (zx.d(arg3) << 5 | zx.d(arg2)) << 0x15
return arg1
