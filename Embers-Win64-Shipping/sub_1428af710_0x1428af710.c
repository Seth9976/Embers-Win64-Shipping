// 函数: sub_1428af710
// 地址: 0x1428af710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    return zx.q((arg1 + 1).d)

sub_1428a5c40(data_144020538)
int32_t rbx = 1
int32_t temp0 = *(arg1 + 0xa0)
*(arg1 + 0xa0) -= 1

if (temp0 == 1 && *(arg1 + 0x68) != 0)
    sub_1428a5d00(data_144020538)
    rbx = (*(arg1 + 0x68))(arg1)
    sub_1428a5c40(data_144020538)

if (temp0 == 1 && *(arg1 + 0x68) != 0 && rbx == 0)
    rbx = 0
else
    sub_1428e33d0(arg1, 0)

sub_1428a5d00(data_144020538)

if (rbx != 0)
    return zx.q(rbx)

sub_1428a5670(rbx + 0x26, rbx + 0x6b, rbx + 0x6a, "crypto\engine\eng_init.c", 0x69)
return 0
