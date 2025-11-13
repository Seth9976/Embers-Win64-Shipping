// 函数: sub_1428a73a0
// 地址: 0x1428a73a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdx = *arg1

if (rdx u>= arg2)
    int64_t rax = arg1[1]
    
    if (rax != 0)
        memset(rax + arg2, 0, rdx - arg2)
    
    *arg1 = arg2
    return arg2

int64_t r10 = arg1[2]

if (r10 u>= arg2)
    memset(arg1[1] + rdx, 0, arg2 - rdx)
    *arg1 = arg2
    return arg2

if (arg2 u> 0x5ffffffc)
    sub_1428a5670(7, 0x69, 0x41, "crypto\buffer\buffer.c", 0x80)
    return 0

uint64_t rsi_2 = ((arg2 + 3) u/ 3) << 2
int64_t rax_5

if ((arg1[3].b & 1) == 0)
    rax_5 = sub_1428a6910(arg1[1], r10, rsi_2, "crypto\buffer\buffer.c", 0x87)
else
    rax_5 = sub_1428a7620(arg1, rsi_2)

if (rax_5 == 0)
    sub_1428a5670((rax_5 + 7).d, (rax_5 + 0x69).d, (rax_5 + 0x41).d, "crypto\buffer\buffer.c", 0x89)
    return 0

arg1[1] = rax_5
uint64_t count = arg2 - *arg1
int64_t rcx_8 = rax_5 + *arg1
arg1[2] = rsi_2
memset(rcx_8, 0, count)
*arg1 = arg2
return arg2
