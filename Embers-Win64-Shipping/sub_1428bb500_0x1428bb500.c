// 函数: sub_1428bb500
// 地址: 0x1428bb500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg1 == 0)
    sub_1428a5670(0x26, 0xc2, 0x43, "crypto\engine\eng_pkey.c", 0x7a)
    return 0

sub_1428a5c40(data_144020538)
CRITICAL_SECTION* rcx_1 = data_144020538

if (*(arg1 + 0xa0) == 0)
    sub_1428a5d00(rcx_1)
    sub_1428a5670(0x26, 0xc2, 0x75, "crypto\engine\eng_pkey.c", 0x81)
    return 0

sub_1428a5d00(rcx_1)
int64_t r10_1 = *(arg1 + 0x88)

if (r10_1 != 0)
    int32_t var_28
    var_28.q = arg5
    return r10_1(arg1, arg2, arg3, arg4, var_28, arg6, arg7, arg8)

sub_1428a5670((r10_1 + 0x26).d, 0xc2, (r10_1 + 0x7d).d, "crypto\engine\eng_pkey.c", 0x87)
return 0
