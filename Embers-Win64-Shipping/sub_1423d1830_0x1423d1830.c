// 函数: sub_1423d1830
// 地址: 0x1423d1830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140dbc660(arg1)
    
    int32_t rbx_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    sub_1405a4980(rdi_1, rbx_1 + 1)
    *(rdi_1 + 0x18) += 1
    void* rax_2 = *(rdi_1 + 0x10)
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1)
    int64_t rdx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_7 << 2)) &= not.d(1 << (rbx_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(r9_1 + rbp * 0x90 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8_1 * 0x90) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_9 != 0)
    r8_2 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
int64_t rdx_10 = sx.q((temp3 + (temp2 & 0x1f)) s>> 5)
*(r8_2 + (rdx_10 << 2)) |= 1 << (rbp.b & 0x1f)
char* rdi_4 = sx.q(rbp.d) * 0x90 + *arg1
*rdi_4 ^= (*rdi_4 ^ *arg2) & 1
*rdi_4 ^= (*rdi_4 ^ *arg2) & 2
rdi_4[1] = *(arg2 + 1)
*(rdi_4 + 4) = *(arg2 + 4)
*(rdi_4 + 8) = *(arg2 + 8)
*(rdi_4 + 0x10) = 0
*(rdi_4 + 0x18) = 0
sub_1407473e0(&rdi_4[0x10], arg2 + 0x10)
*(rdi_4 + 0x20) = *(arg2 + 0x20)
*(rdi_4 + 0x30) = *(arg2 + 0x30)
*(rdi_4 + 0x40) = *(arg2 + 0x40)
*(arg2 + 0x40) = 0
*(rdi_4 + 0x50) = *(arg2 + 0x50)
*(rdi_4 + 0x60) = *(arg2 + 0x60)

if (*(rdi_4 + 0x30) != 0)
    *(arg2 + 0x30) = 0

*(rdi_4 + 0x70) = *(arg2 + 0x70)
*(rdi_4 + 0x78) = *(arg2 + 0x78)
rdi_4[0x80] = *(arg2 + 0x80)
return zx.q(rbp.d)
