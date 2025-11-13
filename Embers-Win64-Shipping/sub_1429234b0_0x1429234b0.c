// 函数: sub_1429234b0
// 地址: 0x1429234b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg4 s> arg2 - 0xb)
    sub_1428a5670(4, 0x6d, 0x6e, "crypto\rsa\rsa_pk1.c", 0x7d)
    return 0

*arg1 = 0
arg1[1] = 2
void* rbx_1 = &arg1[2]

if (sub_142897af0(rbx_1, zx.q(arg2 - arg4 - 3)) s<= 0)
    return 0

int32_t i = 0

if (arg2 - arg4 - 3 s> 0)
    do
        while (*rbx_1 == 0)
            if (sub_142897af0(rbx_1, 1) s<= 0)
                return 0
        
        rbx_1 += 1
        i += 1
    while (i s< arg2 - arg4 - 3)

*rbx_1 = 0
memcpy(rbx_1 + 1, arg3, arg4)
return 1
