// 函数: sub_142b79410
// 地址: 0x142b79410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3
void* r9
uint32_t r10

if (arg2 != 0)
    r9 = *arg1
    rax_3 = 0x5000500
    int32_t r8 = *(r9 + (sx.q(arg2 + 1) << 2))
    
    if (r8.b s< 0)
        int32_t r8_1 = r8 & 0xffffff7f
        
        if (r8_1 u> 0x5000500)
            r8_1 = 0x5000500
        
        rax_3 = r8_1
    
    r10 = zx.d(*(r9 + 0x10)) << 8
else
    int32_t* rax = *arg1
    
    if (arg3 != 0)
        arg2 = rax[1]
        r9 = *arg1
        r10 = zx.d(rax[4].b) << 8
        rax_3 = *(r9 + (sx.q(arg2) << 2)) & 0xffffff7f
    else
        arg2 = *rax
        r10 = 0x4000
        r9 = *arg1
        rax_3 = *(r9 + (sx.q(arg2) << 2)) & 0xffffff7f

int32_t r8_4 = arg3 << 0x10 | arg4

if (rax_3 u<= r8_4)
    void* rdx = r9 + (sx.q(arg2) << 2)
    
    do
        int32_t rax_8 = *(rdx + 4)
        rdx += 4
        
        if (rax_8.b s>= 0 || rax_8 u>> 0x10 u> arg3)
            return zx.q(r10)
        
        rax_3 = rax_8 & 0xffffff7f
    while (rax_3 u<= r8_4)

return zx.q(rax_3.w)
