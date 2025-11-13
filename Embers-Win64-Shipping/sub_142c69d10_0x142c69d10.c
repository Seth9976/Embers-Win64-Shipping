// 函数: sub_142c69d10
// 地址: 0x142c69d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg2
char* rbx = arg1
uint64_t rsi
rsi.b = 1
char* rbp = arg2

if (arg3 == 0)
    rbp = sub_142c69100(arg2)

if (*rdi == 0)
    *rbx = 0
    return 

do
    char* rax = zx.q(*rdi)
    
    if (rdi u< rbp)
        *rbx = rax.b
        rbx = &rbx[1]
    else if (rax.b != 0x20)
        rsi = zx.q(rsi.b)
        
        if (rax.b == 0x3f)
            rsi = 0
        
        if (rax.b u< 0x80)
            *rbx = rax.b
            rbx = &rbx[1]
        else
            arg4 = sub_142c564b0(rbx, 4, "%%%02x", zx.q(rax.b), arg4)
            rbx = &rbx[3]
    else if (rsi.b == 0)
        *rbx = 0x2b
        rbx = &rbx[1]
    else
        *rbx = 0x3225
        rbx[2] = 0x30
        rbx = &rbx[3]
    
    rdi = &rdi[1]
while (*rdi != 0)

*rbx = 0
