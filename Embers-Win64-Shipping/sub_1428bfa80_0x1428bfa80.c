// 函数: sub_1428bfa80
// 地址: 0x1428bfa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x10, 0x79, 0x43, "crypto\ec\ec_lib.c", 0x235)
    return 0

if (*(*arg1 + 0x50) == 0)
    sub_1428a5670(0x10, 0x79, 0x42, "crypto\ec\ec_lib.c", 0x239)
    return 0

int64_t* result = sub_1428a6a70(0x30)

if (result == 0)
    sub_1428a5670((&result[2]).d, (result + 0x79).d, (result + 0x41).d, "crypto\ec\ec_lib.c", 0x23f)
    return 0

int64_t rdx_2 = *arg1
*result = rdx_2
result[1].d = arg1[4].d

if ((*(rdx_2 + 0x50))(result) != 0)
    return result

sub_1428a6780(result)
return 0
