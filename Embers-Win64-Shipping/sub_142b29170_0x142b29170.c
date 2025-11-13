// 函数: sub_142b29170
// 地址: 0x142b29170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int32_t rdi_1 = arg2

while (true)
    char rcx = *(arg1 + 0x208)
    
    if (rcx s<= 0)
        while (true)
            bool cond:0_1 = rcx s>= 0
            
            if (rcx == 0)
                if (*(arg1 + 0x190) != *(arg1 + 0x198))
                    goto label_142b292fb
                
                cond:0_1 = rcx s>= 0
            
            if (not(cond:0_1))
                int64_t rax_2 = *(arg1 + 0x190)
                *(arg1 + 0x1a8) = rax_2
                *(arg1 + 0x188) = rax_2
                
                if (rax_2 != *(arg1 + 0x1b0))
                    *(arg1 + 0x208) = 0
                    rcx = *(arg1 + 0x208)
                    continue
            else if (*(arg1 + 0x188) != *(arg1 + 0x1a8))
                int64_t rax_4 = *(arg1 + 0x1b0)
                *(arg1 + 0x1a8) = rax_4
                *(arg1 + 0x188) = rax_4
                *(arg1 + 0x190) = rax_4
            
            *(arg1 + 0x198) = *(arg1 + 0x1b8)
            *(arg1 + 0x208) = 1
            break
    
    int16_t* rdx = *(arg1 + 0x190)
    int64_t r9_1 = *(arg1 + 0x198)
    
    if (rdx == r9_1)
        break
    
    uint32_t r8 = zx.d(*rdx)
    void* rdx_1 = &rdx[1]
    *(arg1 + 0x190) = rdx_1
    uint64_t r10_1
    
    if (r8 u>= 0xc0)
        r10_1 = zx.q(*((zx.q(r8) u>> 5) + 0x14367be00))
    
    if (r8 u< 0xc0 || r10_1.d == 0 || not(test_bit(*((r10_1 << 2) + 0x14367c720), r8 & 0x1f)))
        if (r8 == 0 && r9_1 == 0)
            *(arg1 + 0x190) = rdx_1 - 2
            *(arg1 + 0x1b8) = rdx_1 - 2
            *(arg1 + 0x198) = rdx_1 - 2
            break
    else if ((r8 & 0x1fff01) == 0xf01)
    label_142b292e7:
        *(arg1 + 0x190) = rdx_1 - 2
        
        if (sub_142b29a10(arg1, arg3).b == 0)
            break
        
    label_142b292fb:
        int16_t* rax_14 = *(arg1 + 0x190)
        r8 = zx.d(*rax_14)
        rdx_1 = &rax_14[1]
        *(arg1 + 0x190) = rdx_1
    else if (rdx_1 != r9_1)
        uint32_t rcx_3 = zx.d(*rdx_1)
        
        if (rcx_3 u>= 0x300)
            uint64_t r9_2 = zx.q(*((zx.q(rcx_3) u>> 5) + 0x14367b600))
            
            if (r9_2.d != 0 && test_bit(*((r9_2 << 2) + 0x14367c600), rcx_3 & 0x1f))
                goto label_142b292e7
    
    if ((r8 & 0xfffffc00) == 0xd800 && rdx_1 != *(arg1 + 0x198))
        uint32_t rcx_6 = zx.d(*rdx_1)
        
        if ((rcx_6 & 0xfffffc00) == 0xdc00)
            r8 = ((r8 - 0xd7f7) << 0xa) + rcx_6
            *(arg1 + 0x190) = rdx_1 + 2
    
    if (r8 s< 0)
        break
    
    rdi_1 -= 1
    
    if (rdi_1 s<= 0)
        break
