// 函数: sub_142b65b80
// 地址: 0x142b65b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rbx = arg3
char* rsi = arg2
int32_t i_1 = arg1
char* rdx
int32_t rax

if (arg1 s< 0xfdd0 || (arg1 s> 0xfdef && (arg1 & 0xfffe) != 0xfffe) || i_1 s> 0x10ffff)
    rax = sub_142a53dd0(arg1)
    
    if (rax.b == 0x12)
        rax.b = (i_1 & 0xfffffc00) != 0xd800
        rax.b += 0x1f
    
    if (rax.b u< 0x21)
        rdx = (&data_1436718c0)[zx.q(rax.b)]
    else
        rdx = "unknown"
else
    rax.b = 0x1e
    rdx = (&data_1436718c0)[zx.q(rax.b)]

if (rbx != 0)
    *rsi = 0x3c
    rsi = &rsi[1]
    rbx -= 1

int32_t rcx = 1

if (*rdx != 0)
    char* rax_3 = rdx
    
    do
        if (rbx != 0)
            *rsi = *rax_3
            rsi = &rsi[1]
            rbx -= 1
        
        rcx.w += 1
        rax_3 = &rdx[sx.q(zx.d(rcx.w) - 1)]
    while (*rax_3 != 0)

if (rbx != 0)
    *rsi = 0x2d
    rsi = &rsi[1]
    rbx -= 1

rcx.w += 1
int32_t rdx_1 = 0
int32_t i = i_1

if (i_1 != 0)
    do
        rdx_1 += 1
        i s>>= 4
    while (i != 0)

if (i_1 == 0 || rdx_1 s< 4)
    rdx_1 = 4

char* r9 = sx.q(rdx_1)
char* r8 = r9

while (i_1 != 0 || r8 s> 0)
    if (rbx == 0)
        break
    
    char rax_8 = i_1.b & 0xf
    
    if (rax_8 u>= 0xa)
        r8 -= 1
        i_1 s>>= 4
        rbx -= 1
        *(r8 + rsi) = rax_8 + 0x37
    else
        r8 -= 1
        i_1 s>>= 4
        rbx -= 1
        *(r8 + rsi) = rax_8 + 0x30

rcx.w += rdx_1.w

if (rbx != 0)
    *(r9 + rsi) = 0x3e

return zx.q(rcx + 1)
