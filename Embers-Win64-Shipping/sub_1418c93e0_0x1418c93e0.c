// 函数: sub_1418c93e0
// 地址: 0x1418c93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = 0
uint64_t rsi = zx.q(arg2)
int64_t* r11 = arg1
int64_t* rbx = *((zx.q(arg2) << 6) + *arg1 + 0x30)

if (data_1439c7a08 s> 1)
    int64_t r9_1 = *(arg3 + 0x60)
    int64_t r8_1 = *rbx
    *rbx = r9_1
    bool cond:1_1 = rbx[1] != arg4
    rbx[1] = arg4
    uint64_t rdx_1
    rdx_1.b = cond:1_1
    bool cond:2_1 = rbx[2] != arg5
    rbx[2] = arg5
    arg1.b = cond:2_1
    arg1.b |= rdx_1.b
    r10 = arg1.b
    
    if (r8_1 != r9_1)
        r10 = 1
else
    int32_t* r8 = arg1[6] + rsi * 0xc
    int32_t rax_2 = *(arg3 + 0x68)
    
    if (*r8 != rax_2)
        *r8 = rax_2
        r10 = 1
        *rbx = *(arg3 + 0x60)
    
    if (r8[1] != arg4.d)
        r8[1] = arg4.d
        r10 = 1
        rbx[1] = arg4
    
    if (r8[2] != arg5.d)
        r8[2] = arg5.d
        r10 = 1
        rbx[2] = arg5
    
    arg1[0xa].b |= r10

*(r11[2] + (zx.q(*(r11[1] + rsi)) << 2)) = arg6
return zx.q(r10)
