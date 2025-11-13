// 函数: sub_14219e330
// 地址: 0x14219e330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140b5b8a0(arg2.d, 0)

if ((arg2:4.d == 0 & rax.b) == 0)
    int32_t rcx_1 = *(arg1 + 0x448)
    int32_t rdx_1 = 0
    
    if (rcx_1 s> 0)
        int64_t* rax_1 = *(arg1 + 0x440)
        
        do
            if (*rax_1 == arg2 && rax_1[1].b == 7)
                char rcx_6 = *(arg1 + 0x432)
                
                if ((rcx_6 & 0x40) == 0 && rax_1[7] == arg3)
                    *(arg1 + 0x432) = rcx_6 & 0xbf
                    rax_1[7] = arg3
                    return rax_1
                
                *(arg1 + 0x432) = (rcx_6 & 0xbf) | 0x40
                rax_1[7] = arg3
                return rax_1
            
            rdx_1 += 1
            rax_1 -= -0x80
        while (rdx_1 s< rcx_1)
    
    int64_t r14_1 = sx.q(*(arg1 + 0x448))
    int32_t rax_2 = (r14_1 + 1).d
    *(arg1 + 0x448) = rax_2
    
    if (rax_2 s> *(arg1 + 0x44c))
        sub_1408888d0(arg1 + 0x440)
    
    int64_t r14_2 = r14_1 << 7
    memset(*(arg1 + 0x440) + r14_2, 0, 0x80)
    *(r14_2 + *(arg1 + 0x440)) = arg2
    *(*(arg1 + 0x440) + r14_2 + 8) = 7
    char rcx_5 = *(arg1 + 0x432)
    int64_t rax_4
    
    if ((rcx_5 & 0x40) != 0 || *(*(arg1 + 0x440) + r14_2 + 0x38) != arg3)
        rax_4.b = 0x40
    else
        rax_4.b = 0
    
    rax = *(arg1 + 0x440)
    *(arg1 + 0x432) = (rcx_5 & 0xbf) | rax_4.b
    *(rax + r14_2 + 0x38) = arg3

return rax
