// 函数: sub_140fcdcd0
// 地址: 0x140fcdcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int64_t* arg_10
(*(*rcx + 0xd0))(rcx, &arg_10, *(arg2 + 0x18), *(arg2 + 0x20), *(arg2 + 0x28), *(arg2 + 0x30), 
    *(arg2 + 0x38), *(arg2 + 0x40))
(*(*arg1 + 0x2f8))(arg1, arg_10)
int64_t* rbx = arg_10

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_6
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_6 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx)

(*(*arg1 + 0x300))(arg1, *(arg2 + 0x58), 0)
(*(*arg1 + 0x308))(arg1, *(arg2 + 0x50))
int64_t rax_11 = *arg1
int64_t rdx_5 = *(arg2 + 0x48)
int128_t var_18 = data_142d3f670
int64_t result = (*(rax_11 + 0x310))(arg1, rdx_5, &var_18)

if (data_143f0f1c3 == 0)
    return result

return (*(*arg1 + 0x318))(arg1, zx.q(*(arg2 + 0xb4)))
