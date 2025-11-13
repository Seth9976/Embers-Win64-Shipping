// 函数: sub_142641250
// 地址: 0x142641250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142642440(arg1, arg2)
arg1[0x22] = arg2[0x22]
*(arg1 + 0x90) = 0
arg1[0x26] = 0

if (&arg2[0x24] != &arg1[0x24] && arg2[0x26] != 0)
    int64_t* rcx_1 = *(arg2 + 0x90)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1)

arg1[0x28].b = arg2[0x28].b
*(arg1 + 0xa8) = *(arg2 + 0xa8)
void* rax_4 = *(arg2 + 0xb0)
*(arg1 + 0xb0) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[0x2e] = arg2[0x2e]
return arg1
