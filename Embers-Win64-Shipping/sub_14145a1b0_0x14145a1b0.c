// 函数: sub_14145a1b0
// 地址: 0x14145a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8 s/ 7)
int32_t rdx_5 = temp2 & 3
int32_t rax_2 = temp3 + rdx_5
sub_1410b3fe0(arg2, u"DIM_SIGNAL_PROCESSING", zx.q(r8 s% 7))
sub_1410b3fe0(arg2, u"DIM_SIGNAL_BATCH_SIZE", zx.q((rax_2 & 3) - rdx_5 + 1))
int32_t rdi_2 = rax_2 s>> 2 & 0x80000001

if (rdi_2 s< 0)
    rdi_2 = ((rdi_2 - 1) | 0xfffffffe) + 1

int64_t r8_3
r8_3.b = rdi_2 == 1
return sub_1405d3490(arg2 + 0x2a8, u"DIM_MULTI_SPP", r8_3) __tailcall
