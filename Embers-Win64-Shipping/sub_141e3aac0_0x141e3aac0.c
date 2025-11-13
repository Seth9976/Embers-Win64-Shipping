// 函数: sub_141e3aac0
// 地址: 0x141e3aac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg3 == 0 && arg4 == 0)
    return 

int64_t* rcx = *(arg1 + 0x240)

if (rcx == 0 || sub_141e5c500(rcx, &arg_10) == 0)
    return 

void* rdi_1 = *(arg1 + 0x240)
void* rdx_2

if (rdi_1 == 0)
    rdx_2 = nullptr
else
    int64_t rax_1 = arg_10
    int64_t var_10 = rax_1
    rdx_2 = sub_141e35a40(rdi_1 + 0x20, sub_140b5ead0(rax_1.d) + rax_1:4.d, &var_10)

char rcx_3 = *rdx_2
char r9 = *(rdx_2 + 1)
char rax = rcx_3 | arg3
*rdx_2 = rax
char r8_1 = r9 | arg4
*(rdx_2 + 1) = r8_1

if (rcx_3 != rax || r9 != r8_1)
    sub_140d25500(arg1)
