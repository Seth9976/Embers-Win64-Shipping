// 函数: sub_14281c994
// 地址: 0x14281c994
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
char* result = arg1
*result = 0
*(result + 4) = 0xffffffff
*(result + 8) = 0xffffffff
*(result + 0xc) = 0xffffffff
*(result + 0x10) = 1
*(result + 0x28) = 0
*(result + 0x30) = 0xf
result[0x18] = 0
*(result + 0x38) = 0
*(result + 0x50) = 0
*(result + 0x58) = 0xf
result[0x40] = 0
__builtin_memset(&result[0x60], 0, 0x48)
int64_t* rax = sub_14058b9f0(0x20)
arg_8 = rax
sub_142714680(rax, &arg_8)
sub_142714680(&rax[1], &arg_8)
*(result + 0x98) = rax
return result
