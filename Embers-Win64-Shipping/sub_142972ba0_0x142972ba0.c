// 函数: sub_142972ba0
// 地址: 0x142972ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
sub_1428d8e50(arg4)
int64_t* rax = sub_1428d8ba0(arg4)

if (rax != 0)
    while (sub_142919890(rax, sub_142890560(arg3) - 1, 0xffffffff, 0) != 0)
        if (sub_142890300(rax) == 0)
            if (sub_142973180(arg1, arg2, rax, arg3, arg4) != 0
                    && sub_142972c90(arg1, arg1, arg3, arg4) != 0
                    && sub_142973180(arg1, arg1, rax, arg3, arg4) != 0)
                rbp = 1
            
            break

sub_1428d8a60(arg4)
return zx.q(rbp)
