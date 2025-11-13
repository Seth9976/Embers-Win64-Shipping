// 函数: sub_141ac20c0
// 地址: 0x141ac20c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea5640(arg1 + 0xc8, arg2)
sub_141ea5640(arg1 + 0xd8, arg2)
sub_141ab4860(arg1, arg2[9])
int64_t result = sx.q(*(arg1 + 0x238))
int32_t* i = *(arg1 + 0x230)

for (void* rdi_1 = &i[result * 5]; i != rdi_1; i = &i[5])
    result = sub_141ea5640(i, arg2)

return result
