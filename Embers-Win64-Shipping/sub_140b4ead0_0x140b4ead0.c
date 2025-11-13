// 函数: sub_140b4ead0
// 地址: 0x140b4ead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *arg2
int32_t rdi = 1

if (*(arg1 + 0x64) != 0)
    rdi = rdx
    uint32_t rax_2
    rax_2.b = not.b((arg2[1] u>> 1).b)
    int32_t rax_4 = (((zx.q(rax_2) & 1) << 2) + 4).d
    
    if (rax_4 u<= rdx)
        rdi = rax_4

if (rdi u>= rdx)
    return zx.q(rdi)

for (void* i = *(arg1 + 0x10); i != 0; i = *(i + 0x10))
    char rcx = *(i + 0x28)
    
    if (((rcx & 1) == 0 || ((arg2[1] u>> 4).b & 1) != 0)
            && ((rcx & 2) == 0 || ((arg2[1] u>> 5).b & 1) != 0))
        int64_t rax_9 = *(i + 8)
        int32_t rax_10 = (*(rax_9 + 0x38))(rax_9, arg2)
        int32_t rcx_2 = *arg2
        
        if (rax_10 u>= rcx_2)
            return zx.q(rcx_2)
        
        if (rdi u>= rax_10)
            rax_10 = rdi
        
        rdi = rax_10

return zx.q(rdi)
