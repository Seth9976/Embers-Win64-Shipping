// 函数: sub_142b8fa60
// 地址: 0x142b8fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t i_6 = arg2

if (arg3 == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x210) s> 0)
        int64_t rdx = 0
        
        do
            rdx += 4
            i += 1
            *(rdx + *(arg1 + 0x200) - 4) = 0
        while (i s< *(arg1 + 0x210))
    
    int32_t* rax_2 = *(arg1 + 0x200)
    *(arg1 + 0x214) = 0
    *rax_2 = 1
    *(arg1 + 0x210) = 1
    return rax_2

int32_t r8 = 0
int32_t i_1 = 0

if (*(arg1 + 0x210) s> 0)
    int64_t rdx_1 = 0
    
    do
        rdx_1 += 4
        i_1 += 1
        *(rdx_1 + *(arg1 + 0x200) - 4) = 0
    while (i_1 s< *(arg1 + 0x210))

*(arg1 + 0x210) = 0
int32_t rsi = 0

while ((i_6.b & 1) == 0)
    i_6 u>>= 1
    rsi += 1

uint32_t i_5 = zx.d(i_6)
uint32_t i_2 = i_5

if (i_5 != 0)
    do
        r8 += 1
        i_2 s>>= 1
    while (i_2 != 0)

int32_t rcx_1 = r8 * arg3
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x92492493, rcx_1)
int32_t rdx_4 = (temp0 + rcx_1) s>> 4

if ((rdx_4 u>> 0x1f) + 2 + rdx_4 s> 0x80)
    abort()
    noreturn

int32_t rdi = 1

if (arg3 s>= 1)
    do
        rdi *= 2
    while (arg3 s>= rdi)

int32_t i_4 = rdi s>> 2
int64_t r15
r15.b = 0
uint64_t i_7 = zx.q(i_6)
uint64_t i_3 = zx.q(i_7.d)

if (i_4 != 0)
    while (i_3 u<= 0xffffffff)
        i_3 *= i_3
        
        if ((arg3 & i_4) != 0)
            if ((i_3 & not.q((1 << (0x40 - r8.b)) - 1)) != 0)
                r15.b = 1
            else
                i_3 *= i_7
        
        i_4 s>>= 1
        
        if (i_4 == 0)
            break

uint64_t rax_8 = sub_142b8fcd0(arg1, i_3)

if (r15.b != 0)
    rax_8 = sub_142b90310(arg1, i_5)

for (; i_4 != 0; i_4 s>>= 1)
    rax_8 = sub_142b907c0(arg1)
    
    if ((arg3 & i_4) != 0)
        rax_8 = sub_142b90310(arg1, i_5)

int32_t rcx_11 = *(arg1 + 0x210)
int32_t rsi_1 = rsi * arg3

if (rcx_11 == 0)
    return rax_8

int32_t rdx_10 = rsi_1 s/ 0x1c
*(arg1 + 0x214) += rdx_10

if (rcx_11 + 1 s<= 0x80)
    return sub_142b8fda0(arg1, rsi_1.b - rdx_10.b * 0x1c)

abort()
noreturn
