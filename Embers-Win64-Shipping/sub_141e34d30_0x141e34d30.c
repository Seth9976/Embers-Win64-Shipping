// 函数: sub_141e34d30
// 地址: 0x141e34d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d

if (i_2 == 0)
    return 

int32_t rax_1 = arg1[1].d
int32_t rdx = rax_1 + i_2

if (rdx s> *(arg1 + 0xc))
    sub_1405a52a0(arg1, rdx)
    rax_1 = arg1[1].d

int32_t* rdi_1 = *arg2
int32_t i_1 = i_2
int64_t rsi_3 = (sx.q(rax_1) << 6) + *arg1
void* rbx_1 = rsi_3 + 0x3c
int32_t i

do
    *rsi_3 = *rdi_1
    *(rbx_1 - 0x34) = *(rdi_1 + 8)
    *(rbx_1 - 0x2c) = rdi_1[4]
    *(rbx_1 - 0x28) = rdi_1[5]
    *(rbx_1 - 0x24) = rdi_1[6]
    *(rbx_1 - 0x20) = rdi_1[7]
    *(rbx_1 - 0x1c) = *(rdi_1 + 0x20)
    *(rbx_1 - 0xc) = 0
    int64_t r15_1 = sx.q(rdi_1[0xe])
    int64_t rax = *(rdi_1 + 0x30)
    *(rbx_1 - 4) = r15_1.d
    
    if (r15_1.d != 0)
        sub_140638750(rbx_1 - 0xc, r15_1.d, 0)
        memcpy(*(rbx_1 - 0xc), rax, (r15_1 << 2).d)
    else
        *rbx_1 = 0
    
    rsi_3 += 0x40
    rbx_1 += 0x40
    rdi_1 = &rdi_1[0x10]
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[1].d += i_2
