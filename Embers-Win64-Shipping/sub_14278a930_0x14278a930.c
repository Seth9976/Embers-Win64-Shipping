// 函数: sub_14278a930
// 地址: 0x14278a930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dbb100(arg1)
void* rdx = arg1[0x55]
*(rdx + 0x74c) ^= (zx.d(arg1[0x47].b) ^ *(rdx + 0x74c)) & 1
void* result = arg1[0x55]
*(result + 0x74c) |= 2
return result
