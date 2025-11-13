// 函数: sub_1423682b0
// 地址: 0x1423682b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (sub_142390470(arg1, rsi.d, arg3, arg4, arg5, arg6, arg7) == 0)
    return 0

int64_t* rcx = arg7
void* rdx_2 = rsi * 0x430 + *(*(arg1 + 0x150) + 0x10)
int64_t* rax_4 = arg7[0xd]

if (rax_4 != 0)
    rcx = rax_4

int64_t rax_5

if ((*(rcx + 0x64) & 0x100) == 0)
    rax_5 = *(rdx_2 + 0x420)
else
    rax_5 = *(rdx_2 + 0x428)

arg7[0xf] = rax_5
int64_t* rax_6 = arg7[0xd]
int64_t* rcx_1 = arg7

if (rax_6 != 0)
    rcx_1 = rax_6

rcx_1[3] = arg1
int64_t* rcx_2 = arg7
int64_t* rax_7 = arg7[0xd]

if (rax_7 != 0)
    rcx_2 = rax_7

*(rcx_2 + 0x64) |= 0x200
int64_t* rcx_3 = arg7
int64_t* rax_8 = arg7[0xd]

if (rax_8 != 0)
    rcx_3 = rax_8

*rcx_3 = *(arg1 + 0x140)
int32_t rcx_4
rcx_4.b = 0f f> *(arg1 + 0x65c)
int32_t rax_10
rax_10.b = 0f f> *(arg1 + 0x658)
int32_t rcx_5 = rcx_4 ^ rax_10
rax_10.b = 1
*(arg7 + 0x9c) ^= rcx_5 & 1
return 1
