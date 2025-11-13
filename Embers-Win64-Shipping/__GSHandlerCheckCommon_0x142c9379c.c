// 函数: __GSHandlerCheckCommon
// 地址: 0x142c9379c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1
int64_t r10 = arg1

if ((*arg3 & 4) != 0)
    r10 = (sx.q(arg3[1]) + arg1) & sx.q(neg.d(arg3[2]))

uint64_t rcx_1 = zx.q(*(*(arg2 + 0x10) + 8))
int64_t rax_5 = *(arg2 + 8)

if ((*(rcx_1 + rax_5 + 3) & 0xf) != 0)
    r9 += zx.q(*(rcx_1 + rax_5 + 3)) & 0xfffffff0

return __security_check_cookie(r9 ^ *(sx.q(*arg3 & 0xfffffff8) + r10)) __tailcall
