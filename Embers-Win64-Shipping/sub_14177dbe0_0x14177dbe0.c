// 函数: sub_14177dbe0
// 地址: 0x14177dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[4])
int64_t rbx = sx.q(*arg2)

if (result.d == 1)
    int32_t rdx = *(arg1 + 0x18)
    int32_t rbp_1 = result.d
    int32_t rcx_2 = rdx - rbx.d - 1
    
    if (rcx_2 s>= result.d)
        rcx_2 = result.d
    
    if (rcx_2 != 0)
        memcpy(rbx * 0xe0 + *(arg1 + 0x10), sx.q(rdx - rcx_2) * 0xe0 + *(arg1 + 0x10), rcx_2 * 0xe0)
        rdx = *(arg1 + 0x18)
    
    *(arg1 + 0x18) = rdx - 1
    result = sub_14177e7c0(arg1 + 0x10)
    
    if (*(arg1 + 0x7a) != 0)
        if (rbx.d s< *(arg1 + 0x18))
            result = *(arg1 + 0x10)
            int32_t* rdx_4 = *(rbx * 0xe0 + result + 0xc8)
            *rdx_4 = rbx.d
            rdx_4[4] = rbp_1
        
        goto label_14177ddc0
else if (result.d == 2)
    int32_t rdx_5 = *(arg1 + 0x28)
    int32_t rcx_9 = rdx_5 - rbx.d - 1
    
    if (rcx_9 s>= 1)
        rcx_9 = 1
    
    if (rcx_9 != 0)
        memcpy(rbx * 0xe0 + *(arg1 + 0x20), sx.q(rdx_5 - rcx_9) * 0xe0 + *(arg1 + 0x20), 
            rcx_9 * 0xe0)
        rdx_5 = *(arg1 + 0x28)
    
    *(arg1 + 0x28) = rdx_5 - 1
    result = sub_14177e7c0(arg1 + 0x20)
    
    if (*(arg1 + 0x7a) != 0)
        if (rbx.d s< *(arg1 + 0x28))
            result = *(arg1 + 0x20)
            int32_t* rdx_9 = *(rbx * 0xe0 + result + 0xc8)
            *rdx_9 = rbx.d
            rdx_9[4] = 2
        
        goto label_14177ddc0
else if (result.d != 3)
label_14177ddc0:
    
    if (*(arg1 + 0x7a) != 0)
        int64_t rcx_19 = sx.q(*(arg1 + 0x48))
        
        if (rcx_19.d != 0)
            int32_t rdi_1 = 0
            int32_t r13_1 = 0
            int64_t r12
            r12.b = **(arg1 + 0x40) != arg2
            int64_t rbx_1 = 0
            
            do
                int64_t r9_3 = sx.q(rdi_1)
                rbx_1 += 1
                rdi_1 += 1
                
                if (rbx_1 s< rcx_19)
                    int64_t* rcx_20 = *(arg1 + 0x40) + (rbx_1 << 3)
                    
                    do
                        int32_t rax_12
                        rax_12.b = *rcx_20 != arg2
                        
                        if (zx.d(r12.b) != rax_12)
                            break
                        
                        rdi_1 += 1
                        rbx_1 += 1
                        rcx_20 = &rcx_20[1]
                    while (rbx_1 s< rcx_19)
                
                int32_t rbp_3 = rdi_1 - r9_3.d
                
                if (r12.b != 0)
                    if (r13_1 != r9_3.d)
                        int64_t rcx_21 = *(arg1 + 0x40)
                        memmove(rcx_21 + (sx.q(r13_1) << 3), rcx_21 + (r9_3 << 3), rbp_3 << 3)
                    
                    r13_1 += rbp_3
                
                r12.b ^= 1
            while (rbx_1 s< rcx_19)
            
            *(arg1 + 0x48) = r13_1
        
        return j_sub_140a74f90(arg2)
else
    int64_t rsi_2 = rbx * 0x140
    int64_t rcx_14 = *(rsi_2 + *(arg1 + 0x30) + 0x128)
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int32_t r9_2 = *(arg1 + 0x38)
    int32_t rdx_12 = r9_2 - rbx.d - 1
    
    if (rdx_12 s>= 1)
        rdx_12 = 1
    
    if (rdx_12 != 0)
        int64_t rcx_15 = *(arg1 + 0x30)
        memcpy(rcx_15 + rsi_2, sx.q(r9_2 - rdx_12) * 0x140 + rcx_15, rdx_12 * 0x140)
        r9_2 = *(arg1 + 0x38)
    
    *(arg1 + 0x38) = r9_2 - 1
    result = sub_14177e710(arg1 + 0x30)
    
    if (*(arg1 + 0x7a) != 0)
        if (rbx.d s< *(arg1 + 0x38))
            result = *(arg1 + 0x30)
            int32_t* rcx_18 = *(rsi_2 + result + 0xc8)
            *rcx_18 = rbx.d
            rcx_18[4] = 3
        
        goto label_14177ddc0

return result
