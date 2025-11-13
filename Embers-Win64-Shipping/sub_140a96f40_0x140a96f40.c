// 函数: sub_140a96f40
// 地址: 0x140a96f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 8) = *arg3
void* rax_1 = arg3[1]
*(arg1 + 0x10) = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

*(arg1 + 0x18) = *arg2
void* rax_3 = arg2[1]
*(arg1 + 0x20) = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

*(arg1 + 0x28) = arg2[2].d
InitializeCriticalSection(&arg1[0x30])
SetCriticalSectionSpinCount(&arg1[0x30], 0xfa0)
__builtin_memset(&arg1[0x58], 0, 0x38)
*(arg1 + 0x98) = 0
*(arg1 + 0xa0) = 0
sub_140aa3cd0(arg1, arg4)
int64_t* rbx = arg3[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

return arg1
