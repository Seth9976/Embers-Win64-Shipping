// 函数: sub_140ba9440
// 地址: 0x140ba9440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) == 0)
    return 

for (int32_t i = 0; i s< 3; i += 1)
    int32_t i_3 = i
    
    if (*(arg1 + sx.q((0.q u>> 0x20).d) * 0x18 + 0x15) != 0)
        int64_t rbp_1 = sx.q(arg2[1].d)
        int32_t rax_3 = (rbp_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        *(*arg2 + rbp_1 * 0x10) = arg3.o

int32_t i_1 = 0
int64_t rax

if (*(arg1 + 0x58) s> 0)
    do
        int32_t j = 0
        uint64_t rbx_2 = zx.q(not.d(i_1))
        int32_t var_20_2 = rbx_2.d
        
        do
            int32_t j_1 = j
            int32_t temp1_1 = rbx_2.d
            
            if (temp1_1 != 0)
                int64_t rcx_5 = var_20_2.q
                int32_t rcx_8
                
                if (temp1_1 s>= 0)
                    rcx_8 = (rcx_5 u>> 0x20).d + (rbx_2 * 3).d + *(arg1 + 0x64) - 3
                else
                    rcx_8 = (rcx_5 u>> 0x20).d - ((rbx_2 << 1) + 2).d + *(arg1 + 0x60)
                
                rax = *(arg1 + 0x48) + sx.q(rcx_8) * 0x18
            else
                rax = arg1 + sx.q((var_20_2.q u>> 0x20).d) * 0x18
            
            if (*(rax + 0x15) != 0)
                int64_t r14_1 = sx.q(arg2[1].d)
                int32_t rax_13 = (r14_1 + 1).d
                arg2[1].d = rax_13
                
                if (rax_13 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                *(*arg2 + r14_1 * 0x10) = arg3.o
            
            j += 1
        while (j s< 2)
        
        i_1 += 1
    while (i_1 s< *(arg1 + 0x58))

uint64_t rbx_3 = 0

if (*(arg1 + 0x5c) s<= 0)
    return 

do
    rbx_3 = zx.q(rbx_3.d + 1)
    int32_t var_20_3 = rbx_3.d
    
    for (int32_t i_2 = 0; i_2 s< 3; i_2 += 1)
        int32_t i_4 = i_2
        int32_t temp0_1 = rbx_3.d
        
        if (temp0_1 != 0)
            int64_t rcx_16 = var_20_3.q
            int32_t rcx_19
            
            if (temp0_1 s>= 0)
                rcx_19 = (rcx_16 u>> 0x20).d + (rbx_3 * 3).d + *(arg1 + 0x64) - 3
            else
                rcx_19 = (rcx_16 u>> 0x20).d - ((rbx_3 << 1) + 2).d + *(arg1 + 0x60)
            
            rax = *(arg1 + 0x48) + sx.q(rcx_19) * 0x18
        else
            rax = arg1 + sx.q((var_20_3.q u>> 0x20).d) * 0x18
        
        if (*(rax + 0x15) != 0)
            int64_t r14_2 = sx.q(arg2[1].d)
            int32_t rax_23 = (r14_2 + 1).d
            arg2[1].d = rax_23
            
            if (rax_23 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            *(*arg2 + r14_2 * 0x10) = arg3.o
while (rbx_3.d s< *(arg1 + 0x5c))
