// 函数: sub_141800680
// 地址: 0x141800680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x58)
int32_t arg_8
sub_140865c40(arg1 + 0x88, &arg_8, rbx)
int64_t rax = sx.q(arg_8)
int64_t rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = 0
else
    rcx_1 = *(arg1 + 0x88) + rax * 0x18

uint64_t result = rcx_1 + 8

if (rcx_1 == 0)
    result = 0

if (result == 0)
    return result

sub_142c536b0(data_143ef9d08, rbx)
return sub_140868c90(arg1 + 0x88, rbx)
