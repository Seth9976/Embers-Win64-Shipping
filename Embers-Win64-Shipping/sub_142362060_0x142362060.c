// 函数: sub_142362060
// 地址: 0x142362060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298

if (rcx != 0 && data_143de5444 == 0)
    int64_t* rax_1 = sub_1423dcff0(rcx)
    
    if (arg2 != 0 && rax_1 != 0)
        sub_141e89100(rax_1, arg1, nullptr)
        sub_141e7c5f0(rax_1, arg1)

int64_t rcx_3 = *(arg1 + 0x268)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)
    *(arg1 + 0x268) = 0

int64_t rcx_4 = *(arg1 + 0x278)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)
    *(arg1 + 0x278) = 0

int64_t* rsi_1 = *(arg1 + 0x280)

if (rsi_1 != 0)
    sub_140bc04a0(rsi_1)
    j_sub_140a74f90(rsi_1)

*(arg1 + 0x16d) &= 0xef
*(arg1 + 0x280) = 0
*(arg1 + 0x288) = 0
*(arg1 + 0x210) = 0
*(arg1 + 0x20c) = 0
*(arg1 + 0x169) = 0
*(arg1 + 0x1a4)
*(arg1 + 0x1a4) = 0
*(arg1 + 0x16e) &= 0xfd
char result = *(arg1 + 0x16f)

if (result == 1)
    *(arg1 + 0x16f) = 2

return result
