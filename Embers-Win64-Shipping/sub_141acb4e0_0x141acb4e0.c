// 函数: sub_141acb4e0
// 地址: 0x141acb4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t rdx = *(arg2 + 0xa8)
arg1[1].d = 0

if (rdx s> *(arg1 + 0xc))
    sub_141acba60(arg1, rdx)

int64_t rbp = sx.q(*(arg2 + 0xa8))

if (rbp.d != 0)
    int32_t rcx = arg1[1].d
    int32_t rdx_1 = rcx + rbp.d
    
    if (rdx_1 s> *(arg1 + 0xc))
        sub_141acba60(arg1, rdx_1)
        rcx = arg1[1].d
    
    memcpy(sx.q(rcx) * 0x30 + *arg1, *(arg2 + 0xa0), (rbp * 0x30).d)
    arg1[1].d += rbp.d

arg1[2] = arg2

if (*(arg2 + 0xf0) == 0 || sub_140d3c6e0(arg2 + 0x38) == 0)
    return 

int64_t arg_8 = 0
void* rax_2 = sub_140d3c6e0(arg2 + 0x40)
void* rbp_2

if (sub_140b5b8a0(0, 0) != 0)
    rbp_2 = rax_2 + 0x88
else
    void* const rcx_9
    
    if (*(rax_2 + 0x1a8) == *(rax_2 + 0x1d4))
    label_141acb620:
        rcx_9 = nullptr
    else
        int32_t rax_5 = sub_140b5ead0(0)
        void* r8_4 = rax_2 + 0x1d8
        void* rcx_7 = *(r8_4 + 8)
        
        if (rcx_7 != 0)
            r8_4 = rcx_7
        
        int32_t rax_7 = *(r8_4 + (((sx.q(*(rax_2 + 0x1e8)) - 1) & sx.q(rax_5)) << 2))
        
        if (rax_7 == 0xffffffff)
        label_141acb620_1:
            rcx_9 = nullptr
        else
            int64_t r8_5 = *(rax_2 + 0x1a0)
            
            while (true)
                int64_t rdx_7 = sx.q(rax_7) * 5
                rcx_9 = r8_5 + (rdx_7 << 3)
                
                if (*(r8_5 + (rdx_7 << 3)) == 0)
                    break
                
                rax_7 = *(rcx_9 + 0x20)
                
                if (rax_7 == 0xffffffff)
                    goto label_141acb620_2
            
            if (rax_7 == 0xffffffff)
            label_141acb620_2:
                rcx_9 = nullptr
    
    void* rax_8 = rcx_9 + 8
    
    if (rcx_9 == 0)
        rax_8 = nullptr
    
    if (rax_8 == 0)
        rbp_2 = rax_2 + 0x88
    else
        rbp_2 = rax_8 + 8

uint64_t rax = zx.q(arg1[1].d)

if (rax.d == 0)
    return 

int64_t rdx_8 = 0
uint64_t i_1 = zx.q(rax.d)
uint64_t i

do
    rsi += 0x30
    rdx_8 += 4
    rax = *arg1
    int128_t* rcx_13 = sx.q(*(*(arg1[2] + 0x70) + rdx_8 - 4)) * 0x30 + *rbp_2
    *(rsi + rax - 0x30) = *rcx_13
    *(rsi + rax - 0x20) = rcx_13[1]
    *(rsi + rax - 0x10) = rcx_13[2]
    i = i_1
    i_1 -= 1
while (i != 1)
