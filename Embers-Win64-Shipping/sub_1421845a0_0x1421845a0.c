// 函数: sub_1421845a0
// 地址: 0x1421845a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[1]
int64_t r8 = sx.q(*(result + 0xf8))

if (r8.d != 0xffffffff)
    void* rdx_1 = *arg1
    void* r10_1 = rdx_1 + 0x20
    
    if (*(rdx_1 + 0x44) != 0)
        *(*(rdx_1 + 0x10) + (sx.q(*(rdx_1 + 0x40)) << 3)) = r8.d
    
    int32_t* rcx_2 = *(rdx_1 + 0x10) + (r8 << 3)
    int32_t rax_2 = -1
    *rcx_2 = 0xffffffff
    
    if (*(rdx_1 + 0x44) s> 0)
        rax_2 = *(rdx_1 + 0x40)
    
    rcx_2[1] = rax_2
    *(rdx_1 + 0x44) += 1
    *(rdx_1 + 0x40) = r8.d
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8.d)
    void* rcx_3 = *(r10_1 + 0x10)
    
    if (rcx_3 != 0)
        r10_1 = rcx_3
    
    result = zx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    int64_t rcx_4 = sx.q(result.d)
    *(r10_1 + (rcx_4 << 2)) &= not.d(rol.d(1, r8.b))
    int64_t* rbx_1 = arg1[1]
    
    if (rbx_1 != 0)
        sub_1423ff2a0(rbx_1)
        return j_sub_140a74f90(rbx_1) __tailcall

return result
