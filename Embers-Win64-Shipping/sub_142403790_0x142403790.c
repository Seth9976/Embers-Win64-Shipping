// 函数: sub_142403790
// 地址: 0x142403790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = 0
int32_t i_1 = *(arg1 + 0x58)
int64_t* rbx = *(arg1 + 0x50)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x5c) == 0
*(arg1 + 0x58) = 0

if (not(cond:0))
    sub_14061cd70(arg1 + 0x50, 0)
