// 函数: sub_141526e00
// 地址: 0x141526e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141526ba0(arg1)
int64_t rcx = sx.q(*(arg1 + 0xc))
*arg1 = &data_142fbe7f0
int64_t rax = 8 * rcx

if (mulu.dp.q(8, rcx) u>> 0x40 != zx.o(0))
    rax = -1

int64_t rax_1 = j_sub_140a82f30(rax)
int64_t rcx_2 = sx.q(arg1[1].d)
arg1[0x14] = rax_1
int64_t rax_2 = 8 * rcx_2

if (mulu.dp.q(8, rcx_2) u>> 0x40 != zx.o(0))
    rax_2 = -1

int64_t rdi = 0
arg1[0x15] = j_sub_140a82f30(rax_2)
int64_t rsi = 0
int64_t i_2 = 3
int64_t i

do
    int64_t rax_4 = 4 * rsi
    
    if (mulu.dp.q(4, rsi) u>> 0x40 != zx.o(0))
        rax_4 = -1
    
    rdi += 8
    rsi += 8
    *(rdi + arg1[0x14] - 8) = j_sub_140a82f30(rax_4)
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t i_1 = 4
arg1[0x14][3] = j_sub_140a82f30(0xc00)

if (*(arg1 + 0xc) s> 4)
    int64_t rdi_1 = 0x20
    int32_t rsi_1 = 0x20
    
    do
        int64_t rcx_7 = sx.q(rsi_1)
        int64_t rax_7 = 4 * rcx_7
        
        if (mulu.dp.q(4, rcx_7) u>> 0x40 != zx.o(0))
            rax_7 = -1
        
        rdi_1 += 8
        i_1 += 1
        rsi_1 += 8
        *(rdi_1 + arg1[0x14] - 8) = j_sub_140a82f30(rax_7)
    while (i_1 s< *(arg1 + 0xc))

return arg1
