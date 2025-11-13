// 函数: sub_141cded90
// 地址: 0x141cded90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)
uint64_t* rdi_1 = arg3

if (rbx_1.d s>= *(arg1 + 0x30))
    return 

void* rax_1 = *(arg1 + 0x48)
void* r9_1 = arg1 + 0x38

if (rax_1 != 0)
    r9_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rbx_1.d)

if (not(test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), rbx_1.d & 0x1f)))
    return 

int32_t rcx_2 = arg3[1].d
void* r14_3 = (rbx_1 << 5) + *(arg1 + 0x28)
int32_t rax_6 = *(r14_3 + 0x18)

if (rax_6 s> rcx_2)
    arg3[1].d = rax_6
    
    if (rax_6 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
else if (rax_6 s< rcx_2 && rax_6 != rcx_2)
    arg3[1].d = rax_6
    sub_1405dac90(rdi_1)

int64_t rdx_4 = 0
int32_t* r8 = *(r14_3 + 0x10)
uint64_t r10_2 = sx.q(*(r14_3 + 0x18)) << 2 u>> 2

if (r8 u> &r8[sx.q(*(r14_3 + 0x18))])
    r10_2 = 0

if (r10_2 == 0)
    return 

do
    int64_t rcx_5 = sx.q(*r8) * 3
    int64_t rax_9 = *(arg1 + 0x98)
    int32_t rcx_6 = *(rax_9 + (rcx_5 << 3))
    
    if (rcx_6 == rbx_1.d)
        rcx_6 = *(rax_9 + (rcx_5 << 3) + 4)
    
    r8 = &r8[1]
    *(*rdi_1 + (rdx_4 << 2)) = rcx_6
    rdx_4 += 1
while (rdx_4 != r10_2)
