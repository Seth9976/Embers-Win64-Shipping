// 函数: sub_142adf970
// 地址: 0x142adf970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::PatternMap::`vftable'
void* rbx = &arg1[1]
int64_t i_1 = 0x34
int64_t i

do
    int64_t* rcx = *rbx
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
        *rbx = 0
    
    rbx += 8
    i = i_1
    i_1 -= 1
while (i != 1)

if ((arg2 & 1) != 0 && (arg2 & 4) == 0)
    sub_142a47920(arg1)

return arg1
