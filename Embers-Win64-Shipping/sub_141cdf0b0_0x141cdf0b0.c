// 函数: sub_141cdf0b0
// 地址: 0x141cdf0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)

if (rbx_1.d s>= *(arg1 + 0x30))
    return 

void* rax_1 = *(arg1 + 0x48)
void* r8 = arg1 + 0x38

if (rax_1 != 0)
    r8 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rbx_1.d)

if (not(test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), rbx_1.d & 0x1f)))
    return 

int32_t rax_6 = sub_141cddca0(arg1 + 0x28, rbx_1.d)
int64_t rsi_1 = 0
arg3[1].d = 0

if (rax_6 s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rax_6)

int64_t* rax_9 = (rbx_1 << 5) + *(arg1 + 0x28)
int32_t* rbp_1 = *rax_9
uint64_t r15_2 = sx.q(rax_9[1].d) << 2 u>> 2

if (rbp_1 u> &rbp_1[rax_9[1]])
    r15_2 = 0

if (r15_2 == 0)
    return 

do
    int64_t rcx_4 = sx.q(*rbp_1) * 3
    uint64_t rax = *(arg1 + 0x60)
    int64_t rbx_2 = sx.q(*(rax + (rcx_4 << 3) + 0x10))
    
    if (rbx_2.d != 0)
        int32_t rax_12 = arg3[1].d
        int32_t rdx_5 = rax_12 + rbx_2.d
        
        if (rdx_5 s> *(arg3 + 0xc))
            sub_1405dadb0(arg3, rdx_5)
            rax_12 = arg3[1].d
        
        memcpy(*arg3 + (sx.q(rax_12) << 2), *(rax + (rcx_4 << 3) + 8), (rbx_2 << 2).d)
        arg3[1].d += rbx_2.d
    
    rbp_1 = &rbp_1[1]
    rsi_1 += 1
while (rsi_1 != r15_2)
