// 函数: sub_142b9ff60
// 地址: 0x142b9ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int32_t r9 = 0
int32_t arg_8 = 0

if (rax s< 0x12)
    if (*(arg1 + 8) == 0)
        arg1[1] = 0x12
        *(arg1 + 8) = &arg1[0xa]
    
    goto label_142b9ffa2

int32_t r8_1 = arg1[1]

if (rax s< r8_1)
    goto label_142b9ffa2

if (r8_1 s>= 0x1c71c71)
    *arg3 = 0
    return 0x40

int32_t rsi_2 = r8_1 + 4 + (r8_1 s>> 2)

if (rsi_2 s< r8_1 || rsi_2 s> 0x1c71c71)
    rsi_2 = 0x1c71c71

int64_t rax_7 = *(arg1 + 8)
void* rbx_1 = &arg1[0xa]

if (rax_7 != rbx_1)
    int64_t rax_9 = sub_142b99a90(arg2, 0x48, r8_1, rsi_2, rax_7, &arg_8)
    r9 = arg_8
    *(arg1 + 8) = rax_9
    
    if (r9 != 0)
        *arg3 = 0
    else
        arg1[1] = rsi_2
    label_142b9ffa2:
        int64_t r8 = sx.q(*arg1)
        int64_t rdx = *(arg1 + 8) + r8 * 0x48
        *arg1 = (r8 + 1).d
        *arg3 = rdx
    
    return zx.q(r9)

int128_t* rax_8 = sub_142b99a90(arg2, 0x48, 0, rsi_2, 0, &arg_8)
int32_t rcx_2 = arg_8
*(arg1 + 8) = rax_8

if (rcx_2 != 0)
    *arg3 = 0
    return zx.q(rcx_2)

int64_t i_1 = 0xa
int64_t i

do
    rax_8 = &rax_8[8]
    int128_t zmm0_1 = *rbx_1
    rbx_1 += 0x80
    rax_8[-8] = zmm0_1
    rax_8[-7] = *(rbx_1 - 0x70)
    rax_8[-6] = *(rbx_1 - 0x60)
    rax_8[-5] = *(rbx_1 - 0x50)
    rax_8[-4] = *(rbx_1 - 0x40)
    rax_8[-3] = *(rbx_1 - 0x30)
    rax_8[-2] = *(rbx_1 - 0x20)
    rax_8[-1] = *(rbx_1 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*rax_8 = *rbx_1
r9 = arg_8
arg1[1] = rsi_2
goto label_142b9ffa2
