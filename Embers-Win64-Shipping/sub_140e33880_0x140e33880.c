// 函数: sub_140e33880
// 地址: 0x140e33880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == arg2)
    return 

int32_t rdx = 0
int32_t rbx_2

if (arg2 == 0 || *arg2 == 0)
    rbx_2 = 0
else
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    rbx_2 = rbx_1.d + 1

*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) != rbx_2)
    sub_1405947f0(arg1 + 0x50, rbx_2)
    rdx = *(arg1 + 0x58)

int32_t rax = rdx + rbx_2
*(arg1 + 0x58) = rax

if (rax s> *(arg1 + 0x5c))
    sub_140594770(arg1 + 0x50)

if (rbx_2 != 0)
    memcpy(*(arg1 + 0x50), arg2, rbx_2 * 2)
