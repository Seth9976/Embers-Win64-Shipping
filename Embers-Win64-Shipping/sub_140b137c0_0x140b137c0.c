// 函数: sub_140b137c0
// 地址: 0x140b137c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    GetCurrentThreadId()

sub_140b365b0(*(*(arg1 + 0x80) + (sx.q(*(arg1 + 0x88)) << 3) - 8))
int64_t rcx_2 = sx.q(*(arg1 + 0x88))
int64_t rax_1 = *(arg1 + 0x80)
void* rbx = *(rax_1 + (rcx_2 << 3) - 8)
*(rax_1 + (rcx_2 << 3) - 8) = 0
int64_t rax_2 = sx.q(*(arg1 + 0x88))
int32_t rsi = (rax_2 - 1).d
void* rcx_4 = *(arg1 + 0x80) + (rax_2 << 3) + -fffffffffffffff8
sub_140b0de30(rcx_4, *rcx_4)
int32_t rax_4 = *(arg1 + 0x88)
int32_t rcx_6 = rax_4 - rsi

if (rcx_6 != 1)
    int64_t r9_1 = *(arg1 + 0x80)
    memmove(r9_1 + (sx.q(rsi) << 3), r9_1 + (rax_2 << 3), (rcx_6 - 1) << 3)
    rax_4 = *(arg1 + 0x88)

*(arg1 + 0x88) = rax_4 - 1
sub_1405c53d0(arg1 + 0x80)
void arg_8
return sub_140b0de30(&arg_8, rbx) __tailcall
