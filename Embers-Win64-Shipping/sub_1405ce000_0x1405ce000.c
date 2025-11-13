// 函数: sub_1405ce000
// 地址: 0x1405ce000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(&arg2[2], 0, 0x90)
int64_t* rcx_1 = &arg2[2]
*arg2 = 0
arg2[1] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax = rcx_1[2]

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
rcx_1[1] = 0
void* result_1 = &arg2[0xc]
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
arg2[0xa] = 0
arg2[0xb] = 0
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
arg2[0x10].d = 0xffffffff
*(arg2 + 0x84) = 0
arg2[0x12] = 0
arg2[0x13].d = 0
return result
