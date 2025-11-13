// 函数: sub_141cdef70
// 地址: 0x141cdef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)

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

arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

int64_t* rax_8 = (rbx_1 << 5) + *(arg1 + 0x28)
int32_t* i = *rax_8

for (void* r12_1 = &i[sx.q(rax_8[1].d)]; i != r12_1; i = &i[1])
    int64_t rdi_1 = 0
    int64_t rcx_3 = sx.q(*i) * 3
    int64_t rax_10 = *(arg1 + 0x60)
    int32_t* rbx_2 = *(rax_10 + (rcx_3 << 3) + 8)
    uint64_t rsi_2 = sx.q(*(rax_10 + (rcx_3 << 3) + 0x10)) << 2 u>> 2
    
    if (rbx_2 u> &rbx_2[sx.q(*(rax_10 + (rcx_3 << 3) + 0x10))])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            sub_1408d92c0(arg3, *(arg1 + 0xd0) + 0xc + (sx.q(*rbx_2) << 4))
            rdi_1 += 1
            rbx_2 = &rbx_2[1]
        while (rdi_1 != rsi_2)
