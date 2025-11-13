// 函数: sub_142367050
// 地址: 0x142367050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (sub_14238f3f0(arg1, rsi.d, arg3, arg4, arg5, arg6) == 0)
    return 0

int64_t* rcx = arg5
void* rdx_2 = rsi * 0x430 + *(*(arg1 + 0x150) + 0x10)
int64_t* rax_3 = arg5[0xd]

if (rax_3 != 0)
    rcx = rax_3

int64_t rax_4

if ((*(rcx + 0x64) & 0x100) == 0)
    rax_4 = *(rdx_2 + 0x420)
else
    rax_4 = *(rdx_2 + 0x428)

arg5[0xf] = rax_4
int64_t* rax_5 = arg5[0xd]
int64_t* rcx_1 = arg5

if (rax_5 != 0)
    rcx_1 = rax_5

rcx_1[3] = arg1
int64_t* rcx_2 = arg5
int64_t* rax_6 = arg5[0xd]

if (rax_6 != 0)
    rcx_2 = rax_6

*(rcx_2 + 0x64) |= 0x200
int64_t* rcx_3 = arg5
int64_t* rax_7 = arg5[0xd]

if (rax_7 != 0)
    rcx_3 = rax_7

*rcx_3 = *(arg1 + 0x140)
int32_t rcx_4
rcx_4.b = 0f f> *(arg1 + 0x65c)
int32_t rax_9
rax_9.b = 0f f> *(arg1 + 0x658)
int32_t rcx_5 = rcx_4 ^ rax_9
rax_9.b = 1
*(arg5 + 0x9c) ^= rcx_5 & 1
return 1
