// 函数: sub_142bd17d0
// 地址: 0x142bd17d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0xf0)
int64_t rsi = 0
int32_t arg_8 = 0
int32_t r14 = 0
memset(arg1, 0, 0x150)
*arg1 = *(arg2 + 0x38)
arg1[3] = sub_142b91790(*(*(rdi + 0x328) + 0x184), 0x3e80000)
arg1[4] = *(*(rdi + 0x328) + 0x188) << 0x10
arg1[5] = *(*(rdi + 0x328) + 0x18c) << 0x10
void* r10 = *(rdi + 0x328)
void* arg_10 = r10
void* rax_5 = r10 + 0x124
uint64_t rbp = zx.q(*(r10 + 0xc2))
uint64_t r9 = zx.q(*(r10 + 0xc0))
uint64_t r11 = zx.q(*(r10 + 0xc1))
uint64_t r15 = zx.q(*(r10 + 0xc3))
uint64_t arg_20 = rbp

if (*(r10 + 0x210) == 1)
    if (r9 == 0)
    label_142bd18f8:
        int32_t rdx = *arg1
        arg1[0x14] = 0xff87ffff
        int32_t rax_14 = sub_142b93e80(0xff87ffff, rdx)
        int32_t rdx_1 = *arg1
        arg1[0x16] = rdx_1
        arg1[0x10] = 0x31
        arg1[0x15] = ((rax_14 + 0x8000) & 0xffff0000) - 0x8000
        int32_t rcx_5 = ((zx.q(*(arg2 + 0x130)) << 1) + 0x3700001).d
        arg1[0xc] = rcx_5
        int32_t rax_20 = sub_142b93e80(rcx_5, rdx_1) + 0x8000
        arg1[8] = 0x32
        *(arg1 + 9) = 1
        arg1[0xd] = (rax_20 & 0xffff0000) + 0x8000
        int32_t rax_23 = *arg1
        arg1[0xe] = rax_23
        return rax_23
    
    if (r9 == 4 && *(r10 + 0xc4) << 0x10 s< 0xff880000 && *(r10 + 0xc8) << 0x10 s< 0xff880000
            && *(r10 + 0xcc) << 0x10 s> 0x3700000 && *(r10 + 0xd0) << 0x10 s> 0x3700000)
        goto label_142bd18f8

int64_t r8 = 0

if (r9 != 0)
    do
        arg1[zx.q(arg1[1]) * 5 + 0x18] = *(r10 + (r8 << 2) + 0xc4) << 0x10
        arg1[(zx.q(arg1[1]) + 5) * 5] = *(r10 + (r8 << 2) + 0xc8) << 0x10
        uint64_t rcx_9 = zx.q(arg1[1])
        int64_t rax_29 = (rcx_9 + 5) * 5
        int32_t r10_1 = arg1[rax_29]
        void* rcx_10 = &arg1[rcx_9 * 5]
        int32_t rax_32 = r10_1 - *(rcx_10 + 0x60)
        
        if (r10_1 - *(rcx_10 + 0x60) s>= 0)
            if (rax_32 s<= r14)
                rax_32 = r14
            
            r14 = rax_32
            int32_t rax_39
            uint64_t rcx_14
            
            if (r8 == 0)
                *(rcx_10 + 0x70) = 1
                uint64_t rcx_15 = zx.q(arg1[1])
                rax_39 = arg1[rcx_15 * 5 + 0x19]
                rcx_14 = rcx_15 * 5
            else
                arg1[rax_29] = r10_1 + (*(arg2 + 0x130) << 1)
                uint64_t rcx_12 = zx.q(arg1[1]) * 5
                arg1[rcx_12 + 0x18] += *(arg2 + 0x130) * 2
                arg1[zx.q(arg1[1]) * 5 + 0x1c].b = 0
                rcx_14 = zx.q(arg1[1]) * 5
                rax_39 = arg1[rcx_14 + 0x18]
            
            arg1[rcx_14 + 0x1a] = rax_39
            arg1[1] += 1
        
        r8 += 2
    while (r8 u< r9)
    
    rbp = arg_20
    r10 = arg_10
    arg_8 = r14

int64_t r8_1 = 0

if (r11 != 0)
    do
        arg1[zx.q(arg1[1]) * 5 + 0x18] = *(r10 + (r8_1 << 2) + 0xfc) << 0x10
        arg1[(zx.q(arg1[1]) + 5) * 5] = *(r10 + (r8_1 << 2) + 0x100) << 0x10
        uint64_t rcx_19 = zx.q(arg1[1])
        void* r9_1 = &arg1[rcx_19 * 5]
        int32_t rdx_7 = arg1[rcx_19 * 5 + 0x19]
        int32_t rdx_8 = rdx_7 - *(r9_1 + 0x60)
        
        if (rdx_7 - *(r9_1 + 0x60) s>= 0)
            *(r9_1 + 0x70) = 1
            uint64_t rcx_20 = zx.q(arg1[1])
            arg1[rcx_20 * 5 + 0x1a] = arg1[rcx_20 * 5 + 0x19]
            arg1[1] += 1
            
            if (rdx_8 s<= r14)
                rdx_8 = r14
            
            r14 = rdx_8
        
        r8_1 += 2
    while (r8_1 u< r11)
    
    arg_8 = r14

uint64_t rax_49 = sub_142b91790(0x10000, *arg1)
int32_t rdi_1 = rax_49.d
int64_t r12 = 0

if (arg1[1] u> 0)
    void* r14_1 = rax_5
    void* r9_2 = &arg1[0x1a]
    
    do
        int32_t r10_2 = 0x7fffffff
        int32_t r11_1 = *r9_2
        
        if (*(r9_2 + 8) == 0)
            int64_t rdx_13 = 2
            
            if (2 u< rbp)
                do
                    int32_t r8_4 = (*(rax_5 + (rdx_13 << 2)) << 0x10) + (*(arg2 + 0x130) << 1)
                    int32_t rcx_29 = r8_4 - r11_1
                    
                    if (r11_1 - r8_4 s>= 0)
                        rcx_29 = r11_1 - r8_4
                    
                    if (rcx_29 s< r10_2 && rcx_29 s< rdi_1)
                        *r9_2 = r8_4
                        r10_2 = rcx_29
                        
                        if (rcx_29 == 0)
                            break
                    
                    rdx_13 += 2
                while (rdx_13 u< rbp)
                
                r14_1 = rax_5
                rsi = 0
        else
            int64_t rdx_10 = 0
            
            if (r15 != 0)
                do
                    int32_t r8_3 = *(arg_10 + (rdx_10 << 2) + 0x160) << 0x10
                    int32_t rcx_23 = r8_3 - r11_1
                    
                    if (r11_1 - r8_3 s>= 0)
                        rcx_23 = r11_1 - r8_3
                    
                    if (rcx_23 s< r10_2 && rcx_23 s< rdi_1)
                        *r9_2 = r8_3
                        r10_2 = rcx_23
                        
                        if (rcx_23 == 0)
                            break
                    
                    rdx_10 += 2
                while (rdx_10 u< r15)
                
                rbp = arg_20
            
            if (rbp u>= 2)
                int32_t rdx_12 = *(r14_1 + 4) << 0x10
                int32_t rcx_25 = rdx_12 - r11_1
                
                if (r11_1 - rdx_12 s>= 0)
                    rcx_25 = r11_1 - rdx_12
                
                if (rcx_25 s< r10_2 && rcx_25 s< rdi_1)
                    *r9_2 = rdx_12
        
        rax_49 = zx.q(arg1[1])
        r12 += 1
        r9_2 += 0x14
    while (r12 u< rax_49)
    
    r14 = arg_8

if (r14 s> 0)
    rax_49 = sub_142b91790(0x10000, r14)
    
    if (arg1[3] s> rax_49.d)
        rax_49 = sub_142b91790(0x10000, r14)
        arg1[3] = rax_49.d

int32_t rdx_16 = *arg1
int32_t r8_5 = arg1[3]

if (rdx_16 s< r8_5)
    arg1[2].b = 1
    rax_49 = sub_142b93dd0(0x999a, rdx_16, r8_5)
    arg1[6] = 0x999a - rax_49.d
    
    if (0x999a - rax_49.d s> 0x7fff)
        arg1[6] = 0x7fff

if (*(arg2 + 0x102) != 0)
    arg1[6] = 0

if (arg1[1] u> 0)
    void* rdi_3 = &arg1[0x1a]
    
    do
        int32_t rdx_17 = *arg1
        int32_t rcx_30 = *rdi_3
        
        if (*(rdi_3 + 8) == 0)
            int32_t rax_60 = sub_142b93e80(rcx_30, rdx_17)
            *(rdi_3 + 4) = (arg1[6] + 0x8000 + rax_60) & 0xffff0000
        else
            *(rdi_3 + 4) = (sub_142b93e80(rcx_30, rdx_17) + 0x8000 - arg1[6]) & 0xffff0000
        
        rax_49 = zx.q(arg1[1])
        rsi += 1
        rdi_3 += 0x14
    while (rsi u< rax_49)

return rax_49
