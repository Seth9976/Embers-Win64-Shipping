// 函数: sub_142b76090
// 地址: 0x142b76090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= arg3)
    return 0xfffffffe

int16_t r10 = *(arg1 + 8)
int32_t rax_2

if (r10 s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(r10) s>> 5

int16_t rcx_1

if (arg2 u>= rax_2)
    rcx_1 = -1
else if ((r10.b & 2) == 0)
    rcx_1 = *(*(arg1 + 0x18) + (sx.q(arg2) << 1))
else
    rcx_1 = *(arg1 + 0xa + (sx.q(arg2) << 1))

int32_t rdx = arg2 + 1
uint64_t rcx_3
uint64_t rbx

if (rcx_1 != 0x30)
    if (rcx_1 - 0x31 u> 8)
        return 0xffffffff
    
    rcx_3 = zx.q(zx.d(rcx_1) - 0x30)
    rbx.b = 0
else
    if (rdx == arg3)
        return 0
    
    rcx_3 = 0
    rbx.b = 1

if (rdx s< arg3)
    int16_t* r11_1 = sx.q(rdx) * 2
    
    do
        int32_t rax_9
        
        if (r10 s< 0)
            rax_9 = *(arg1 + 0xc)
        else
            rax_9 = sx.d(r10) s>> 5
        
        int16_t r8
        
        if (rdx u>= rax_9)
            r8 = -1
        else
            void* rax_10 = arg1 + 0xa
            
            if ((r10.b & 2) == 0)
                rax_10 = *(arg1 + 0x18)
            
            r8 = *(r11_1 + rax_10)
        
        rdx += 1
        r11_1 = &r11_1[1]
        
        if (r8 - 0x30 u> 9)
            return 0xffffffff
        
        rbx = zx.q(rbx.b)
        
        if (rcx_3.d s>= 0xccccccc)
            rbx = 1
        
        rcx_3 = zx.q(zx.d(r8) + (((rcx_3 * 5).d - 0x18) << 1))
    while (rdx s< arg3)

if (rbx.b != 0)
    rcx_3 = 0xfffffffe

return zx.q(rcx_3.d)
