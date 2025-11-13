// 函数: sub_14216f330
// 地址: 0x14216f330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t var_48
uint32_t* var_40
void arg_18

if (*(arg3 + 0x110) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rdi_1 = *(arg1 + 0x2e8)
        uint32_t rbx_2 = (*(r14_1 + *(arg3 + 0x108)) u>> 0x20).d
        sub_1409afd50(rdi_1 + 0x50, &var_48)
        int32_t rax_2 = var_48
        *var_40 = rbx_2
        var_40[1] = 0xffffffff
        sub_140752f60(rdi_1 + 0x50, &arg_18, rbx_2, var_40, rax_2, nullptr)
        void arg_20
        sub_1407d1070(*(arg1 + 0x2e8) + 0xa0, &arg_20, *(arg3 + 0x108) + (sx.q(i) << 3), nullptr)
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg3 + 0x110))

uint64_t result = zx.q(*(arg3 + 0x100))
int32_t temp0 = result.d

if (temp0 != 0)
    int32_t i_1 = 0
    
    if (temp0 s> 0)
        void* r14_2 = nullptr
        
        do
            int64_t* rdi_2 = *(arg1 + 0x2e8)
            int64_t r10_1 = *(arg3 + 0xf8)
            
            if (rdi_2[1].d == *(rdi_2 + 0x34))
            label_14216f47b:
                sub_14090a150(rdi_2, &var_48)
                *var_40 = *(r10_1 + (sx.q(i_1) << 2))
                int32_t rax_8 = var_48
                *(var_40 + 4) = -2
                sub_1414529f0(rdi_2, &arg_18, *var_40, var_40, rax_8, nullptr)
            else
                void* rcx_4 = rdi_2[8]
                void* r8_2 = &rdi_2[7]
                int64_t r9_2 = sx.q(*(r14_2 + r10_1))
                
                if (rcx_4 != 0)
                    r8_2 = rcx_4
                
                int32_t rax_5 = *(r8_2 + (((sx.q(rdi_2[9].d) - 1) & r9_2) << 2))
                
                if (rax_5 == 0xffffffff)
                    goto label_14216f47b
                
                int64_t rdx_8 = *rdi_2
                
                while (true)
                    int64_t rcx_6 = sx.q(rax_5) * 2
                    
                    if (*(rdx_8 + (rcx_6 << 3)) == r9_2.d)
                        break
                    
                    rax_5 = *(rdx_8 + (rcx_6 << 3) + 8)
                    
                    if (rax_5 == 0xffffffff)
                        goto label_14216f47b
                
                if (rax_5 == 0xffffffff)
                    goto label_14216f47b
            
            int64_t* r9_4 = *(arg1 + 0x2e8)
            result = zx.q(r9_4[1].d)
            int32_t* rcx_15
            
            if (result.d == *(r9_4 + 0x34))
            label_14216f51e:
                rcx_15 = nullptr
            else
                int64_t r10_2 = sx.q(*(*(arg3 + 0xf8) + r14_2))
                void* r8_4 = &r9_4[7]
                void* rdx_12 = *(r8_4 + 8)
                
                if (rdx_12 != 0)
                    r8_4 = rdx_12
                
                result = zx.q(*(r8_4 + (((sx.q(r9_4[9].d) - 1) & r10_2) << 2)))
                
                if (result.d == 0xffffffff)
                label_14216f51e_1:
                    rcx_15 = nullptr
                else
                    while (true)
                        rcx_15 = (sx.q(result.d) << 4) + *r9_4
                        
                        if (*rcx_15 == r10_2.d)
                            break
                        
                        result = zx.q(rcx_15[2])
                        
                        if (result.d == 0xffffffff)
                            goto label_14216f51e_2
                    
                    if (result.d == 0xffffffff)
                    label_14216f51e_2:
                        rcx_15 = nullptr
            
            if (rcx_15[1] == 0xfffffffe)
                result = *(arg1 + 0x130)
                
                if (((*(result + 0xa4) u>> 1).b & 1) == 0)
                    rcx_15[1] = arg2
                    result = sub_1408d92c0(arg1 + 0x1e8, *(arg3 + 0xf8) + (sx.q(i_1) << 2))
                else
                    rcx_15[1] = 0xffffffff
            
            i_1 += 1
            r14_2 += 4
        while (i_1 s< *(arg3 + 0x100))

return result
