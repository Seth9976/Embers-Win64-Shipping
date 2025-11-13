// 函数: sub_141b6d5e0
// 地址: 0x141b6d5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d

if (i_2 == 0)
    return 

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 + i_2

if (rdx s> *(arg1 + 0xc))
    sub_1405a5310(arg1, rdx)
    rax_1 = arg1[1].d

void* r14_1 = *arg2
int32_t i_1 = i_2
void* rdi_1 = r14_1 + 0x30
void* rsi_3 = sx.q(rax_1) * 0x50 + *arg1
void* rbx = rsi_3 + 0x2c
int32_t i

do
    sub_140596d10(rsi_3, r14_1)
    *(rbx - 0x1c) = *(rdi_1 - 0x20)
    *(rbx - 0x14) = *(rdi_1 - 0x18)
    *(rbx - 0xc) = 0
    int64_t rbp_1 = sx.q(*(rdi_1 - 8))
    int64_t rax_5 = *(rdi_1 - 0x10)
    *(rbx - 4) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1407751d0(rbx - 0xc, rbp_1.d, 0)
        memcpy(*(rbx - 0xc), rax_5, (rbp_1 * 0x28).d)
    else
        *rbx = rbp_1.d
    
    rsi_3 += 0x50
    *(rbx + 4) = *rdi_1
    r14_1 += 0x50
    *(rbx + 0xc) = *(rdi_1 + 8)
    *(rbx + 0x14) = *(rdi_1 + 0x10)
    char rax = *(rdi_1 + 0x18)
    rdi_1 += 0x50
    *(rbx + 0x1c) = rax
    rbx += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[1].d += i_2
