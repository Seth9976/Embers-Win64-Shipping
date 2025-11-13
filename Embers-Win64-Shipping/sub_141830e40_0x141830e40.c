// 函数: sub_141830e40
// 地址: 0x141830e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x58)

if (result == 0)
    return 0

int64_t* rcx = &result[3]
__builtin_memset(&result[3], 0, 0x40)
*result = &data_142fe54e8
result[1] = 0
result[2] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
result[7].d = 0xffffffff
*(result + 0x3c) = 0
result[9] = 0
result[0xa].d = 0
return result
