// 函数: sub_140b911a0
// 地址: 0x140b911a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d

if (i_2 == 0)
    return 

int32_t rax = arg1[1].d
int32_t rdx = rax + i_2

if (rdx s> *(arg1 + 0xc))
    sub_14061cd70(arg1, rdx)
    rax = arg1[1].d

void* rdi_1 = *arg2
int32_t i_1 = i_2
int64_t rbx_3 = (sx.q(rax) << 4) + *arg1
int32_t i

do
    *rbx_3 = 0
    int32_t rsi_1 = *(rdi_1 + 8)
    int64_t r15_1 = *rdi_1
    *(rbx_3 + 8) = rsi_1
    
    if (rsi_1 != 0)
        sub_1405a4c70(rbx_3, rsi_1, 0)
        memcpy(*rbx_3, r15_1, rsi_1 * 2)
    else
        *(rbx_3 + 0xc) = 0
    
    rbx_3 += 0x10
    rdi_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[1].d += i_2
