// 函数: sub_1418317b0
// 地址: 0x1418317b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2[1].d)

if (r9.d == 0)
    int64_t result
    result.b = 0
    return result

int64_t rax = 0
char rbx_1

while (true)
    if (rax s< r9)
        char* rdx = *arg2
        
        if (rdx[rax] == 0x7b)
            uint64_t var_c8 = 0
            int64_t var_c0_1 = 0
            sub_140b0e940(&var_c8, rdx, r9.d)
            char rax_5 = (*(*arg1 + 0x148))(arg1, &var_c8)
            uint64_t rcx_8 = var_c8
            rbx_1 = rax_5
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            break
        
        rax += 1
        
        if (rax s< 4)
            continue
    
    void** const var_b8
    memset(&var_b8, 0, 0x90)
    sub_140b4c2a0(&var_b8)
    int64_t var_28_1 = 0
    var_b8 = &data_142d6b230
    int64_t* var_20_1 = arg2
    int64_t var_18_1 = 0x7fffffffffffffff
    sub_140b55290(&var_b8, 1)
    var_b8[0x1b](&var_b8, 0)
    rbx_1 = sub_14184e0e0(&var_b8, arg1, 0x12, arg3)
    sub_140b4cb40(&var_b8)
    break

return zx.q(rbx_1)
