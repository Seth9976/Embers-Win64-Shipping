// 函数: sub_1418bb540
// 地址: 0x1418bb540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)
uint64_t r12 = zx.q(arg2)
EnterCriticalSection(arg1 + 0xa8)
int64_t rcx_2 = not.q(rbp - 1)
uint64_t rdx = zx.q(rbp.d)
void* rdi_2 = zx.q(*(arg1 + 0x10)) * 0x30 + arg1
int64_t rdx_3 = (rdx - 1 + *(rdi_2 + 0x38)) & rcx_2
int64_t rcx_3 = rdx_3 + r12
uint64_t result

if (rcx_3 u> zx.q(*(rdi_2 + 0x40)) + *(rdi_2 + 0x30))
    int64_t rbp_1 = sx.q(*(rdi_2 + 0x28))
    int32_t rax_3 = (rbp_1 + 1).d
    *(rdi_2 + 0x28) = rax_3
    
    if (rax_3 s> *(rdi_2 + 0x2c))
        sub_1405a4d70(rdi_2 + 0x20)
    
    void* rdx_6 = *(rdi_2 + 0x18)
    *(*(rdi_2 + 0x20) + (rbp_1 << 3)) = rdx_6
    
    if (rdx_6 != 0)
        *(rdx_6 + 8) += 1
    
    sub_1418c1490(zx.q(*(arg1 + 0x10)) * 0x30 + 0x18 + arg1, *(arg1 + 8), 
        ((rbp + 0x7fffff).d + r12.d) & 0xffc00000)
    void* rdx_10 = zx.q(*(arg1 + 0x10)) * 0x30 + arg1
    int64_t r8_3 = (*(rdx_10 + 0x38) + rdx - 1) & rcx_2
    result = r12 + r8_3
    
    if (result u<= zx.q(*(rdx_10 + 0x40)) + *(rdx_10 + 0x30))
        *arg4 = r8_3
        int64_t rcx_14 = r12 + r8_3
        arg4[1] = *(rdx_10 + 0x18)
        result = zx.q(r8_3.d - *(rdx_10 + 0x30))
        arg4[2].d = result.d
        *(arg4 + 0x14) = r12.d
        *(rdx_10 + 0x38) = rcx_14
        int32_t rcx_15 = rcx_14.d - *(rdx_10 + 0x30)
        
        if (*(rdx_10 + 0x44) u>= rcx_15)
            rcx_15 = *(rdx_10 + 0x44)
        
        *(rdx_10 + 0x44) = rcx_15
else
    *arg4 = rdx_3
    result = *(rdi_2 + 0x18)
    arg4[1] = result
    arg4[2].d = rdx_3.d - *(rdi_2 + 0x30)
    *(arg4 + 0x14) = r12.d
    *(rdi_2 + 0x38) = rcx_3
    int32_t rcx_4 = rcx_3.d - *(rdi_2 + 0x30)
    
    if (*(rdi_2 + 0x44) u>= rcx_4)
        rcx_4 = *(rdi_2 + 0x44)
    
    *(rdi_2 + 0x44) = rcx_4

if (arg1 == -0xa8)
    return result

return LeaveCriticalSection(arg1 + 0xa8) __tailcall
