// 函数: sub_14153e830
// 地址: 0x14153e830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439b8d60 == 0)
    int64_t rbx_2 = sx.q(arg2[1].d)
    
    if (rbx_2.d != 0)
        int32_t rax_5 = arg1[1].d
        int32_t rdx_6 = rax_5 + rbx_2.d
        
        if (rdx_6 s> *(arg1 + 0xc))
            sub_1405dadb0(arg1, rdx_6)
            rax_5 = arg1[1].d
        
        memcpy(*arg1 + (sx.q(rax_5) << 2), *arg2, (rbx_2 << 2).d)
        arg1[1].d += rbx_2.d
    
    return 

int64_t rbp_1 = 0
int32_t* r15_1 = *arg2
uint64_t r12_2 = sx.q(arg2[1].d) << 2 u>> 2

if (r15_1 u> &r15_1[arg2[1]])
    r12_2 = 0

if (r12_2 == 0)
    return 

do
    int64_t rsi_1 = sx.q(*r15_1)
    void* const rcx_2
    
    if (arg4[1].d == *(arg4 + 0x34))
    label_14153e8f0:
        rcx_2 = nullptr
    else
        void* rcx = arg4[8]
        void* r8 = &arg4[7]
        
        if (rcx != 0)
            r8 = rcx
        
        int32_t rax_3 = *(r8 + (((sx.q(arg4[9].d) - 1) & rsi_1) << 2))
        
        if (rax_3 == 0xffffffff)
        label_14153e8f0_1:
            rcx_2 = nullptr
        else
            int64_t r8_1 = *arg4
            
            while (true)
                int64_t rdx_3 = sx.q(rax_3) * 9
                rcx_2 = r8_1 + (rdx_3 << 2)
                
                if (*(r8_1 + (rdx_3 << 2)) == rsi_1.d)
                    break
                
                rax_3 = *(rcx_2 + 0x1c)
                
                if (rax_3 == 0xffffffff)
                    goto label_14153e8f0_2
            
            if (rax_3 == 0xffffffff)
            label_14153e8f0_2:
                rcx_2 = nullptr
    
    void* rax = rcx_2 + 0x10
    void* r8_3 = arg3 - rcx_2
    int64_t rdx_4 = 0
    
    while (not(*(rax - 0xc) f> *(r8_3 + rax - 4)))
        if (*rax f< *(r8_3 + rax - 0x10))
            break
        
        rdx_4 += 1
        rax += 4
        
        if (rdx_4 s>= 3)
            int64_t rbx_1 = sx.q(arg1[1].d)
            int32_t rax_4 = (rbx_1 + 1).d
            arg1[1].d = rax_4
            
            if (rax_4 s> *(arg1 + 0xc))
                sub_1405a4cf0(arg1)
            
            *(*arg1 + (rbx_1 << 2)) = rsi_1.d
            break
    
    r15_1 = &r15_1[1]
    rbp_1 += 1
while (rbp_1 != r12_2)
