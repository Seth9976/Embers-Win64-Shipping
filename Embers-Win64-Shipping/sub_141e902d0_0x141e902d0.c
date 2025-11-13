// 函数: sub_141e902d0
// 地址: 0x141e902d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = arg1
*arg1 = 0
arg1[1] = 0
arg1[4] = 0
arg1[5].d = 0
*(arg1 + 0x2c) = 0x80
void* rax = arg1[4]
void* rcx = &arg1[2]

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
sub_140d3a3a0(&result[6], nullptr)
sub_140d3a3a0(&result[7], nullptr)
sub_140d3a3a0(&result[8], nullptr)
__builtin_memset(&result[9], 0, 0xab)
void* rcx_4 = &result[0x21]
result[0x1f] = 0
result[0x20] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_1 = *(rcx_4 + 0x10)

if (rax_1 != 0)
    rcx_4 = rax_1

*rcx_4 = 0
*(rcx_4 + 8) = 0
result[0x25].d = 0xffffffff
*(result + 0x12c) = 0
result[0x27] = 0
result[0x28].d = 0
result[1].d = 0

if (*(result + 0xc) != 0)
    sub_1405947f0(result, 0)

sub_14059a8e0(&result[2], 0)
result[0xb].d = 0

if (*(result + 0x5c) != 0)
    sub_1405dadb0(&result[0xa], 0)

result[0xd].d = 0

if (*(result + 0x6c) != 0)
    sub_1405dadb0(&result[0xc], 0)

return result
