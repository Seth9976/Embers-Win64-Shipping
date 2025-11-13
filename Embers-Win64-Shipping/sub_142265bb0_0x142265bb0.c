// 函数: sub_142265bb0
// 地址: 0x142265bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*(arg1 + 4) = 0
int32_t r10 = 1
arg1[3] = zx.d(arg3) + 1
void* r9 = arg4 + 1
*arg1 = 1

do
    char rax_2 = *(r9 - 1)
    
    if (rax_2 == 2)
        arg1[1] |= r10
    else if (rax_2 == 1)
        arg1[2] |= r10
    
    char rax_3 = *r9
    
    if (rax_3 == 2)
        arg1[1] |= rol.d(r10, 1)
    else if (rax_3 == 1)
        arg1[2] |= rol.d(r10, 1)
    
    char rax_8 = *(r9 + 1)
    
    if (rax_8 == 2)
        arg1[1] |= rol.d(r10, 2)
    else if (rax_8 == 1)
        arg1[2] |= rol.d(r10, 2)
    
    char rax_13 = *(r9 + 2)
    
    if (rax_13 == 2)
        arg1[1] |= rol.d(r10, 3)
    else if (rax_13 == 1)
        arg1[2] |= rol.d(r10, 3)
    
    char rax_18 = *(r9 + 3)
    
    if (rax_18 == 2)
        arg1[1] |= rol.d(r10, 4)
    else if (rax_18 == 1)
        arg1[2] |= rol.d(r10, 4)
    
    char rax_23 = *(r9 + 4)
    
    if (rax_23 == 2)
        arg1[1] |= rol.d(r10, 5)
    else if (rax_23 == 1)
        arg1[2] |= rol.d(r10, 5)
    
    char rax_28 = *(r9 + 5)
    
    if (rax_28 == 2)
        arg1[1] |= rol.d(r10, 6)
    else if (rax_28 == 1)
        arg1[2] |= rol.d(r10, 6)
    
    char rax_33 = *(r9 + 6)
    
    if (rax_33 == 2)
        arg1[1] |= rol.d(r10, 7)
    else if (rax_33 == 1)
        arg1[2] |= rol.d(r10, 7)
    
    char rax_38 = *(r9 + 7)
    
    if (rax_38 == 2)
        arg1[1] |= rol.d(r10, 8)
    else if (rax_38 == 1)
        arg1[2] |= rol.d(r10, 8)
    
    char rax_43 = *(r9 + 8)
    
    if (rax_43 == 2)
        arg1[1] |= rol.d(r10, 9)
    else if (rax_43 == 1)
        arg1[2] |= rol.d(r10, 9)
    
    char rax_48 = *(r9 + 9)
    
    if (rax_48 == 2)
        arg1[1] |= rol.d(r10, 0xa)
    else if (rax_48 == 1)
        arg1[2] |= rol.d(r10, 0xa)
    
    char rax_53 = *(r9 + 0xa)
    
    if (rax_53 == 2)
        arg1[1] |= rol.d(r10, 0xb)
    else if (rax_53 == 1)
        arg1[2] |= rol.d(r10, 0xb)
    
    char rax_58 = *(r9 + 0xb)
    
    if (rax_58 == 2)
        arg1[1] |= rol.d(r10, 0xc)
    else if (rax_58 == 1)
        arg1[2] |= rol.d(r10, 0xc)
    
    char rax_63 = *(r9 + 0xc)
    
    if (rax_63 == 2)
        arg1[1] |= rol.d(r10, 0xd)
    else if (rax_63 == 1)
        arg1[2] |= rol.d(r10, 0xd)
    
    char rax_68 = *(r9 + 0xd)
    
    if (rax_68 == 2)
        arg1[1] |= rol.d(r10, 0xe)
    else if (rax_68 == 1)
        arg1[2] |= rol.d(r10, 0xe)
    
    char rax_73 = *(r9 + 0xe)
    
    if (rax_73 == 2)
        arg1[1] |= rol.d(r10, 0xf)
    else if (rax_73 == 1)
        arg1[2] |= rol.d(r10, 0xf)
    
    i += 0x10
    r10 = rol.d(r10, 0x10)
    r9 += 0x10
while (i u< 0x20)

arg1[3] |= (zx.d(*(arg5 + 0x1c)) << 5 | zx.d(arg2)) << 0x15
return arg1
