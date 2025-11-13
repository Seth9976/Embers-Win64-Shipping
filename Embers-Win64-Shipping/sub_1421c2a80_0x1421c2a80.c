// 函数: sub_1421c2a80
// 地址: 0x1421c2a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
void* rax_1 = (*(*arg1 + 0x330))()

if (rax_1 == 0)
    return rax_1

int32_t rax_2 = *(rax_1 + 0x18)

if (rax_2 s<= rdi.d)
    int64_t r14_1 = sx.q(*(rax_1 + 0x18))
    int32_t rax_3 = r14_1.d + rdi.d - rax_2 + 1
    *(rax_1 + 0x18) = rax_3
    
    if (rax_3 s> *(rax_1 + 0x1c))
        sub_1405a4cf0(rax_1 + 0x10)
    
    memset(*(rax_1 + 0x10) + (r14_1 << 2), 0, sx.q(rdi.d - rax_2 + 1) << 2)

*(*(rax_1 + 0x10) + (rdi << 2)) = arg3
int64_t rax_5
rax_5.b = 1
return rax_5
