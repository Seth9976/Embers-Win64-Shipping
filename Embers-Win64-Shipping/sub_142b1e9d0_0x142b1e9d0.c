// 函数: sub_142b1e9d0
// 地址: 0x142b1e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]
int16_t rax = *(rcx + 8)
int32_t rdi_1

if (rax s< 0)
    rdi_1 = *(rcx + 0xc)
else
    rdi_1 = sx.d(rax) s>> 5

void* rax_1 = sub_142a4a0b0(rcx, arg2)
arg1[2] = rax_1

if (rax_1 == 0)
    *arg3 = 7
    return rax_1

void* rdx = rax_1 + (sx.q(rdi_1) << 1)
void* rax_3 = arg1[1]
arg1[4] = rdx
int32_t rax_4

if ((*(rax_3 + 8) & 2) == 0)
    rax_4 = *(rax_3 + 0x10)
else
    rax_4 = 0x1b

arg1[3] = rax_1
arg1[5].d = rax_4 - rdi_1

if (rax_1 == rdx)
    *(arg1 + 0x2c) = 0
    int32_t rax_5
    rax_5.b = 1
    return rax_5

arg1[6] = rdx
char rax_6 = sub_142b1f590(arg1)
*(arg1 + 0x2c) = rax_6

if (rax_6 u> 1)
    char i
    
    do
        i = sub_142b1f590(arg1)
    while (i u> 1)

arg1[3] = arg1[7]
int64_t rax_7
rax_7.b = 1
return rax_7
