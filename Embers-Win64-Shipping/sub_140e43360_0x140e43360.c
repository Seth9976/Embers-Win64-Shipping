// 函数: sub_140e43360
// 地址: 0x140e43360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e3a4e0(arg1, arg1 + 0x44c, arg1 + 0x144c, arg1 + 0x184c, &arg1[0x312])
sub_140e3a4e0(arg1, arg1 + 0xc4c, arg1 + 0x164c, arg1 + 0x186e, &arg1[0x352])

if (*(arg1 + 0x14) u> 1)
    sub_140e3a4e0(arg1, arg1 + 0x84c, arg1 + 0x154c, arg1 + 0x185d, &arg1[0x332])
    sub_140e3a4e0(arg1, arg1 + 0x104c, arg1 + 0x174c, arg1 + 0x187f, &arg1[0x372])

*(arg1 + 0x34ac) = 0
arg1[0x592] = 0
arg1[0x593].d = 0
arg1[0x19].b = 0
*(arg1 + 0x34b4) = 1
sub_140e3c210(arg1, 0xd8)
sub_140e3bff0(arg1)
sub_140e3be60(arg1)
sub_140e3c2a0(arg1)
char* var_38_1
var_38_1.b = 0
sub_140e3bc80(arg1, arg1 + 0x184c, &arg1[0x312], 0)
var_38_1.b = 1
sub_140e3bc80(arg1, arg1 + 0x186e, &arg1[0x352], 0)

if (*(arg1 + 0x14) == 3)
    var_38_1.b = 0
    sub_140e3bc80(arg1, arg1 + 0x185d, &arg1[0x332], 1)
    var_38_1.b = 1
    sub_140e3bc80(arg1, arg1 + 0x187f, &arg1[0x372], 1)

sub_140e3c410(arg1)
int64_t result
result.b = 1
*(arg1 + 0x34b4) = 2
return result
