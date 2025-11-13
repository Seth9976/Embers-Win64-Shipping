// 函数: sub_140b00f90
// 地址: 0x140b00f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x11])
sub_14065da90(&arg1[2], arg2)

if (arg3 != 0)
    void var_28
    int64_t* rax_1 = sub_140a96170(&var_28)
    int64_t rdx_1 = arg1[5]
    arg1[5] = *rax_1
    *rax_1 = rdx_1
    int64_t rdx_2 = arg1[6]
    arg1[6] = rax_1[1]
    rax_1[1] = rdx_2
    arg1[7].d = rax_1[2].d
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rsi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rsi_1))

int64_t result = (*(*arg1 + 0x68))(arg1)

if (arg1 == -0x88)
    return result

return LeaveCriticalSection(&arg1[0x11])
