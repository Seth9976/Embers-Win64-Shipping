// 函数: sub_14294e2c0
// 地址: 0x14294e2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax_1 = sub_14294d440(sub_142891590(arg1))
int32_t rax_2 = sub_1428916c0(arg2)

if (rax_2 s< 0)
    sub_1428a5670(0x35, 0x68, 0x66, "crypto\sm2\sm2_crypt.c", 0x47)
    return 0

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 0x35).d, (rax_1 + 0x68).d, (rax_1 + 0x69).d, "crypto\sm2\sm2_crypt.c", 
        0x4b)
    return 0

int64_t rcx_5 = sx.q(rax_2) + 0xa + (rax_1 << 1)

if (arg3 u<= rcx_5)
    sub_1428a5670(0x35, 0x68, 0x68, "crypto\sm2\sm2_crypt.c", 0x51)
    return 0

*arg4 = arg3 - rcx_5
return 1
