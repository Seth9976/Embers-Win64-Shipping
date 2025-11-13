// 函数: sub_141f8f700
// 地址: 0x141f8f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1[0x1d].b
int32_t rbp = arg2.d

if ((result & 2) == 0)
    arg1[0x1d].b = result | 2
    int64_t* rbx_1 = arg1[0x1b]
    int64_t r15_1 = 0
    uint64_t r14_2 = sx.q(arg1[0x1c].d) << 3 u>> 3
    int64_t rdi_1 = 0
    
    if (rbx_1 u> &rbx_1[arg1[0x1c]])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            arg2 = *rbx_1
            
            if (arg2 != 0)
                int64_t* r9_1 = arg1[0x19]
                int64_t* rax_2 = r9_1
                void* r8_1 = &r9_1[sx.q(arg1[0x1a].d)]
                
                if (r9_1 != r8_1)
                    while (*rax_2 != arg2)
                        rax_2 = &rax_2[1]
                        
                        if (rax_2 == r8_1)
                            goto label_141f8f7bb
                
                if (r9_1 == r8_1 || ((rax_2 - r9_1) s>> 3).d == 0xffffffff)
                label_141f8f7bb:
                    sub_1405a46b0(arg2 + 0x98, arg1)
            
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != r14_2)
    
    arg2.b = ((rbp - 0x10) & 0xffffffef) == 0
    Mod1::findC13Lines(arg1, arg2.b)
    void* rcx_3 = &arg1[0x19]
    int64_t* r14_3 = *rcx_3
    uint64_t r13_2 = sx.q(*(rcx_3 + 8)) << 3 u>> 3
    result = 0
    
    if (r14_3 u> &r14_3[sx.q(*(rcx_3 + 8))])
        r13_2 = 0
    
    if (r13_2 != 0)
        do
            void* i = *r14_3
            
            if (i != 0 && i != arg1)
                int64_t* r9_2 = arg1[0x1b]
                int64_t* rcx_4 = r9_2
                void* r8_2 = &r9_2[sx.q(arg1[0x1c].d)]
                
                if (r9_2 != r8_2)
                    while (*rcx_4 != i)
                        rcx_4 = &rcx_4[1]
                        
                        if (rcx_4 == r8_2)
                            goto label_141f8f880
                
                if (r9_2 == r8_2 || ((rcx_4 - r9_2) s>> 3).d == 0xffffffff)
                label_141f8f880:
                    void*** rax_9 = sub_140a84c80(0, 0x30, 0)
                    
                    if (rax_9 != 0)
                        *rax_9 = &data_143287e20
                        sub_140d3a3a0(&rax_9[1], arg1)
                        rax_9[2] = sub_141f8f700
                        rax_9[3].d = 1
                        rax_9[4] = sub_140a387b0()
                        *rax_9 = &data_143287e78
                    
                    if (rax_9 != 0)
                        sub_140599630(i + 0x98, 1)
                        void arg_8
                        (*rax_9)[6](rax_9, &arg_8)
                        int64_t rbp_1 = sx.q(*(i + 0xa0))
                        int32_t rax_12 = (rbp_1 + 1).d
                        *(i + 0xa0) = rax_12
                        
                        if (rax_12 s> *(i + 0xa4))
                            sub_1405a4f90(i + 0x98)
                        
                        void**** rax_15 = (rbp_1 << 4) + *(i + 0x98)
                        *rax_15 = rax_9
                        rax_15[1].d = 3
            
            r14_3 = &r14_3[1]
            r15_1 += 1
        while (r15_1 != r13_2)
        
        rcx_3 = &arg1[0x19]
        result = 0
    
    if (&arg1[0x1b] != rcx_3)
        int64_t rbx_3 = sx.q(*(rcx_3 + 8))
        int64_t rdi_3 = *rcx_3
        int32_t r8_3 = *(arg1 + 0xe4)
        arg1[0x1c].d = rbx_3.d
        
        if (rbx_3.d != 0 || r8_3 != 0)
            sub_1405c4a00(&arg1[0x1b], rbx_3.d, r8_3)
            result = memcpy(arg1[0x1b], rdi_3, (rbx_3 << 3).d)
        else
            *(arg1 + 0xe4) = 0
    
    arg1[0x1d].b &= 0xfd

return result
