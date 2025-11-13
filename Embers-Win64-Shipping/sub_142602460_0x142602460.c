// 函数: sub_142602460
// 地址: 0x142602460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x200) = 0x3f7fbe77
*(arg1 + 0x204) = 0x3f800000
void* rax = arg1
*(arg1 + 0x208) = 0xffff
int64_t i_1 = 4
*(arg1 + 0x20c) = 0
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
memset(arg1 + 0x100, i_1.d, 0x100)
return arg1
