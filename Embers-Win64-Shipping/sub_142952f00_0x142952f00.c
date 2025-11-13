// 函数: sub_142952f00
// 地址: 0x142952f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0

if (sub_1428bf8a0(arg1, arg2) != 0)
    sub_1428a5670(0x10, 0xa2, 0x6a, "crypto\ec\ec2_smpl.c", 0x141)
    return 0

if (sub_14288fc80(arg2[4], &data_1434e8ea8) != 0)
    sub_1428a5670(0x10, 0xa2, 0x42, "crypto\ec\ec2_smpl.c", 0x147)
    return 0

if (arg3 == 0)
    goto label_142952fb3

if (sub_142890040(arg3, arg2[2]) != 0)
    sub_1428908e0(arg3, 0)
label_142952fb3:
    
    if (arg4 == 0)
        rbp = 1
    else if (sub_142890040(arg4, arg2[3]) != 0)
        sub_1428908e0(arg4, 0)
        rbp = 1

return zx.q(rbp)
