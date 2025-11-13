// 函数: sub_141f735e0
// 地址: 0x141f735e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 1
*arg1 = 0
int32_t r10 = 1

if (arg4 s>= 1)
    r10 = arg4

*(arg1 + 4) = r10
int128_t zmm6 = arg2
int32_t rbx_1 = arg5 - mods.dp.d(sx.q(arg5), r10)
*(arg1 + 0x14) = zmm6.d

if (rbx_1 s>= 1)
    r11 = rbx_1

*(arg1 + 8) = r11
char rdx_2 = data_143de5480
int64_t rsi = data_143f3b830
int32_t rax_2
int64_t rcx

if (rdx_2 == 0)
    rcx = 0
else
    rax_2 = GetCurrentThreadId()
    rdx_2 = data_143de5480
    rcx.b = rax_2 != data_143de5470

if (*(rsi + (rcx << 2)) != 0)
    rax_2 = 0
else if (arg6 == 0 || *(arg1 + 8) s>= *(arg1 + 0x1c))
    int64_t rsi_1 = data_143f3b818
    int64_t rcx_1
    
    if (rdx_2 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rsi_1 + (rcx_1 << 2)) != 1)
        rax_2 = 0
    else
        rax_2.b = 1
else
    rax_2.b = 1

int32_t r10_1 = *(arg1 + 4)
int32_t r11_1 = *(arg1 + 8)
char r8 = (arg1[2] & 0xfe) | rax_2.b
arg1[2] = r8
char r9 = 0
int32_t temp1_1 = modu.dp.q(0:(zx.q(arg3) + data_143de5458), 0xffffffff)

if (modu.dp.d(0:temp1_1, r10_1) != 0)
    r9 = 8

char rax_7 = 0

if (modu.dp.d(0:temp1_1, r11_1) != 0)
    rax_7 = 0x10

r9 = ((r9 | (r8 & 0xf7)) & 0xef) | rax_7
arg1[2] = r9
int32_t result

if ((r9 & 8) == 0)
    result = 0
else
    result = *(arg1 + 0x80) + 1

*(arg1 + 0x80) = result
int32_t rcx_4

if ((0x10 & r9) == 0)
    rcx_4 = 0
else
    rcx_4 = *(arg1 + 0x84) + 1

*(arg1 + 0x84) = rcx_4

if (result s>= r10_1 || rcx_4 s>= r11_1)
    r9 &= 0xe7
    *(arg1 + 0x80) = 0
    arg1[2] = r9

arg2 = *(arg1 + 0xc)
*(arg1 + 0x10) = 0

if ((r9 & 8) != 0)
    arg2.d = arg2.d f- zmm6.d
    *(arg1 + 0xc) = arg2.d
else if (not(arg2.d f>= 0f))
    *(arg1 + 0x10) = (arg2 ^ data_142d3f780).d
    *(arg1 + 0xc) = 0

return result
