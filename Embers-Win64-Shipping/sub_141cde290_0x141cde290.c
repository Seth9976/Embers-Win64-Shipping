// 函数: sub_141cde290
// 地址: 0x141cde290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r9_1 = sx.q(arg2)

if (r9_1.d s>= *(arg1 + 0x110))
    return 

void* r10_1 = arg1 + 0x118
void* rax_1 = *(r10_1 + 0x10)

if (rax_1 != 0)
    r10_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(r9_1.d)

if (not(test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9_1.d & 0x1f)))
    return 

int64_t rax_6 = *(arg1 + 0x108)
int64_t rcx_2 = r9_1 * 5
int64_t rbx_1 = sx.q(*(rax_6 + (rcx_2 << 3) + 8))
uint64_t rax = zx.q(arg3[1].d)

if (rbx_1.d s> rax.d)
    arg3[1].d = rbx_1.d
    
    if (rbx_1.d s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
else if (rbx_1.d s< rax.d && rbx_1.d != rax.d)
    arg3[1].d = rbx_1.d
    sub_1405dac90(arg3)

int32_t rsi_1 = 0

if (rbx_1.d s<= 0)
    return 

int32_t rcx_5 = (rbx_1 - 1).d
int32_t arg_10 = rcx_5
int64_t r10_2 = 0
int64_t r15_1

do
    int64_t r8 = *(rax_6 + (rcx_2 << 3))
    r15_1 = r10_2 + 1
    int64_t r9_2 = *(arg1 + 0x60)
    int64_t r12_1 = r10_2 << 2
    int64_t rax_7 = 0
    
    if (rsi_1 != rcx_5)
        rax_7 = r15_1
    
    int32_t rdx_4 = *(r9_2 + sx.q(*(r8 + (rax_7 << 2))) * 0x18)
    int64_t rax_10 = *(arg1 + 0x28)
    int64_t r8_1 = sx.q(*(r9_2 + sx.q(*(r12_1 + r8)) * 0x18))
    int64_t rcx_9 = r8_1 << 5
    int32_t* r9_3 = *(rcx_9 + rax_10 + 0x10)
    void* r11_1 = &r9_3[sx.q(*(rcx_9 + rax_10 + 0x18))]
    int64_t r10_3
    
    if (r9_3 == r11_1)
    label_141cde3ec:
        r10_3 = zx.q(data_143a1c6bc)
    else
        int64_t rbx_2 = *(arg1 + 0x98)
        
        while (true)
            r10_3 = sx.q(*r9_3)
            int64_t rcx_10 = r10_3 * 3
            int32_t rcx_11 = *(rbx_2 + (rcx_10 << 3))
            int32_t rax_13 = *(rbx_2 + (rcx_10 << 3) + 4)
            
            if (rcx_11 == r8_1.d && rax_13 == rdx_4)
                break
            
            if (rcx_11 == rdx_4 && rax_13 == r8_1.d)
                break
            
            r9_3 = &r9_3[1]
            
            if (r9_3 == r11_1)
                goto label_141cde3ec
    
    rsi_1 += 1
    rcx_5 = arg_10
    *(r12_1 + *arg3) = r10_3.d
    r10_2 = r15_1
while (r15_1 s< rbx_1)
