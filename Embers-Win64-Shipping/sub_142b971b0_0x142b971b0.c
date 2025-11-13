// 函数: sub_142b971b0
// 地址: 0x142b971b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0x1000000
sub_142b9a640(&arg_10, arg1)
int64_t rax = sx.q(arg_10:4.d)
int32_t r8 = 1
int64_t r9 = sx.q(arg_10.d)
int64_t rdx_1 = rax
int64_t rcx_1 = r9

if (rax.d s< 0)
    rdx_1 = neg.q(rdx_1)
    r8 = -1

if (r9.d s< 0)
    rcx_1 = neg.q(rcx_1)
    r8 = neg.d(r8)

uint32_t result

if (rcx_1 == 0)
    result = 0x7fffffff
else
    result = (divu.dp.q(0:((rcx_1 u>> 1) + (rdx_1 << 0x10)), rcx_1)).d

if (r8 s>= 0)
    return result

return neg.d(result)
