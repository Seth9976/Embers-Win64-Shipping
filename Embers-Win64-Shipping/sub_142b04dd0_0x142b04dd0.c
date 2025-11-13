// 函数: sub_142b04dd0
// 地址: 0x142b04dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

int64_t i_1 = 0x14
int64_t i

do
    void* rcx = *rbx
    
    if (rcx != 0)
        sub_142a92480(rcx)
    
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)

if (*(arg1 + 0x3e) == 0)
    sub_142a7dcd0(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0
