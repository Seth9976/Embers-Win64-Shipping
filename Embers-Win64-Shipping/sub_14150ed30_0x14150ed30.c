// 函数: sub_14150ed30
// 地址: 0x14150ed30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t rsi_1 = sx.q(arg2) << 3
int64_t* r10_2 = *arg1 + rsi_1
int32_t i

do
    void* rax_2 = *r10_2
    
    if (rax_2 != 0)
        *(rax_2 + 0x1bc) -= 1
    
    r10_2 = &r10_2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rcx_1 = rax_3 - arg2

if (rcx_1 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + rsi_1, r9 + (sx.q(arg2 + arg3) << 3), (rcx_1 - arg3) << 3)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_1405c53d0(arg1)
