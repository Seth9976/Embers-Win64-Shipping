// 函数: sub_141eaea10
// 地址: 0x141eaea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142226170(arg1)
void* rcx = arg1[0x51]

if (rcx != 0)
    (*(*(rcx + 0x140) + 0x48))(rcx + 0x140)
    int64_t* rcx_3 = arg1[0x51] + 0x140
    (*(*rcx_3 + 0x50))(rcx_3)

void* result = arg1[0x50]

if (result != 0)
    *(result + 0x71c) &= 0xf7

return result
