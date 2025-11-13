// 函数: sub_141441080
// 地址: 0x141441080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 4
void* rax = arg1 + 4
int64_t i

do
    *(rax - 4) = 1
    __builtin_memset(rax + 4, 0, 0x18)
    *(rax + 0x1c) = 1
    *(rax + 0x24) = 1
    *(rax + 0x28) = 0
    *(rax + 0x30) = 0
    *(rax + 0x34) = 0
    *(rax + 0x3c) = u"UnknownTexture"
    *(rax + 0x44) = 1
    *(rax + 0x46) = 0
    rax += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
