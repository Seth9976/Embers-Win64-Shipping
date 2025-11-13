// 函数: sub_1417c12a0
// 地址: 0x1417c12a0
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
        int64_t r9_2 = arg2[2]
        
        while (true)
            int64_t r8 = sx.q(rcx_3) * 3
            
            if (*(r9_2 + (r8 << 3)) == 2)
                break
            
            rcx_3 = *(r9_2 + (r8 << 3) + 0x10)
            
            if (rcx_3 == 0xffffffff)
                return result
        
        if (rcx_3 != 0xffffffff)
            int64_t r10_1 = 0
            void* const rcx_5
            
            if (result.d == 0xffffffff)
            label_1417c1331:
                rcx_5 = nullptr
            else
                while (true)
                    int64_t rdx_1 = sx.q(result.d) * 3
                    rcx_5 = r9_2 + (rdx_1 << 3)
                    
                    if (*(r9_2 + (rdx_1 << 3)) == 2)
                        break
                    
                    result = zx.q(*(rcx_5 + 0x10))
                    
                    if (result.d == 0xffffffff)
                        goto label_1417c1331_1
                
                if (result.d == 0xffffffff)
                label_1417c1331_1:
                    rcx_5 = nullptr
            
            result = *arg2
            void* rbx_1 = *(rcx_5 + 8)
            int64_t r9_3 = sx.q(*(result + 8))
            
            if (r9_3 s> 0)
                do
                    int64_t* r8_1 = *arg3
                    int64_t rax_2 = sx.q(*(**arg2 + (r10_1 << 3) + 4))
                    r10_1 += 1
                    int64_t rdx_2 = rax_2 * 0xc
                    int64_t* rcx_8 = **(rbx_1 + 8)
                    *(r8_1 + rdx_2) = *(rcx_8 + rdx_2)
                    result = zx.q(*(rcx_8 + rdx_2 + 8))
                    *(r8_1 + rdx_2 + 8) = result.d
                while (r10_1 s< r9_3)

return result
