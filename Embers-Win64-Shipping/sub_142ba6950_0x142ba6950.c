// 函数: sub_142ba6950
// 地址: 0x142ba6950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg1)

if (result.d != 1)
    int32_t r15_1 = 1
    int32_t i = 1
    
    if (result.d u> 1)
        do
            uint64_t i_3 = zx.q(i)
            
            if (i != 0)
                int32_t* rdx = &arg2[zx.q(i) * 3]
                
                do
                    i_3 = zx.q(i_3.d - 1)
                    uint64_t rcx_1 = i_3 * 3
                    result = zx.q(arg2[rcx_1])
                    int64_t* r9_1 = &arg2[rcx_1]
                    
                    if (*rdx s>= result.d)
                        break
                    
                    int64_t zmm1 = *rdx
                    int32_t rcx_2 = rdx[2]
                    result = zx.q(r9_1[1].d)
                    *rdx = *r9_1
                    rdx[2] = result.d
                    rdx -= 0xc
                    *r9_1 = zmm1
                    r9_1[1].d = rcx_2
                while (i_3.d != 0)
            
            i += 1
        while (i u< *arg1)
    
    int32_t r9_2 = *arg1
    int32_t result_2 = 0
    int32_t r12_1 = *arg2
    int32_t r8 = 1
    
    if (r9_2 u> 1)
        int32_t result_1 = 2
        
        do
            int32_t rdx_2 = arg2[zx.q(r8) * 3] - r12_1
            
            if (rdx_2 s<= arg3)
                result = zx.q(r9_2 - 1)
            
            if (rdx_2 s> arg3 || r8 == result.d)
                int32_t rbp_1 = 0
                
                if (rdx_2 s<= arg3 && r8 == r9_2 - 1)
                    r8 += 1
                    result_1 += 1
                
                int32_t rdx_3 = 0
                int32_t r9_3 = 0
                int32_t result_3 = result_2
                
                if (result_2 u< r8)
                    if (r8 - result_2 u>= 2)
                        void* rax_6 = &arg2[zx.q(result_2) * 3]
                        uint64_t rcx_9 = zx.q(((r8 - result_2 - 2) u>> 1) + 1)
                        uint64_t i_4 = zx.q(rcx_9.d)
                        result_3 = result_2 + (rcx_9 << 1).d
                        uint64_t i_1
                        
                        do
                            rdx_3 += *rax_6
                            r9_3 += *(rax_6 + 0xc)
                            *rax_6 = 0
                            *(rax_6 + 0xc) = 0
                            rax_6 += 0x18
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                    
                    if (result_3 u< r8)
                        uint64_t result_4 = zx.q(result_3)
                        result_3 += 1
                        uint64_t rcx_10 = result_4 * 3
                        rbp_1 = arg2[rcx_10]
                        arg2[rcx_10] = 0
                    
                    rbp_1 += r9_3 + rdx_3
                
                arg2[zx.q(result_2) * 3] = divs.dp.d(sx.q(rbp_1), result_3)
                r9_2 = *arg1
                result = zx.q(r9_2 - 1)
                
                if (r8 u< result.d)
                    result = zx.q(result_1)
                    result_2 = result_1
                    r12_1 = arg2[result * 3]
            
            r8 += 1
            result_1 += 1
        while (r8 u< r9_2)
    
    int32_t i_2 = 1
    
    if (*arg1 u> 1)
        do
            result = zx.q(i_2)
            uint64_t rcx_15 = result * 3
            void* r8_1 = &arg2[rcx_15]
            
            if (arg2[rcx_15] != 0)
                uint64_t rax_10 = zx.q(r15_1)
                r15_1 += 1
                uint64_t rcx_16 = rax_10 * 3
                *(arg2 + (rcx_16 << 2)) = *r8_1
                result = zx.q(*(r8_1 + 8))
                arg2[rcx_16 + 2] = result.d
            
            i_2 += 1
        while (i_2 u< *arg1)
    
    *arg1 = r15_1

return result
