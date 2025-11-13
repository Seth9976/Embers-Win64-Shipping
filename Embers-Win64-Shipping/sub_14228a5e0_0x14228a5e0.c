// 函数: sub_14228a5e0
// 地址: 0x14228a5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = &arg2[6]
*arg1 = *arg2
void* rsi = &arg1[6]
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3] = arg2[3]
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x2c) = *(arg2 + 0x2c)

if (rsi != r14)
    int32_t r8_1 = *(rsi + 0xcc)
    int64_t rbp_1 = sx.q(*(r14 + 0xc8))
    void* r15_1 = *(r14 + 0xc0)
    *(rsi + 0xc8) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_142152c20(rsi, rbp_1.d, r8_1)
        void* r9_1 = *(rsi + 0xc0)
        
        if (r15_1 != 0)
            r14 = r15_1
        
        if (r9_1 != 0)
            rsi = r9_1
        
        memcpy(rsi, r14, (rbp_1 * 0xc).d)
    else
        *(rsi + 0xcc) = 0x10

arg1[0x20].d = arg2[0x20].d
arg1[0x21] = arg2[0x21]
arg1[0x22] = arg2[0x22]
arg1[0x23] = arg2[0x23]
arg1[0x24] = arg2[0x24]
arg1[0x25].d = arg2[0x25].d
*(arg1 + 0x12c) = *(arg2 + 0x12c)
arg1[0x26].d = arg2[0x26].d
*(arg1 + 0x134) = *(arg2 + 0x134)
arg1[0x27].d = arg2[0x27].d
*(arg1 + 0x13c) = *(arg2 + 0x13c)
*(arg1 + 0x14c) = *(arg2 + 0x14c)
return arg1
