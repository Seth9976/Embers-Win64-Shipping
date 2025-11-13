// 函数: sub_1421da730
// 地址: 0x1421da730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rbp_1 = sx.q(*(arg1 + 0x30))
int32_t rax_1 = (rbp_1 + 1).d
*(arg1 + 0x30) = rax_1

if (rax_1 s> *(arg1 + 0x34))
    sub_1405a4d70(arg1 + 0x28)

*(*(arg1 + 0x28) + (rbp_1 << 3)) = arg2
int64_t rdi_1 = sx.q(*(arg1 + 0x40))
int32_t rax_3 = (rdi_1 + 1).d
*(arg1 + 0x40) = rax_3

if (rax_3 s> *(arg1 + 0x44))
    sub_1405a4f90(arg1 + 0x38)

char rdi_2 = 0
int64_t* rax_6 = (rdi_1 << 4) + *(arg1 + 0x38)
*rax_6 = 0
rax_6[1].d = 0xffffffff
*(rax_6 + 0xc) = 0
*(rax_6 + 0xd) &= 0xfc
void** rsi_3 = (rbp_1 << 4) + *(arg1 + 0x38)
*(arg2 + 0x438) = (rbp_1.d & 0x3fffffff) | (*(arg2 + 0x438) & 0x80000000)
uint8_t rcx_5 = *(arg2 + 0x430)

if ((rcx_5 & 8) == 0)
    sub_142188f50(arg2)
    rcx_5 = *(arg2 + 0x430)

void* rdx_2 = *(arg2 + 0xc0)

if (rdx_2 != 0)
    rdi_2 = 6
    int32_t rax_10 = zx.d(*(rdx_2 + 0x39)) + 1
    
    if (rax_10 u<= 6)
        rdi_2 = rax_10.b

char rax_11 = *(rsi_3 + 0xd) & 0xfc
*(rsi_3 + 0xc) = rdi_2
rax_11 |= rcx_5 u>> 2 & 1
*rsi_3 = rdx_2
*(rsi_3 + 0xd) = rax_11
int64_t rax_13

if ((rax_11 & 1) == 0)
    rax_13 = *(arg1 + 0x58)
else
    rax_13 = *(arg1 + 0x48)

sub_1421da6d0(rax_13 + zx.q(rdi_2) * 0x18, rbp_1.d)
