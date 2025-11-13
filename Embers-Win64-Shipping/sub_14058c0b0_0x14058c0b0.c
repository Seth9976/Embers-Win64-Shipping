// 函数: sub_14058c0b0
// 地址: 0x14058c0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1[2]

if (arg2 u<= r9)
    arg1[2] = arg2
    
    if (arg1[3] u>= 0x10)
        arg1 = *arg1
    
    *(arg1 + arg2) = 0
    return 

int64_t r10 = arg1[3]
uint64_t count = arg2 - r9

if (count u> r10 - r9)
    sub_14058c4e0(arg1, count, 0, count, arg3)
    return 

arg1[2] = arg2

if (r10 u>= 0x10)
    arg1 = *arg1

void* rbx = arg1 + r9
memset(rbx, sx.d(arg3), count)
*(rbx + count) = 0
