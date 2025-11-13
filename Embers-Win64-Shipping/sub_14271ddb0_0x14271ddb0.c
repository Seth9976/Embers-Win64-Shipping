// 函数: sub_14271ddb0
// 地址: 0x14271ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee7360(arg1)
int512_t zmm1
zmm1.o = arg1[0x1e].d
(*(*arg1 + 0x3f8))(arg1, zmm1)
int32_t result = *(arg1 + 0xc4)

if ((result.b & 1) == 0)
    return result

int64_t rdx
rdx.b = 1
*(arg1 + 0xc4) = result & 0xfffffffe
jump(*(*arg1 + 0x3f0))
