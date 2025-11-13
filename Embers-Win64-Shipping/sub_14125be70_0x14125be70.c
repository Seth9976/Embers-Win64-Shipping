// 函数: sub_14125be70
// 地址: 0x14125be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 2
memset(arg1 + 0x20, 0, 0x50)
*(arg1 + 0x70) = 0
sub_141264230(arg1, arg2)
void* rsi = arg1 + 0x78
*(rsi + 0x30) = 0
void* rbp = arg2 + 0x78
int64_t r14 = sx.q(*(rbp + 0x38))
void* r15 = *(rbp + 0x30)
*(rsi + 0x38) = r14.d

if (r14.d != 0)
    sub_1410b37d0(rsi, r14.d, 0)
    void* r9_1 = *(rsi + 0x30)
    
    if (r15 != 0)
        rbp = r15
    
    if (r9_1 != 0)
        rsi = r9_1
    
    memcpy(rsi, rbp, (r14 * 0xc).d)
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
