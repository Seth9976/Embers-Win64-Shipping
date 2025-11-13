// 函数: sub_142a72fc0
// 地址: 0x142a72fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0xcc)
int32_t r9 = *(arg1 + 0x84)
int32_t rax = 1

if (r10 s>= r9)
    rax = 0x13

uint64_t rdx = zx.q(rax)

if (*(arg1 + (rdx << 2) + 0x80) s< *(arg1 + 0xc4))
    rdx = 0x11

if (rdx.d == 1)
    if (arg1[0x10].d s> 0 && *(arg1 + 0xc) == 0)
        if (r9 s<= 0)
            return 0
        
        return zx.q(1 - arg1[2].d)
    
    if (r9 s> 0)
        return zx.q(arg1[2].d)
else
    if (rdx.d == 0x11)
        arg1[3].d
        arg1[0xa].d
        jump(*(*arg1 + 0x128))
    
    if (rdx.d == 0x13 && r10 s> 0)
        return zx.q(arg1[0xb].d)

return 0x7b2
