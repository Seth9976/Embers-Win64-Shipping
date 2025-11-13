// 函数: sub_142391c00
// 地址: 0x142391c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f1df90(arg1, arg2)
int32_t i = 0

if (arg1[0x8d].d s> 0)
    int64_t rax_1 = 0
    
    do
        int64_t rcx = arg1[0x8c]
        rax_1 += 0x90
        i += 1
        *(rax_1 + rcx - 0x88) = 0
        *(rax_1 + rcx - 0x90) = 0
    while (i s< arg1[0x8d].d)

return sub_141ee8490(arg1) __tailcall
