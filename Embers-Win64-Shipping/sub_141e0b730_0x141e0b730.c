// 函数: sub_141e0b730
// 地址: 0x141e0b730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409d9b90(arg1 + 0x288)
*(arg1 + 0x2e0) = 0

if (*(arg1 + 0x2e4) s<= 0xffffffff)
    sub_14083ad30(arg1 + 0x2d8, 0)

int32_t rax = *(arg1 + 0x2f4)
*(arg1 + 0x2f0) = 0

if (rax s< 0 && rax != 0)
    sub_14083ad30(arg1 + 0x2e8, 0)

*(arg1 + 0x440) += 1
int16_t rcx_3 = *(arg1 + 0x440)
int64_t result = data_143de5458
*(arg1 + 0x438) = result

if (rcx_3 == 0xffff)
    *(arg1 + 0x440) = rcx_3 + 1

return result
