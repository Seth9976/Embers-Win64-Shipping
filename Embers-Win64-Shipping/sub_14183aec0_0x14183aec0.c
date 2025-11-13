// 函数: sub_14183aec0
// 地址: 0x14183aec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if (*sub_140cba0f0(&arg1[0x4a], &arg_8, arg2) != 0xffffffff)
    sub_140cba0f0(&arg1[0x4a], &arg_8, arg2)
    int64_t rax_1 = sx.q(arg_8)
    
    if (rax_1.d == 0xffffffff)
        return *(*0x10 + 0x38)
    
    return *(*((rax_1 << 5) + arg1[0x4a] + 0x10) + 0x38)

if (*(arg1 + 0xc) == 0)
    return 0x100000

sub_140cba0f0(&arg1[0x2c], &arg_8, arg2)
int64_t rax_6 = sx.q(arg_8)
void* const rdx_8

if (rax_6.d == 0xffffffff)
    rdx_8 = nullptr
else
    rdx_8 = (rax_6 << 5) + arg1[0x2c]

*(rdx_8 + 0x10)
jump(*(*arg1 + 0xa0))
