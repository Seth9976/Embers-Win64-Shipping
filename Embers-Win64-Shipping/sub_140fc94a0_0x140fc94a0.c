// 函数: sub_140fc94a0
// 地址: 0x140fc94a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x60)

if (result == 0)
    return 0

int64_t* rcx = &result[4]
*result = &data_142ef1978
__builtin_memset(&result[1], 0, 0x18)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
result[8].d = 0xffffffff
*(result + 0x44) = 0
result[0xa] = 0
result[0xb].d = 0
return result
