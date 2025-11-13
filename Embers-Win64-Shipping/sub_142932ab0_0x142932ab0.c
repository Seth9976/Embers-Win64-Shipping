// 函数: sub_142932ab0
// 地址: 0x142932ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r11 = *arg1

if (r11 != 0xffffffff && arg6 == 0)
    sub_1428a5670(0xd, 0xb0, 0xb3, "crypto\asn1\asn1_gen.c", 0x1d8)
    return 0

int64_t rdx = sx.q(arg1[0x6a])

if (rdx.d == 0x14)
    sub_1428a5670(0xd, 0xb0, 0xae, "crypto\asn1\asn1_gen.c", 0x1dd)
    return 0

arg1[0x6a] = (rdx + 1).d
int64_t rcx = rdx * 5

if (r11 == 0xffffffff)
    arg1[rcx + 6] = arg2
    arg1[rcx + 7] = arg3
else
    arg1[rcx + 6] = r11
    arg1[rcx + 7] = arg1[1]
    *arg1 = -1

arg1[rcx + 9] = arg5
arg1[rcx + 8] = arg4
return 1
