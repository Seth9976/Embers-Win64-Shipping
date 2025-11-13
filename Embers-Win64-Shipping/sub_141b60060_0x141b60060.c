// 函数: sub_141b60060
// 地址: 0x141b60060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg4)
*arg2 = 0
arg2[1] = 0
uint8_t rdx = not.b(arg5 u>> 6) & 1
int64_t var_18
int64_t* rcx_4
int64_t* rdx_1
int64_t* r8

if ((arg5 & 0x20) == 0)
    if (rcx == 1)
        r8 = &data_143f2fa60
        
        if (rdx == 0)
            r8 = &data_143f2fb60
        
        rcx_4 = arg3
        rdx_1 = &var_18
    else if (rcx == 2)
        r8 = &data_143f2fc60
        rcx_4 = arg3
        rdx_1 = &var_18
    else if (rcx == 3)
        r8 = &data_143f2fd60
        rcx_4 = arg3
        rdx_1 = &var_18
    else
        rcx_4 = arg3
        
        if (rcx == 4)
            r8 = &data_143f2fe60
            rdx_1 = &var_18
        else
            rdx_1 = &var_18
            
            if (rdx == 0)
                r8 = &data_143f2f960
            else
                r8 = &data_143f2f860
else if (rcx == 1)
    rcx_4 = arg3
    rdx_1 = &var_18
    
    if (rdx == 0)
        r8 = &data_143f2f460
    else
        r8 = &data_143f2f360
else if (rcx == 2)
    r8 = &data_143f2f560
    rcx_4 = arg3
    rdx_1 = &var_18
else if (rcx == 3)
    r8 = &data_143f2f660
    rcx_4 = arg3
    rdx_1 = &var_18
else
    rcx_4 = arg3
    
    if (rcx == 4)
        r8 = &data_143f2f760
        rdx_1 = &var_18
    else
        rdx_1 = &var_18
        
        if (rdx == 0)
            r8 = &data_143f2f260
        else
            r8 = &data_143f2f160

sub_1419a2ec0(rcx_4, rdx_1, r8, 0)
*arg2 = var_18
int64_t var_10
arg2[1] = var_10
return arg2
