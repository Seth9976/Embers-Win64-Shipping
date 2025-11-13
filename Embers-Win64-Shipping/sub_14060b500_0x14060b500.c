// 函数: sub_14060b500
// 地址: 0x14060b500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9_2 = *arg2
int32_t r10 = *arg3
uint32_t rax
int32_t r9

if (arg1 u>= 0x110000 || arg1 - 0xfffe u<= 1 || arg1 - 0xd800 u<= 0x3ff)
label_14060b539:
    *r9_2 = 0x3f.b
    r9 = r9_2.d + 1
else if (arg1 u>= 0xdc00)
    if (arg1 u<= 0xdfff)
        goto label_14060b539
    
label_14060b58a:
    
    if (arg1 u>= 0x10000)
        if (r10 u< 4)
            *r9_2 = 0x3f
            r9 = r9_2.d + 1
        else
            *r9_2 = (arg1 u>> 0x12).b | 0xf0
            r9_2[1] = ((arg1 u>> 0xc).b & 0x3f) | 0x80
            rax = arg1 u>> 6
            arg1.b &= 0x3f
            rax.b &= 0x3f
            arg1.b |= 0x80
            rax.b |= 0x80
            r9_2[3] = arg1.b
            r9_2[2] = rax.b
            r9 = r9_2.d + 4
    else if (r10 u< 3)
        *r9_2 = 0x3f
        r9 = r9_2.d + 1
    else
        *r9_2 = (arg1 u>> 0xc).b | 0xe0
        rax = arg1 u>> 6
        arg1.b &= 0x3f
        rax.b &= 0x3f
        arg1.b |= 0x80
        rax.b |= 0x80
        r9_2[2] = arg1.b
        r9_2[1] = rax.b
        r9 = r9_2.d + 3
else if (arg1 u< 0x80)
    *r9_2 = arg1.b
    r9 = r9_2.d + 1
else
    if (arg1 u>= 0x800)
        goto label_14060b58a
    
    if (r10 u< 2)
        *r9_2 = 0x3f
        r9 = r9_2.d + 1
    else
        int32_t rax_1 = arg1
        arg1.b &= 0x3f
        arg1.b |= 0x80
        rax.b = (rax_1 u>> 6).b | 0xc0
        *r9_2 = rax.b
        r9_2[1] = arg1.b
        r9 = r9_2.d + 2

int32_t r9_1 = r9 - r9_2.d

if (r9_1 s< 1)
    rax.b = 0
    return rax

*arg2 += sx.q(r9_1)
int64_t rax_10
rax_10.b = 1
*arg3 -= r9_1
return rax_10
