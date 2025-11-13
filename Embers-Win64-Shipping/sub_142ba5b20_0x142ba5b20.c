// 函数: sub_142ba5b20
// 地址: 0x142ba5b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
uint32_t rsi
int32_t r15

if (arg3 != 0)
    rsi = *(arg2 + 0xc)
    r15 = *(arg2 + 0x14)
else
    rsi = *(arg2 + 8)
    r15 = *(arg2 + 0x10)

int32_t* rdi_1 = arg1 + 0x3c + r12 * 0x2430

if (rdi_1[0x90a] == rsi && rdi_1[0x90b] == r15)
    return 

rdi_1[0x90a] = rsi
uint64_t rax_1 = 0
rdi_1[0x90b] = r15
int32_t i = *(arg1 + 0x2544)

if (i != 0)
    void* rcx_1 = arg1 + 0x2568
    
    do
        if ((*rcx_1 & 0x10) != 0)
            void* rax_3 = arg1 + 0x2548 + rax_1 * 0x24
            
            if (rax_3 != 0)
                int32_t rax_4 = sub_142b93e80(*(rax_3 + 0xc), rsi)
                uint32_t r8 = zx.d(*(*(*(arg1 + 8) + 0x80) + 0x18))
                int32_t rdx_2 = *(*(arg1 + 0x30) + 0x18)
                int32_t rcx_6 = 0x28
                
                if (rdx_2 != 0 && r8 u<= rdx_2 && r8 u>= 6)
                    rcx_6 = 0x34
                
                int32_t rdx_4 = (rcx_6 + rax_4) & 0xffffffc0
                
                if (rax_4 != rdx_4 && r12.d == 1)
                    uint32_t rax_5 = sub_142b93dd0(rsi, rdx_4, rax_4)
                    int32_t j_2 = *(arg1 + 0x2544)
                    int32_t rbx_1 = *(arg1 + 0x38)
                    
                    if (j_2 != 0)
                        void* rdx_5 = arg1 + 0x2564
                        uint64_t j_1 = zx.q(j_2)
                        uint64_t j
                        
                        do
                            if (rbx_1 s<= *(rdx_5 - 4))
                                rbx_1 = *(rdx_5 - 4)
                            
                            int32_t rax_7 = neg.d(*rdx_5)
                            rdx_5 += 0x24
                            
                            if (rbx_1 s<= rax_7)
                                rbx_1 = rax_7
                            
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    uint32_t r14_2 = rax_5 - rsi
                    int32_t rax_10
                    
                    if (sub_142b93e80(rbx_1, r14_2) s>= 0)
                        rax_10 = sub_142b93e80(rbx_1, r14_2)
                    else
                        rax_10 = neg.d(sub_142b93e80(rbx_1, r14_2))
                    
                    if ((rax_10 & 0xffffff80) == 0)
                        rsi = rax_5
            
            break
        
        rax_1 = zx.q(rax_1.d + 1)
        rcx_1 += 0x24
    while (rax_1.d u< i)

*rdi_1 = rsi
rdi_1[1] = r15

if (r12.d != 0)
    *(arg1 + 0x14) = rsi
    *(arg1 + 0x1c) = r15
else
    *(arg1 + 0x10) = rsi
    *(arg1 + 0x18) = r15

int32_t i_1 = 0

if (rdi_1[2] u> 0)
    do
        int64_t rax_13 = (zx.q(i_1) + 1) * 3
        void* rbx_2 = &rdi_1[rax_13]
        int32_t rax_14 = sub_142b93e80(rdi_1[rax_13], rsi)
        i_1 += 1
        *(rbx_2 + 4) = rax_14
        *(rbx_2 + 8) = rax_14
    while (i_1 u< rdi_1[2])

int64_t rax
rax.b = sub_142b93e80(rdi_1[0x34], rsi).d s< 0x28
rdi_1[0x35].b = rax.b

if (r12.d != 1)
    return 

uint64_t rbp_1 = 0

if (rdi_1[0x36] u> 0)
    int32_t r14_3 = (r12 + 0x1f).d
    
    do
        int64_t rbx_5 = zx.q(rbp_1.d) + 0x37 + (rbp_1 << 3)
        void* rbx_6 = &rdi_1[rbx_5]
        int32_t rcx_13 = sub_142b93e80(rdi_1[rbx_5], rsi) + r15
        *(rbx_6 + 4) = rcx_13
        *(rbx_6 + 8) = rcx_13
        int32_t rax_16 = sub_142b93e80(*(rbx_6 + 0xc), rsi)
        *(rbx_6 + 0x20) &= 0xfffffffe
        int32_t rcx_15 = rax_16 + r15
        *(rbx_6 + 0x10) = rcx_15
        *(rbx_6 + 0x14) = rcx_15
        rax = sub_142b93e80(*rbx_6 - *(rbx_6 + 0xc), rsi)
        
        if ((rax + 0x30).d u<= 0x60)
            int32_t rdx_13 = rax.d
            
            if (rax.d s< 0)
                rdx_13 = neg.d(rdx_13)
            
            int32_t rcx_19
            
            if (rdx_13 s>= r14_3)
                rcx_19 = 0x40
                
                if (rdx_13 s< 0x30)
                    rcx_19 = r14_3
            else
                rcx_19 = 0
            
            if (rax.d s< 0)
                rcx_19 = neg.d(rcx_19)
            
            int32_t rax_19 = (*(rbx_6 + 4) + r14_3) & 0xffffffc0
            *(rbx_6 + 8) = rax_19
            *(rbx_6 + 0x20) |= 1
            *(rbx_6 + 0x14) = rax_19 - rcx_19
        
        rbp_1 = zx.q(rbp_1.d + 1)
    while (rbp_1.d u< rdi_1[0x36])

uint64_t r11_1 = 0

if (rdi_1[0x36] u<= 0)
    return 

do
    void* r8_2 = &rdi_1[r11_1 * 9]
    int32_t r10_1 = *(r8_2 + 0xfc)
    
    if ((r10_1 & 5).b == 5)
        int32_t i_2 = rdi_1[0x36]
        rax = 0
        
        if (i_2 != 0)
            do
                int64_t rdx_14 = rax * 9
                char rcx_21 = (rdi_1[rdx_14 + 0x3f]).b
                
                if ((rcx_21 & 4) == 0 && (rcx_21 & 1) != 0
                        && rdi_1[rdx_14 + 0x39] s<= *(r8_2 + 0xf0)
                        && rdi_1[rdx_14 + 0x3c] s>= *(r8_2 + 0xe4))
                    *(r8_2 + 0xfc) = r10_1 & 0xfffffffe
                    break
                
                rax = zx.q(rax.d + 1)
            while (rax.d u< i_2)
    
    r11_1 = zx.q(r11_1.d + 1)
while (r11_1.d u< rdi_1[0x36])
