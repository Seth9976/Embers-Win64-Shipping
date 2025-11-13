// 函数: sub_141ea4b80
// 地址: 0x141ea4b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg3)
arg1[1].d = 0

if (*(arg1 + 0xc) != arg3)
    sub_1405dadb0(arg1, i_2.d)

if (i_2.d s<= 0)
    return 

uint64_t i_1 = i_2
uint64_t i

do
    int64_t rdi = sx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4cf0(arg1)
    
    int32_t* rdx_2 = *arg1 + (rdi << 2)
    
    if (rdx_2 != 0)
        *rdx_2 = *arg2
    
    i = i_1
    i_1 -= 1
while (i != 1)
