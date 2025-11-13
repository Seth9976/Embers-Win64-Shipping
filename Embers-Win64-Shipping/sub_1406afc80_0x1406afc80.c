// 函数: sub_1406afc80
// 地址: 0x1406afc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg3)
    return arg4

int64_t* rax = arg4 - arg2
void* rcx = arg2 + 0x18

do
    *(rax + rcx - 8) = 0
    *(rax + rcx) = 0
    int128_t zmm0 = *(rcx - 0x18)
    rcx += 0x20
    *arg4 = zmm0
    arg4[1] = *(rcx - 0x28)
    *(rcx - 0x28) = 0
    arg4 = &arg4[2]
    *(rcx - 0x20) = 0xf
    *(rcx - 0x38) = 0
while (rcx - 0x18 != arg3)

return arg4
