// 函数: sub_141e3bff0
// 地址: 0x141e3bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d

if (rdx s<= 0)
    arg1[3].d = 0
    
    if (*(arg1 + 0x1c) != 0)
        return sub_140638c50(&arg1[2], 0) __tailcall
    
    return 

sub_141e11140(*arg1, rdx, arg2)
int32_t rax_1 = *(arg1 + 0x1c)
arg1[3].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_140638c50(&arg1[2], 0)

int32_t rax_2 = arg1[1].d

if (rax_2 s> *(arg1 + 0x1c))
    sub_140638c50(&arg1[2], rax_2)
    rax_2 = arg1[1].d

int64_t* i = *arg1

for (void* rsi_1 = i + sx.q(rax_2) * 0xc; i != rsi_1; i += 0xc)
    sub_140664c50(&arg1[2], i)
