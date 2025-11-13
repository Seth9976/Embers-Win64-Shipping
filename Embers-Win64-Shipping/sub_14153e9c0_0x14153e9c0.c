// 函数: sub_14153e9c0
// 地址: 0x14153e9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d

if (i_2 == 0)
    return 

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 + i_2

if (rdx s> *(arg1 + 0xc))
    sub_1408cf3a0(arg1, rdx)
    rax_1 = arg1[1].d

int64_t* rbp_1 = *arg2
int32_t i_1 = i_2
int64_t* rdi_1 = rbp_1 + 0xc
int64_t* rsi_2 = sx.q(rax_1) * 0x38 + *arg1
void* rbx = rsi_2 + 0x2c
int32_t i

do
    *rsi_2 = *rbp_1
    rsi_2[1].d = rbp_1[1].d
    *(rbx - 0x20) = *rdi_1
    *(rbx - 0x18) = rdi_1[1].d
    *(rbx - 0x14) = *(rdi_1 + 0xc)
    *(rbx - 0xc) = 0
    int64_t r12_1 = sx.q(*(rdi_1 + 0x1c))
    int64_t rax_6 = *(rdi_1 + 0x14)
    *(rbx - 4) = r12_1.d
    
    if (r12_1.d != 0)
        sub_140638750(rbx - 0xc, r12_1.d, 0)
        memcpy(*(rbx - 0xc), rax_6, (r12_1 << 2).d)
    else
        *rbx = 0
    
    rsi_2 = &rsi_2[7]
    *(rbx + 4) = *(rdi_1 + 0x24)
    rbp_1 = &rbp_1[7]
    rbx += 0x38
    rdi_1 = &rdi_1[7]
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[1].d += i_2
