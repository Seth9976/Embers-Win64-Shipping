// 函数: sub_142277d10
// 地址: 0x142277d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = 0
void* rax = arg1 + 1
int32_t i = 0
char r9 = arg2.b

do
    if (zx.d(*(rax - 1)) != arg2)
        *(rax - 1) = arg2.b
        r8 = 1
        r9 = arg2.b
    
    if (zx.d(*rax) != arg2)
        *rax = r9
        r8 = 1
    
    if (zx.d(*(rax + 1)) != arg2)
        *(rax + 1) = r9
        r8 = 1
    
    if (zx.d(*(rax + 2)) != arg2)
        *(rax + 2) = r9
        r8 = 1
    
    char r10_1
    
    if (zx.d(*(rax + 3)) == arg2)
        r10_1 = arg2.b
    else
        *(rax + 3) = r9
        r8 = 1
        r10_1 = r9
    
    if (zx.d(*(rax + 4)) != arg2)
        *(rax + 4) = r9
        r8 = 1
        r10_1 = r9
    
    if (zx.d(*(rax + 5)) != arg2)
        *(rax + 5) = r9
        r8 = 1
        r10_1 = r9
    
    if (zx.d(*(rax + 6)) != arg2)
        *(rax + 6) = r9
        r8 = 1
        r10_1 = r9
    
    if (zx.d(*(rax + 7)) != arg2)
        *(rax + 7) = r10_1
        r8 = 1
    
    if (zx.d(*(rax + 8)) != arg2)
        *(rax + 8) = r10_1
        r8 = 1
    
    if (zx.d(*(rax + 9)) != arg2)
        *(rax + 9) = r10_1
        r8 = 1
    
    char r9_1
    
    if (zx.d(*(rax + 0xa)) == arg2)
        r9_1 = arg2.b
    else
        *(rax + 0xa) = r10_1
        r8 = 1
        r9_1 = r10_1
    
    if (zx.d(*(rax + 0xb)) != arg2)
        *(rax + 0xb) = r10_1
        r8 = 1
        r9_1 = r10_1
    
    if (zx.d(*(rax + 0xc)) != arg2)
        *(rax + 0xc) = r10_1
        r8 = 1
        r9_1 = r10_1
    
    if (zx.d(*(rax + 0xd)) != arg2)
        *(rax + 0xd) = r10_1
        r8 = 1
        r9_1 = r10_1
    
    if (zx.d(*(rax + 0xe)) != arg2)
        *(rax + 0xe) = r9_1
        r8 = 1
    
    if (zx.d(*(rax + 0xf)) != arg2)
        *(rax + 0xf) = r9_1
        r8 = 1
    
    if (zx.d(*(rax + 0x10)) != arg2)
        *(rax + 0x10) = r9_1
        r8 = 1
    
    char r10_2
    
    if (zx.d(*(rax + 0x11)) == arg2)
        r10_2 = arg2.b
    else
        *(rax + 0x11) = r9_1
        r8 = 1
        r10_2 = r9_1
    
    if (zx.d(*(rax + 0x12)) != arg2)
        *(rax + 0x12) = r9_1
        r8 = 1
        r10_2 = r9_1
    
    if (zx.d(*(rax + 0x13)) != arg2)
        *(rax + 0x13) = r9_1
        r8 = 1
        r10_2 = r9_1
    
    if (zx.d(*(rax + 0x14)) != arg2)
        *(rax + 0x14) = r9_1
        r8 = 1
        r10_2 = r9_1
    
    if (zx.d(*(rax + 0x15)) != arg2)
        *(rax + 0x15) = r10_2
        r8 = 1
    
    if (zx.d(*(rax + 0x16)) != arg2)
        *(rax + 0x16) = r10_2
        r8 = 1
    
    if (zx.d(*(rax + 0x17)) != arg2)
        *(rax + 0x17) = r10_2
        r8 = 1
    
    if (zx.d(*(rax + 0x18)) == arg2)
        r9 = arg2.b
    else
        *(rax + 0x18) = r10_2
        r8 = 1
        r9 = r10_2
    
    if (zx.d(*(rax + 0x19)) != arg2)
        *(rax + 0x19) = r10_2
        r8 = 1
        r9 = r10_2
    
    if (zx.d(*(rax + 0x1a)) != arg2)
        *(rax + 0x1a) = r10_2
        r8 = 1
        r9 = r10_2
    
    if (zx.d(*(rax + 0x1b)) != arg2)
        *(rax + 0x1b) = r10_2
        r8 = 1
        r9 = r10_2
    
    if (zx.d(*(rax + 0x1c)) == arg2)
        r9 = arg2.b
    else
        *(rax + 0x1c) = r9
        r8 = 1
    
    if (zx.d(*(rax + 0x1d)) != arg2)
        *(rax + 0x1d) = r9
        r8 = 1
    
    if (zx.d(*(rax + 0x1e)) != arg2)
        *(rax + 0x1e) = r9
        r8 = 1
    
    i += 0x20
    rax += 0x20
while (i u< 0x20)

return zx.q(r8)
