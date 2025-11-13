// 函数: sub_140b4c1f0
// 地址: 0x140b4c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
*arg1 = &data_142e78988
__builtin_memset(&arg1[2], 0, 0x18)
arg1[9].d = 0
*(arg1 + 0x4c) = 0
arg1[0xa].d = 0
arg1[0xc] = 0
arg1[1] = &arg1[2]
sub_140b4e510(arg1, arg2)
arg1[0x10] = 0
sub_140b553f0(arg1, *(arg2 + 0x80), *(arg2 + 0x78))
*(arg1 + 0x2b) &= 0xfd
arg1[0x11].b = *(arg2 + 0x88)

if (*(arg2 + 0x60) != 0)
    int64_t* rax_2 = j_sub_140a82f30(0x10)
    
    if (rax_2 != 0)
        rdi = sub_140b4c5b0(rax_2, *(arg2 + 0x60))

arg1[0xc] = rdi
return arg1
