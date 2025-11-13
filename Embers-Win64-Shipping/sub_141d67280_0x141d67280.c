// 函数: sub_141d67280
// 地址: 0x141d67280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
int64_t rsi = sx.q(*(rax_1 + 0x90))
int32_t rdx = (rsi + 1).d
*(rax_1 + 0x90) = rdx

if (rdx s> *(rax_1 + 0x94))
    sub_1405a4d70(rax_1 + 0x88)

*(*(rax_1 + 0x88) + (rsi << 3)) = arg1
sub_141dbb100(arg1)
int64_t result
uint128_t zmm0
result, zmm0 = sub_141d6a470(arg1)

if ((arg1[0x46].b & 1) == 0)
    return result

return sub_141a5b2f0(arg1[0x49], zmm0)
