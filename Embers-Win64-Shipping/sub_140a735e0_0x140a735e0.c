// 函数: sub_140a735e0
// 地址: 0x140a735e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int32_t arg_8
sub_140a73a40(arg1 + 0x30, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* rax_2

if (rax.d != 0xffffffff)
    rax_2 = *(arg1 + 0x30) + rax * 0x28

int64_t* rax_3
int64_t rcx_2
int64_t* rdi_1

if (rax.d == 0xffffffff || rax_2 == 0)
    rcx_2 = 0
    rax_3 = nullptr
    rdi_1 = nullptr
else
    rcx_2 = *(rax_2 + 0x10)
    rax_3 = *(rax_2 + 0x18)
    
    if (rax_3 != 0)
        rax_3[1].d += 1
    
    rdi_1 = rax_3

*arg2 = rcx_2
arg2[1] = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

return arg2
