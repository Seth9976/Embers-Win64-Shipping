// 函数: sub_142221760
// 地址: 0x142221760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2
int64_t rbx_1

if ((*(arg1 + 0xf) & 2) == 0)
    arg2.b = 1
    rbx_1 = *(arg1 + 0x1c)
    void* rax_1 = sub_140d3c740(arg1 + 0x60, arg2.b)
    
    if (rax_1 != 0)
        rbx_1 = *(rax_1 + 0x13c)

int64_t result_1

if ((*(arg1 + 0xf) & 2) != 0 || rbx_1 != rdi)
    sub_140d3a3a0(&result_1, nullptr)
    *(arg1 + 0x60) = result_1
    *(arg1 + 0x1c) = rdi
    sub_14221baa0(arg1, 0)
    *(arg1 + 0xf) &= 0xfd

sub_140d3a3a0(&result_1, nullptr)
int64_t result = result_1
*(arg1 + 0x60) = result
return result
