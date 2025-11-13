// 函数: sub_14288d120
// 地址: 0x14288d120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax = *(arg1 + 0x6a0)
int32_t rax_1

if (rax != 0)
    rax_1 = rax(arg1, *arg2, zx.q(arg2[1].d), *(arg1 + 0x6a8))

int32_t var_10
int32_t rdx_1

if (rax == 0 || rax_1 != 0)
    if (sub_142867290(arg1) != 0)
        if (arg2[1] u<= 0)
            *(arg1 + 0x670) = 1
            return 1
        
        var_10 = 0x589
        rdx_1 = 0x32
    else
        rdx_1 = 0x6e
        var_10 = 0x584
else
    var_10 = 0x57e
    rdx_1 = rax_1 + 0x28

sub_142856580(arg1, rdx_1, 0x248, 0x6e, "ssl\statem\extensions_clnt.c", var_10)
return 0
