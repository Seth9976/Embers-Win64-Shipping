// 函数: sub_140bc3a40
// 地址: 0x140bc3a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int64_t* r14 = *(arg1 + 0xa8)
int64_t rsi = 0
uint64_t r15_1 = sx.q(*(arg1 + 0xb0)) << 3 u>> 3

if (r14 u> &r14[sx.q(*(arg1 + 0xb0))])
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rcx = *r14
        int32_t rax_2 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (rax_2 == 1)
            int64_t* rcx_2 = *(rcx + 0xe0) + 0x60
            rcx_2[2].d -= 1
            
            if (rcx_2[2].d == 1)
                sub_140bc7180(rcx_2)
        
        r14 = &r14[1]
        rsi += 1
    while (rsi != r15_1)

*(arg1 + 0xb0) = 0

if (*(arg1 + 0xb4) != 0)
    sub_1405c5570(arg1 + 0xa8, 0)

int32_t i = 0

if (*(arg1 + 0x178) s> 0)
    int64_t r10_1 = 0
    
    do
        void* r8_1 = *(arg1 + 0x140) + sx.q(*(*(arg1 + 0x160) + r10_1)) * 0x28
        int32_t j = 0
        
        if (*(r8_1 + 0x1c) s> 0)
            do
                int32_t rcx_6 = *(r8_1 + 0x18) + j
                j += 1
                int64_t rcx_7 = *(arg1 + 0x148)
                int64_t rdx_3 = sx.q(rcx_6) * 2
                *(rcx_7 + (rdx_3 << 3) + 8) -= 1
            while (j s< *(r8_1 + 0x1c))
        
        i += 1
        r10_1 += 4
    while (i s< *(arg1 + 0x178))

uint64_t rcx_8 = zx.q(*(arg1 + 0x170)) * 5
int64_t result = *(arg1 + 0x140)
void* r8_2 = result + (rcx_8 << 3)

if (*(result + (rcx_8 << 3) + 0x1c) s> 0)
    do
        result = *(arg1 + 0x148)
        int64_t rdx_4 = sx.q(*(r8_2 + 0x18) + i_1)
        i_1 += 1
        int64_t rdx_5 = rdx_4 * 2
        *(result + (rdx_5 << 3) + 8) -= 1
    while (i_1 s< *(r8_2 + 0x1c))

return result
