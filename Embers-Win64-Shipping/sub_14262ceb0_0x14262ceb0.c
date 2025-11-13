// 函数: sub_14262ceb0
// 地址: 0x14262ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 4) = arg3
uint64_t rdi = zx.q(arg2)
int32_t r8_1 = (arg2 - 1) | (arg2 - 1) u>> 1
int32_t r8_2 = r8_1 | r8_1 u>> 2
int32_t r8_3 = r8_2 | r8_2 u>> 4
int32_t r8_4 = r8_3 | r8_3 u>> 8
*(arg1 + 8) = 1f / arg3
*(arg1 + 0x28) = (r8_4 u>> 0x10 | r8_4) + 1
int64_t rax_8 = j_sub_1426075c0(zx.q(((r8_4 u>> 0x10 | r8_4) + 1) * 2), 0)
*(arg1 + 0x20) = rax_8

if (rax_8 != 0)
    *(arg1 + 0x1c) = rdi.d
    *(arg1 + 0x18) = 0
    rax_8 = j_sub_1426075c0(zx.q((rdi << 3).d), 0)
    *(arg1 + 0x10) = rax_8
    
    if (rax_8 != 0)
        memset(*(arg1 + 0x20), 0xff, sx.q(*(arg1 + 0x28)) * 2)
        *(arg1 + 0x18) = 0
        int64_t rax_9
        rax_9.b = 1
        *(arg1 + 0x2c) = 0xffff
        *(arg1 + 0x30) = 0xffff
        *(arg1 + 0x34) = 0xffff0001
        *(arg1 + 0x38) = 0xffff0001
        return rax_9

rax_8.b = 0
return rax_8
