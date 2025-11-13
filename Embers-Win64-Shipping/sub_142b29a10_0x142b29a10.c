// 函数: sub_142b29a10
// 地址: 0x142b29a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    int64_t rax
    rax.b = 0
    return rax

int16_t* rbx = *(arg1 + 0x190)
uint64_t rbp
rbp.b = 0
int64_t rax_10

while (true)
    uint32_t rdx_2 = zx.d(*rbx)
    int16_t* rsi_1 = rbx
    void* r9_1 = *(arg1 + 0x1c0)
    rbx = &rbx[1]
    uint8_t r8_1
    
    if (rdx_2 u>= zx.d(*(r9_1 + 8)))
        r8_1 = *((zx.q(rdx_2) u>> 8) + *(r9_1 + 0x38))
    
    uint32_t rcx_4
    
    if (rdx_2 u< zx.d(*(r9_1 + 8)) || r8_1 == 0 || (r8_1 u>> ((rdx_2 u>> 5).b & 7) & 1) == 0)
        rcx_4 = 0
    else
        if ((rdx_2 & 0xfffffc00) == 0xd800 && rbx != *(arg1 + 0x1b8))
            uint32_t r8_2 = zx.d(*rbx)
            
            if ((r8_2 & 0xfffffc00) == 0xdc00)
                rdx_2 = ((rdx_2 - 0xd7f7) << 0xa) + r8_2
                rbx = &rbx[1]
        
        rcx_4 = zx.d(sub_142b1def0(r9_1, rdx_2))
    
    rax_10.w = rcx_4.w u>> 8
    
    if (rax_10.b == 0)
        if (rsi_1 == *(arg1 + 0x190))
            goto label_142b29b20
        
        *(arg1 + 0x1b0) = rsi_1
        *(arg1 + 0x198) = rsi_1
    else if (rbp.b u> rax_10.b || (0xfffd & (0x7e7e + rcx_4).w) == 0)
        int16_t* rsi_2
        int16_t i
        
        do
            int64_t r9_2 = *(arg1 + 0x1b8)
            rsi_2 = rbx
            
            if (rbx == r9_2)
                break
            
            uint32_t rdx_3 = zx.d(*rbx)
            rbx = &rbx[1]
            void* r10_1 = *(arg1 + 0x1c0)
            
            if (rdx_3 u< zx.d(*(r10_1 + 8)))
                break
            
            uint8_t r8_3 = *((zx.q(rdx_3) u>> 8) + *(r10_1 + 0x38))
            
            if (r8_3 == 0)
                break
            
            if ((r8_3 u>> ((rdx_3 u>> 5).b & 7) & 1) == 0)
                break
            
            if ((rdx_3 & 0xfffffc00) == 0xd800 && rbx != r9_2)
                uint32_t r8_4 = zx.d(*rbx)
                
                if ((r8_4 & 0xfffffc00) == 0xdc00)
                    rdx_3 = ((rdx_3 - 0xd7f7) << 0xa) + r8_4
                    rbx = &rbx[1]
            
            i = sub_142b1def0(r10_1, rdx_3)
        while (i u> 0xff)
        rax_10 = sub_142b29c40(arg1, *(arg1 + 0x190), rsi_2, arg2)
        
        if (rax_10.b == 0)
            break
        
        *(arg1 + 0x190) = *(arg1 + 0x188)
    else
    label_142b29b20:
        rbp = zx.q(rcx_4.b)
        
        if (rbx != *(arg1 + 0x1b8) && rcx_4.b != 0)
            continue
        
        *(arg1 + 0x1b0) = rbx
        *(arg1 + 0x198) = rbx
    
    *(arg1 + 0x208) = 0
    rax_10.b = 1
    break

return rax_10
