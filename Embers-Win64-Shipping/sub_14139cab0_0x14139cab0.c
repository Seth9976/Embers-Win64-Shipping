// 函数: sub_14139cab0
// 地址: 0x14139cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d = arg2[5].d
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe] = arg2[0xe]
arg1[0xf] = arg2[0xf]
arg1[0x10] = *arg3
int32_t r11 = arg4[1].d
int32_t r9 = 0
arg1[0x11] = arg3[1]
arg1[0x12] = arg3[2]
arg1[0x13] = arg3[3]
arg1[0x14].d = arg3[4].d
*(arg1 + 0xa4) = *(arg3 + 0x24)
arg1[0x15].d = arg3[5].d
*(arg1 + 0xac) = *(arg3 + 0x2c)
arg1[0x16] = arg3[6]
arg1[0x17] = arg3[7]
arg1[0x18] = arg3[8]
arg1[0x19] = arg3[9]
arg1[0x1a] = arg3[0xa]
arg1[0x1b] = arg3[0xb]
arg1[0x1c] = arg3[0xc]
arg1[0x1d] = arg3[0xd]
arg1[0x1e] = arg3[0xe]
arg1[0x1f] = arg3[0xf]

if (r11 s> 0)
    int32_t* r8_1 = *arg4 + 8
    
    do
        uint64_t rdx_1 = zx.q(r9) u>> 1
        uint64_t rdx_2 = rdx_1 * 2
        arg1[(rdx_1 + 0x10) * 2].d = r8_1[-2]
        *(&arg1[rdx_2] + 0x104) = r8_1[-1]
        
        if (r9 + 1 s< r11)
            arg1[rdx_2 + 0x21].d = *r8_1
            *(&arg1[rdx_2] + 0x10c) = r8_1[1]
        
        r9 += 2
        r8_1 = &r8_1[4]
    while (r9 s< r11)

void* result = arg5
int64_t i_1 = sx.q(*(result + 8))

if (i_1 s> 0)
    result = *result
    void* rdx_4 = arg1 - result
    int64_t i
    
    do
        uint128_t zmm0 = *result
        result += 0x10
        *(rdx_4 + result + 0x4f0) = zmm0
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x1a0].d = r11
return result
