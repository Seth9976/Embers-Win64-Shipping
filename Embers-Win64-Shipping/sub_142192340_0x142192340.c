// 函数: sub_142192340
// 地址: 0x142192340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg2 + 0x1e8)
int32_t r10 = 2
int32_t rdx = 0x60
int32_t* result = arg5
*arg7 = 0xffffffff
*arg8 = 0xffffffff
*arg9 = 0xffffffff
*arg10 = 0xffffffff
*arg6 = 0xffffffff
*arg11 = 2
*arg12 = 0xffffffff
*arg13 = 0xffffffff
*result = *arg4

if (*(arg1 + 0x48) s> 0)
    *arg6 = *arg4 + 0x60
    int32_t rcx_1 = *(arg1 + 0x48)
    result = zx.q(rcx_1 + 8)
    rdx = (result * 3).d << 2
    
    if (rcx_1 != 0)
        r10 = rcx_1 + 1
    
    *arg11 = r10

if (r8 != 0 && (*(r8 + 0x30) & 1) != 0)
    int32_t rdi_1 = *(r8 + 0x34)
    *arg7 = *arg4 + rdx
    *arg8 = *arg4 + rdx + 4
    int32_t rcx_7 = *arg4 + rdx + 8
    uint32_t r10_2 = (rdi_1 + 1) * 0xc
    rdx = rdx + 8 + r10_2
    *arg9 = rcx_7
    
    if ((*(r8 + 0x108) & 1) != 0)
        *arg10 = *arg4 + rdx
        rdx += r10_2
    
    int32_t rax_3 = *(r8 + 0x150)
    int32_t rcx_10 = 1
    
    if (rax_3 != 0)
        rcx_10 = rax_3
    
    result = zx.q((rdi_1 + 2) * rcx_10)
    *arg11 = result.d
    
    if ((*(r8 + 0x15c) & 1) != 0)
        *arg13 = *arg4 + rdx
        rdx += 4

if (*(arg1 + 0x90) != 0)
    *arg12 = *arg4 + rdx

return result
