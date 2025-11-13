// 函数: sub_1403c6fe0
// 地址: 0x1403c6fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x15c))

if ((result.d & 0x1000) != 0)
    char r8 = *(arg2 + 0x25)
    result.b = (result.d & 0x2000000) == 0
    result.b |= *(arg1 + 0x252) == 0
    
    if (r8 != 3)
        if (result.b == 0)
            *(arg2 + 0x25) = r8 | 4
        
        if (arg2[9].b u<= 7)
            arg2[9].b = 8
    else
        result.b ^= 1
        result.b <<= 2
        result.b |= 2
        *(arg2 + 0x25) = result.b
        arg2[9].b = 8
    
    *(arg2 + 0x22) = 0

int32_t r8_1 = *(arg1 + 0x15c)

if ((r8_1 & 0x200) != 0 && arg2[9].b == 8 && *(arg2 + 0x25) != 3)
    arg2[9].b = 0x10
    r8_1 = *(arg1 + 0x15c)

if (r8_1.b s>= 0)
    if ((r8_1 & 0x2000) != 0)
        goto label_1403c70cc
    
    goto label_1403c706e

*(arg2 + 0x25) &= 0xfb
*(arg2 + 0x22) = 0
*(arg2 + 0x82) = *(arg1 + 0x278)
*(arg2 + 0x7a) = *(arg1 + 0x270)
r8_1 = *(arg1 + 0x15c)

if ((r8_1 & 0x2000) != 0)
label_1403c70cc:
    arg2[0xd] = *(arg1 + 0x29c)
    r8_1 = *(arg1 + 0x15c)
    
    if ((r8_1 & 0x400) != 0 && arg2[9].b == 0x10)
        goto label_1403c707d
    
    goto label_1403c70df

label_1403c706e:

if ((r8_1 & 0x400) == 0 || arg2[9].b != 0x10)
label_1403c70df:
    
    if ((r8_1 & 0x4000) != 0)
        *(arg2 + 0x25) |= 2
        r8_1 = *(arg1 + 0x15c)
else
label_1403c707d:
    arg2[9].b = 8
    r8_1 = *(arg1 + 0x15c)
    
    if ((r8_1 & 0x4000) != 0)
        *(arg2 + 0x25) |= 2
        r8_1 = *(arg1 + 0x15c)

if ((r8_1 & 0x600000) != 0)
    *(arg2 + 0x25) &= 0xfd
    r8_1 = *(arg1 + 0x15c)

if ((r8_1.b & 0x40) != 0)
    result.b = *(arg2 + 0x25)
    result.b |= 4
    
    if (result.b == 6 && *(arg1 + 0x398) != 0 && arg2[9].b == 8)
        *(arg2 + 0x25) = 3
        r8_1 = *(arg1 + 0x15c)

if ((r8_1.b & 4) != 0 && arg2[9].b u<= 7)
    arg2[9].b = 8

int32_t r10
r10.b = *(arg2 + 0x25)

if (r10.b == 3 || (r10.b & 2) == 0)
    *(arg2 + 0x29) = 1
    r8_1.b = 1
    
    if ((*(arg1 + 0x15e) & 4) != 0)
        r10.b &= 0xfb
        *(arg2 + 0x25) = r10.b
else
    *(arg2 + 0x29) = 3
    r8_1.b = 3
    
    if ((*(arg1 + 0x15e) & 4) != 0)
        r10.b &= 0xfb
        *(arg2 + 0x25) = r10.b

if ((r10.b & 4) != 0)
    r8_1.b += 1
    *(arg2 + 0x29) = r8_1.b

int32_t result_1 = *(arg1 + 0x15c)

if (result_1.w s< 0)
    result.b = r10.b | 2
    
    if (result.b == 2)
        r8_1.b += 1
        *(arg2 + 0x29) = r8_1.b
        result_1 = *(arg1 + 0x15c)
        
        if ((result_1 & 0x1000000) != 0)
            r10.b |= 4
            *(arg2 + 0x25) = r10.b
            result_1 = *(arg1 + 0x15c)

result.b = arg2[9].b

if ((result_1 & 0x100000) == 0)
    arg1 = zx.q(r8_1)
else
    result_1.b = *(arg1 + 0x150)
    
    if (result.b u< result_1.b)
        arg2[9].b = result_1.b
        result = zx.q(result_1)
    
    arg1.b = *(arg1 + 0x151)
    
    if (r8_1.b u>= arg1.b)
        arg1 = zx.q(r8_1)
    else
        *(arg2 + 0x29) = arg1.b

result.w = mulu.dp.b(result.b, arg1.b)
*(arg2 + 0x2a) = result.b
uint64_t r8_2 = zx.q(*arg2)
uint64_t rcx = zx.q(result.b)

if (result.b u< 8)
    *(arg2 + 0x10) = (r8_2 * rcx + 7) u>> 3
    return result

*(arg2 + 0x10) = (rcx u>> 3) * r8_2
return result
