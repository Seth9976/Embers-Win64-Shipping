// 函数: sub_141e2f5d0
// 地址: 0x141e2f5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1
int32_t rdx = *(result + 0x150)

if (rdx s> 0)
    int32_t r8_1 = 0
    arg1[0x1e].d = 0
    
    if (*(arg1 + 0xf4) != rdx)
        sub_1405dadb0(&arg1[0x1d], rdx)
        r8_1 = arg1[0x1e].d
    
    int32_t rax_2 = *(*arg1 + 0x150) + r8_1
    arg1[0x1e].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xf4))
        sub_1405a4cf0(&arg1[0x1d])
    
    int32_t rdx_2 = 0
    int32_t rcx_2 = *(*arg1 + 0x150)
    arg1[0x20].d = 0
    
    if (*(arg1 + 0x104) != rcx_2)
        sub_1405dadb0(&arg1[0x1f], rcx_2)
        rdx_2 = arg1[0x20].d
    
    result = zx.q(*(*arg1 + 0x150) + rdx_2)
    arg1[0x20].d = result.d
    
    if (result.d s> *(arg1 + 0x104))
        result = sub_1405a4cf0(&arg1[0x1f])
    
    void* r8_2 = *arg1
    int32_t i = 0
    
    if (*(r8_2 + 0x150) s> 0)
        int64_t rcx_5 = 0
        
        do
            result = arg1[0x1f]
            rcx_5 += 4
            i += 1
            *(rcx_5 + result - 4) = 0xffffffff
            r8_2 = *arg1
        while (i s< *(r8_2 + 0x150))
    
    int32_t i_1 = 0
    
    if (*(r8_2 + 0x150) s> 0)
        int32_t* rsi_1 = nullptr
        int64_t rbp_1 = 0
        
        do
            void* r10_1 = *(r8_2 + 0x148)
            int32_t rdx_4 = 0
            int64_t r9_1 = sx.q(*(r8_2 + 0x150))
            int64_t rcx_6 = 0
            
            if (r9_1.d s<= 0)
            label_141e2f703:
                rdx_4 = -1
                rcx_6 = -1
            else
                int64_t* r8_3 = r10_1 + 0x30
                
                while (*r8_3 != *(r10_1 + rbp_1 + 0x3c))
                    rdx_4 += 1
                    rcx_6 += 1
                    r8_3 = &r8_3[0xb]
                    
                    if (rcx_6 s>= r9_1)
                        goto label_141e2f703
            
            result = arg1[0x1d]
            *(rsi_1 + result) = rdx_4
            
            if (rdx_4 s>= 0 && rdx_4 s< arg1[0x1e].d)
                result = arg1[0x1f]
                *(result + (rcx_6 << 2)) = i_1
            
            r8_2 = *arg1
            i_1 += 1
            rbp_1 += 0x58
            rsi_1 = &rsi_1[1]
        while (i_1 s< *(r8_2 + 0x150))

return result
