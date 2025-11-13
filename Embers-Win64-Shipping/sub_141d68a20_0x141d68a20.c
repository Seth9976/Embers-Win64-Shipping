// 函数: sub_141d68a20
// 地址: 0x141d68a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
*arg2 = 0
arg2[1] = 0

if (sub_140d3e110(arg1 + 0x870) != 0)
    void* rax_1 = sub_140d3c6e0(arg1 + 0x870)
    
    if (sub_142436b40(rax_1, nullptr) != 0)
        int64_t rax_3 = sub_142436b40(rax_1, nullptr)
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rcx_4 = (rdi_1 + 1).d
        arg2[1].d = rcx_4
        
        if (rcx_4 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rdi_1 << 3)) = rax_3
    
    int64_t* rsi_2 = *(rax_1 + 0x98)
    int64_t r14_2 = 0
    uint64_t r12_2 = sx.q(*(rax_1 + 0xa0)) << 3 u>> 3
    
    if (rsi_2 u> &rsi_2[sx.q(*(rax_1 + 0xa0))])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            void* rdi_2 = *rsi_2
            
            if (rdi_2 != 0 && sub_1420e47d0(rdi_2) != 0)
                void* rax_7 = sub_1420e47d0(rdi_2)
                int64_t rdi_3 = sx.q(arg2[1].d)
                int32_t rcx_9 = (rdi_3 + 1).d
                arg2[1].d = rcx_9
                
                if (rcx_9 s> *(arg2 + 0xc))
                    sub_1405a4d70(arg2)
                
                *(*arg2 + (rdi_3 << 3)) = rax_7
            
            rsi_2 = &rsi_2[1]
            r14_2 += 1
        while (r14_2 != r12_2)

void* rax_9 = sub_140d226f0(arg1 - 0x28, sub_141d6f570())

if (rax_9 != 0)
    int64_t* rsi_3 = *(rax_9 + 0x268)
    uint64_t r15_3 = sx.q(*(rax_9 + 0x270)) << 3 u>> 3
    
    if (rsi_3 u> &rsi_3[sx.q(*(rax_9 + 0x270))])
        r15_3 = 0
    
    if (r15_3 != 0)
        do
            int64_t r14_3 = *rsi_3
            
            if (r14_3 != 0)
                int64_t rdi_4 = sx.q(arg2[1].d)
                int32_t rax_12 = (rdi_4 + 1).d
                arg2[1].d = rax_12
                
                if (rax_12 s> *(arg2 + 0xc))
                    sub_1405a4d70(arg2)
                
                *(*arg2 + (rdi_4 << 3)) = r14_3
            
            rsi_3 = &rsi_3[1]
            rbp += 1
        while (rbp != r15_3)

return arg2
