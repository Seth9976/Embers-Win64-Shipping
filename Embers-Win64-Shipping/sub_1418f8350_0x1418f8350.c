// 函数: sub_1418f8350
// 地址: 0x1418f8350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418c8680(*(arg1 + 0x18))
sub_1418c2e90(*(arg1 + 0x18))
void* rcx_2 = *(arg1 + 0x148)
int64_t rbp = 0
*(arg1 + 0x148) = 0

if (rcx_2 != 0)
    sub_1419028c0(rcx_2 + 0x68)

uint64_t result = *(arg1 + 0x140)

if (result != 0)
    *(result + 0x110) = 0
    *(result + 0xe8) = 0
    *(result + 0xf8) = 0
    *(result + 0x80) = 0
    void* rcx_4 = *(arg1 + 0x140)
    *(arg1 + 0x140) = 0
    
    if (rcx_4 != 0)
        result = sub_1419028c0(rcx_4 + 0x68)

if (*(arg1 + 0x198) != 0)
    int64_t r12_1 = sx.q(*(arg1 + 0x58))
    
    if (r12_1 s> 0)
        int64_t r15_1 = 0
        
        do
            void* rax = *(arg1 + 0x130)
            void* rdi_1 = arg1 + 0xa0
            
            if (rax != 0)
                rdi_1 = rax
            
            void* rdi_2 = rdi_1 + rbp
            int64_t r8_1 = *rdi_2
            
            if (r8_1 != 0)
                sub_1418be030(*(arg1 + 0x18) + 0x3b0, 4, r8_1)
                __builtin_memset(rdi_2, 0, 0x14)
            
            void* rax_1 = *(arg1 + 0x50)
            void* rdx_1 = arg1 + 0x20
            
            if (rax_1 != 0)
                rdx_1 = rax_1
            
            sub_1418c2cb0(*(arg1 + 0x18), *(rdx_1 + (r15_1 << 3)))
            void* rax_2 = *(arg1 + 0x50)
            void* rdx_3 = arg1 + 0x20
            
            if (rax_2 != 0)
                rdx_3 = rax_2
            
            sub_1418c2cd0(*(arg1 + 0x18), *(rdx_3 + (r15_1 << 3)))
            void* rax_3 = *(arg1 + 0x50)
            void* rcx_10 = arg1 + 0x20
            
            if (rax_3 != 0)
                rcx_10 = rax_3
            
            rbp += 0x18
            *(rcx_10 + (r15_1 << 3)) = 0
            r15_1 += 1
        while (r15_1 s< r12_1)
    
    sub_1418c57f0(*(arg1 + 0x18) + 0x3b0, 1)
    sub_1418debb0(*(arg1 + 0x198), arg2)
    void* rdi_3 = *(arg1 + 0x198)
    
    if (rdi_3 != 0)
        int64_t rcx_14 = *(rdi_3 + 0x68)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = *(rdi_3 + 0x58)
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        j_sub_140a74f90(rdi_3)
    
    int64_t* rcx_18 = *(arg1 + 0x18) + 0x3b0
    *(arg1 + 0x198) = 0
    result = sub_1418c57f0(rcx_18, 1)

*(arg1 + 0x190) = 0xffffffff
return result
