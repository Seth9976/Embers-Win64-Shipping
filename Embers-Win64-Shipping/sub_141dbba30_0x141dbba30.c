// 函数: sub_141dbba30
// 地址: 0x141dbba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
void* result = (*(*rcx + 0x150))(rcx)
*(result + 0x11c) ^= ((*arg1[1] * 2) ^ *(result + 0x11c)) & 2
return result
