// 函数: sub_142403b00
// 地址: 0x142403b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8

if (*(arg1 + 0x1c8) == *(arg1 + 0x1f4))
    sub_142402b00(&arg_8, arg1 + 0x140, arg1 + 0x1c0)
    int64_t* i = data_143f5bdc8
    
    for (void* r14_1 = &i[sx.q(data_143f5bdd0) * 5]; i != r14_1; i = &i[5])
        int64_t rax_2 = *i
        arg_8 = rax_2
        void* rax_5 = sub_1423f7130(arg1 + 0x1c0, sub_140b5ead0(rax_2.d) + arg_8:4.d, i)
        
        if (sub_14240d4a0(rax_5, i) == 0xffffffff)
            int64_t rbp_1 = sx.q(*(rax_5 + 8))
            int32_t rcx_4 = (rbp_1 + 1).d
            *(rax_5 + 8) = rcx_4
            
            if (rcx_4 s> *(rax_5 + 0xc))
                sub_1405c4ec0(rax_5)
            
            sub_1423fb8b0(*rax_5 + rbp_1 * 0x28, i)
    
    *(arg1 + 0x2b0) += 1

uint64_t result = zx.q(*(arg1 + 0x218))

if (result.d == *(arg1 + 0x244))
    sub_142402bb0(&arg_8, arg1 + 0x150, arg1 + 0x210)
    result = sub_142402bb0(&arg_8, &data_143f5bdd8, arg1 + 0x210)
    int32_t i_1 = 0
    
    if (*(arg1 + 0x168) s> 0)
        int64_t* r14_2 = nullptr
        
        do
            int32_t rax_8 = *(arg1 + 0x218)
            int64_t rbx_2 = *(r14_2 + *(arg1 + 0x160))
            arg_8 = rbx_2
            void* const rcx_14
            
            if (rax_8 == *(arg1 + 0x244))
            label_142403ca0:
                rcx_14 = nullptr
            else
                int32_t rax_10 = sub_140b5ead0(rbx_2.d) + arg_8:4.d
                void* r8_5 = arg1 + 0x248
                void* rcx_12 = *(r8_5 + 8)
                
                if (rcx_12 != 0)
                    r8_5 = rcx_12
                
                int32_t rax_12 = *(r8_5 + (((sx.q(*(arg1 + 0x258)) - 1) & sx.q(rax_10)) << 2))
                
                if (rax_12 == 0xffffffff)
                label_142403ca0_1:
                    rcx_14 = nullptr
                else
                    int64_t r8_6 = *(arg1 + 0x210)
                    
                    while (true)
                        int64_t rdx_11 = sx.q(rax_12) * 5
                        rcx_14 = r8_6 + (rdx_11 << 3)
                        
                        if (*(r8_6 + (rdx_11 << 3)) == rbx_2)
                            break
                        
                        rax_12 = *(rcx_14 + 0x20)
                        
                        if (rax_12 == 0xffffffff)
                            goto label_142403ca0_2
                    
                    if (rax_12 == 0xffffffff)
                    label_142403ca0_2:
                        rcx_14 = nullptr
            
            result = rcx_14 + 8
            
            if (rcx_14 == 0)
                result = 0
            
            if (result != 0)
                *(result + 0x10) |= 1
            
            i_1 += 1
            r14_2 = &r14_2[1]
        while (i_1 s< *(arg1 + 0x168))

*(arg1 + 0x2b4) |= 1
return result
