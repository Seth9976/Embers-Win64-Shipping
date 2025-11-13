// 函数: sub_142b8f8a0
// 地址: 0x142b8f8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x210) s> 0)
    int64_t rcx = 0
    
    do
        rcx += 4
        i += 1
        *(rcx + *(arg1 + 0x200) - 4) = 0
    while (i s< *(arg1 + 0x210))

*(arg1 + 0x210) = 0
int32_t rsi = 0
int32_t r15 = *(arg2 + 8)

if (r15 s>= 0x13)
    uint32_t i_4 = r15 u/ 0x13
    uint64_t i_3 = zx.q(i_4)
    r15 += i_4 * 0xffffffed
    uint64_t i_1
    
    do
        int64_t j = sx.q(rsi)
        int64_t rdi_1 = 0
        rsi += 0x13
        
        while (j s< sx.q(rsi))
            int32_t rax_7 = sx.d(*(j + (*arg2).q))
            j += 1
            rdi_1 = sx.q(rax_7 - 0x30) + rdi_1 * 0xa
        
        sub_142b90120(arg1, 0x13)
        sub_142b8f5b0(arg1, rdi_1)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* i_2 = sx.q(rsi)
int64_t rdi_2 = 0

while (i_2 s< sx.q(rsi + r15))
    int32_t rax_11 = sx.d(*(i_2 + (*arg2).q))
    i_2 += 1
    rdi_2 = sx.q(rax_11 - 0x30) + rdi_2 * 0xa

sub_142b90120(arg1, r15)
int64_t result = sub_142b8f5b0(arg1, rdi_2)
int32_t temp2 = *(arg1 + 0x210)
bool cond:0 = temp2 != 0

if (temp2 s> 0)
    int64_t rcx_7 = *(arg1 + 0x200)
    
    do
        result = sx.q(*(arg1 + 0x210) - 1)
        
        if (*(rcx_7 + (result << 2)) != 0)
            break
        
        *(arg1 + 0x210) -= 1
    while (*(arg1 + 0x210) s> 0)
    
    cond:0 = *(arg1 + 0x210) != 0

if (not(cond:0))
    *(arg1 + 0x214) = 0

return result
