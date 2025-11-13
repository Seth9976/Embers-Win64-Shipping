// 函数: sub_142b043c0
// 地址: 0x142b043c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 == 0)
    *arg3 = 0x2e0
    return 0

int128_t* rbx = *(arg1 + 0x10)
*(arg2 + 0x248) = *rbx
*(arg2 + 0x258) = rbx[1]
*(arg2 + 0x268) = rbx[2]
*(arg2 + 0x278) = rbx[3]
*(arg2 + 0x288) = rbx[4]
*(arg2 + 0x298) = rbx[5]
*(arg2 + 0x2a8) = rbx[6]
*(arg2 + 0x2b8) = rbx[7]
*(arg2 + 0x2c8) = rbx[8]
*(arg2 + 0x2d8) = rbx[9].q
*(arg2 + 0x10) = arg2 + 0x248
*(arg2 + 0x3e) = 1

if (rbx[5].q != 0)
    int32_t arg_18 = 0x128
    *(arg2 + 0x298) = sub_142a84e40(rbx[5].q, arg2 + 0x120, &arg_18, arg4)
    
    if (*arg4 s> 0)
        return 0

int64_t i_1 = 0xa
int64_t i

do
    void* rcx_1 = *rbx
    
    if (rcx_1 != 0)
        sub_142a920c0(rcx_1)
    
    rbx += 8
    i = i_1
    i_1 -= 1
while (i != 1)
return arg2
