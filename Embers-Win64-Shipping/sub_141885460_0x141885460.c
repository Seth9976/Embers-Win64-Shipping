// 函数: sub_141885460
// 地址: 0x141885460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) != 0)
    return zx.q(*(arg1 + 0x3c))

int32_t r8 = *(arg1 + 0x4c)
uint32_t rax_2 = r8 - arg2

if (rax_2 u>= *(arg1 + 0x70))
    int32_t rcx_12 = *(arg1 + 0x14)
    int32_t rax_22 = sbb.d(rax_2, rax_2, rcx_12 u< r8) + r8
    
    if (rax_22 u>= rcx_12)
        rcx_12 = *(arg1 + 0x10)
        
        if (rax_22 u< rcx_12)
            rcx_12 = rax_22
    
    *(arg1 + 0x4c) = rcx_12
    return zx.q(rcx_12)

int32_t r10 = *(arg1 + 0x10)
int32_t rcx
int32_t r9_1

if (arg2 u>= r10)
label_1418854c5:
    rcx = *(arg1 + 0x14)
    arg2.b = 0
    int32_t rax_5 = sbb.d(rax_2, rax_2, rcx u< r8) + r8
    
    if (rax_5 u>= rcx)
        rcx = r10
        
        if (rax_5 u< r10)
            rcx = rax_5
    
    *(arg1 + 0x4c) = rcx
    r9_1 = arg3 - 3
else
    r9_1 = arg3 - 3
    
    if (r9_1 u> 1)
        int32_t rdi_1 = *(arg1 + 0x54)
        rcx = r8
        int32_t temp2_1 = *(arg1 + 0x40)
        rax_2 = divu.dp.d(0:rdi_1, temp2_1)
        
        if (modu.dp.d(0:rdi_1, temp2_1) == 0 && rdi_1 != 0)
            goto label_1418854c5
        
        arg2.b = 1
    else
        rcx = r8
        arg2.b = 1

if (r9_1 u> 1)
    *(arg1 + 0x54) += 1
else
    *(arg1 + 0x54) = 0

int64_t* r9_2 = *(arg1 + 8)

if (arg2.b != 0)
    if (r9_2 != 0)
        double var_18
        (*(*r9_2 + 0x48))(r9_2, &var_18, zx.q(*(arg1 + 0x1c)))
        int32_t var_10
        
        if (var_10 u>= *(arg1 + 0x1c))
            int32_t rax_8 = *(arg1 + 0x68)
            
            if (rax_8 u< *(arg1 + 0x6c))
                int32_t rcx_2 = *(arg1 + 0x4c)
                *(arg1 + 0x68) = rax_8 + 1
                return zx.q(rcx_2)
            
            double zmm1 = var_18
            int32_t rcx_3
            
            if (zmm1 <= *(arg1 + 0x58) f* *(arg1 + 0x28))
                if (not(zmm1 f>= *(arg1 + 0x60)))
                    rcx_3 = 4
                    
                    if (*(arg1 + 0x48) u< *(arg1 + 0x18))
                        rcx_3 = 1
                    
                    goto label_141885587
                
                *(arg1 + 0x48) = 0
                *(arg1 + 0x50) = 0
            else
                rcx_3 = 3
                
                if (*(arg1 + 0x50) u< *(arg1 + 0x20))
                    rcx_3 = 0
                
            label_141885587:
                
                if (rcx_3 != 3)
                    if (rcx_3 == 4)
                        int32_t rdx_1 = *(arg1 + 0x14)
                        int32_t rcx_9 =
                            sbb.d(rcx_3, rcx_3, rdx_1 u< *(arg1 + 0x4c)) + *(arg1 + 0x4c)
                        
                        if (rcx_9 u>= rdx_1)
                            int32_t rax_15 = *(arg1 + 0x10)
                            
                            if (rcx_9 u< rax_15)
                                rax_15 = rcx_9
                            
                            rdx_1 = rax_15
                        
                        *(arg1 + 0x4c) = rdx_1
                        goto label_1418855a6
                    
                    if (rcx_3 == 0)
                        uint64_t rax_17 = zx.q(*(arg1 + 0x4c))
                        *(arg1 + 0x50) += 1
                        *(arg1 + 0x48) = 0
                        return rax_17
                    
                    if (rcx_3 == 1)
                        uint64_t rax_16 = zx.q(*(arg1 + 0x4c))
                        *(arg1 + 0x48) += 1
                        *(arg1 + 0x50) = 0
                        return rax_16
                    
                    if (rcx_3 u> 1)
                        *(arg1 + 0x48) = 0
                        *(arg1 + 0x50) = 0
                else
                    int32_t rax_13 = *(arg1 + 0x14)
                    int32_t rcx_5 = *(arg1 + 0x4c) + 1
                    
                    if (rcx_5 u>= rax_13)
                        rax_13 = *(arg1 + 0x10)
                        
                        if (rcx_5 u< rax_13)
                            rax_13 = rcx_5
                    
                    *(arg1 + 0x4c) = rax_13
                label_1418855a6:
                    sub_14189afd0(arg1, zmm1)
                    *(arg1 + 0x48) = 0
                    *(arg1 + 0x50) = 0
        
        return zx.q(*(arg1 + 0x4c))
    
    rcx = *(arg1 + 0x14)
    int32_t rax_19 = *(arg1 + 0x4c) + 1
    
    if (rax_19 u>= rcx)
        rcx = r10
        
        if (rax_19 u< r10)
            rcx = rax_19
    
    *(arg1 + 0x4c) = rcx

return zx.q(rcx)
