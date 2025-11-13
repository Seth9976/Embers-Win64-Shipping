// 函数: sub_142c59820
// 地址: 0x142c59820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0xd0]
void* rbp = *arg1
*arg2 = 0

if (rdi == 0)
    return zx.q((rdi + 6).d)

EnterCriticalSection(*(rdi + 0x18))
int32_t rbx_1 = *(rdi + 0x20)
LeaveCriticalSection(*(rdi + 0x18))

if (rbx_1 == 0)
    int128_t var_48 = *(rbp + 0x950)
    uint64_t var_28[0x2]
    int128_t var_38 = *sub_142c59600(&var_28)
    int64_t rax_4 = sub_142c595d0(&var_38, &var_48)
    int64_t rcx_8 = rax_4
    int32_t rax_5 = *(rdi + 8)
    
    if (rax_4 s< 0)
        rcx_8 = 0
    
    if (rax_5 == 0)
        *(rdi + 8) = 1
    else if (rcx_8 s>= *(rdi + 0x10))
        *(rdi + 8) = rax_5 * 2
    
    if (*(rdi + 8) u> 0xfa)
        *(rdi + 8) = 0xfa
    
    uint64_t rdx_2 = zx.q(*(rdi + 8))
    *(rdi + 0x10) = rdx_2 + rcx_8
    sub_142c52ab0(*arg1, rdx_2, 1, arg3)
else
    void* rbx_2 = arg1[0xd0]
    sub_142c6a110(arg1, *(rbx_2 + 0x34), *(rbx_2 + 0x38), arg3)
    *(rbx_2 + 0x38) = 0
    
    if (arg1[0xce] == 0)
        int32_t rax_1 = sub_142c59e30(arg1, rbx_2)
        sub_142c59a50(&arg1[0xcc])
        return zx.q(rax_1)
    
    sub_142c59a50(&arg1[0xcc])
    *arg2 = arg1[0xce]

return 0
