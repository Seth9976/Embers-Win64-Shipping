// 函数: sub_142902e10
// 地址: 0x142902e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = *(arg1 + 0xe0)

if (rax != 0)
    *(rax + arg1 + 0xd0) = 1
    
    if (rax + 1 u< 0x10)
        __builtin_memset(&arg1[0x34] + rax + 1, 0, 0x10 - (rax + 1))
    
    sub_142903110(arg1, &arg1[0x34], 0x10, 0)

sub_142903430(arg1, arg2, &arg1[0x30])
return sub_1428b8960(arg1, 0xf8) __tailcall
