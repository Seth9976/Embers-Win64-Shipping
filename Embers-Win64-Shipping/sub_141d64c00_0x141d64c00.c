// 函数: sub_141d64c00
// 地址: 0x141d64c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9
int64_t arg_20 = r9
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rsi_1 = r12
        
        if (r13_1 s< arg2)
            do
                int32_t rdi_1 = rsi_1 * 2
                uint64_t rbx_1 = zx.q(rdi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    int64_t rcx_1 = sx.q(rbx_1.d) * 2
                    int64_t rdx_3 = (sx.q(rdi_1) + 2) * 2
                    int64_t var_88_1 = *(arg1 + (rcx_1 << 3))
                    void* rax_5 = *(arg1 + (rcx_1 << 3) + 8)
                    void* var_80_1 = rax_5
                    
                    if (rax_5 != 0)
                        *(rax_5 + 8) += 1
                    
                    int64_t var_78_1 = *(arg1 + (rdx_3 << 3))
                    void* rax_7 = *(arg1 + (rdx_3 << 3) + 8)
                    void* var_70_1 = rax_7
                    
                    if (rax_7 != 0)
                        *(rax_7 + 8) += 1
                    
                    if (sub_141d66450() != 0)
                        rbx_1 = zx.q(rdi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t* rdi_4 = &arg1[sx.q(rsi_1)]
                int64_t* rsi_4 = &arg1[sx.q(rbx_1.d)]
                int64_t var_68_1 = *rsi_4
                void* rax_10 = rsi_4[1]
                void* var_60_1 = rax_10
                
                if (rax_10 != 0)
                    *(rax_10 + 8) += 1
                
                int64_t var_58_1 = *rdi_4
                void* rax_12 = rdi_4[1]
                void* var_50_1 = rax_12
                
                if (rax_12 != 0)
                    *(rax_12 + 8) += 1
                
                result = sub_141d66450()
                
                if (result.b == 0)
                    break
                
                if (rdi_4 != rsi_4)
                    zmm1 = *rdi_4
                    *rdi_4 = *rsi_4
                    *rsi_4 = zmm1
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                rsi_1 = rbx_1.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* r12_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != r12_3)
            zmm1 = *arg1
            *arg1 = *r12_3
            *r12_3 = zmm1
        
        int32_t rsi_5 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rdi_5 = rsi_5 * 2
                rbx_2 = zx.q(rdi_5 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    int64_t rcx_5 = sx.q(rbx_2.d) * 2
                    int64_t rdx_6 = (sx.q(rdi_5) + 2) * 2
                    int64_t var_58_2 = *(arg1 + (rcx_5 << 3))
                    void* rax_15 = *(arg1 + (rcx_5 << 3) + 8)
                    void* var_50_2 = rax_15
                    
                    if (rax_15 != 0)
                        *(rax_15 + 8) += 1
                    
                    int64_t var_68_2 = *(arg1 + (rdx_6 << 3))
                    void* rax_17 = *(arg1 + (rdx_6 << 3) + 8)
                    void* var_60_2 = rax_17
                    
                    if (rax_17 != 0)
                        *(rax_17 + 8) += 1
                    
                    if (sub_141d66450() != 0)
                        rbx_2 = zx.q(rdi_5)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                void* rdi_8 = &arg1[sx.q(rsi_5)]
                void* rsi_8 = &arg1[sx.q(rbx_2.d)]
                int64_t var_78_2 = *rsi_8
                void* rax_20 = *(rsi_8 + 8)
                void* var_70_2 = rax_20
                
                if (rax_20 != 0)
                    *(rax_20 + 8) += 1
                
                int64_t var_88_2 = *rdi_8
                void* rax_22 = *(rdi_8 + 8)
                void* var_80_2 = rax_22
                
                if (rax_22 != 0)
                    *(rax_22 + 8) += 1
                
                result = sub_141d66450()
                
                if (result.b == 0)
                    break
                
                if (rdi_8 != rsi_8)
                    zmm1 = *rdi_8
                    *rdi_8 = *rsi_8
                    *rsi_8 = zmm1
                
                rsi_5 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r12_3 -= 0x10
    while (i s> 0)

return result
