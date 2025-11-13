// 函数: sub_140bd4460
// 地址: 0x140bd4460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0
void* rax = sub_140cde0b0()
void* result = sub_140d2d830(sub_140bdfc70(), rax, 0, 0x510, 0, 0, nullptr)

if (result == 0)
    return 0

sub_140cd40d0(result)
void* rcx_3 = result + 0x40
*result = &data_142e88ae0
*(result + 0x30) = 0
*(result + 0x38) = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = result + 0x90
*(result + 0x60) = 0xffffffff
*(result + 0x64) = 0
*(result + 0x70) = 0
*(result + 0x78) = 0
*(result + 0x80) = 0
*(result + 0x88) = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_3 = *(rcx_4 + 0x10)

if (rax_3 != 0)
    rcx_4 = rax_3

*rcx_4 = 0
*(rcx_4 + 8) = 0
*(result + 0xb0) = 0xffffffff
*(result + 0xb4) = 0
*(result + 0xc0) = 0
*(result + 0xc8) = 0
*(result + 0xd0) = 0
*(result + 0xd8) = 0
return result
