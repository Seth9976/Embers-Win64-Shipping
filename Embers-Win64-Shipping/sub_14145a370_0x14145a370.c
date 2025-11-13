// 函数: sub_14145a370
// 地址: 0x14145a370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
int32_t rbx_3 = (r8 s/ 7) & 0x80000003

if (rbx_3 s< 0)
    rbx_3 = ((rbx_3 - 1) | 0xfffffffc) + 1

sub_1410b3fe0(arg2, u"DIM_SIGNAL_PROCESSING", zx.q(r8 s% 7))
return sub_1410b3fe0(arg2, u"DIM_SIGNAL_BATCH_SIZE", zx.q(rbx_3 + 1)) __tailcall
