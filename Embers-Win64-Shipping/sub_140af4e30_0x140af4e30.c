// 函数: sub_140af4e30
// 地址: 0x140af4e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
uint64_t var_18 = 0
int32_t var_10 = 0
char rax_1
double zmm0
rax_1, zmm0 = sub_140af5b90(arg1, arg2, arg3, &var_18, arg5)
uint64_t rdi = var_18

if (rax_1 != 0)
    *(arg4 + 4) = 0
    *arg4 = 0
    rbx = &data_142d40450
    int16_t* rcx = &data_142d40450
    
    if (var_10 != 0)
        rcx = rdi
    
    if (sub_140b2abf0(rcx, &data_142d6ad2c, arg4, zmm0) == 0)
        rbx.b = 0
    else
        int16_t* rcx_1 = &data_142d40450
        
        if (var_10 != 0)
            rcx_1 = rdi
        
        if (sub_140b2abf0(rcx_1, &data_142d6ad14, &arg4[1], zmm0) == 0)
            rbx.b = 0
        else
            if (var_10 != 0)
                rbx = rdi
            
            if (sub_140b2abf0(rbx, &data_142d6acec, &arg4[2], zmm0) == 0)
                rbx.b = 0
            else
                rbx.b = 1

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx.b)
