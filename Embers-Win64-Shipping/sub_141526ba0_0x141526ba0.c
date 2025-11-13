// 函数: sub_141526ba0
// 地址: 0x141526ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0x100
*arg1 = &data_142fbe7d8
*(arg1 + 0xc) = 0x40
arg1[2].d = 0x100
*(arg1 + 0x14) = 0x100
int64_t rax = j_sub_140a82f30(0x800)
int64_t rcx = sx.q(arg1[1].d)
arg1[4] = rax
int64_t rax_1 = 4 * rcx

if (mulu.dp.q(4, rcx) u>> 0x40 != zx.o(0))
    rax_1 = -1

arg1[5] = j_sub_140a82f30(rax_1)
int64_t rdx = sx.q(arg1[1].d * 3)
int64_t rax_4 = 8 * rdx

if (mulu.dp.q(8, rdx) u>> 0x40 != zx.o(0))
    rax_4 = -1

int64_t rax_5 = j_sub_140a82f30(rax_4)
int64_t rcx_4 = sx.q(*(arg1 + 0xc))
arg1[6] = rax_5
int64_t rax_6 = 4 * rcx_4

if (mulu.dp.q(4, rcx_4) u>> 0x40 != zx.o(0))
    rax_6 = -1

int64_t rax_7 = j_sub_140a82f30(rax_6)
int64_t rcx_6 = sx.q(*(arg1 + 0xc))
arg1[7] = rax_7
int64_t rax_8 = 4 * rcx_6

if (mulu.dp.q(4, rcx_6) u>> 0x40 != zx.o(0))
    rax_8 = -1

int64_t rax_9 = j_sub_140a82f30(rax_8)
int64_t rcx_8 = sx.q(*(arg1 + 0xc))
arg1[8] = rax_9
int64_t rax_10 = 8 * rcx_8

if (mulu.dp.q(8, rcx_8) u>> 0x40 != zx.o(0))
    rax_10 = -1

int64_t rax_11 = j_sub_140a82f30(rax_10)
int64_t rcx_10 = sx.q(arg1[2].d)
arg1[9] = rax_11
int64_t rax_12 = 4 * rcx_10

if (mulu.dp.q(4, rcx_10) u>> 0x40 != zx.o(0))
    rax_12 = -1

int64_t rax_13 = j_sub_140a82f30(rax_12)
int64_t rcx_12 = sx.q(arg1[2].d)
arg1[0xa] = rax_13
int64_t rcx_13 = sx.q(*(arg1 + 0x14))
arg1[0xb] = rax_13 + (rcx_12 << 2)
int64_t rax_15 = 4 * rcx_13

if (mulu.dp.q(4, rcx_13) u>> 0x40 != zx.o(0))
    rax_15 = -1

int64_t rax_16 = j_sub_140a82f30(rax_15)
int64_t rcx_15 = sx.q(arg1[2].d)
arg1[0xc] = rax_16
arg1[0xe].d = 0x40
arg1[0xd] = rax_16 + (rcx_15 << 2)
arg1[0xf] = j_sub_140a82f30(0x100)
int64_t rsi = 0
int64_t rbp = 8
int32_t* rdi = nullptr
int64_t i_2 = 3
int64_t i

do
    *(rdi + arg1[7]) = 8
    *(rdi + arg1[8]) = 0
    int64_t rax_21 = 4 * rbp
    
    if (mulu.dp.q(4, rbp) u>> 0x40 != zx.o(0))
        rax_21 = -1
    
    rsi += 8
    rbp += 0x10
    rdi = &rdi[1]
    *(rsi + arg1[9] - 8) = j_sub_140a82f30(rax_21)
    i = i_2
    i_2 -= 1
while (i != 1)
*(arg1[7] + 0xc) = 0x100
*(arg1[8] + 0xc) = 0
int32_t i_1 = 4
arg1[9][3] = j_sub_140a82f30(0x1c00)

if (*(arg1 + 0xc) s> 4)
    int64_t rsi_1 = 0x20
    int32_t* rdi_1 = 0x10
    int32_t rbp_1 = 0x48
    
    do
        int64_t rcx_19 = sx.q(rbp_1)
        *(rdi_1 + arg1[7]) = 8
        *(rdi_1 + arg1[8]) = 0
        int64_t rax_28 = 4 * rcx_19
        
        if (mulu.dp.q(4, rcx_19) u>> 0x40 != zx.o(0))
            rax_28 = -1
        
        rdi_1 = &rdi_1[1]
        i_1 += 1
        rsi_1 += 8
        rbp_1 += 0x10
        *(rsi_1 + arg1[9] - 8) = j_sub_140a82f30(rax_28)
    while (i_1 s< *(arg1 + 0xc))

return arg1
