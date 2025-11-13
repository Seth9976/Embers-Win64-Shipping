// 函数: sub_142a61820
// 地址: 0x142a61820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* i = *(arg1 + 8)

if (i != 0)
    sub_142a615c0()
    sub_142a860a0(&data_144015690)
    
    for (; i != 0; i = *(i + 0x10))
        *(i + 0x6c) -= 1
    
    sub_142a615c0()
    sub_142a860d0(&data_144015690)

int64_t rcx = *(arg1 + 0x10)

if (rcx != 0)
    sub_142a7dcd0(rcx)

int64_t rcx_1 = *(arg1 + 0x20)

if (rcx_1 != 0 && rcx_1 != arg1 + 0x68)
    sub_142a7dcd0(rcx_1)

bool cond:0_1 = *(arg1 + 0xb4) != 0x12c9b17
*(arg1 + 0x20) = 0
*(arg1 + 0xa8) = 0

if (not(cond:0_1) && *(arg1 + 0xb8) == 0x12bb38b && arg2 != 0)
    sub_142a7dcd0(arg1)
