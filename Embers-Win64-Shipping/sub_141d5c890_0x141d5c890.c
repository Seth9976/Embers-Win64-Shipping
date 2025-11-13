// 函数: sub_141d5c890
// 地址: 0x141d5c890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(arg3)
int16_t rax

if (arg3 == 0)
    rax = 0x40
else if (r9 == 1)
    rax = 0x100
else if (r9 == 3)
    rax = 0x400
else
    rax = 0x200

*(arg1 + 0x84a) = rax
int64_t result = sub_141c46b40(arg1 + 0x788, arg1 + 0x848)

if (arg1 + 0x770 != arg2)
    int32_t r8 = *(arg1 + 0x77c)
    int64_t rbp_1 = *arg2
    int64_t rsi_1 = sx.q(arg2[1].d)
    *(arg1 + 0x778) = rsi_1.d
    
    if (rsi_1.d != 0 || r8 != 0)
        sub_140638750(arg1 + 0x770, rsi_1.d, r8)
        result = memcpy(*(arg1 + 0x770), rbp_1, (rsi_1 << 2).d)
    else
        *(arg1 + 0x77c) = rsi_1.d

int64_t rcx_3 = *arg2

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
