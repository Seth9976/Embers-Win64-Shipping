// 函数: sub_140829a20
// 地址: 0x140829a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 8)

if (rbp == 0)
    return 

int32_t rbx_1 = *(rbp + 0x28)
int32_t rdx_1 = arg2[1].d + rbx_1

if (rdx_1 s> *(arg2 + 0xc))
    sub_14083ae50(arg2, rdx_1)

int32_t rdx_3 = arg2[3].d + rbx_1

if (rdx_3 s> *(arg2 + 0x1c))
    sub_14083ae70(&arg2[2], rdx_3)

void* rsi_1 = *(rbp + 0x20)
void* r15_1 = rsi_1 + sx.q(*(rbp + 0x28)) * 0x28

if (rsi_1 == r15_1)
    return 

int64_t* r14_1 = rsi_1 + 0x1c

do
    int64_t rbp_1 = sx.q(arg2[3].d)
    int32_t rax_1 = (rbp_1 + 1).d
    arg2[3].d = rax_1
    
    if (rax_1 s> *(arg2 + 0x1c))
        sub_14083aa30(&arg2[2], rbp_1.d)
    
    int64_t rax_2 = arg2[2]
    int64_t rcx_5 = rbp_1 * 3
    *(rax_2 + (rcx_5 << 2)) = *r14_1
    *(rax_2 + (rcx_5 << 2) + 8) = r14_1[1].d
    int64_t rbp_2 = sx.q(arg2[1].d)
    int32_t rax_4 = (rbp_2 + 1).d
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_14083a9e0(arg2, rbp_2.d)
    
    r14_1 = &r14_1[5]
    uint128_t* rdx_8 = rbp_2 * 0x1c + *arg2
    *rdx_8 = *rsi_1
    rdx_8[1].q = *(rsi_1 + 0x10)
    int64_t rax = zx.q(*(rsi_1 + 0x18))
    rsi_1 += 0x28
    *(rdx_8 + 0x18) = rax.d
while (rsi_1 != r15_1)
