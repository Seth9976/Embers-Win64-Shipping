// 函数: sub_142a8c7b0
// 地址: 0x142a8c7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2)
uint64_t r11 = zx.q(arg4)
void* r10 = arg1
int16_t* rdi = arg3
int16_t rcx
int16_t rdx
void* rbx
void* r9

if (arg2 s< 0 && arg4 s< 0)
    if (arg1 == arg3)
        return 0
    
    rdx = *arg1
    rcx = *arg3
    
    while (rdx == rcx)
        if (rdx == 0)
            return 0
        
        rdx = *(r10 + 2)
        r10 += 2
        rcx = arg3[1]
        arg3 = &arg3[1]
    
    rbx = nullptr
    r9 = nullptr
else if (arg5 == 0)
    int32_t rbx_1 = -1
    
    if (arg2 s< 0)
        rax = -1
        
        do
            rax += 1
        while (arg1[rax] != 0)
    
    if (arg4 s< 0)
        r11 = -1
        
        do
            r11 += 1
        while (arg3[r11] != 0)
    
    int32_t rcx_1
    
    if (rax.d s< r11.d)
        rcx_1 = rax.d
    else if (rax.d != r11.d)
        rbx_1 = 1
        rcx_1 = r11.d
    else
        rbx_1 = 0
        rcx_1 = rax.d
    
    void* r9_1 = r10 + (sx.q(rcx_1) << 1)
    
    if (r10 == arg3 || r10 == r9_1)
        return zx.q(rbx_1)
    
    while (true)
        rdx = *r10
        rcx = *arg3
        
        if (rdx != rcx)
            break
        
        r10 += 2
        arg3 = &arg3[1]
        
        if (r10 == r9_1)
            return zx.q(rbx_1)
    
    r9 = &arg1[sx.q(rax.d)]
    rbx = &rdi[sx.q(r11.d)]
else
    if (r10 == arg3)
        return 0
    
    r9 = &arg1[rax]
    
    if (r10 == r9)
        return 0
    
    while (true)
        rdx = *r10
        rcx = *arg3
        
        if (rdx != rcx)
            rbx = &rdi[rax]
            break
        
        if (rdx == 0)
            return 0
        
        r10 += 2
        arg3 = &arg3[1]
        
        if (r10 == r9)
            return 0

if (rdx u>= 0xd800 && rcx u>= 0xd800 && arg6 != 0)
    if ((rdx u> 0xdbff || r10 + 2 == r9 || (zx.d(*(r10 + 2)) & 0xfffffc00) != 0xdc00) && (
            (zx.d(rdx) & 0xfffffc00) != 0xdc00 || arg1 == r10
            || (zx.d(*(r10 - 2)) & 0xfffffc00) != 0xd800))
        rdx -= 0x2800
    
    if ((rcx u> 0xdbff || &arg3[1] == rbx || (zx.d(arg3[1]) & 0xfffffc00) != 0xdc00) && (
            (zx.d(rcx) & 0xfffffc00) != 0xdc00 || rdi == arg3
            || (zx.d(arg3[-1]) & 0xfffffc00) != 0xd800))
        rcx -= 0x2800

return zx.q(zx.d(rdx) - zx.d(rcx))
