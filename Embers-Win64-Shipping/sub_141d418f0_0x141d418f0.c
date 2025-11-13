// 函数: sub_141d418f0
// 地址: 0x141d418f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* SRWLock = arg1 + 8
void* rdi = arg1
AcquireSRWLockShared(SRWLock)
int64_t* r12 = *(rdi + 0x18)
int64_t rbp = 0

if (arg2 == 0)
    uint64_t rcx_8 = sx.q(*(rdi + 0x20))
    void* rax_13 = &r12[rcx_8]
    
    if (r12 != rax_13)
        do
            void* r15_2 = *r12
            int64_t rdi_6 = 0
            int64_t* rbx_6 = *(r15_2 + 0x400)
            uint64_t rsi_5 = sx.q(*(r15_2 + 0x408)) << 3 u>> 3
            
            if (rbx_6 u> &rbx_6[sx.q(*(r15_2 + 0x408))])
                rsi_5 = 0
            
            if (rsi_5 != 0)
                do
                    sub_141d3e9b0(*rbx_6)
                    rdi_6 += 1
                    rbx_6 = &rbx_6[1]
                while (rdi_6 != rsi_5)
            
            int64_t* r9_2 = *(r15_2 + 0x410)
            void* r10_2 = &r9_2[sx.q(*(r15_2 + 0x418))]
            
            while (r9_2 != r10_2)
                void* r8_3 = *r9_2
                int32_t rax_17 = 0
                
                if (0 == *(r8_3 + 0x51c))
                    *(r8_3 + 0x51c) = 0
                else
                    rax_17 = *(r8_3 + 0x51c)
                
                void* const rcx_10 = 0x10
                
                if (rax_17 != 1)
                    rcx_10 = 0x50
                
                r9_2 = &r9_2[1]
                *(r8_3 + 0x5a8) = rcx_10 + r8_3 + 0x510
            
            int64_t* i = *(r15_2 + 0x420)
            
            for (void* r14_2 = &i[sx.q(*(r15_2 + 0x428))]; i != r14_2; i = &i[1])
                void* rbx_7 = *i
                
                if (*(rbx_7 + 0xe8) == 4 && *(rbx_7 + 0xea) != 0 && *(rbx_7 + 0x210) != 0)
                    int32_t rax_19 = 0
                    
                    if (0 == *(rbx_7 + 0x16c))
                        *(rbx_7 + 0x16c) = 0
                    else
                        rax_19 = *(rbx_7 + 0x16c)
                    
                    void* rdx_5 = *(rbx_7 + 0x220)
                    void* rcx_12 = rbx_7 + 0x230
                    void* const rdi_7 = 0x10
                    
                    if (rdx_5 != 0)
                        rcx_12 = rdx_5
                    
                    if (rax_19 != 1)
                        rdi_7 = 0x40
                    
                    (*(rbx_7 + 0x210))((*(*rcx_12 + 8))(rcx_12, rdx_5), rdi_7 + rbx_7 + 0x160)
            
            int64_t rdi_9 = 0
            int64_t* rbx_8 = *(r15_2 + 0x430)
            uint64_t rsi_7 = sx.q(*(r15_2 + 0x438)) << 3 u>> 3
            
            if (rbx_8 u> &rbx_8[sx.q(*(r15_2 + 0x438))])
                rsi_7 = 0
            
            if (rsi_7 != 0)
                do
                    sub_141d3ead0(*rbx_8)
                    rdi_9 += 1
                    rbx_8 = &rbx_8[1]
                while (rdi_9 != rsi_7)
            
            r12 = &r12[1]
        while (r12 != rax_13)
        
        rdi = arg1
        rcx_8 = zx.q(*(rdi + 0x20))
        SRWLock = rdi + 8
    
    int64_t* rbx_9 = *(rdi + 0x18)
    uint64_t rdi_11 = sx.q(rcx_8.d) << 3 u>> 3
    
    if (rbx_9 u> &rbx_9[sx.q(rcx_8.d)])
        rdi_11 = 0
    
    if (rdi_11 != 0)
        do
            sub_141d41840(*rbx_9)
            rbp += 1
            rbx_9 = &rbx_9[1]
        while (rbp != rdi_11)
else
    int64_t rdx = sx.q(*(rdi + 0x20))
    void* rax = &r12[rdx]
    
    if (r12 != rax)
        do
            void* r15_1 = *r12
            int64_t rdi_1 = 0
            int64_t* rbx_1 = *(r15_1 + 0x400)
            uint64_t rsi_1 = sx.q(*(r15_1 + 0x408)) << 3 u>> 3
            
            if (rbx_1 u> &rbx_1[sx.q(*(r15_1 + 0x408))])
                rsi_1 = 0
            
            if (rsi_1 != 0)
                do
                    sub_141d3e9b0(*rbx_1)
                    rdi_1 += 1
                    rbx_1 = &rbx_1[1]
                while (rdi_1 != rsi_1)
            
            int64_t* r9_1 = *(r15_1 + 0x410)
            void* r10_1 = &r9_1[sx.q(*(r15_1 + 0x418))]
            
            while (r9_1 != r10_1)
                void* r8_1 = *r9_1
                int32_t rax_4 = 0
                
                if (0 == *(r8_1 + 0x51c))
                    *(r8_1 + 0x51c) = 0
                else
                    rax_4 = *(r8_1 + 0x51c)
                
                void* const rcx_2 = 0x10
                
                if (rax_4 != 1)
                    rcx_2 = 0x50
                
                r9_1 = &r9_1[1]
                *(r8_1 + 0x5a8) = rcx_2 + r8_1 + 0x510
            
            int64_t* i_1 = *(r15_1 + 0x420)
            
            for (void* r14_1 = &i_1[sx.q(*(r15_1 + 0x428))]; i_1 != r14_1; i_1 = &i_1[1])
                void* rdi_2 = *i_1
                
                if (*(rdi_2 + 0xe8) == 4 && *(rdi_2 + 0xea) != 0 && *(rdi_2 + 0x210) != 0)
                    int32_t rax_6 = 0
                    
                    if (0 == *(rdi_2 + 0x16c))
                        *(rdi_2 + 0x16c) = 0
                    else
                        rax_6 = *(rdi_2 + 0x16c)
                    
                    void* rdx_2 = *(rdi_2 + 0x220)
                    void* rcx_4 = rdi_2 + 0x230
                    void* const rbx_2 = 0x10
                    
                    if (rdx_2 != 0)
                        rcx_4 = rdx_2
                    
                    if (rax_6 != 1)
                        rbx_2 = 0x40
                    
                    (*(rdi_2 + 0x210))((*(*rcx_4 + 8))(rcx_4, rdx_2), rbx_2 + rdi_2 + 0x160)
            
            int64_t rdi_3 = 0
            int64_t* rbx_4 = *(r15_1 + 0x430)
            uint64_t rsi_3 = sx.q(*(r15_1 + 0x438)) << 3 u>> 3
            
            if (rbx_4 u> &rbx_4[sx.q(*(r15_1 + 0x438))])
                rsi_3 = 0
            
            if (rsi_3 != 0)
                do
                    sub_141d3ead0(*rbx_4)
                    rdi_3 += 1
                    rbx_4 = &rbx_4[1]
                while (rdi_3 != rsi_3)
            
            r12 = &r12[1]
        while (r12 != rax)
        
        rdi = arg1
        rdx = zx.q(*(rdi + 0x20))
        SRWLock = rdi + 8
    
    int64_t* rbx_5 = *(rdi + 0x18)
    uint64_t rdi_5 = sx.q(rdx.d) << 3 u>> 3
    
    if (rbx_5 u> &rbx_5[sx.q(rdx.d)])
        rdi_5 = 0
    
    if (rdi_5 != 0)
        do
            sub_141d41840(*rbx_5)
            rbp += 1
            rbx_5 = &rbx_5[1]
        while (rbp != rdi_5)

return ReleaseSRWLockShared(SRWLock) __tailcall
