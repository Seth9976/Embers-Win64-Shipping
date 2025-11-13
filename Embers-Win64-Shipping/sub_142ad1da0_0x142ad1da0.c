// 函数: sub_142ad1da0
// 地址: 0x142ad1da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a72b80(arg1, arg2, arg3)
int32_t rdi = *(arg1 + 0x58)
int32_t rax = sub_142b53fa0(data_144016670, rdi, *(arg1 + 0x14) + 1, *(arg1 + 0x20), arg3)
int64_t* rcx_1 = data_144016670
*(arg1 + 0xc) = rax
*(arg1 + 0x80) = 1
*(arg1 + 0x68) = 1
int32_t result = sub_142b540f0(rcx_1, rax, arg3)
*(arg1 + 0x84) = 1
*(arg1 + 0x10) = rdi - result + 1
*(arg1 + 0x69) = 1
return result
