// 函数: sub_142365c40
// 地址: 0x142365c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (sub_14238e9c0(arg1, rsi.d, arg3, arg4, arg5, arg6, arg7, arg8) == 0)
    return 0

int64_t* rcx = arg8
void* rdx_2 = rsi * 0x430 + *(*(arg1 + 0x150) + 0x10)
int64_t* rax_5 = arg8[0xd]

if (rax_5 != 0)
    rcx = rax_5

int64_t rax_6

if ((*(rcx + 0x64) & 0x100) == 0)
    rax_6 = *(rdx_2 + 0x420)
else
    rax_6 = *(rdx_2 + 0x428)

arg8[0xf] = rax_6
int64_t* rax_7 = arg8[0xd]
int64_t* rcx_1 = arg8

if (rax_7 != 0)
    rcx_1 = rax_7

rcx_1[3] = arg1
int64_t* rcx_2 = arg8
int64_t* rax_8 = arg8[0xd]

if (rax_8 != 0)
    rcx_2 = rax_8

*(rcx_2 + 0x64) |= 0x200
int64_t* rcx_3 = arg8
int64_t* rax_9 = arg8[0xd]

if (rax_9 != 0)
    rcx_3 = rax_9

*rcx_3 = *(arg1 + 0x140)
int32_t rcx_4
rcx_4.b = 0f f> *(arg1 + 0x65c)
int32_t rax_11
rax_11.b = 0f f> *(arg1 + 0x658)
int32_t rcx_5 = rcx_4 ^ rax_11
rax_11.b = 1
*(arg8 + 0x9c) ^= rcx_5 & 1
return 1
