// 函数: sub_142ba2760
// 地址: 0x142ba2760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rsi_1 = *arg1

if (rsi_1 == 0)
    return 

void* rbx_1 = &arg1[8]
int64_t i_1 = 2
int64_t i

do
    int64_t rdx_1 = *rbx_1
    *(rbx_1 - 8) = 0
    *(rbx_1 - 4) = 0
    
    if (rdx_1 != rbx_1 + 0x20)
        sub_142b99980(rsi_1, rdx_1)
        *rbx_1 = 0
    
    int64_t rdx_2 = *(rbx_1 + 0x10)
    *(rbx_1 + 8) = 0
    
    if (rdx_2 != rbx_1 + 0x530)
        sub_142b99980(rsi_1, rdx_2)
        *(rbx_1 + 0x10) = 0
    
    rbx_1 += 0x898
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rdx_3 = arg1[6]

if (rdx_3 != &arg1[0x230])
    sub_142b99980(rsi_1, rdx_3)
    arg1[6] = 0

int64_t rdx_4 = arg1[4]
arg1[5] = 0

if (rdx_4 != &arg1[0x238])
    sub_142b99980(rsi_1, rdx_4)
    arg1[4] = 0

arg1[3] = 0
*arg1 = 0
