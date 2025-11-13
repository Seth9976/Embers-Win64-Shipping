// 函数: sub_142baba90
// 地址: 0x142baba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rbp = *arg2
int16_t rax

if (arg1[0x40].w != 0)
    rax = *(arg1 + 0xc6)
else
    rax = 1

int32_t r14 = sx.d(rbp)
uint64_t result = zx.q(sx.d(rax))

if (r14 u< result.d)
    int16_t rsi_1
    int128_t zmm0
    int128_t zmm1
    
    if ((arg1[0x43].b & 1) == 0)
        zmm0 = *(arg1 + 0x78)
        rsi_1 = *(arg1 + 0x1c4)
        zmm1 = *(arg1 + 0x88)
    else
        zmm0 = *(arg1 + 0x38)
        rsi_1 = *(arg1 + 0x1c2)
        zmm1 = *(arg1 + 0x48)
    
    result = zmm0:8.q u>> 0x20
    
    if (rsi_1 u< result.w)
        int64_t r15_1 = zmm1:8.q
        uint64_t rcx = zx.q(rsi_1) << 3
        int64_t rax_3 = zmm1.q
        int32_t rax_4 = arg1[0x65](arg1, zx.q(*(rcx + r15_1) - *(rcx + rax_3)), 
            zx.q(*(rcx + r15_1 + 4) - *(rcx + rax_3 + 4)))
        uint32_t rax_5 = sub_142b93dd0(rax_4, sx.d(*(arg1 + 0x1ce)), arg1[0x63].d)
        result = sub_142b93dd0(rax_4, sx.d(arg1[0x3a].w), arg1[0x63].d)
        int32_t r10_1 = result.d
        int16_t i
        
        if (rbp != 0)
            result = arg1[0x1d]
            i = *(result + (sx.q(r14 - 1) << 1)) - arg1[0x1e].w + 1
        else
            i = 0
        
        int16_t r9_1
        
        if (arg1[0x40].w != 0)
            result = arg1[0x1d]
            r9_1 = *(result + (sx.q(rbp) << 1)) - arg1[0x1e].w + 1
        else
            r9_1 = *(arg1 + 0xc4)
        
        for (; i u< r9_1; i += 1)
            int64_t r8_5 = arg1[0x1a]
            
            if (r15_1 != r8_5 || rsi_1 != i)
                if (*(arg1 + 0x1ce) != 0)
                    if (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0)
                        uint64_t i_1 = zx.q(i)
                        *(r8_5 + (i_1 << 3)) += rax_5
                    
                    result = arg1[0x1c]
                    uint64_t i_2 = zx.q(i)
                    *(result + i_2) |= 8
                
                if (arg1[0x3a].w != 0)
                    if (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0
                            || *(arg1 + 0x374) == 0 || *(arg1 + 0x375) == 0)
                        int64_t rax_9 = arg1[0x1a]
                        uint64_t i_3 = zx.q(i)
                        *(rax_9 + (i_3 << 3) + 4) += r10_1
                    
                    result = arg1[0x1c]
                    uint64_t i_4 = zx.q(i)
                    *(result + i_4) |= 0x10
    else if (*(arg1 + 0x315) != 0)
        arg1[3].d = 0x86
else if (*(arg1 + 0x315) != 0)
    arg1[3].d = 0x86

return result
