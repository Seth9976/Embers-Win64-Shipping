// 函数: sub_1428c33a0
// 地址: 0x1428c33a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t arg_18 = 0
sub_1428c2e20(arg1, &arg_18)
int32_t rbx = arg_18

if ((rbx.b & 1) != 0)
    sub_1428a5670(5, 0x7b, 0x7c, "crypto\dh\dh_check.c", 0xbc)

if ((rbx.b & 2) != 0)
    sub_1428a5670(5, 0x7b, 0x7b, "crypto\dh\dh_check.c", 0xbe)

if ((rbx.b & 4) != 0)
    sub_1428a5670(5, 0x7b, 0x7a, "crypto\dh\dh_check.c", 0xc0)

int32_t rdi
rdi.b = rbx == 0
return zx.q(rdi)
