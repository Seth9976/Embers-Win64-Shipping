// 函数: sub_141e3c8a0
// 地址: 0x141e3c8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rax_1
    rax_1.b = **(arg1 + 0x78) == **(arg3 + 0x1a8)
    return rax_1

int64_t rsi = sx.q(arg2) * 0xc
int64_t arg_8 = *(rsi + *(arg1 + 0x78))
uint64_t rax_4 = sub_14078ee20(arg3 + 0x188, &arg_8)

if (rax_4.d == 0xffffffff)
label_141e3c96f:
    rax_4.b = 0
    return rax_4

int64_t r9_1 = *(arg1 + 0x78)
int64_t r10_1 = *(arg3 + 0x1a8)
int32_t r8 = *(rsi + r9_1 + 8)
int32_t i = *(r10_1 + sx.q(rax_4.d) * 0xc + 8)

if (r8 != 0xffffffff)
    while (i != 0xffffffff)
        int64_t* r8_1 = r9_1 + sx.q(r8) * 0xc
        int64_t rcx_6 = sx.q(i) * 3
        
        if (*r8_1 != *(r10_1 + (rcx_6 << 2)))
            goto label_141e3c96f
        
        r8 = r8_1[1].d
        i = *(r10_1 + (rcx_6 << 2) + 8)
        
        if (r8 == 0xffffffff)
            break

rax_4.b = r8 == i
return rax_4
