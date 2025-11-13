// 函数: sub_142bec470
// 地址: 0x142bec470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_1 = arg4 s>> 9

if (r10_1 s< 0)
    r10_1 = 0xffffffff - r10_1

if ((*(arg1 + 0x170) & 2) != 0)
    r10_1 &= 0x1ff
    
    if (r10_1 s>= 0x100)
        r10_1 = 0x1ff - r10_1
else if (r10_1 s>= 0x100)
    r10_1 = 0xff

int64_t r11 = *(arg1 + 0x188)

if (r11 != 0)
    int64_t r9_1 = *(arg1 + 0x190)
    int16_t arg_8 = arg2.w
    int16_t arg_a = arg5.w
    char arg_c = r10_1.b
    return r11(zx.q(arg3), 1, &arg_8, r9_1)

int64_t result = sx.q(arg2)
int64_t rdx = sx.q(arg5)
char* r9_4 = *(arg1 + 0x178) - sx.q(*(arg1 + 0x180) * arg3) + result

if (rdx.d u> 7)
    return memset(r9_4, zx.d(r10_1.b), rdx) __tailcall

switch (rdx)
    case 0
        return result
    case 1
        *r9_4 = r10_1.b
        return result
    case 2
        goto label_142bec557
    case 3
        goto label_142bec551
    case 4
        goto label_142bec54b
    case 5
        goto label_142bec545
    case 6
        goto label_142bec53f
    case 7
        *r9_4 = r10_1.b
        r9_4 = &r9_4[1]
    label_142bec53f:
        *r9_4 = r10_1.b
        r9_4 = &r9_4[1]
    label_142bec545:
        *r9_4 = r10_1.b
        r9_4 = &r9_4[1]
    label_142bec54b:
        *r9_4 = r10_1.b
        r9_4 = &r9_4[1]
    label_142bec551:
        *r9_4 = r10_1.b
        r9_4 = &r9_4[1]
    label_142bec557:
        *r9_4 = r10_1.b
        r9_4[1] = r10_1.b
        return result
