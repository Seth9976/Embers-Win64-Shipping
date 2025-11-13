// 函数: sub_1425f75a0
// 地址: 0x1425f75a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x278)

if (result == 0)
    return 0

sub_141c47bb0(result)
*result = &data_14344b6d8
result[1] = &data_14344b818
result[2] = &data_14344b828
__builtin_memset(&result[0x3d], 0, 0x14)
__builtin_memset(&result[0x40], 0, 0x18)
result[0x43] = &data_14344b698
InitializeCriticalSection(&result[0x44])
SetCriticalSectionSpinCount(&result[0x44], 0xfa0)
__builtin_memset(&result[0x49], 0, 0x20)
*(result + 0x274) &= 0xfffffffc
result[0x4d] = 0
result[0x4e].d = 0
sub_140b65b00()
int64_t arg_10 = 0
void arg_18
result[0x3d] = *sub_1425f8980(&arg_18, 0)
return result
