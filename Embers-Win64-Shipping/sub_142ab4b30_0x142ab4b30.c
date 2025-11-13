// 函数: sub_142ab4b30
// 地址: 0x142ab4b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (*(arg1 + 0x40) != 0)
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0

if (rdi != 0x80000000)
    bool cond:0_1 = rdi == 0
    
    if (rdi s< 0)
        rdi = neg.d(rdi)
        *(arg1 + 0x14) = data_143ccaf50
        cond:0_1 = rdi == 0
    
    if (not(cond:0_1))
        if (rdi != 0x80000000)
            sub_142ab3d50(arg1, rdi)
            sub_142ab3280(arg1)
        else
            sub_142ab3df0(arg1, 0x80000000)
            sub_142ab3280(arg1)
else
    *(arg1 + 0x14) = data_143ccaf50
    sub_142ab3df0(arg1, 0x80000000)
    sub_142ab3280(arg1)

return arg1
