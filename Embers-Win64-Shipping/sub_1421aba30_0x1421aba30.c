// 函数: sub_1421aba30
// 地址: 0x1421aba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[1]
int64_t r8 = sx.q(*(result + 0x200))

if (r8.d != 0xffffffff)
    void* rdx_1 = *arg1
    void* rbx_1 = rdx_1 + 0x58
    
    if (*(rdx_1 + 0x7c) != 0)
        *(*(rdx_1 + 0x48) + (sx.q(*(rdx_1 + 0x78)) << 3)) = r8.d
    
    int64_t rax_1 = *(rdx_1 + 0x48)
    *(rax_1 + (r8 << 3)) = 0xffffffff
    int32_t rax_2
    
    if (*(rdx_1 + 0x7c) s<= 0)
        rax_2 = -1
    else
        rax_2 = *(rdx_1 + 0x78)
    
    *(rax_1 + (r8 << 3) + 4) = rax_2
    *(rdx_1 + 0x7c) += 1
    *(rdx_1 + 0x78) = r8.d
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8.d)
    void* rcx_3 = *(rbx_1 + 0x10)
    
    if (rcx_3 != 0)
        rbx_1 = rcx_3
    
    int64_t rcx_4 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rcx_4 << 2)) &= not.d(rol.d(1, r8.b))
    result = arg1[1]

*(result + 0x200) = 0xffffffff
return result
