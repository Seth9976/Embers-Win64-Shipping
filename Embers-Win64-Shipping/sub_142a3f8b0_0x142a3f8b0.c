// 函数: sub_142a3f8b0
// 地址: 0x142a3f8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xc] = 0
int32_t rdi_1 = neg.d(arg2.d)
int64_t* rcx = *(arg3 + 0x58)

if (rdi_1 s< 0)
    sub_142a43f80(rcx, 1)
else
    j_sub_142a44ce0(rcx, 1)

int64_t rcx_1 = sx.q(rdi_1)
*(arg3 + 0x20) += (rcx_1 s>> 0x3f & 0xfffffffffffffffe) + 1
int64_t rax_4 = *(arg3 + 0x20)

if (rax_4 u> *(arg3 + 0x28))
    *(arg3 + 0x28) = rax_4

*(arg3 + 0x30) += rcx_1
int64_t rax_5 = *(arg3 + 0x30)

if (rax_5 u> *(arg3 + 0x38))
    *(arg3 + 0x38) = rax_5

return sub_142a41760(arg1, arg2, *arg1, *(arg3 + 0x58)) __tailcall
