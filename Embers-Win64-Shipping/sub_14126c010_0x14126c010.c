// 函数: sub_14126c010
// 地址: 0x14126c010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t r8 = 0
int32_t rax = *(rbx + 0x28)
int64_t i_1 = sx.q(*(rbx + 0x38))
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax + 7)

if (i_1 s> 0)
    int64_t rdx_2 = 0
    int64_t i
    
    do
        void* rax_6 = *(rbx + 0x30)
        
        if ((*(rbx + 0x30) & 1) != 0)
            rax_6 = (rax_6 s>> 1) + rbx + 0x30
        
        uint32_t rcx_3 = zx.d(*(rdx_2 + rax_6 + 2))
        rdx_2 += 0x18
        r8 += rcx_3
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(((temp1 + (temp0 & 7)) s>> 3) + ((*(rbx + 0x18) + *(rbx + 8) + rax) << 3) + 7 + r8)
    & 0xfffffff8
