// 函数: sub_1429da260
// 地址: 0x1429da260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1429dcc20()
sub_1429dd6c0()
int64_t xcr0
sub_1429dd720(xcr0)

if (*(arg1 + 0x30) == 0)
    if (sub_1429daec0(arg1) != 0)
        return 2
    
    void* rcx_1 = *(arg1 + 0x30)
    int32_t rax_4 = *(rcx_1 + 8) & 0x40000
    *(rcx_1 + 0x2b4) = 0
    *(rcx_1 + 0x2b0) = rax_4

return 0
