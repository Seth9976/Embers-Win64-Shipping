// 函数: sub_14081d830
// 地址: 0x14081d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1 * arg3
int32_t rax = 8
int64_t r14 = sx.q(rcx)

if (rcx s>= 0x10)
    rax = 0x10

if (rax s>= arg4)
    arg4 = rax

int64_t rsi = sx.q(arg4)
int64_t rdi_1 = not.q(rsi - 1)
int64_t result = (*arg2 - 1 + rsi) & rdi_1
int64_t rdx = r14 + result

if (rdx u> arg2[1])
    sub_140b0e3d0(arg2, rcx + arg4)
    result = (*arg2 - 1 + rsi) & rdi_1
    *arg2 = r14 + result
else
    *arg2 = rdx

return result
