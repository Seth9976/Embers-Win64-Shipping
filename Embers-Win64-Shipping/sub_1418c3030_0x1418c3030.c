// 函数: sub_1418c3030
// 地址: 0x1418c3030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2
int32_t rdi = *(arg1 + 0x18)
int32_t result = *(arg1 + 0x28)
int32_t i = rdi - 1
int32_t i_1 = i
void* rbx = arg1

if (rdi - 1 s>= 0)
    int64_t rsi_2 = sx.q(i) * 0x18
    int64_t var_60_1 = rsi_2
    int64_t rbp_1 = rsi_2
    int64_t var_68_1 = rsi_2
    
    do
        int64_t* r15_2 = *(rbx + 0x10) + rsi_2
        int32_t rax_1 = r15_2[2].d
        int32_t r12_1 = rax_1 - 1
        
        if (r12_1 s>= 0)
            int64_t r13_2 = sx.q(r12_1) * 0x18
            int64_t rdi_1 = r13_2
            int64_t var_70_1 = r13_2
            int32_t temp2_1
            
            do
                int64_t* rsi_4 = r15_2[1] + r13_2
                
                if (arg2 != 0 || *rsi_4 u< *(*r15_2 + 0x98))
                    int32_t j = 0
                    
                    if (rsi_4[2].d s> 0)
                        int64_t* r14_1 = nullptr
                        
                        do
                            int64_t rdi_2 = sx.q(*(rbx + 0x28))
                            int64_t rcx_1 = *(r14_1 + rsi_4[1])
                            int32_t var_50_1 = data_14399fa54
                            int32_t rax_6 = (rdi_2 + 1).d
                            *(rbx + 0x28) = rax_6
                            
                            if (rax_6 s> *(rbx + 0x2c))
                                sub_1405a4f90(rbx + 0x20)
                            
                            j += 1
                            r14_1 = &r14_1[1]
                            *(*(rbx + 0x20) + rdi_2 * 0x10) = rcx_1.o
                        while (j s< rsi_4[2].d)
                        
                        rbx = arg1
                        rdi_1 = var_70_1
                    
                    int64_t rcx_5 = *(rdi_1 + r15_2[1] + 8)
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    int32_t rdx_3 = r15_2[2].d
                    int32_t rcx_8 = rdx_3 - r12_1 - 1
                    
                    if (rcx_8 s>= 1)
                        rcx_8 = 1
                    
                    if (rcx_8 != 0)
                        int64_t r9_1 = r15_2[1]
                        memcpy(r9_1 + rdi_1, r9_1 + sx.q(rdx_3 - rcx_8) * 0x18, rcx_8 * 0x18)
                        rdx_3 = r15_2[2].d
                    
                    arg2 = arg_10
                    r15_2[2].d = rdx_3 - 1
                
                rdi_1 -= 0x18
                r13_2 -= 0x18
                temp2_1 = r12_1
                r12_1 -= 1
                var_70_1 = rdi_1
            while (temp2_1 - 1 s>= 0)
            rax_1 = r15_2[2].d
            i = i_1
            rsi_2 = var_60_1
            rbp_1 = var_68_1
        
        if (rax_1 == 0)
            sub_1408464b0(*(rbx + 0x10) + 8 + rbp_1)
            int32_t rdx_4 = *(rbx + 0x18)
            int32_t rcx_16 = rdx_4 - i - 1
            
            if (rcx_16 s>= 1)
                rcx_16 = 1
            
            if (rcx_16 != 0)
                int64_t r9_2 = *(rbx + 0x10)
                memcpy(r9_2 + rbp_1, r9_2 + sx.q(rdx_4 - rcx_16) * 0x18, rcx_16 * 0x18)
                rdx_4 = *(rbx + 0x18)
            
            *(rbx + 0x18) = rdx_4 - 1
        
        arg2 = arg_10
        i -= 1
        rbp_1 -= 0x18
        i_1 = i
        rsi_2 -= 0x18
        var_68_1 = rbp_1
        var_60_1 = rsi_2
    while (i s>= 0)

if (arg3 != 0)
    if (arg2 != 0)
        result = *(rbx + 0x28)
    
    int32_t rdi_3 = result - 1
    
    if (rdi_3 s>= 0)
        int64_t r14_3 = sx.q(rdi_3) << 4
        int64_t rbp_2 = r14_3
        int32_t temp3_1
        
        do
            int64_t* rsi_6 = *(rbx + 0x20) + r14_3
            
            if (arg2 == 0)
                result = rsi_6[1].d + 0xa
            
            if (arg2 != 0 || result u< data_14399fa54)
                *(rbx + 0x38) -= zx.q(*(*rsi_6 + 0x24))
                void* rbx_1 = *rsi_6
                data_143efb808(*(*(arg1 + 0x40) + 8), *(rbx_1 + 0x18), 0)
                *(rbx_1 + 0x18) = 0
                int64_t* rcx_23 = *(rbx_1 + 0x10)
                *(rbx_1 + 0x10) = 0
                
                if (rcx_23 != 0)
                    rcx_23[1].d -= 1
                    
                    if (rcx_23[1].d == 1)
                        (**rcx_23)(rcx_23, 1)
                
                int64_t* rcx_24 = *rsi_6
                
                if (rcx_24 != 0)
                    (**rcx_24)(rcx_24, 1)
                
                rbx = arg1
                int32_t rdx_8 = *(rbx + 0x28)
                int32_t rcx_27 = rdx_8 - rdi_3 - 1
                
                if (rcx_27 s>= 1)
                    rcx_27 = 1
                
                if (rcx_27 != 0)
                    int64_t rax_20 = *(rbx + 0x20)
                    memcpy(rax_20 + rbp_2, (sx.q(rdx_8 - rcx_27) << 4) + rax_20, rcx_27 << 4)
                    rdx_8 = *(rbx + 0x28)
                
                result = rdx_8 - 1
                arg2 = arg_10
                *(rbx + 0x28) = result
            
            rbp_2 -= 0x10
            r14_3 -= 0x10
            temp3_1 = rdi_3
            rdi_3 -= 1
        while (temp3_1 - 1 s>= 0)

return result
