// 函数: sub_140af31d0
// 地址: 0x140af31d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_28 = 0
int32_t var_20 = 0
char rax_1 = sub_140af5b90(arg1, arg2, arg3, &var_28, arg5)
uint64_t rdi = var_28
char* rbx

if (rax_1 == 0)
    rbx.b = 0
else
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const rcx = &data_142d40450
    *arg4 = 0
    
    if (var_20 != 0)
        rcx = rdi
    
    arg4[2] = 0
    arg4[3] = 0xff
    
    if (sub_140b2aa20(rcx, &data_142d6acec, &arg4[2]) == 0)
        rbx.b = 0
    else
        int16_t* rcx_1 = &data_142d40450
        
        if (var_20 != 0)
            rcx_1 = rdi
        
        if (sub_140b2aa20(rcx_1, &data_142d6acf4, &arg4[1]) == 0)
            rbx.b = 0
        else
            uint64_t rcx_2 = &data_142d40450
            
            if (var_20 != 0)
                rcx_2 = rdi
            
            if (sub_140b2aa20(rcx_2, &data_142d6acfc, arg4) == 0)
                rbx.b = 0
            else
                rbx.b = 1
    
    if (var_20 != 0)
        rsi_1 = rdi
    
    sub_140b2aa20(rsi_1, &data_142d6ad04, &arg4[3])

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx.b)
