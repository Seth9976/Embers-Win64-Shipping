// 函数: sub_14108afb0
// 地址: 0x14108afb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
*arg1 = &data_142f12438
arg1[2] = 0
void* rax = &arg1[6]
arg1[3].d = 0
int64_t i_1 = 2
arg1[4] = 0
arg1[5].d = 0
int64_t i

do
    *rax = 1
    __builtin_memset(rax + 8, 0, 0x18)
    *(rax + 0x20) = 1
    *(rax + 0x28) = 1
    *(rax + 0x2c) = 0
    *(rax + 0x34) = 0
    *(rax + 0x38) = 0
    *(rax + 0x40) = u"UnknownTexture"
    *(rax + 0x48) = 1
    *(rax + 0x4a) = 0
    *(rax + 0x50) = 0
    *(rax + 0x58) = 0
    rax += 0x60
    i = i_1
    i_1 -= 1
while (i != 1)
__builtin_memset(&arg1[0x1e], 0, 0x60)
return arg1
