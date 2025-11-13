// 函数: sub_142bbeb00
// 地址: 0x142bbeb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t r13_3 = ((*(arg2 + 0x28) - *(arg2 + 0x20) - 8) s>> 3).d
int32_t r12_1 = *(arg1 + 0x258) * arg3
int64_t rcx = *(*(arg1 + 0x240) + 0x10)
uint64_t i_3 = zx.q(arg3)
int32_t arg_18 = 0

if (r12_1 u> r13_3)
    return 0xa1

int32_t r8 = *(arg1 + 0x28c)
uint32_t r15 = (i_3 * 5).d

if (*(arg1 + 0x288) + r15 u<= r8)
label_142bbec29:
    *(arg1 + 0x288) += r15
    uint64_t r13_4 = zx.q(r13_3 - r12_1)
    uint32_t rax_7 = (i_3 + r13_4).d
    uint32_t r15_1 = rax_7
    
    if (i_3.d != 0)
        uint64_t i_2 = i_3
        uint64_t i
        
        do
            uint64_t r12_2 = r13_4 << 3
            int32_t* r14_1 = *(arg1 + 0x260) + 4
            char* r10_1 = *(r12_2 + *(arg2 + 0x20))
            char rax_9 = *r10_1
            int32_t rdi_3
            
            if (rax_9 == 0x1e)
                rdi_3 = sub_142bc0db0(r10_1, *(arg2 + 0x10), 0, nullptr) s>> 0x10
            else if (rax_9 != 0xff)
                rdi_3 = sub_142bc0c90(r10_1, *(arg2 + 0x10))
            else
                rdi_3 = sx.d(((((zx.d(r10_1[1]) << 8 | zx.d(r10_1[2])) << 8 | zx.d(r10_1[3]))
                    + 0x80) u>> 8).w)
            
            int32_t rdi_4 = rdi_3 << 0x10
            
            if (*(arg1 + 0x258) u> 1)
                int32_t j = 1
                
                do
                    char* rcx_11 = *(*(arg2 + 0x20) + (zx.q(r15_1) << 3))
                    char rax_14 = *rcx_11
                    int32_t rax_16
                    
                    if (rax_14 == 0x1e)
                        rax_16 = sub_142bc0db0(rcx_11, *(arg2 + 0x10), 0, nullptr) s>> 0x10
                    else if (rax_14 != 0xff)
                        rax_16 = sub_142bc0c90(rcx_11, *(arg2 + 0x10))
                    else
                        rax_16 = sx.d((((zx.d(rcx_11[3])
                            | (zx.d(rcx_11[1]) << 8 | zx.d(rcx_11[2])) << 8) + 0x80) u>> 8).w)
                    
                    r15_1 += 1
                    int32_t rcx_13 = *r14_1 * rax_16
                    r14_1 = &r14_1[1]
                    j += 1
                    rdi_4 += rcx_13
                while (j u< *(arg1 + 0x258))
            
            r13_4 = zx.q(r13_4.d + 1)
            *(r12_2 + *(arg2 + 0x20)) = *(arg1 + 0x280)
            **(arg1 + 0x280) = 0xff
            *(arg1 + 0x280) += 1
            **(arg1 + 0x280) = (rdi_4 u>> 0x18).b
            *(arg1 + 0x280) += 1
            **(arg1 + 0x280) = (rdi_4 u>> 0x10).b
            *(arg1 + 0x280) += 1
            **(arg1 + 0x280) = (rdi_4 u>> 8).b
            *(arg1 + 0x280) += 1
            **(arg1 + 0x280) = rdi_4.b
            *(arg1 + 0x280) += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
        r9 = arg_18
    
    *(arg2 + 0x28) = *(arg2 + 0x20) + (zx.q(rax_7) << 3)
else
    int64_t rdi_1 = *(arg1 + 0x278)
    int64_t rbp_1 = *(arg1 + 0x280)
    int64_t rax_2 = sub_142b99a90(rcx, 1, r8, r8 + r15, rdi_1, &arg_18)
    r9 = arg_18
    *(arg1 + 0x278) = rax_2
    
    if (r9 == 0)
        uint64_t rax_3 = zx.q(*(arg1 + 0x288))
        *(arg1 + 0x28c) += r15
        *(arg1 + 0x280) = rax_3 + rax_2
        
        if (rdi_1 != 0 && rax_2 != rdi_1)
            int64_t* i_1 = *(arg2 + 0x20)
            
            if (i_1 u< *(arg2 + 0x28))
                do
                    int64_t rax_5 = *i_1
                    
                    if (rax_5 u>= rdi_1 && rax_5 u< rbp_1)
                        *i_1 = rax_5 + rax_2 - rdi_1
                    
                    i_1 = &i_1[1]
                while (i_1 u< *(arg2 + 0x28))
                
                r9 = arg_18
        
        goto label_142bbec29

return zx.q(r9)
