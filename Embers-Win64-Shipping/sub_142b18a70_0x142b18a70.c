// 函数: sub_142b18a70
// 地址: 0x142b18a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s>= 0xffffffb0)
    if (arg1 s> 0x50)
        if (arg1 s<= 0x29ab)
            *arg2 = (arg1 s/ 0xfd).b - 0x2e
            arg2[1] = ((arg1 s/ 0xfd).b + 1) * 3 + arg1.b
            return &arg2[2]
        
        char rdx_8 = ((arg1 s/ 0xfd).b + 1) * 3 + arg1.b
        
        if (arg1 s<= 0x2f111)
            arg2[2] = rdx_8
            int32_t rcx_4 = arg1 s/ 0xfd
            arg2[1] = ((rcx_4 s/ 0xfd).b + 1) * 3 + rcx_4.b
            *arg2 = (rcx_4 s/ 0xfd).b - 4
            return &arg2[3]
        
        arg2[3] = rdx_8
        int32_t r8_2 = arg1 s/ 0xfd
        arg2[2] = ((r8_2 s/ 0xfd).b + 1) * 3 + r8_2.b
        int32_t rcx_7 = r8_2 s/ 0xfd
        arg2[1] = ((rcx_7 s/ 0xfd).b + 1) * 3 + rcx_7.b
        *arg2 = 0xff
        return &arg2[4]
    
    int32_t r9
    r9.b = arg1.b - 0x7f
    *arg2 = r9.b
    return &arg2[1]

if (arg1 s>= 0xffffd654)
    int32_t rdx_31 = arg1 s/ 0xfd
    int32_t r9_1 = arg1 s% 0xfd
    
    if (arg1 s% 0xfd s< 0)
        rdx_31 -= 1
        r9_1 += 0xfd
    
    rdx_31.b += 0x31
    r9_1.b += 3
    *arg2 = rdx_31.b
    arg2[1] = r9_1.b
    return &arg2[2]

if (arg1 s>= 0xfffd0eee)
    int32_t rcx_10 = arg1 s/ 0xfd
    int32_t r9_2 = arg1 s% 0xfd
    
    if (arg1 s% 0xfd s< 0)
        rcx_10 -= 1
        r9_2 += 0xfd
    
    r9_2.b += 3
    arg2[2] = r9_2.b
    int32_t rdx_35 = rcx_10 s/ 0xfd
    int32_t rcx_11 = rcx_10 s% 0xfd
    
    if (rcx_10 s% 0xfd s< 0)
        rdx_35 -= 1
        rcx_11 += 0xfd
    
    rcx_11.b += 3
    rdx_35.b += 7
    arg2[1] = rcx_11.b
    *arg2 = rdx_35.b
    return &arg2[3]

int32_t r8_5 = arg1 s/ 0xfd
int32_t r9_3 = arg1 s% 0xfd

if (arg1 s% 0xfd s< 0)
    r8_5 -= 1
    r9_3 += 0xfd

r9_3.b += 3
arg2[3] = r9_3.b
int32_t rcx_14 = r8_5 s/ 0xfd
int32_t r8_6 = r8_5 s% 0xfd

if (r8_5 s% 0xfd s< 0)
    rcx_14 -= 1
    r8_6 += 0xfd

r8_6.b += 3
arg2[2] = r8_6.b
int32_t rcx_15 = rcx_14 s% 0xfd

if (rcx_14 s% 0xfd s< 0)
    rcx_15 += 0xfd

rcx_15.b += 3
arg2[1] = rcx_15.b
*arg2 = 3
return &arg2[4]
