// 函数: sub_1418f5e60
// 地址: 0x1418f5e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418f8550(arg1)
int64_t* rcx = *arg2
void* rax_1 = (*(*rcx + 0x48))(rcx)
int32_t result = sub_1418f81f0(arg1 + 8)
*(arg1 + 0x18) = *(rax_1 + 0x18)
*(arg1 + 0x80) = *(rax_1 + 0x80)
int64_t* rdx_2 = *(arg1 + 0x98)
*(arg1 + 0x88) = *(rax_1 + 0x88)
*(arg1 + 0x90) = *(rax_1 + 0x90)

if (rdx_2 != arg1 + 0x80)
    *rdx_2 = **(rax_1 + 0x98)
    *(*(arg1 + 0x98) + 8) = *(*(rax_1 + 0x98) + 8)
    result = *(*(rax_1 + 0x98) + 0x10)
    *(*(arg1 + 0x98) + 0x10) = result

return result
