// 函数: sub_141cc3050
// 地址: 0x141cc3050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg2[1].d)

if (arg3 == 0)
    if (rax.d != 0)
        int64_t* r8_1 = *arg2
        void* r9_2 = &r8_1[rax]
        
        if (r8_1 != r9_2)
            int64_t r10_2 = *arg1
            
            do
                int64_t rcx_1 = (sx.q(arg1[1].d) << 3) + r10_2
                rax = r10_2
                
                if (r10_2 == rcx_1)
                label_141cc30fe:
                    int64_t* rcx_2 = arg1[2]
                    void* rdx_2 = &rcx_2[sx.q(arg1[3].d)]
                    
                    if (rcx_2 == rdx_2)
                    label_141cc3124:
                        rax.b = 0
                        return rax
                    
                    while (*rcx_2 != *r8_1)
                        rcx_2 = &rcx_2[1]
                        
                        if (rcx_2 == rdx_2)
                            goto label_141cc3124
                else
                    while (*rax != *r8_1)
                        rax += 8
                        
                        if (rax == rcx_1)
                            goto label_141cc30fe
                
                r8_1 = &r8_1[1]
            while (r8_1 != r9_2)
        
        rax.b = 1
        return rax
else if (rax.d != 0)
    int64_t* rdx = *arg2
    void* r9_1 = &rdx[rax]
    
    if (rdx != r9_1)
        int64_t* r10_1 = *arg1
        int64_t* rax_2
        
        while (true)
            void* rcx = &r10_1[sx.q(arg1[1].d)]
            rax_2 = r10_1
            
            if (r10_1 == rcx)
                break
            
            while (true)
                if (*rax_2 == *rdx)
                    rdx = &rdx[1]
                    
                    if (rdx != r9_1)
                        break
                    
                    rax_2.b = 1
                    return rax_2
                
                rax_2 = &rax_2[1]
                
                if (rax_2 == rcx)
                    goto label_141cc309e
        
    label_141cc309e:
        rax_2.b = 0
        return rax_2

rax.b = 1
return rax
