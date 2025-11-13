// 函数: sub_1411e84d0
// 地址: 0x1411e84d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rbx_2 = zx.q(r8 s/ 3)
int32_t rbx_3 = rbx_2.d & 0x80000003

if (rbx_3 s< 0)
    rbx_3 = ((rbx_3 - 1) | 0xfffffffc) + 1

sub_1410b3fe0(arg2, u"PERMUTATION_VENDOR", zx.q(r8 - (rbx_2 * 3).d))
return sub_1410b3fe0(arg2, u"PERMUTATION_VELOCITY", zx.q(rbx_3)) __tailcall
