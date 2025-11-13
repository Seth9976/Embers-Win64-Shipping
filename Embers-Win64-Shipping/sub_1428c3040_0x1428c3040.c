// 函数: sub_1428c3040
// 地址: 0x1428c3040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t arg_10 = 0
sub_1428c2e20(arg1, &arg_10)
int32_t rbx = arg_10

if ((rbx.b & 8) != 0)
    sub_1428a5670(5, 0x79, 0x78, "crypto\dh\dh_check.c", 0x54)

if ((rbx.b & 0x10) != 0)
    sub_1428a5670(5, 0x79, 0x77, "crypto\dh\dh_check.c", 0x56)

if ((rbx.b & 0x20) != 0)
    sub_1428a5670(5, 0x79, 0x74, "crypto\dh\dh_check.c", 0x58)

if ((rbx.b & 0x40) != 0)
    sub_1428a5670(5, 0x79, 0x73, "crypto\dh\dh_check.c", 0x5a)

if ((rbx.b & 4) != 0)
    sub_1428a5670(5, 0x79, 0x79, "crypto\dh\dh_check.c", 0x5c)

if ((rbx.b & 1) != 0)
    sub_1428a5670(5, 0x79, 0x75, "crypto\dh\dh_check.c", 0x5e)

if ((rbx.b & 2) != 0)
    sub_1428a5670(5, 0x79, 0x76, "crypto\dh\dh_check.c", 0x60)

int32_t rdi
rdi.b = rbx == 0
return zx.q(rdi)
