// 函数: sub_1421afe60
// 地址: 0x1421afe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = zx.o(0)
sub_141fe5610(arg1 + 0x30, zmm1, 0, nullptr)
int32_t arg_8
void arg_10
sub_141fe3550(arg1 + 0x30, &arg_10, &arg_8)
*(arg2 + 0x39c) = arg_8
int64_t rbx = sx.q(*(arg2 + 0x20))
int32_t rax = (rbx + 1).d
*(arg2 + 0x20) = rax

if (rax s> *(arg2 + 0x24))
    sub_1405a4d70(arg2 + 0x18)

int64_t result = *(arg2 + 0x18)
*(result + (rbx << 3)) = arg1
return result
