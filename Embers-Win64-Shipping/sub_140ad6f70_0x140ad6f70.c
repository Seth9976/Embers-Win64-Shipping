// 函数: sub_140ad6f70
// 地址: 0x140ad6f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[1].d
int32_t r9_1

if (r11 s> 1)
    r9_1 = 1

if (r11 s<= 1 || **arg2 != 0x23)
    r9_1 = 0

int32_t rcx = r11 - 1
uint32_t r10 = r11 - 1

if (r11 == 0)
    rcx = -1

if (r11 == 0)
    r10 = -1

if (r11 == 0)
    rcx = 0

if (rcx == r9_1 + 3)
    int64_t r11_1 = *arg2
    uint64_t rbx = zx.q(r9_1)
    int16_t rcx_1 = *(r11_1 + (rbx << 1))
    
    if (rcx_1 - 0x30 u<= 9)
        r10.b = rcx_1.b * 0x11 - 0x30
    else if (rcx_1 - 0x61 u<= 5)
        r10 = zx.d(rcx_1.b * 0x11 + 0x39)
    else if (rcx_1 - 0x41 u> 5)
        r10.b = 0
    else
        r10 = zx.d(rcx_1.b * 0x11 + 0x59)
    
    int16_t rcx_4 = *(r11_1 + (zx.q(r9_1) << 1) + 2)
    
    if (rcx_4 - 0x30 u<= 9)
        arg2.b = rcx_4.b * 0x11 - 0x30
    else if (rcx_4 - 0x61 u<= 5)
        arg2 = zx.q(rcx_4.b * 0x11 + 0x39)
    else if (rcx_4 - 0x41 u> 5)
        arg2.b = 0
    else
        arg2 = zx.q(rcx_4.b * 0x11 + 0x59)
    
    int16_t rcx_7 = *(r11_1 + (rbx << 1) + 4)
    
    if (rcx_7 - 0x30 u<= 9)
        rcx_7.b = rcx_7.b * 0x11 - 0x30
    else if (rcx_7 - 0x61 u<= 5)
        rcx_7.b = rcx_7.b * 0x11 + 0x39
    else if (rcx_7 - 0x41 u> 5)
        rcx_7.b = 0
    else
        rcx_7.b = rcx_7.b * 0x11 + 0x59
    
    *arg1 = rcx_7.b
    *(arg1 + 1) = arg2.b
    *(arg1 + 2) = r10.b
    *(arg1 + 3) = 0xff
    return arg1

if (r11 == 0)
    r10 = 0

char arg_11
char arg_12
char arg_13

if (r10 == r9_1 + 6)
    uint64_t r10_1 = zx.q(r9_1)
    int64_t r9_2 = *arg2
    int16_t rcx_8 = *(r9_2 + (r10_1 << 1))
    
    if (rcx_8 - 0x30 u> 9)
        if (rcx_8 - 0x61 u<= 5)
            rcx_8.b -= 0x57
        else if (rcx_8 - 0x41 u> 5)
            rcx_8.b = 0
        else
            rcx_8.b -= 0x37
    
    int16_t rdx = *(r9_2 + (r10_1 << 1) + 2)
    
    if (rdx - 0x30 u<= 9)
        rdx.b -= 0x30
    else if (rdx - 0x61 u<= 5)
        rdx.b -= 0x57
    else if (rdx - 0x41 u> 5)
        rdx.b = 0
    else
        rdx.b -= 0x37
    
    rcx_8.b <<= 4
    rcx_8.b += rdx.b
    arg_12 = rcx_8.b
    int16_t rcx_9 = *(r9_2 + (r10_1 << 1) + 4)
    
    if (rcx_9 - 0x30 u> 9)
        if (rcx_9 - 0x61 u<= 5)
            rcx_9.b -= 0x57
        else if (rcx_9 - 0x41 u> 5)
            rcx_9.b = 0
        else
            rcx_9.b -= 0x37
    
    int16_t rdx_1 = *(r9_2 + (r10_1 << 1) + 6)
    
    if (rdx_1 - 0x30 u<= 9)
        rdx_1.b -= 0x30
    else if (rdx_1 - 0x61 u<= 5)
        rdx_1.b -= 0x57
    else if (rdx_1 - 0x41 u> 5)
        rdx_1.b = 0
    else
        rdx_1.b -= 0x37
    
    rcx_9.b <<= 4
    rcx_9.b += rdx_1.b
    arg_11 = rcx_9.b
    int16_t rcx_10 = *(r9_2 + (r10_1 << 1) + 8)
    
    if (rcx_10 - 0x30 u> 9)
        if (rcx_10 - 0x61 u<= 5)
            rcx_10.b -= 0x57
        else if (rcx_10 - 0x41 u> 5)
            rcx_10.b = 0
        else
            rcx_10.b -= 0x37
    
    int16_t rdx_2 = *(r9_2 + (r10_1 << 1) + 0xa)
    
    if (rdx_2 - 0x30 u<= 9)
        rdx_2.b -= 0x30
    else if (rdx_2 - 0x61 u<= 5)
        rdx_2.b -= 0x57
    else if (rdx_2 - 0x41 u> 5)
        rdx_2.b = 0
    else
        rdx_2.b -= 0x37
    
    rcx_10.b <<= 4
    rcx_10.b += rdx_2.b
    arg_13 = 0xff
    *arg1 = rcx_10.b.d
    return arg1

if (r10 != r9_1 + 8)
    *arg1 = 0
    return arg1

uint64_t r10_2 = zx.q(r9_1)
int64_t r9_3 = *arg2
int16_t rcx_11 = *(r9_3 + (r10_2 << 1))

if (rcx_11 - 0x30 u> 9)
    if (rcx_11 - 0x61 u<= 5)
        rcx_11.b -= 0x57
    else if (rcx_11 - 0x41 u> 5)
        rcx_11.b = 0
    else
        rcx_11.b -= 0x37

int16_t rdx_3 = *(r9_3 + (r10_2 << 1) + 2)

if (rdx_3 - 0x30 u<= 9)
    rdx_3.b -= 0x30
else if (rdx_3 - 0x61 u<= 5)
    rdx_3.b -= 0x57
else if (rdx_3 - 0x41 u> 5)
    rdx_3.b = 0
else
    rdx_3.b -= 0x37

rcx_11.b <<= 4
rcx_11.b += rdx_3.b
arg_12 = rcx_11.b
int16_t rcx_12 = *(r9_3 + (r10_2 << 1) + 4)

if (rcx_12 - 0x30 u> 9)
    if (rcx_12 - 0x61 u<= 5)
        rcx_12.b -= 0x57
    else if (rcx_12 - 0x41 u> 5)
        rcx_12.b = 0
    else
        rcx_12.b -= 0x37

int16_t rdx_4 = *(r9_3 + (r10_2 << 1) + 6)

if (rdx_4 - 0x30 u<= 9)
    rdx_4.b -= 0x30
else if (rdx_4 - 0x61 u<= 5)
    rdx_4.b -= 0x57
else if (rdx_4 - 0x41 u> 5)
    rdx_4.b = 0
else
    rdx_4.b -= 0x37

rcx_12.b <<= 4
rcx_12.b += rdx_4.b
arg_11 = rcx_12.b
int16_t rcx_13 = *(r9_3 + (r10_2 << 1) + 8)

if (rcx_13 - 0x30 u> 9)
    if (rcx_13 - 0x61 u<= 5)
        rcx_13.b -= 0x57
    else if (rcx_13 - 0x41 u> 5)
        rcx_13.b = 0
    else
        rcx_13.b -= 0x37

int16_t rdx_5 = *(r9_3 + (r10_2 << 1) + 0xa)

if (rdx_5 - 0x30 u<= 9)
    rdx_5.b -= 0x30
else if (rdx_5 - 0x61 u<= 5)
    rdx_5.b -= 0x57
else if (rdx_5 - 0x41 u> 5)
    rdx_5.b = 0
else
    rdx_5.b -= 0x37

rcx_13.b <<= 4
rcx_13.b += rdx_5.b
char arg_10 = rcx_13.b
int16_t rcx_14 = *(r9_3 + (r10_2 << 1) + 0xc)

if (rcx_14 - 0x30 u> 9)
    if (rcx_14 - 0x61 u<= 5)
        rcx_14.b -= 0x57
    else if (rcx_14 - 0x41 u> 5)
        rcx_14.b = 0
    else
        rcx_14.b -= 0x37

int16_t rdx_6 = *(r9_3 + (r10_2 << 1) + 0xe)

if (rdx_6 - 0x30 u<= 9)
    rdx_6.b -= 0x30
    rcx_14.b <<= 4
    rcx_14.b += rdx_6.b
    arg_13 = rcx_14.b
    *arg1 = arg_10.d
    return arg1

if (rdx_6 - 0x61 u<= 5)
    rdx_6.b -= 0x57
    rcx_14.b <<= 4
    rcx_14.b += rdx_6.b
    arg_13 = rcx_14.b
    *arg1 = arg_10.d
    return arg1

if (rdx_6 - 0x41 u> 5)
    rcx_14.b <<= 4
    rcx_14.b = rcx_14.b
    arg_13 = rcx_14.b
    *arg1 = arg_10.d
    return arg1

rdx_6.b -= 0x37
rcx_14.b <<= 4
rcx_14.b += rdx_6.b
arg_13 = rcx_14.b
*arg1 = arg_10.d
return arg1
