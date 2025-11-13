// 函数: sub_1429dbbb0
// 地址: 0x1429dbbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_3 = *arg2
int64_t rdx

if (rax_3 == 0)
    rdx = 0
else
    rdx = *rax_3

*(arg1 + 0x108) = rdx

if (rax_3 == 0)
    *(arg1 + 0x110) = 0
    return 0

*(arg1 + 0x110) = rax_3[1]
return 0
