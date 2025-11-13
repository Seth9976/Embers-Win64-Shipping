// 函数: sub_1426e2960
// 地址: 0x1426e2960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee7360(arg1)
int64_t* rdi = *(arg1 + 0xa0)

if (rdi == 0)
    return 

int64_t rax_1 = sub_14272e4a0()
int64_t r8_1 = *rdi
void* rax = (*(r8_1 + 0x610))(rdi, rax_1, r8_1)
*(arg1 + 0xb8) = rax

if (rax != 0)
    sub_1426aa730(rax, arg1)
