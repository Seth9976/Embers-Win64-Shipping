// 函数: sub_1421949c0
// 地址: 0x1421949c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[2]
void* rdx

if (*(rax + 0x48) s> 0)
    rdx = **(rax + 0x40)
else
    rdx = nullptr

void* rdx_1 = *(rdx + 0x48)
arg1[0x3a] = rdx_1
arg1[0x3b] = **(rdx_1 + 0x100)
arg1[0x3c] = **(rdx_1 + 0x110)
arg1[0x3d] = **(rdx_1 + 0x120)
arg1[0x3e] = **(rdx_1 + 0x130)
arg1[0x40] = **(rdx_1 + 0x140)
uint64_t result = sub_1421b93f0(arg1)
void* rsi = arg1[0x3a]
int32_t arg_8

if (*(rsi + 0x138) s> 0)
    void* rdi_1 = arg1[2]
    sub_140865c40(rdi_1 + 0x60, &arg_8, **(rsi + 0x130))
    int64_t rax_7 = sx.q(arg_8)
    int64_t rcx_7
    
    if (rax_7.d == 0xffffffff)
        rcx_7 = 0
    else
        rcx_7 = *(rdi_1 + 0x60) + rax_7 * 0x18
    
    result = rcx_7 + 8
    
    if (rcx_7 == 0)
        result = 0
    
    if (result != 0)
        result = zx.q(*result)
        arg1[0x3f].d = result.d

if (*(rsi + 0x148) s> 0)
    void* rdi_2 = arg1[2]
    sub_140865c40(rdi_2 + 0x60, &arg_8, **(rsi + 0x140))
    int64_t rax_9 = sx.q(arg_8)
    int64_t rcx_9
    
    if (rax_9.d == 0xffffffff)
        rcx_9 = 0
    else
        rcx_9 = *(rdi_2 + 0x60) + rax_9 * 0x18
    
    result = rcx_9 + 8
    
    if (rcx_9 == 0)
        result = 0
    
    if (result != 0)
        result = zx.q(*result)
        arg1[0x41].d = result.d

return result
