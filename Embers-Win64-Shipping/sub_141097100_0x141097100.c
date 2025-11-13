// 函数: sub_141097100
// 地址: 0x141097100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = arg1
int64_t r10_1 = sx.q((1 << (arg3 + 1)) - 1) & zx.q(r11[0xe].w)
int64_t r10_2 = r10_1 - (r10_1 u>> 1 & 0x5555555555555555)
int64_t rax_7 = (r10_2 u>> 2 & 0x3333333333333333) + (r10_2 & 0x3333333333333333)
uint64_t rdx_5 = ((((rax_7 u>> 4) + rax_7) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38

if (rdx_5.d u< 1)
    *arg2 = 0x98
    arg2[1] = 0
    return arg2

int64_t* rcx_2 = r11[2]
int64_t* rax_8 = r11
int64_t rbp = sx.q(*arg4)

if (rcx_2 != 0)
    rax_8 = rcx_2

void* rsi = *(rax_8 + (rdx_5 << 3) + -fffffffffffffff8)
int32_t rax_9 = *(rsi + 0x28)
int64_t i_1 = sx.q(*(rsi + 0x38))
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_9 + 7)
int32_t rdx_8 = 0

if (i_1 s> 0)
    int64_t r8_2 = 0
    int64_t i
    
    do
        void* rax_15 = *(rsi + 0x30)
        
        if ((*(rsi + 0x30) & 1) != 0)
            rax_15 = (rax_15 s>> 1) + rsi + 0x30
        
        uint32_t rcx_6 = zx.d(*(r8_2 + rax_15 + 2))
        r8_2 += 0x18
        rdx_8 += rcx_6
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_7 = &r11[4]
*arg4 = ((((temp1 + (temp0 & 7)) s>> 3) + ((*(rsi + 0x18) + *(rsi + 8) + rax_9) << 3) + 7 + rdx_8)
    & 0xfffffff8) + rbp.d

if (*(r11 + 0x72) u> 0x50)
    rcx_7 = *rcx_7

int64_t* rax_20 = r11[2]

if (rax_20 != 0)
    r11 = rax_20

*arg2 = *(r11 + (rdx_5 << 3) + -fffffffffffffff8)
arg2[1] = rcx_7 + rbp
return arg2
