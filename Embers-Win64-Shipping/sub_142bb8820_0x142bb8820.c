// 函数: sub_142bb8820
// 地址: 0x142bb8820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x2e0)
int64_t rsi = *(arg1 + 0x98)

if (rbx == 0)
    return 

uint64_t i_6 = zx.q(*rbx)
uint64_t i_7 = zx.q(rbx[1])
sub_142b99980(rsi, *(rbx + 0x28))
*(rbx + 0x28) = 0

if (i_6.d u> 1)
    __builtin_memset(&rbx[0xc], 0, zx.q((i_6 - 1).d) << 3)

sub_142b99980(rsi, *(rbx + 0x1a8))
int64_t rdx_3 = *(rbx + 0x120)
*(rbx + 0x1a8) = 0
sub_142b99980(rsi, rdx_3)
int64_t rdx_4 = *(rbx + 0x238)
*(rbx + 0x120) = 0
sub_142b99980(rsi, rdx_4)
*(rbx + 0x238) = 0

if (i_6.d != 0)
    void* rax_1 = &rbx[0x46]
    uint64_t i_3 = i_6
    uint64_t i
    
    do
        *(rax_1 + 0x88) = 0
        *rax_1 = 0
        *(rax_1 + 0x118) = 0
        rax_1 += 8
        i = i_3
        i_3 -= 1
    while (i != 1)

sub_142b99980(rsi, *(rbx + 0x108))
*(rbx + 0x108) = 0
*(rbx + 0x110) = 0

if (i_7.d != 0)
    void* rdi_2 = &rbx[2]
    uint64_t i_5 = i_7
    uint64_t i_1
    
    do
        sub_142b99980(rsi, *rdi_2)
        *rdi_2 = 0
        rdi_2 += 8
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

if (i_7.d != 0)
    void* rdi_3 = &rbx[0x2c]
    uint64_t i_4 = i_7
    uint64_t i_2
    
    do
        sub_142b99980(rsi, *rdi_3)
        *rdi_3 = 0
        *(rdi_3 - 8) = 0
        rdi_3 += 0x18
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

sub_142b99980(rsi, *(arg1 + 0x2e0))
*(arg1 + 0x2e0) = 0
