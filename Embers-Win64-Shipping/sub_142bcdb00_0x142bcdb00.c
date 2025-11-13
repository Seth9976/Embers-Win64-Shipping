// 函数: sub_142bcdb00
// 地址: 0x142bcdb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *arg1
int64_t rsi = arg1[7]

if (rdi == 0)
    return 

int32_t arg_8
int64_t rax = sub_142b99860(rsi, arg1[1].d, &arg_8)
bool cond:0_1 = arg_8 != 0
*arg1 = rax

if (cond:0_1)
    return 

memcpy(rax, rdi, (arg1[1]).d)
int64_t* i = arg1[5]
int64_t r10_2 = *arg1 - rdi

for (void* r9_1 = &i[sx.q(*(arg1 + 0x1c))]; i u< r9_1; i = &i[1])
    int64_t r8_3 = *i
    
    if (r8_3 != 0)
        *i = r8_3 + r10_2

arg1[2] = arg1[1]
sub_142b99980(rsi, rdi)
