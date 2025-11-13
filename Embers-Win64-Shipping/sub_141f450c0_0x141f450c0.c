// 函数: sub_141f450c0
// 地址: 0x141f450c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x430) == 0)
    return 

sub_141f36e90(arg1, arg1 + 0x7e0, arg1 + 0x7f0, arg2, 0)
sub_140780b40(arg1 + 0x678, *(arg1 + 0x430) + 0x1b8)
int64_t* rcx_1 = *(arg1 + 0x650)

if (rcx_1 != 0)
    sub_141e0aaf0(rcx_1)

int64_t* rdi_1 = *(arg1 + 0x6c0)
int64_t rsi_1 = 0
uint64_t r14_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x6c8))])
    r14_2 = 0

if (r14_2 != 0)
    do
        sub_141e0aaf0(*rdi_1)
        rsi_1 += 1
        rdi_1 = &rdi_1[1]
    while (rsi_1 != r14_2)

int64_t* rcx_3 = *(arg1 + 0x658)

if (rcx_3 != 0)
    sub_141e0aaf0(rcx_3)

uint64_t rax = *(arg1 + 0x430)

if (rax != 0)
    void* rcx_4 = *(rax + 0x60)
    
    if (rcx_4 != 0)
        *(arg1 + 0x720) = *(rcx_4 + 0x268)

*(arg1 + 0x71c) |= 0x80
*(arg1 + 0x6d8) = 0

if (*(arg1 + 0x6dc) != 0)
    sub_1405a5220(arg1 + 0x6d0, 0)

*(arg1 + 0x6e8) = 0

if (*(arg1 + 0x6ec) != 0)
    sub_1405a5220(arg1 + 0x6e0, 0)

*(arg1 + 0x700) = 0
*(arg1 + 0x6f8) = 0

if (*(arg1 + 0x6fc) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x6f0, 0)

*(arg1 + 0x708) = 0
*(arg1 + 0x70a) = 0
