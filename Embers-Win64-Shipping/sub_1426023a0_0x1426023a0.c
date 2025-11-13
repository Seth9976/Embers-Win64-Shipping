// 函数: sub_1426023a0
// 地址: 0x1426023a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14344d6a0
arg1[0x41].d = 0x3f7fbe77
void* rax = &arg1[1]
*(arg1 + 0x20c) = 0x3f800000
arg1[0x42].d = 0xffff
*(arg1 + 0x214) = 0
int64_t i_1 = 4
int64_t i

do
    __builtin_memcpy(rax, 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x"
    "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80"
    "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x40)
    rax += 0x40
    i = i_1
    i_1 -= 1
while (i != 1)
memset(&arg1[0x21], 0, 0x100)
arg1[0x43].b = arg2
return arg1
