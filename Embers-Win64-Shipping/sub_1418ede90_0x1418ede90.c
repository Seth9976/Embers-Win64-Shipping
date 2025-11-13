// 函数: sub_1418ede90
// 地址: 0x1418ede90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg4 + 0x80)
void* rbp = *(arg4 + 0x68)
uint64_t rdi = zx.q(*(arg4 + 0x78))
arg4.b = 0
int64_t* rsi_1 = zx.q(arg2) * 0x58 + *(arg1 + 0x98)
uint64_t* r10 = *((zx.q(arg3) << 6) + *rsi_1 + 0x30)
uint64_t result

if (data_1439c7a08 s> 1)
    uint64_t r8 = *(rbp + 0x60)
    uint64_t rdx_3 = *r10
    *r10 = r8
    bool cond:1_1 = r10[1] != rdi
    r10[1] = rdi
    uint64_t rcx
    rcx.b = cond:1_1
    bool cond:2_1 = r10[2] != rbx
    r10[2] = rbx
    int64_t rax_1
    rax_1.b = cond:2_1
    rax_1.b |= rcx.b
    arg4 = zx.q(rax_1.b)
    result = 1
    
    if (rdx_3 != r8)
        arg4 = 1
else
    int32_t* rdx_2 = rsi_1[6] + zx.q(arg3) * 0xc
    result = zx.q(*(rbp + 0x68))
    
    if (*rdx_2 != result.d)
        *rdx_2 = result.d
        arg4.b = 1
        result = *(rbp + 0x60)
        *r10 = result
    
    if (rdx_2[1] != rdi.d)
        rdx_2[1] = rdi.d
        arg4.b = 1
        r10[1] = rdi
    
    if (rdx_2[2] != rbx.d)
        rdx_2[2] = rbx.d
        arg4.b = 1
        r10[2] = rbx
    
    rsi_1[0xa].b |= arg4.b

*(arg1 + 0x90) |= arg4.b
*(arg1 + 0xc0) |= arg4.b
return result
