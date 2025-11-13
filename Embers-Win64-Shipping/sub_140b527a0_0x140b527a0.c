// 函数: sub_140b527a0
// 地址: 0x140b527a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b526e0(arg1)
int64_t count = sx.q(arg1[0x13].d)
int64_t rdi = 0
int64_t rcx = arg1[0x12]
arg1[0x14] = 0
memset(rcx, 0, count)
int64_t rdx
rdx.b = 1
(*(*arg1 + 0xa8))(arg1, rdx)
int64_t rdx_1
rdx_1.b = 1
(*(*arg1 + 0xd8))(arg1, rdx_1)
*(arg1 + 0x2b) |= 8
int64_t rsi = data_143de8540

if (data_143de5480 != 0)
    rdi.b = GetCurrentThreadId() != data_143de5470

int64_t result = sx.q(*(rsi + (rdi << 2)))
arg1[7] = result
return result
