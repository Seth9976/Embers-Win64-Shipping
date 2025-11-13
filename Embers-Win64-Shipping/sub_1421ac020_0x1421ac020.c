// 函数: sub_1421ac020
// 地址: 0x1421ac020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[1]

if (*(result + 0x200) == 0xffffffff)
    void* rbx_1 = *arg1
    int32_t rcx = *(rbx_1 + 0x7c)
    int64_t rdi_1
    
    if (rcx == 0)
        rdi_1 = zx.q(*(rbx_1 + 0x50))
        int32_t rax_1 = (rdi_1 + 1).d
        *(rbx_1 + 0x50) = rax_1
        
        if (rax_1 s> *(rbx_1 + 0x54))
            sub_1405a4d70(rbx_1 + 0x48)
        
        sub_1405b2ba0(rbx_1 + 0x58, 0)
    else
        rdi_1 = sx.q(*(rbx_1 + 0x78))
        int64_t rdx_1 = *(rbx_1 + 0x48)
        int64_t r8_1 = sx.q(*(rdx_1 + (rdi_1 << 3) + 4))
        *(rbx_1 + 0x78) = r8_1.d
        *(rbx_1 + 0x7c) = rcx - 1
        
        if (rcx != 1)
            *(rdx_1 + (r8_1 << 3)) = 0xffffffff
    
    void* rax_2 = *(rbx_1 + 0x68)
    void* r8_2 = rbx_1 + 0x58
    
    if (rax_2 != 0)
        r8_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1.d)
    void* r8_3 = r8_2 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)
    *r8_3 |= 1 << (rdi_1.b & 0x1f)
    *(arg1[1] + 0x200) = rdi_1.d
    result = arg1[1]
    *(*(*arg1 + 0x48) + (sx.q(rdi_1.d) << 3)) = result

return result
