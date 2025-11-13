// 函数: sub_142745720
// 地址: 0x142745720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x68)

if (result == 0)
    return 0

int64_t* rcx = &result[5]
__builtin_memset(&result[5], 0, 0x40)
*result = &data_143497e78
__builtin_memset(&result[1], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
result[9].d = 0xffffffff
*(result + 0x4c) = 0
result[0xb] = 0
result[0xc].d = 0
return result
