// 函数: sub_140a7c6b0
// 地址: 0x140a7c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int32_t arg_8
sub_140a73a40(arg1 + 0x30, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rdi_1

if (rax.d != 0xffffffff)
    rdi_1 = *(arg1 + 0x30) + rax * 0x28

uint64_t* rbp
int64_t* rdi_2

if (rax.d == 0xffffffff || rdi_1 == 0)
    rdi_2 = nullptr
    rbp.b = 0
else
    void* rdx_2 = *(rdi_1 + 0x10)
    rdi_2 = *(rdi_1 + 0x18)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    if (rdx_2 == 0)
        rbp.b = 0
    else
        sub_140597df0(arg3, rdx_2 + 0x10)
        rbp.b = 1

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *rdi_2
            (*(r8_1 + 8))(rdi_2, zx.q(rsi_1), r8_1)

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

return zx.q(rbp.b)
