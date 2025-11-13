// 函数: sub_142607480
// 地址: 0x142607480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143b50290(0x2b28, 0)

if (result == 0)
    return result

__builtin_memset(result, 0, 0x20)
sub_14261b040(result + 0x20)
*(result + 0x378) = 0
void* rcx_1 = result + 0x388
*(result + 0x380) = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
*(result + 0x3a8) = 0xffffffff
*(result + 0x3ac) = 0
sub_1426023a0(result + 0x3b0, 1)
__builtin_memset(result + 0x6b8, 0, 0x1c)
void* rdi = result + 0x6e0
int64_t i_1 = 0x10
int64_t i

do
    sub_1426023a0(rdi, 1)
    rdi += 0x220
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1426023a0(result + 0x28e0, 1)
*(result + 0x2b00) = 0
*(result + 0x2b10) = 0
*(result + 0x2b18) = 0
*(result + 0x2b20) = 0
*(result + 0x2b22) = 0
*(result + 0x2b04) = 0x3f800000
*(result + 0x2b08) = 0x3f800000
return result
