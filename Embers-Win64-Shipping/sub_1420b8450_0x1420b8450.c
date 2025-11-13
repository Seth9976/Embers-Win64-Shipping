// 函数: sub_1420b8450
// 地址: 0x1420b8450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[2] = 0
arg2[1] = 0
int16_t* const rdi = &data_142d40450
*arg2 = 0
int16_t* rcx

if (arg1[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg1

char result = sub_140b2abf0(rcx, &data_142d6ad2c, arg2, arg4)

if (result == 0)
    *arg3 = 0
else
    int16_t* rcx_1
    
    if (arg1[1].d == 0)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *arg1
    
    result = sub_140b2abf0(rcx_1, &data_142d6ad14, &arg2[1], arg4)
    
    if (result == 0)
        *arg3 = 0
    else
        if (arg1[1].d != 0)
            rdi = *arg1
        
        result = sub_140b2abf0(rdi, &data_142d6acec, &arg2[2], arg4)
        
        if (result == 0)
            *arg3 = 0
        else
            *arg3 = 1

return result
