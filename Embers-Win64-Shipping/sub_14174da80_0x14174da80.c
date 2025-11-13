// 函数: sub_14174da80
// 地址: 0x14174da80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rsi = rdi << 3
int64_t* rcx = *(rsi + *(arg1 + 8))

if (rcx != 0)
    (**rcx)(rcx, 1)

int32_t rcx_3 = *(arg1 + 0x10)
int32_t rax_4 = rcx_3 - rdi.d - 1

if (rax_4 s>= 1)
    rax_4 = 1

if (rax_4 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + rsi, r9_1 + (sx.q(rcx_3 - rax_4) << 3), rax_4 << 3)
    rcx_3 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_3 - 1
return sub_1405c53d0(arg1 + 8) __tailcall
