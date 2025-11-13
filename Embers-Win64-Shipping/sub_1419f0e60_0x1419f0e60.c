// 函数: sub_1419f0e60
// 地址: 0x1419f0e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t r8_1 = *(arg2 + 0x40c)
int32_t rax_1 = *(arg2 + 0x408)
int32_t r9_1 = *(arg2 + 0x410)
int32_t arg_10 = rax_1
int32_t arg_14 = r8_1
int64_t arg_18 = arg_10.q
arg_18.d = divs.dp.d(sx.q(rax_1), r9_1)
arg_18:4.d = divs.dp.d(sx.q(arg_18:4.d), r9_1)
sub_1419eda60(arg1 + 0x70, &arg_10, arg_18)
int64_t rax_7 = sx.q(arg_10)
void* rax_9

if (rax_7.d != 0xffffffff)
    rax_9 = *(arg1 + 0x70) + rax_7 * 0x18

int64_t rax_10

if (rax_7.d == 0xffffffff || rax_9 == 0)
    rax_10 = 0
else
    rax_10 = *(rax_9 + 8)

if (rax_10 == arg2)
    sub_1419eff80(arg1 + 0x70, arg_18)

sub_1409740e0(arg1 + 0x120, arg2)
sub_1409740e0(arg1 + 0x170, arg2)
