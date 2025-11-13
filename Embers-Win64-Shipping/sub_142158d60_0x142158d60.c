// 函数: sub_142158d60
// 地址: 0x142158d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0
void* rax = sub_140cde0b0()
void* result = sub_140d2d830(sub_142149b40(), rax, 0, 0x510, 0, 0, nullptr)

if (result == 0)
    return nullptr

sub_140cd40d0(result)
void* rcx_3 = result + 0x98
*result = &data_1432dae98
__builtin_memset(result + 0x28, 0, 0x70)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
*(result + 0xb8) = 0xffffffff
*(result + 0xbc) = 0
*(result + 0xc8) = 0
*(result + 0xd0) = 0
*(result + 0xd8) = 0
*(result + 0xe0) = 0
*(result + 0xe8) = 0
sub_1422b4e50(result + 0xf0)
sub_142287b50(result + 0x178)
sub_1422877b0(result + 0x1b8)
*(result + 0x1f8) = result
*(result + 0x208) = 0
*(result + 0x218) = 0
*(result + 0x220) = 0
*(result + 0x228) = 0
return result
