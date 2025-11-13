// 函数: sub_142973180
// 地址: 0x142973180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 0
int32_t rsi = sub_142890560(arg4) + 1
int32_t* rax_1 = sub_1428a6730(sx.q(rsi) << 2)

if (rax_1 != 0)
    int32_t rax_2 = sub_142974080(arg4, rax_1, rsi)
    rbx = rax_2
    
    if (rax_2 == 0 || rax_2 s> rsi)
        sub_1428a5670(3, 0x85, 0x6a, "crypto\bn\bn_gf2m.c", 0x1de)
    else
        int32_t var_28
        var_28.q = arg5
        rbx = sub_142973270(arg1, arg2, arg3, rax_1, var_28)

sub_1428a6780(rax_1)
return zx.q(rbx)
