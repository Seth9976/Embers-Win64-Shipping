// 函数: sub_142b0a750
// 地址: 0x142b0a750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_6 = sx.q(*(arg1 + 0x4b))
int32_t r8 = i_6.d
int64_t i_4 = i_6

do
    r8 -= 1
    int64_t i_7 = i_4
    i_4 -= 1
    
    if (i_7 - 1 s< 0)
        i_4 = 7
        r8 = 7
while (*(arg1 + i_4 + 0x4c) != arg2)

int32_t i = 0

if (r8 != 7)
    i = r8 + 1

if (i == i_6.d)
    int64_t rax = sx.q(r8)
    *(rax + arg1 + 0x4c) = arg2
    return rax

int64_t i_2 = sx.q(i)
int64_t i_3

do
    *(arg1 + i_4 + 0x4c) = *(arg1 + i_2 + 0x4c)
    i_4 = i_2
    int64_t i_5 = i_2 + 1
    i_3 = sx.q(i)
    i_2 = 0
    
    if (i != 7)
        i_2 = i_5
    
    int32_t i_1 = 0
    
    if (i != 7)
        i_1 = i + 1
    
    i = i_1
while (i != sx.d(*(arg1 + 0x4b)))

*(i_3 + arg1 + 0x4c) = arg2
return i_4
