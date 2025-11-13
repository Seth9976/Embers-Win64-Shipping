// 函数: sub_1429082e0
// 地址: 0x1429082e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0
sub_1428d8e50(arg5)
int64_t* rax = sub_1428d8ba0(arg5)

if (rax != 0)
    int32_t rax_1
    
    if (arg2 != arg3)
        rax_1 = sub_1428d9290(rax, arg2, arg3, arg5)
    else
        rax_1 = sub_14291c760(rax, arg2, arg5)
    
    if (rax_1 != 0 && sub_1429084c0(arg1, rax, arg4, arg5) != 0)
        rdi = 1

sub_1428d8a60(arg5)
return zx.q(rdi)
