// 函数: sub_1408885d0
// 地址: 0x1408885d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = *arg1
int64_t r13_1 = sx.q(arg2)

if ((rax_1.b & 1) != 0)
    rax_1 = (rax_1 s>> 1) + arg1

int32_t i_1 = arg3
int64_t r12_2 = r13_1 << 4
void* rdi_2 = r12_2 + 8 + rax_1
int32_t i

do
    void* rbx_1 = *rdi_2
    char rsi_1 = *rdi_2 & 1
    
    if (rsi_1 != 0)
        rbx_1 = (rbx_1 s>> 1) + rdi_2
    
    if (rbx_1 != 0)
        j_sub_1406edef0()
        sub_140b51740(rbx_1, &data_143cdf860, rsi_1)
        *rdi_2 = 0
    
    rdi_2 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rdx_1 = rax_3 - r13_1.d

if (rdx_1 != arg3)
    void* rcx_2 = *arg1
    
    if ((rcx_2.b & 1) != 0)
        rcx_2 = (rcx_2 s>> 1) + arg1
    
    memmove(rcx_2 + r12_2, (sx.q(arg3 + r13_1.d) << 4) + rcx_2, (rdx_1 - arg3) << 4)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_140888a70(arg1)
