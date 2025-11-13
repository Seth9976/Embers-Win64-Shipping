// 函数: sub_141504a90
// 地址: 0x141504a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[0xd].d)
arg1[0xd].d -= 1

if (result.d == 1)
    if (sub_140a80f40() != 0)
        return sub_14150dcd0(arg1, arg2) __tailcall
    
    EnterCriticalSection(&arg2[0x30])
    int64_t rbp_1 = sx.q(arg2[0x3c])
    int32_t rax_2 = (rbp_1 + 1).d
    arg2[0x3c] = rax_2
    
    if (rax_2 s> arg2[0x3d])
        sub_1405a4d70(&arg2[0x3a])
    
    result = *(arg2 + 0xe8)
    *(result + (rbp_1 << 3)) = arg1
    
    if (arg2 != -0xc0)
        return LeaveCriticalSection(&arg2[0x30])

return result
