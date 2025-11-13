// 函数: sub_140be3760
// 地址: 0x140be3760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140be3800(arg1)
int64_t* rcx = arg1[8]

if (rcx != 0)
    sub_140cd85e0(rcx)

int32_t rdx = *(arg1 + 0xcc)
uint8_t result = (rdx u>> 7).b

if ((result & 1) == 0)
    *(arg1 + 0xcc) = rdx & 0xfffff7ff

return result
