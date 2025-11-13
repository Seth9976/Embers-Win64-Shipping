// 函数: sub_14093ae00
// 地址: 0x14093ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1408f1b50(arg1 + 0x18, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x18)

int64_t* rbx_1 = rcx_3 + 0x10

if (rcx_3 == 0)
    rbx_1 = nullptr

if (rbx_1 != 0 && *rbx_1 != 0)
    char rax_1
    
    if (arg3 == 0)
        rax_1 = sub_140941b10(rbx_1)
    
    if (arg3 != 0 || rax_1 != 0)
        return sub_14093f850(rbx_1) __tailcall

return 0
