// 函数: sub_14198add0
// 地址: 0x14198add0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1 = zx.q(*arg1)

if (rax_1.d == 0)
    int64_t rdx_1 = *(arg1 + 4)
    int64_t rdx_2 = rdx_1
    
    if (rdx_1 == 0)
        int64_t rdx_3 = *(arg1 + 0xc)
        rdx_2 = rdx_3
        
        if (rdx_3 == 0)
            rdx_2 = zx.q(arg1[5])
    
    int64_t rax
    rax.b = rdx_2 != 0
    return rax

if (rax_1.d == 1 && (*(arg1 + 0x18) != 0 || *(arg1 + 0x20) != 0 || arg1[0xa] != 0) && (
        *(arg1 + 0x54) != 0 || *(arg1 + 0x5c) != 0 || arg1[0x19] != 0 || *(arg1 + 0x68) != 0
        || *(arg1 + 0x70) != 0 || arg1[0x1e] != 0 || arg1[0x6c] - 6 u> 0x1f) && ((*(arg1 + 0x54) == 0
        && *(arg1 + 0x5c) == 0 && arg1[0x19] == 0) || *(arg1 + 0x68) != 0 || *(arg1 + 0x70) != 0
        || arg1[0x1e] != 0))
    if (*(arg1 + 0x54) != 0 || *(arg1 + 0x5c) != 0 || arg1[0x19] != 0)
    label_14198aea5:
        int32_t r10_1 = arg1[0x67]
        
        if (r10_1 u<= 8 && arg1[0x68] u<= 0x10 && arg1[0x6c] u< 0x26 && arg1[0x69] u< 0x47
                && arg1[0x6b].b u< 3 && *(arg1 + 0x1ad) u< 3 && *(arg1 + 0x1ae) u< 3
                && *(arg1 + 0x1af) u< 3)
            int32_t rdx_5 = 0
            int32_t r9_1 = 0
            
            if (r10_1 != 0)
                rax_1 = arg1 + 0x107
                void* r8_1 = &arg1[0x57]
                
                do
                    if (*r8_1 u>= 0x47)
                        goto label_14198b014
                    
                    if (*(rax_1 - 3) u>= 5)
                        goto label_14198b014
                    
                    if (*rax_1 u>= 5)
                        goto label_14198b014
                    
                    if (*(rax_1 - 2) u>= 0x10)
                        goto label_14198b014
                    
                    if (*(rax_1 - 1) u>= 0x10)
                        goto label_14198b014
                    
                    if (*(rax_1 + 1) u>= 0x10)
                        goto label_14198b014
                    
                    if (*(rax_1 + 2) u>= 0x10)
                        goto label_14198b014
                    
                    if (*(rax_1 + 3) u> 0xf)
                        goto label_14198b014
                    
                    r9_1 += 1
                    r8_1 += 4
                    rax_1 += 7
                while (r9_1 u< r10_1)
            
            if (arg1[0x52].b u< 3 && *(arg1 + 0x149) u< 3 && *(arg1 + 0x14d) u< 8
                    && *(arg1 + 0x14f) u< 8 && arg1[0x55].b u< 8 && arg1[0x54].b u< 8
                    && *(arg1 + 0x151) u< 8 && *(arg1 + 0x152) u< 8 && *(arg1 + 0x155) u< 8
                    && *(arg1 + 0x156) u< 8 && *(arg1 + 0x157) u< 8)
                int32_t r8_2 = arg1[0x3f]
                
                if (r8_2 != 0)
                    do
                        if (*(&arg1[sx.q(rdx_5) * 2] + 0x7e) u>= 0x15)
                            goto label_14198b014
                        
                        rdx_5 += 1
                    while (rdx_5 u< r8_2)
                
                rax_1.b = 1
                return rax_1
    else if (*(arg1 + 0x68) == 0 && *(arg1 + 0x70) == 0 && arg1[0x1e] == 0)
        goto label_14198aea5

label_14198b014:
rax_1.b = 0
return rax_1
