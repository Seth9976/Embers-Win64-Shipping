// 函数: sub_1417c1050
// 地址: 0x1417c1050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[3].d)

if (result.d != *(arg2 + 0x44))
    void* rax = arg2[0xa]
    void* r9_1 = &arg2[9]
    
    if (rax != 0)
        r9_1 = rax
    
    result = zx.q(*(r9_1 + ((zx.q(arg2[0xb].d - 1) & 2) << 2)))
    int32_t rcx_3 = result.d
    
    if (result.d != 0xffffffff)
        int64_t r10_1 = arg2[2]
        
        while (true)
            int64_t r8 = sx.q(rcx_3) * 3
            
            if (*(r10_1 + (r8 << 3)) == 2)
                break
            
            rcx_3 = *(r10_1 + (r8 << 3) + 0x10)
            
            if (rcx_3 == 0xffffffff)
                return result
        
        if (rcx_3 != 0xffffffff)
            int64_t r9_2 = 0
            void* const rcx_5
            
            if (result.d == 0xffffffff)
            label_1417c10e1:
                rcx_5 = nullptr
            else
                while (true)
                    int64_t rdx_1 = sx.q(result.d) * 3
                    rcx_5 = r10_1 + (rdx_1 << 3)
                    
                    if (*(r10_1 + (rdx_1 << 3)) == 2)
                        break
                    
                    result = zx.q(*(rcx_5 + 0x10))
                    
                    if (result.d == 0xffffffff)
                        goto label_1417c10e1_1
                
                if (result.d == 0xffffffff)
                label_1417c10e1_1:
                    rcx_5 = nullptr
            
            result = *arg2
            void* rbx_1 = *(rcx_5 + 8)
            int64_t r10_2 = sx.q(*(result + 8))
            
            if (r10_2 s> 0)
                do
                    int64_t rax_2 = sx.q(*(**arg2 + (r9_2 << 3) + 4))
                    r9_2 += 1
                    int64_t r8_1 = rax_2 << 2
                    result = zx.q(*(r8_1 + **(rbx_1 + 8)))
                    *(r8_1 + *arg3) = result.d
                while (r9_2 s< r10_2)

return result
