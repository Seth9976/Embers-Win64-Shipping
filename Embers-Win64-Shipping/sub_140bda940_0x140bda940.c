// 函数: sub_140bda940
// 地址: 0x140bda940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d1e490(arg1, arg2, arg3, arg4)
int64_t result_1
sub_140b58260(&result_1, *(arg1 + 0xe8), 1)
void* rcx_1 = *(arg1 + 0x40)
int64_t result = result_1
*(arg1 + 0xe8) = result

if (rcx_1 != 0)
    *(arg1 + 0xcc) |= *(rcx_1 + 0xcc) & 0x4aa1060e
    result = *(rcx_1 + 0xd0)
    *(arg1 + 0xd0) |= result

return result
