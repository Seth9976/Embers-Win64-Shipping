// 函数: sub_141e3c6b0
// 地址: 0x141e3c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int64_t rbx_1 = *(*(arg1 + 0x10) + (rsi << 3))

if (*(arg1 + 0x28) != *(arg1 + 0x54))
    int32_t rax_2 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_1 = arg1 + 0x58
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x68)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x20)
        
        do
            int64_t rdx_3 = sx.q(i) * 5
            
            if (*(r8_2 + (rdx_3 << 2)) == rbx_1)
                if (i != 0xffffffff)
                    sub_140943780(arg1 + 0x20, *(*(arg1 + 0x10) + (rsi << 3)))
                
                break
            
            i = *(r8_2 + (rdx_3 << 2) + 0xc)
        while (i != 0xffffffff)

int32_t rcx_5 = *(arg1 + 0x18)
int32_t rax_5 = rcx_5 - rsi.d

if (rax_5 != 1)
    int64_t r9_1 = *(arg1 + 0x10)
    memmove(r9_1 + (rsi << 3), r9_1 + (sx.q((rsi + 1).d) << 3), (rax_5 - 1) << 3)
    rcx_5 = *(arg1 + 0x18)

*(arg1 + 0x18) = rcx_5 - 1
sub_1405c53d0(arg1 + 0x10)
int64_t* rdi = *(arg1 + 0x70)
void* result = sx.q(*(arg1 + 0x78))
void* rbp_2 = result * 0x70 + rdi

if (rdi != rbp_2)
    void* rbx_2 = rdi + 0x44
    
    do
        int32_t* rcx_10
        
        if (*(rbx_2 - 0x2c) == *rbx_2)
        label_141e3c7fd:
            rcx_10 = nullptr
        else
            void* rax_10 = *(rbx_2 + 0xc)
            void* rcx_7 = rbx_2 + 4
            
            if (rax_10 != 0)
                rcx_7 = rax_10
            
            int32_t rax_14 = *(rcx_7 + (((sx.q(*(rbx_2 + 0x14)) - 1) & rsi) << 2))
            
            if (rax_14 == 0xffffffff)
            label_141e3c7fd_1:
                rcx_10 = nullptr
            else
                while (true)
                    rcx_10 = (sx.q(rax_14) << 4) + *(rbx_2 - 0x34)
                    
                    if (*rcx_10 == rsi.d)
                        break
                    
                    rax_14 = rcx_10[2]
                    
                    if (rax_14 == 0xffffffff)
                        goto label_141e3c7fd_2
                
                if (rax_14 == 0xffffffff)
                label_141e3c7fd_2:
                    rcx_10 = nullptr
        
        result = &rcx_10[1]
        
        if (rcx_10 == 0)
            result = nullptr
        
        if (result != 0)
            int64_t r10_1 = sx.q(*result)
            int32_t rcx_11 = *(rbx_2 - 0x3c)
            int32_t rax_16 = rcx_11 - r10_1.d
            
            if (rax_16 != 1)
                memmove(r10_1 * 0x30 + *rdi, sx.q((r10_1 + 1).d) * 0x30 + *rdi, (rax_16 - 1) * 0x30)
                rcx_11 = *(rbx_2 - 0x3c)
            
            *(rbx_2 - 0x3c) = rcx_11 - 1
            sub_1407c4120(rdi)
            result = sub_140d6dfe0(rbx_2 - 0x34, rsi.d)
        
        rdi = &rdi[0xe]
        rbx_2 += 0x70
    while (rdi != rbp_2)

return result
