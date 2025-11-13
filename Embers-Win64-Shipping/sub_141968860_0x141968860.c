// 函数: sub_141968860
// 地址: 0x141968860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3[1].d)
int64_t rbx = 0
int64_t rbp = *arg3
*arg2 = 0
arg2[1].d = rsi.d
int32_t rax

if (rsi.d != 0)
    sub_1405c4a00(arg2, rsi.d, 0)
    memcpy(*arg2, rbp, (rsi << 3).d)
    rax = arg2[1].d
else
    *(arg2 + 0xc) = 0
    rax = 0

int64_t* rcx_2 = *arg2
uint64_t rdx_3 = sx.q(rax) << 3 u>> 3

if (rcx_2 u> &rcx_2[sx.q(rax)])
    rdx_3 = 0

if (rdx_3 != 0)
    do
        void* rax_3 = *rcx_2
        *(rax_3 + 8) += 1
        rbx += 1
        rcx_2 = &rcx_2[1]
    while (rbx != rdx_3)

return arg2
