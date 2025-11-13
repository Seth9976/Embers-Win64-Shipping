// 函数: sub_141e7fe50
// 地址: 0x141e7fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x29].d != 0)
    return 

int32_t rsi_1 = 0
int32_t r12_2 = arg1[0x12].d + arg1[1].d

if (r12_2 s<= 0)
    return 

do
    int64_t* rax_2 = (*(*arg1 + 0x188))(arg1)
    int64_t r8_1 = *rax_2
    (*(r8_1 + 0x68))(rax_2, zx.q(rsi_1), r8_1)
    int64_t rdi_1 = sx.q(arg1[0x29].d)
    int32_t rcx_2 = (rdi_1 + 1).d
    arg1[0x29].d = rcx_2
    
    if (rcx_2 s> *(arg1 + 0x14c))
        sub_1405a4d70(&arg1[0x28])
    
    *(arg1[0x28] + (rdi_1 << 3)) = rax_2
    int64_t rdi_2 = sx.q(arg1[0x2b].d)
    int32_t rax_4 = (rdi_2 + 1).d
    arg1[0x2b].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x15c))
        sub_1405a4d70(&arg1[0x2a])
    
    rsi_1 += 1
    *(arg1[0x2a] + (rdi_2 << 3)) = rax_2
while (rsi_1 s< r12_2)
