// 函数: sub_14063aba0
// 地址: 0x14063aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int32_t arg_8

if (*sub_14062d5f0(arg1 + 0xb0, &arg_8, arg2) == 0xffffffff)
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    return 0

*arg3 = 1
sub_14062d5f0(arg1 + 0xb0, &arg_8, arg2)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_5

if (rax_2.d == 0xffffffff)
    rcx_5 = nullptr
else
    rcx_5 = (rax_2 << 5) + *(arg1 + 0xb0)

int64_t result = *(rcx_5 + 0x10)
int64_t rcx_6 = *arg2

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return result
