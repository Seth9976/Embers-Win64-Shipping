// 函数: sub_142a36a30
// 地址: 0x142a36a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0xffffffff)
    return zx.q(arg4) | zx.q(arg2)

int64_t rdi = sx.q(arg2)

if (*(rdi + arg3) != 0)
    return 0xffffffff

char* rbx = *(rdi + arg1)

if (rbx != 0)
    int64_t rcx = -1
    
    do
        rcx += 1
    while (rbx[rcx] != 0)
    
    if (rcx == -1 || rcx + 1 u> 0x80000000)
        *(rdi + arg3) = 0
        return 0xffffffff
    
    int64_t rax_3 = j_sub_140a82f30(rcx + 1)
    *(rdi + arg3) = rax_3
    
    if (rax_3 == 0)
        return 0xffffffff
    
    char* rcx_3 = rax_3 - rbx
    char i
    
    do
        i = *rbx
        *(rcx_3 + rbx) = i
        rbx = &rbx[1]
    while (i != 0)

return 0
