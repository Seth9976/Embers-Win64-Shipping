// 函数: sub_141b60370
// 地址: 0x141b60370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0xb8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0xb8) + rax * 0x18

int64_t* result = rcx_1 + 8

if (rcx_1 == 0)
    result = nullptr

if (result == 0)
    return result

void* rdi = *result

if (*(rdi + 0x50) == 0)
    char rax_2 = sub_140e1abc0()
    int64_t* rcx_3 = data_143f0f180
    (*(*rcx_3 + 0x3b0))(rcx_3, &arg_8, *(rdi + 0x90), zx.q(*(rdi + 0x98)), *(rdi + 0x9c), rax_2, 
        *(rdi + 0xac))
    sub_1405d1600(rdi + 0x50, &arg_8)
    sub_1405d1550(&arg_8)

return rdi + 0x50
