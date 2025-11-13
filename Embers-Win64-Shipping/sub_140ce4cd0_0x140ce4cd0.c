// 函数: sub_140ce4cd0
// 地址: 0x140ce4cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg3)
int64_t rcx = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rcx = rdi + 0x10 + ((rdi * 3) u>> 3)

uint64_t result = divu.dp.q(0:(sub_140a846a0(rcx * rsi, 0)), rsi)

if (rdi.d s> result.d)
    result = 0x7fffffff

int64_t rcx_3 = *arg1
*(arg1 + 0xc) = result.d

if (rcx_3 != 0 || result.d != 0)
    result = sub_140a84c80(rcx_3, sx.q(result.d) * rsi, 0)
    *arg1 = result

return result
