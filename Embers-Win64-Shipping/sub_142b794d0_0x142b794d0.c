// 函数: sub_142b794d0
// 地址: 0x142b794d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = arg1
int32_t rax_3
int32_t* r10

if (arg2 != 0)
    int32_t rax_5 = sub_142b790c0(arg1, arg2) + 1
    arg2 = 0x100
    r10 = sx.q(rax_5) << 2
    int32_t rcx = *(r10 + *rdi)
    rax_3 = 0x5000500
    
    if (rcx.b s< 0)
        int32_t rcx_1 = rcx & 0xffffff7f
        
        if (rcx_1 u> 0x5000500)
            rcx_1 = 0x5000500
        
        rax_3 = rcx_1
else
    int32_t* r8 = *arg1
    int32_t rax
    
    if (arg3 != 0)
        rax = r8[1]
        arg2 = 0x100
    else
        rax = *r8
    
    r10 = sx.q(rax) << 2
    rax_3 = *(r10 + r8) & 0xffffff7f

int32_t r9_2 = arg3 << 0x10 | arg4

if (r9_2 u> rax_3)
    void* r8_2 = *rdi + r10
    
    do
        r8_2 += 4
        
        if (rax_3 u>> 0x10 == arg3)
            arg2 = rax_3
        
        rax_3 = *(r8_2 - 4) & 0xffffff7f
    while (r9_2 u> rax_3)

return zx.q(arg2.w)
