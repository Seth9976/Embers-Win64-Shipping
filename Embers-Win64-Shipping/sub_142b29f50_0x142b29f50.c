// 函数: sub_142b29f50
// 地址: 0x142b29f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    int64_t rax
    rax.b = 0
    return rax

void* rbx = *(arg1 + 0x190)
uint64_t rsi
rsi.b = 0
int64_t rax_1

while (true)
    void* r10_1 = *(arg1 + 0x1c0)
    void* rbp_1 = rbx
    uint64_t rdx = zx.q(*(rbx - 2))
    rbx -= 2
    uint32_t i_1
    
    if (rdx.d u>= zx.d(*(r10_1 + 8)))
        if ((rdx.d & 0xfffffc00) == 0xdc00)
            if (*(arg1 + 0x1a0) u< rbx)
                uint32_t r9_1 = zx.d(*(rbx - 2))
                
                if ((r9_1 & 0xfffffc00) == 0xd800)
                    rbx -= 2
                    rdx = zx.q(rdx.d + ((r9_1 - 0xd7f7) << 0xa))
            
            goto label_142b2a03f
        
        uint8_t r8_1 = *((rdx u>> 8) + *(r10_1 + 0x38))
        
        if (r8_1 != 0)
            rax_1.b = (rdx.d u>> 5).b & 7
        
        if (r8_1 == 0 || (r8_1 u>> rax_1.b & 1) == 0)
            i_1 = 0
            goto label_142b2a04b
        
    label_142b2a03f:
        rax_1 = sub_142b1def0(r10_1, rdx.d)
        i_1 = zx.d(rax_1.w)
        
        if (rax_1.b == 0)
            goto label_142b2a04b
        
        if ((rsi.b == 0 || i_1.b u<= rsi.b) && (0xfffd & (0x7e7e + i_1).w) != 0)
            goto label_142b2a07e
        
        void* rsi_1
        int16_t i
        
        do
            rsi_1 = rbx
            
            if (i_1.w u<= 0xff)
                break
            
            int64_t rcx_4 = *(arg1 + 0x1a0)
            
            if (rbx == rcx_4)
                break
            
            void* r9_2 = *(arg1 + 0x1c0)
            rbx -= 2
            uint32_t rdx_1 = zx.d(*rbx)
            
            if (rdx_1 u< zx.d(*(r9_2 + 8)))
                break
            
            if ((rdx_1 & 0xfffffc00) != 0xdc00)
                uint8_t r8_3 = (zx.q(rdx_1) u>> 8)[*(r9_2 + 0x38)]
                
                if (r8_3 == 0)
                    break
                
                if ((r8_3 u>> ((rdx_1 u>> 5).b & 7) & 1) == 0)
                    break
            else if (rcx_4 u< rbx)
                uint32_t r8_4 = zx.d(*(rbx - 2))
                
                if ((r8_4 & 0xfffffc00) == 0xd800)
                    rdx_1 += (r8_4 - 0xd7f7) << 0xa
                    rbx -= 2
            
            i = sub_142b1def0(r9_2, rdx_1)
            i_1 = zx.d(i)
        while (i != 0)
        rax_1 = sub_142b29c40(arg1, rsi_1, *(arg1 + 0x190), arg2)
        
        if (rax_1.b == 0)
            break
        
        *(arg1 + 0x190) = *(arg1 + 0x198)
    else
        i_1 = 0
    label_142b2a04b:
        
        if (rbp_1 == *(arg1 + 0x190))
        label_142b2a07e:
            rsi.w = i_1.w u>> 8
            
            if (rbx != *(arg1 + 0x1a0) && rsi.b != 0)
                continue
            
            *(arg1 + 0x1a8) = rbx
            *(arg1 + 0x188) = rbx
        else
            *(arg1 + 0x1a8) = rbp_1
            *(arg1 + 0x188) = rbp_1
    *(arg1 + 0x208) = 0
    rax_1.b = 1
    break

return rax_1
