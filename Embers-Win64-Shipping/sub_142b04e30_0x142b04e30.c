// 函数: sub_142b04e30
// 地址: 0x142b04e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    *arg3 = 0x1c8
    return 0

int128_t* rbx = *(arg1 + 0x10)
int64_t i_1 = 0x14
*(arg2 + 0x120) = *rbx
*(arg2 + 0x130) = rbx[1]
*(arg2 + 0x140) = rbx[2]
*(arg2 + 0x150) = rbx[3]
*(arg2 + 0x160) = rbx[4]
*(arg2 + 0x170) = rbx[5]
*(arg2 + 0x180) = rbx[6]
*(arg2 + 0x190) = rbx[7]
*(arg2 + 0x1a0) = rbx[8]
*(arg2 + 0x1b0) = rbx[9]
*(arg2 + 0x1c0) = rbx[0xa].q
int64_t i

do
    void* rcx = *rbx
    
    if (rcx != 0)
        sub_142a920c0(rcx)
    
    rbx += 8
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg2 + 0x10) = arg2 + 0x120
*(arg2 + 0x3e) = 1
return arg2
