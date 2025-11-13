// 函数: sub_142b29520
// 地址: 0x142b29520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0x208)

if (rcx s<= 0)
    while (true)
        bool cond:0_1 = rcx s>= 0
        
        if (rcx == 0)
            if (*(arg1 + 0x190) != *(arg1 + 0x198))
                *arg2 = zx.d(**(arg1 + 0x190))
                goto label_142b296db
            
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
            int64_t rax_5 = *(arg1 + 0x1b0)
            *(arg1 + 0x1a8) = rax_5
            *(arg1 + 0x188) = rax_5
            *(arg1 + 0x190) = rax_5
        
        *(arg1 + 0x198) = *(arg1 + 0x1b8)
        *(arg1 + 0x208) = 1
        break

int16_t* rax_7 = *(arg1 + 0x190)

if (rax_7 == *(arg1 + 0x198))
    *arg2 = 0xffffffff
    return 0xc0

*arg2 = zx.d(*rax_7)
*(arg1 + 0x190) += 2
int64_t rdx = sx.q(*arg2)
int16_t* r8 = *(arg1 + 0x190)

if (rdx.d s>= 0xc0)
    uint64_t r9_1 = zx.q(*((rdx s>> 5) + 0x14367be00))
    
    if (r9_1.d != 0 && test_bit(*((r9_1 << 2) + 0x14367c720), rdx.d & 0x1f))
        if ((rdx.d & 0x1fff01) == 0xf01)
        label_142b296a9:
            *(arg1 + 0x190) = &r8[-1]
            
            if (sub_142b29a10(arg1, arg3) == 0)
                *arg2 = 0xffffffff
                return 0xc0
            
            *arg2 = zx.d(**(arg1 + 0x190))
        label_142b296db:
            *(arg1 + 0x190) += 2
        else if (r8 != *(arg1 + 0x198))
            uint32_t rcx_4 = zx.d(*r8)
            
            if (rcx_4 u>= 0x300)
                uint64_t rdx_2 = zx.q(*((zx.q(rcx_4) u>> 5) + 0x14367b600))
                
                if (rdx_2.d != 0 && test_bit(*((rdx_2 << 2) + 0x14367c600), rcx_4 & 0x1f))
                    goto label_142b296a9

int64_t* r9_2 = *(arg1 + 8)
int64_t r8_1 = sx.q(*arg2)
return zx.q(*(r9_2[2] + (zx.q((r8_1.d & 0x1f) + (zx.d(*(*r9_2 + (r8_1 s>> 5 << 1))) << 2)) << 2)))
