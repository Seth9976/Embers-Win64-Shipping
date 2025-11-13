// 函数: sub_140b51990
// 地址: 0x140b51990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 8)
uint64_t rcx_1 = zx.q(rax.d) & 7

if (rcx_1.d != 0)
    char* rdx_1 = sx.q((rax s>> 3).d) + *(arg2 + 0x90)
    *rdx_1 &= *(rcx_1 + &data_142e78980)
    rax = *(arg1 + 8)

int32_t rcx_3 = ((rax + 7) s>> 3).d
int32_t rax_5 = ((*(arg2 + 0xa0) + 7) s>> 3).d

if (rax_5 != rcx_3)
    memset(sx.q(rcx_3) + *(arg2 + 0x90), 0, sx.q(rax_5 - rcx_3))

*(arg2 + 0x29) ^= (*(arg2 + 0x29) ^ *arg1) & 1
int64_t result = *(arg1 + 8)
*(arg2 + 0xa0) = result
return result
