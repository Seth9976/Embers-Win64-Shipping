// 函数: sub_141a584d0
// 地址: 0x141a584d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(sub_141a4b380(arg1, arg2))

if (rdi.d == 0xffffffff)
    int32_t rax
    rax.b = 0
    return rax

int64_t* rcx = arg1[0x8c]
int64_t rdx = *rcx
void* rax_1 = (*(rdx + 0x280))(rcx, rdx)
int64_t r9 = *(rax_1 + 0x110)
int64_t r8_1 = *(rax_1 + 0x108)
int32_t arg_18 = *(*(rax_1 + 0x138) + rdi * 0x18)
int32_t arg_1c = 0
sub_141a58410(arg1, *sub_1408ec700(&arg_18, arg_18.q, r8_1, r9))
int64_t rax_4
rax_4.b = 1
return rax_4
