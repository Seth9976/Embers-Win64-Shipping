// 函数: sub_142b5ed00
// 地址: 0x142b5ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
void* rdx

if ((rax.b & 0x11) != 0)
    rdx = nullptr
else if ((rax.b & 2) == 0)
    rdx = *(arg2 + 0x18)
else
    rdx = arg2 + 0xa

int64_t* rcx = *arg1
(*(*rcx + 0x20))(rcx, rdx)
int16_t rax_2 = *(arg2 + 8)

if (rax_2 s< 0)
    int32_t rax_5 = *(arg2 + 0xc)
    arg1[1].d += rax_5
    return rax_5

int32_t rax_4 = sx.d(rax_2) s>> 5
arg1[1].d += rax_4
return rax_4
