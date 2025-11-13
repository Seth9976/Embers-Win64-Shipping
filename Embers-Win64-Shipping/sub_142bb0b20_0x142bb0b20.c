// 函数: sub_142bb0b20
// 地址: 0x142bb0b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint32_t r10 = 0x10000

if (*arg1 u<= 0)
    return 0x10000

do
    uint64_t rdx = zx.q(i) << 2
    int32_t r9 = *(rdx + arg3)
    
    if (r9 != 0)
        int32_t rax_3 = *(rdx + *(arg1 + 0x10))
        
        if (rax_3 == 0)
            return 0
        
        if (rax_3 != r9)
            if ((0x4000 & arg2) != 0)
                int32_t rcx = *(rdx + arg4)
                
                if (rax_3 s<= rcx)
                    return 0
                
                int32_t rdx_4 = *(rdx + arg5)
                
                if (rax_3 s>= rdx_4)
                    return 0
                
                int32_t rdx_3
                int32_t r8
                
                if (rax_3 s>= r9)
                    r8 = rdx_4 - r9
                    rdx_3 = rdx_4 - rax_3
                else
                    r8 = r9 - rcx
                    rdx_3 = rax_3 - rcx
                
                r10 = sub_142b93dd0(r10, rdx_3, r8)
            else
                int32_t rdx_1 = r9
                
                if (r9 s> 0)
                    rdx_1 = 0
                
                if (rax_3 s< rdx_1)
                    return 0
                
                int32_t rdx_2 = r9
                
                if (r9 s< 0)
                    rdx_2 = 0
                
                if (rax_3 s> rdx_2)
                    return 0
                
                r10 = sub_142b93dd0(r10, rax_3, r9)
    
    i += 1
while (i u< *arg1)

return zx.q(r10)
