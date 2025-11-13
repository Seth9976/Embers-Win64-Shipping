// 函数: sub_140f5b590
// 地址: 0x140f5b590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (*(arg1 + 0x2c8) != 0)
    return 

int64_t rsi_1 = rdi << 3
int64_t* rcx = *(rsi_1 + *(arg1 + 0x2b8))

if (rcx != 0)
    (**rcx)(rcx, 1)

int32_t rcx_2 = *(arg1 + 0x2c0)
int32_t rax_4 = rcx_2 - rdi.d

if (rax_4 != 1)
    int64_t r9_1 = *(arg1 + 0x2b8)
    memmove(r9_1 + rsi_1, r9_1 + (sx.q((rdi + 1).d) << 3), (rax_4 - 1) << 3)
    rcx_2 = *(arg1 + 0x2c0)

*(arg1 + 0x2c0) = rcx_2 - 1
sub_1405c53d0(arg1 + 0x2b8)
