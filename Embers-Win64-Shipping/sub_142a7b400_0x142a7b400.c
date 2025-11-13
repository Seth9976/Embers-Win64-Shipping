// 函数: sub_142a7b400
// 地址: 0x142a7b400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13
r13.b = 0
int64_t rbx = sx.q(arg2)
int64_t rdx = *(arg1 + 0x68)
int64_t rsi = rbx
int64_t r12 = *(*(arg1 + 0x20) + 0x30)

if (rbx s< rdx)
    uint32_t rdi_1 = zx.d(*(r12 + (rbx << 1)))
    
    if ((rdi_1 & 0xfffff800) == 0xd800)
        if (not(test_bit(rdi_1, 0xa)))
            int64_t rcx = sx.q((rbx + 1).d)
            
            if (rcx != rdx)
                uint32_t rdx_1 = zx.d(*(r12 + (rcx << 1)))
                
                if ((rdx_1 & 0xfffffc00) == 0xdc00)
                    rdi_1 = ((rdi_1 - 0xd7f7) << 0xa) + rdx_1
        else if (rbx s> *(arg1 + 0x60))
            uint32_t rdx_2 = zx.d(*(r12 + (sx.q((rbx - 1).d) << 1)))
            
            if ((rdx_2 & 0xfffffc00) == 0xd800)
                rdi_1 += (rdx_2 - 0xd7f7) << 0xa
    
    if (sub_142af4740(zx.q(rdi_1), 0xb) != 0)
        return 0
    
    if (sub_142a53dd0(rdi_1) == 0x10)
        return 0
    
    r13 = zx.q(sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + 8), zx.q(rdi_1)))
else
    *(arg1 + 0xa8) = 1

uint64_t r15
r15.b = 0

if (rbx s> *(arg1 + 0x60))
    int16_t* r14_2 = r12 + ((rbx - 1) << 1)
    
    do
        uint32_t rdi_4 = zx.d(*(r12 + (rsi << 1) - 2))
        rsi -= 1
        rbx = zx.q(rbx.d - 1)
        r14_2 -= 2
        
        if ((rdi_4 & 0xfffffc00) == 0xdc00 && sx.q(rbx.d) s> *(arg1 + 0x60))
            uint32_t rcx_6 = zx.d(*r14_2)
            
            if ((rcx_6 & 0xfffffc00) == 0xd800)
                rbx = zx.q(rbx.d - 1)
                rsi -= 1
                r14_2 -= 2
                rdi_4 += (rcx_6 - 0xd7f7) << 0xa
        
        if (sub_142af4740(zx.q(rdi_4), 0xb) == 0 && sub_142a53dd0(rdi_4) != 0x10)
            r15 = zx.q(sub_142a9f280(*(*(*(arg1 + 8) + 0x90) + 8), zx.q(rdi_4)))
            break
    while (sx.q(rbx.d) s> *(arg1 + 0x60))

r15.b ^= r13.b
return zx.q(r15.b)
