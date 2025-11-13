// 函数: sub_14125d100
// 地址: 0x14125d100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141264230(arg1, arg2)
void* rbp = arg2 + 0x78
void* rsi = arg1 + 0x78

if (rsi != rbp)
    int32_t r8_1 = *(rsi + 0x3c)
    int64_t r14_1 = sx.q(*(rbp + 0x38))
    void* r15_1 = *(rbp + 0x30)
    *(rsi + 0x38) = r14_1.d
    
    if (r14_1.d != 0 || r8_1 != 0)
        sub_1410b37d0(rsi, r14_1.d, r8_1)
        void* r9_1 = *(rsi + 0x30)
        
        if (r15_1 != 0)
            rbp = r15_1
        
        if (r9_1 != 0)
            rsi = r9_1
        
        memcpy(rsi, rbp, (r14_1 * 0xc).d)
    else
        *(rsi + 0x3c) = 4

*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg1 + 0xc4) = *(arg2 + 0xc4)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xe1) = *(arg2 + 0xe1)
return arg1
