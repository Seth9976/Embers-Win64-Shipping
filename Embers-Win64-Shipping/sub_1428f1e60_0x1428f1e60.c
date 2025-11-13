// 函数: sub_1428f1e60
// 地址: 0x1428f1e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax

if (*arg2 != 0x40)
    rax = sub_1428e91e0(arg2)
else
    rax = sub_1428f8e70(arg1, &arg2[1])

if (rax == 0)
    sub_1428a5670((rax + 0x22).d, 0x9c, 0x96, "crypto\x509v3\v3_crld.c", 0x37)
    return 0

int32_t* result = sub_14292d140(0, arg1, rax)

if (*arg2 != 0x40)
    sub_142898cb0(rax, sub_1428e8d70)
else
    sub_1428f8ed0(arg1, rax)

return result
