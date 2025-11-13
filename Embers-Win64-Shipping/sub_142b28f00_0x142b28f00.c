// 函数: sub_142b28f00
// 地址: 0x142b28f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int32_t rdi_1 = arg2

while (true)
    char rcx = *(arg1 + 0x208)
    
    if (rcx s>= 0)
        while (true)
            bool cond:0_1 = rcx s<= 0
            
            if (rcx == 0)
                if (*(arg1 + 0x190) != *(arg1 + 0x188))
                    goto label_142b29081
                
                cond:0_1 = rcx s<= 0
            
            if (cond:0_1)
                int64_t rax_3 = *(arg1 + 0x1a8)
                
                if (*(arg1 + 0x188) != rax_3)
                    *(arg1 + 0x1b0) = rax_3
                    *(arg1 + 0x198) = rax_3
                    *(arg1 + 0x190) = rax_3
            else
                int64_t rax_2 = *(arg1 + 0x190)
                *(arg1 + 0x1b0) = rax_2
                *(arg1 + 0x198) = rax_2
                
                if (rax_2 != *(arg1 + 0x1a8))
                    *(arg1 + 0x208) = 0
                    rcx = *(arg1 + 0x208)
                    continue
            
            *(arg1 + 0x188) = *(arg1 + 0x1a0)
            *(arg1 + 0x208) = 0xff
            break
    
    void* rdx = *(arg1 + 0x190)
    int64_t r9_1 = *(arg1 + 0x188)
    
    if (rdx == r9_1)
        break
    
    int16_t* rdx_1 = rdx - 2
    *(arg1 + 0x190) = rdx_1
    uint32_t r8 = zx.d(*rdx_1)
    
    if (r8 u>= 0x300)
        uint64_t r10_1 = zx.q(*((zx.q(r8) u>> 5) + 0x14367b600))
        
        if (r10_1.d != 0 && test_bit(*((r10_1 << 2) + 0x14367c600), r8 & 0x1f))
            if ((r8 & 0x1fff01) == 0xf01)
            label_142b29071:
                *(arg1 + 0x190) = &rdx_1[1]
                
                if (sub_142b29f50(arg1, arg3).b == 0)
                    break
                
            label_142b29081:
                *(arg1 + 0x190) -= 2
                rdx_1 = *(arg1 + 0x190)
                r8 = zx.d(*rdx_1)
            else if (rdx_1 != r9_1)
                uint32_t rcx_3 = zx.d(rdx_1[-1])
                
                if (rcx_3 u>= 0xc0)
                    uint64_t r9_2 = zx.q(*((zx.q(rcx_3) u>> 5) + 0x14367be00))
                    
                    if (r9_2.d != 0 && test_bit(*((r9_2 << 2) + 0x14367c720), rcx_3 & 0x1f))
                        goto label_142b29071
    
    if ((r8 & 0xfffffc00) == 0xdc00 && rdx_1 != *(arg1 + 0x188))
        uint32_t rcx_6 = zx.d(rdx_1[-1])
        
        if ((rcx_6 & 0xfffffc00) == 0xd800)
            *(arg1 + 0x190) = &rdx_1[-1]
            r8 += (rcx_6 - 0xd7f7) << 0xa
    
    if (r8 s< 0)
        break
    
    rdi_1 -= 1
    
    if (rdi_1 s<= 0)
        break
