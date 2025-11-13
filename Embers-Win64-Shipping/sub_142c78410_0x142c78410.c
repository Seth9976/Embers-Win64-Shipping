// 函数: sub_142c78410
// 地址: 0x142c78410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t rdi_1 = *(rax + 0xd8) - *(rax + 0xf8)
void* r8 = *(rax + 0x250)
int64_t r9 = *(rax + 0x178)

if (rdi_1 s>= 0x7fff)
    rdi_1 = 0x7fff

__builtin_memset(rax + 0xa88, 0, 0x44)
*(rax + 0xaac) = 0xff0e
int16_t rax_1 = *(r8 + 0x1a)
r8.b = 0x2f
*(rax + 0xab1) = rax_1
*(rax + 0xab3) = r9.d
*(rax + 0xac3) = 0x40
*(rax + 0xac5) = (r9 s>> 0x20).d
*(rax + 0xac9) = (rdi_1 + 1).w
*(rax + 0xac1) = rdi_1.w
sub_142c77770(arg1, rax + 0xa88, r8.b, rdi_1.w + 0x20)
int64_t arg_8
int64_t* var_18 = &arg_8
int32_t result = sub_142c64d60(arg1, 0, arg2, *arg1 + 0xa88)

if (result != 0)
    return result

int64_t rax_3 = arg_8

if (rax_3 != 0x44)
    arg1[0xda] = 0x44
    arg1[0xdb] = rax_3

arg1[0xd9] = rdi_1
return 0
