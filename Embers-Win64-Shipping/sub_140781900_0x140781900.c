// 函数: sub_140781900
// 地址: 0x140781900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*arg1 + 0xc8) = arg1[1].d
*(*arg1 + 0xcc) = *(arg1 + 0xc)
*(*arg1 + 0xd0) = arg1[2].d
*(*arg1 + 0xd4) = *(arg1 + 0x14)
void* rbx = *arg1
*(rbx + 0xe8) = 0
sub_1405d16e0(rbx + 0xd8, nullptr)
sub_1405d16e0(rbx + 0xe0, nullptr)
sub_14076dc30(*arg1 + 0xd8, 4, arg1[4].d, 0xd, 1, 0)
int64_t* rcx_4 = data_143f0f180
int32_t count = arg1[4].d << 2
memcpy((*(*rcx_4 + 0x130))(rcx_4, &data_143f02b98, *(*arg1 + 0xd8), 0, count, 1), arg1[3], count)
*(*arg1 + 0xd8)
jump(*(*data_143f0f180 + 0x138))
