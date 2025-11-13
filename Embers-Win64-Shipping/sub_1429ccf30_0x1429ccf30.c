// 函数: sub_1429ccf30
// 地址: 0x1429ccf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(*(arg1 + 8))
int32_t rsi = 0
int64_t rbx = 0

if (r14 s<= 0)
    return 

do
    uint64_t rax = *(arg1 + 0x1b0)
    int64_t rdi_1 = rax + (rbx << 1)
    
    if ((*(rax + (rbx << 1)) & 1) == 0 && sub_1429ccad0(arg1, rsi).b == 0)
        *rdi_1 |= 1
    
    rsi += 1
    rbx += 1
while (rbx s< r14)
