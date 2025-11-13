// 函数: sub_14216b8b0
// 地址: 0x14216b8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *arg2
uint64_t result

if (rdx != 0)
    while (true)
        if (*(arg1 + 0x1a0) - *(arg1 + 0x1cc) == 0)
        label_14216b932:
            int64_t* r10_1 = *(arg1 + 0x310)
            int32_t* rcx_5
            
            if (r10_1[1].d == *(r10_1 + 0x34))
            label_14216b98d:
                rcx_5 = nullptr
            else
                void* rcx_2 = r10_1[8]
                void* r9_3 = &r10_1[7]
                
                if (rcx_2 != 0)
                    r9_3 = rcx_2
                
                int32_t rax_3 = *(r9_3 + (((sx.q(r10_1[9].d) - 1) & sx.q(rdx)) << 2))
                
                if (rax_3 == 0xffffffff)
                label_14216b98d_1:
                    rcx_5 = nullptr
                else
                    while (true)
                        rcx_5 = sx.q(rax_3) * 0x38 + *r10_1
                        
                        if (*rcx_5 == rdx)
                            break
                        
                        rax_3 = rcx_5[0xc]
                        
                        if (rax_3 == 0xffffffff)
                            goto label_14216b98d_2
                    
                    if (rax_3 == 0xffffffff)
                    label_14216b98d_2:
                        rcx_5 = nullptr
            
            result = &rcx_5[2]
            
            if (rcx_5 == 0)
                result = 0
            
            if (result == 0)
                break
            
            if ((*(result + 0x20) & 4) == 0)
                rdx = *(result + 8)
                
                if (rdx == 0)
                    break
                
                continue
        else
            void* r9_1 = arg1 + 0x1d0
            void* rcx = *(r9_1 + 8)
            
            if (rcx != 0)
                r9_1 = rcx
            
            result = zx.q(*(r9_1 + (((sx.q(*(arg1 + 0x1e0)) - 1) & sx.q(rdx)) << 2)))
            
            if (result.d == 0xffffffff)
                goto label_14216b932
            
            int64_t r9_2 = *(arg1 + 0x198)
            
            while (true)
                int64_t r8_4 = sx.q(result.d) * 3
                
                if (*(r9_2 + (r8_4 << 3)) == rdx)
                    break
                
                result = zx.q(*(r9_2 + (r8_4 << 3) + 0x10))
                
                if (result.d == 0xffffffff)
                    goto label_14216b932
            
            if (result.d == 0xffffffff)
                goto label_14216b932
        
        result.b = 1
        return result

result.b = 0
return result
