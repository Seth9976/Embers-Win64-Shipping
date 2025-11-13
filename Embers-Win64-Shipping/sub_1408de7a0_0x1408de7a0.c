// 函数: sub_1408de7a0
// 地址: 0x1408de7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x68))
int32_t rax = (rsi + 1).d
*(arg1 + 0x68) = rax

if (rax s> *(arg1 + 0x6c))
    sub_1405e3f90(arg1 + 0x60)

sub_1408d9bb0(rsi * 0xa8 + *(arg1 + 0x60), arg2)
int64_t rsi_1 = sx.q(*(arg1 + 0x78))
int32_t rax_1 = (rsi_1 + 1).d
*(arg1 + 0x78) = rax_1

if (rax_1 s> *(arg1 + 0x7c))
    sub_1406105e0(arg1 + 0x70)

*(*(arg1 + 0x70) + (rsi_1 << 2)) = arg3.d
*(arg1 + 0x58) += 1
int32_t result = arg2[0xd].d

if (result s> *(arg1 + 0x50))
    *(arg1 + 0x50) = result

return result
