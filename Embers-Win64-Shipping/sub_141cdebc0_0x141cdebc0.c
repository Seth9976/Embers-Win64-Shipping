// 函数: sub_141cdebc0
// 地址: 0x141cdebc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r9_1 = sx.q(arg2)

if (r9_1.d s>= *(arg1 + 0xd8))
    return 

void* r8 = arg1 + 0xe0
void* rax_1 = *(r8 + 0x10)

if (rax_1 != 0)
    r8 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(r9_1.d)

if (not(test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9_1.d & 0x1f)))
    return 

int32_t* i = (r9_1 << 4) + *(arg1 + 0xd0)

while (i != &i[3])
    int64_t rsi_1 = sx.q(arg3[1].d)
    int32_t rax_6 = (rsi_1 + 1).d
    arg3[1].d = rax_6
    
    if (rax_6 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    int32_t rax = *i
    i = &i[1]
    *(*arg3 + (rsi_1 << 2)) = rax
