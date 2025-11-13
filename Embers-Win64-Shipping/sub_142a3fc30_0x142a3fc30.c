// 函数: sub_142a3fc30
// 地址: 0x142a3fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)
int64_t* rcx = *(arg2 + 0x58)

if (rdi.d s< 0)
    sub_142a43f80(rcx, 1)
else
    j_sub_142a44ce0(rcx, 1)

*(arg2 + 0x20) += (rdi s>> 0x3f & 0xfffffffffffffffe) + 1
int64_t rax_4 = *(arg2 + 0x20)

if (rax_4 u> *(arg2 + 0x28))
    *(arg2 + 0x28) = rax_4

*(arg2 + 0x30) += rdi
int64_t result = *(arg2 + 0x30)

if (result u> *(arg2 + 0x38))
    *(arg2 + 0x38) = result

return result
