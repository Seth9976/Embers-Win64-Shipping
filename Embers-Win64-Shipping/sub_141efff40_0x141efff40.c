// 函数: sub_141efff40
// 地址: 0x141efff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d

if (i_2 == 0)
    return 

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 + i_2

if (rdx s> *(arg1 + 0xc))
    sub_1408e7380(arg1, rdx)
    rax_1 = arg1[1].d

int32_t* r13_1 = *arg2
int32_t i_1 = i_2
void* rdi_1 = &r13_1[8]
int32_t* r15_2 = sx.q(rax_1) * 0x70 + *arg1
void* rbx = &r15_2[5]
int32_t i

do
    *r15_2 = *r13_1
    *(rbx - 0xc) = 0
    int64_t rsi_1 = sx.q(*(rdi_1 - 0x10))
    int64_t r12_1 = *(rdi_1 - 0x18)
    *(rbx - 4) = rsi_1.d
    
    if (rsi_1.d != 0)
        sub_140809010(rbx - 0xc, rsi_1.d, 0)
        memcpy(*(rbx - 0xc), r12_1, (rsi_1 * 0x48).d)
    else
        *rbx = 0
    
    *(rbx + 4) = 0
    int64_t rsi_2 = sx.q(*rdi_1)
    int64_t r12_2 = *(rdi_1 - 8)
    *(rbx + 0xc) = rsi_2.d
    
    if (rsi_2.d != 0)
        sub_1409da0d0(rbx + 4, rsi_2.d, 0)
        memcpy(*(rbx + 4), r12_2, (rsi_2 * 0x60).d)
    else
        *(rbx + 0x10) = 0
    
    r15_2 = &r15_2[0x1c]
    r13_1 = &r13_1[0x1c]
    *(rbx + 0x1c) = *(rdi_1 + 0x10)
    *(rbx + 0x2c) = *(rdi_1 + 0x20)
    *(rbx + 0x3c) = *(rdi_1 + 0x30)
    *(rbx + 0x4c) = *(rdi_1 + 0x40)
    *(rbx + 0x50) ^= (*(rdi_1 + 0x44) ^ *(rbx + 0x50)) & 1
    int32_t rcx_7 = ((*(rdi_1 + 0x44) ^ *(rbx + 0x50)) & 2) ^ *(rbx + 0x50)
    *(rbx + 0x50) = rcx_7
    int32_t rax_8 = *(rdi_1 + 0x44)
    rdi_1 += 0x70
    *(rbx + 0x50) = ((rax_8 ^ rcx_7) & 4) ^ rcx_7
    rbx += 0x70
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[1].d += i_2
