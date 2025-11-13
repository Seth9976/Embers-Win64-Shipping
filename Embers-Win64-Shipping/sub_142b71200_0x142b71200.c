// 函数: sub_142b71200
// 地址: 0x142b71200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
(*(*rcx + 0x20))(rcx)
int32_t rsi = *(arg1 + 0x18)
bool cond:0 = rsi s> (*(*arg2 + 0x58))(arg2)
int64_t* rcx_2 = arg2
int64_t rax_3 = *arg2
uint64_t r9

if (cond:0)
    (*(rax_3 + 0x70))(rcx_2, zx.q(rsi - 1))
    rax_3 = *arg2
    r9 = 0
    rcx_2 = arg2
else
    r9 = zx.q(rsi - 1)

int32_t result = (*(rax_3 + 0x88))(rcx_2, zx.q(*(arg1 + 0x10)), zx.q(*(arg1 + 0x14)), r9)
*(arg1 + 0xc) = result
return result
