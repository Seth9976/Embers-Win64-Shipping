// 函数: sub_1428777f0
// 地址: 0x1428777f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* r9 = *(arg1 + 0xb0)
*(r9 + 0x10c) = *(r9 + 0x10e)
void* r9_1 = *(arg1 + 0xb0)

if (arg3 != 0x101)
    *(r9_1 + 0x10e) += 1
    void* rcx_1 = *(arg1 + 0xb0)
    int16_t rax_4 = *(rcx_1 + 0x10c)
    *(rcx_1 + 0x138) = arg3.b
    *(rcx_1 + 0x140) = 0
    *(rcx_1 + 0x150) = 0
    *(rcx_1 + 0x158) = 0
    *(rcx_1 + 0x148) = rax_4
    void arg_20
    
    if (sub_142873640(arg2, 0xc, &arg_20) != 0 && sub_142873df0(arg2) != 0)
        return 1
else
    int16_t rax_1 = *(r9_1 + 0x10c)
    *(r9_1 + 0x140) = 0
    *(r9_1 + 0x150) = 0
    *(r9_1 + 0x158) = 0
    *(r9_1 + 0x138) = 1
    *(r9_1 + 0x148) = rax_1
    
    if (sub_142873b60(arg2, 1, 1) != 0)
        return 1

return 0
