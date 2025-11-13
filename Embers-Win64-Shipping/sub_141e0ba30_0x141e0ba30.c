// 函数: sub_141e0ba30
// 地址: 0x141e0ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[2]
int64_t rdi = 0
int32_t rdx = *(rsi + 0xa8)
arg1[1].d = 0

if (rdx s> *(arg1 + 0xc))
    sub_141acba60(arg1, rdx)

int64_t rbp = sx.q(*(rsi + 0xa8))

if (rbp.d != 0)
    int32_t rcx = arg1[1].d
    int32_t rdx_1 = rcx + rbp.d
    
    if (rdx_1 s> *(arg1 + 0xc))
        sub_141acba60(arg1, rdx_1)
        rcx = arg1[1].d
    
    memcpy(sx.q(rcx) * 0x30 + *arg1, *(rsi + 0xa0), (rbp * 0x30).d)
    arg1[1].d += rbp.d

arg1[2] = rsi

if (*(rsi + 0xf0) == 0 || sub_140d3c6e0(rsi + 0x38) == 0)
    return 

int64_t arg_8 = 0
void* rax = sub_141dec140(sub_140d3c6e0(rsi + 0x40), 0)
int32_t i_2 = arg1[1].d
void* r10_1 = rax

if (i_2 == 0)
    return 

int64_t r8_4 = 0
uint64_t i_1 = zx.q(i_2)
uint64_t i

do
    rdi += 0x30
    rax = *arg1
    r8_4 += 4
    int128_t* rdx_6 = sx.q(*(*(arg1[2] + 0x70) + r8_4 - 4)) * 0x30 + *r10_1
    *(rdi + rax - 0x30) = *rdx_6
    *(rdi + rax - 0x20) = rdx_6[1]
    *(rdi + rax - 0x10) = rdx_6[2]
    i = i_1
    i_1 -= 1
while (i != 1)
