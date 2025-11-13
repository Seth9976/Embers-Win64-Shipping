// 函数: sub_141a8b6f0
// 地址: 0x141a8b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = arg2

if (arg2 s>= arg3)
    return 

if (arg3 - arg2 s>= 4)
    int64_t r9_1 = **arg1
    void* r8_1 = r9_1 + ((arg2 + 1) << 2)
    int32_t* rcx_1 = *arg1[1] - r9_1
    int64_t i_2 = ((arg3 - r11 - 4) u>> 2) + 1
    r11 += i_2 << 2
    int64_t i
    
    do
        *(r8_1 - 4) = *(rcx_1 + r8_1 - 4)
        *r8_1 = *(rcx_1 + r8_1)
        *(r8_1 + 4) = *(rcx_1 + r8_1 + 4)
        *(r8_1 + 8) = *(rcx_1 + r8_1 + 8)
        r8_1 += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r11 s>= arg3)
    return 

int64_t rcx_2 = **arg1
int32_t* rdx_4 = rcx_2 + (r11 << 2)
int64_t r8_3 = *arg1[1] - rcx_2
int64_t i_3 = arg3 - r11
int64_t i_1

do
    *rdx_4 = *(rdx_4 + r8_3)
    rdx_4 = &rdx_4[1]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
