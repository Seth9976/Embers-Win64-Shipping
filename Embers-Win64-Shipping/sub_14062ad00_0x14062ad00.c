// 函数: sub_14062ad00
// 地址: 0x14062ad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[3] = 0x3f800000
arg2[1] = 0
arg2[2] = 0
*arg2 = 0
int16_t* const rdi = &data_142d40450
int16_t* rcx

if (arg1[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg1

void* rsi

if (sub_140b2abf0(rcx, &data_142d6acec, arg2, arg4) == 0)
    rsi.b = 0
else
    int16_t* rcx_1
    
    if (arg1[1].d == 0)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *arg1
    
    if (sub_140b2abf0(rcx_1, &data_142d6acf4, &arg2[1], arg4) == 0)
        rsi.b = 0
    else
        int16_t* rcx_2
        
        if (arg1[1].d == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *arg1
        
        if (sub_140b2abf0(rcx_2, &data_142d6acfc, &arg2[2], arg4) == 0)
            rsi.b = 0
        else
            rsi.b = 1

if (arg1[1].d != 0)
    rdi = *arg1

void* result = sub_140b2abf0(rdi, &data_142d6ad04, &arg2[3], arg4)
*arg3 = rsi.b
return result
