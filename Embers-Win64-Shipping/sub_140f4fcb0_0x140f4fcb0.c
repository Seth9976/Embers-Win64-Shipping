// 函数: sub_140f4fcb0
// 地址: 0x140f4fcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143e29f28
void* rax

if (rcx == 0)
    rax.b = 0
else if (sub_140e66040(rcx) f> *(arg1 + 0x3c4))
    rax.b = 0
else
    void* rcx_1 = *(*(arg1 + 0x3a8) + 0x4f8)
    
    if (0.999899983f f> *(rcx_1 + 0x2d4) || *(rcx_1 + 0x2dc) != 0)
        rax.b = 1
    else
        rax.b = 0

if (rax.b != 0)
    *arg2 = 1
    __builtin_memset(&arg2[8], 0, 0x34)
    return arg2

*arg2 = 0
__builtin_memset(&arg2[8], 0, 0x30)
*(arg2 + 0x38) = 1
return arg2
