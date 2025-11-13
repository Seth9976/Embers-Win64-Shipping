// 函数: sub_14246afc0
// 地址: 0x14246afc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ae4890(arg1, arg2)
sub_1405cd980(arg1 + 0x6e0, arg2 + 0x6e0)
*(arg1 + 0x730) = *(arg2 + 0x730)
*(arg1 + 0x740) = *(arg2 + 0x740)
*(arg1 + 0x748) = *(arg2 + 0x748)
*(arg1 + 0x758) = *(arg2 + 0x758)
*(arg1 + 0x760) = *(arg2 + 0x760)
*(arg1 + 0x768) = *(arg2 + 0x768)
*(arg1 + 0x770) = *(arg2 + 0x770)

if (arg1 + 0x778 != arg2 + 0x778)
    int32_t i_5 = *(arg1 + 0x780)
    
    if (i_5 != 0)
        int64_t* rbx_2 = *(arg1 + 0x778) + 0x30
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_2 = &rbx_2[8]
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t i_4 = *(arg2 + 0x780)
    void* rdi_1 = *(arg2 + 0x778)
    int32_t r8_1 = *(arg1 + 0x784)
    *(arg1 + 0x780) = i_4
    
    if (i_4 != 0 || r8_1 != 0)
        sub_1407c35c0(arg1 + 0x778, i_4, r8_1)
        void* r14_1 = *(arg1 + 0x778)
        
        if (i_4 != 0)
            void* rdi_2 = rdi_1 + 8
            void* rbx_3 = r14_1 + 0x3c
            int32_t i_1
            
            do
                *r14_1 = *(rdi_2 - 8)
                *(rbx_3 - 0x34) = *rdi_2
                *(rbx_3 - 0x2c) = *(rdi_2 + 8)
                *(rbx_3 - 0x28) = *(rdi_2 + 0xc)
                *(rbx_3 - 0x24) = *(rdi_2 + 0x10)
                *(rbx_3 - 0x20) = *(rdi_2 + 0x14)
                *(rbx_3 - 0x1c) = *(rdi_2 + 0x18)
                *(rbx_3 - 0xc) = 0
                int64_t rbp_1 = sx.q(*(rdi_2 + 0x30))
                int64_t rax_11 = *(rdi_2 + 0x28)
                *(rbx_3 - 4) = rbp_1.d
                
                if (rbp_1.d != 0)
                    sub_140638750(rbx_3 - 0xc, rbp_1.d, 0)
                    memcpy(*(rbx_3 - 0xc), rax_11, (rbp_1 << 2).d)
                else
                    *rbx_3 = 0
                
                r14_1 += 0x40
                rbx_3 += 0x40
                rdi_2 += 0x40
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x784) = 0

int64_t i_3 = 3
void* rdi_4 = arg1 + 0x788 - arg2
void* rbx_4 = arg2 + 0x78c
int64_t i_2

do
    *(rdi_4 + rbx_4 - 0x78c) = *(rbx_4 - 4)
    void* r14_3 = rdi_4 - 0x774 + rbx_4
    *(rdi_4 + rbx_4 - 0x788) = *rbx_4
    *(rdi_4 + rbx_4 - 0x784) = *(rbx_4 + 4)
    *(rdi_4 + rbx_4 - 0x780) = *(rbx_4 + 8)
    *(rdi_4 + rbx_4 - 0x77c) = *(rbx_4 + 0xc)
    *(rdi_4 + rbx_4 - 0x778) = *(rbx_4 + 0x10)
    
    if (r14_3 != rbx_4 + 0x14)
        int64_t rsi_1 = sx.q(*(rbx_4 + 0x1c))
        int64_t r15_1 = *(rbx_4 + 0x14)
        int32_t r8_4 = *(rdi_4 + rbx_4 - 0x768)
        *(rdi_4 + rbx_4 - 0x76c) = rsi_1.d
        
        if (rsi_1.d != 0 || r8_4 != 0)
            sub_1405c4a00(r14_3, rsi_1.d, r8_4)
            memcpy(*r14_3, r15_1, (rsi_1 << 3).d)
        else
            *(rdi_4 + rbx_4 - 0x768) = 0
    
    rbx_4 += 0x28
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
*(arg1 + 0x800) = *(arg2 + 0x800)
*(arg1 + 0x808) = *(arg2 + 0x808)
*(arg1 + 0x80c) = *(arg2 + 0x80c)
*(arg1 + 0x810) = *(arg2 + 0x810)
*(arg1 + 0x820) = *(arg2 + 0x820)
*(arg1 + 0x824) = *(arg2 + 0x824)
*(arg1 + 0x825) = *(arg2 + 0x825)
*(arg1 + 0x826) = *(arg2 + 0x826)
return arg1
