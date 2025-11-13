// 函数: sub_1408b99e0
// 地址: 0x1408b99e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 4
int32_t* rax = arg1 + 0x30
int64_t i

do
    __builtin_memset(&rax[-0xa], 0, 0x28)
    *rax = 0
    rax[1] = 0x80
    rax[2] = 0xffffffff
    rax[3] = 0
    *(rax + 0x18) = 0
    rax[8] = 0
    *(rax + 0x28) = 0
    *(rax + 0x30) = 0
    rax[0xe] = 0x7f7fffff
    rax[0xf].w = 0x404
    *(rax - 0x30) = &data_142da7f70
    *(rax + 0x40) = 0
    *(rax + 0x48) = 0
    rax = &rax[0x20]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
