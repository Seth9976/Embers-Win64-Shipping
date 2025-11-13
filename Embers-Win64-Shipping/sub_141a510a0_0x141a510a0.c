// 函数: sub_141a510a0
// 地址: 0x141a510a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)

if (rsi s<= 0)
    return 

int64_t rbx_1 = 0
int64_t r14_1 = *arg2

do
    int64_t* rcx = arg1[1]
    
    if (rcx != 0)
        int32_t rax = sub_141f893b0(rcx, *(r14_1 + (rbx_1 << 2)))
        
        if (rax != 0xffffffff)
            *(*arg3 + (rbx_1 << 2)) = *(**arg1 + (sx.q(rax) << 2))
    
    rbx_1 += 1
while (rbx_1 s< rsi)
