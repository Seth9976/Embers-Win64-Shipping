// 函数: sub_140977f00
// 地址: 0x140977f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x250)

if (rdi == 0)
    return 

void* rax_1 = sub_140985db0()
void* r9_1 = rdi[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

*(arg1 + 0x2f0) = *arg3
sub_14094ded0(arg1 + 0x2f8, &arg3[2])
sub_14094d8f0(arg1 + 0x320, &arg3[0xc])
sub_14094d8f0(arg1 + 0x330, &arg3[0x10])
*(arg1 + 0x340) = 6
(*(*rdi + 0x6e8))(rdi, arg1, arg2, arg3, 1)
