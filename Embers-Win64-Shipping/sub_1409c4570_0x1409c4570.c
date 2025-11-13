// 函数: sub_1409c4570
// 地址: 0x1409c4570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x28)
int32_t rcx = arg3[1].d
int64_t rbx = sx.q(arg2)
void* r14_2 = (rbx << 5) + *rsi
int32_t rax = *(r14_2 + 0x18)

if (rax s> rcx)
    arg3[1].d = rax
    
    if (rax s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
else if (rax s< rcx && rax != rcx)
    arg3[1].d = rax
    sub_1405dac90(arg3)

int64_t rdx_1 = 0
int32_t* r8 = *(r14_2 + 0x10)
void* result = &r8[sx.q(*(r14_2 + 0x18))]
uint64_t r10_1 = sx.q(*(r14_2 + 0x18)) << 2 u>> 2

if (r8 u> result)
    r10_1 = 0

if (r10_1 != 0)
    do
        int64_t rcx_3 = sx.q(*r8) * 3
        int64_t rax_3 = *(rsi + 0x70)
        int32_t rcx_4 = *(rax_3 + (rcx_3 << 3))
        
        if (rcx_4 == rbx.d)
            rcx_4 = *(rax_3 + (rcx_3 << 3) + 4)
        
        result = *arg3
        r8 = &r8[1]
        *(result + (rdx_1 << 2)) = rcx_4
        rdx_1 += 1
    while (rdx_1 != r10_1)

return result
