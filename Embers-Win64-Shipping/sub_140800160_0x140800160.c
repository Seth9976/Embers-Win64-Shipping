// 函数: sub_140800160
// 地址: 0x140800160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2

if (result == data_143ce2af0)
    return sub_1407d0aa0(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2af8)
    return sub_1407d0500(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b00)
    return sub_1407d0e00(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b08)
    return sub_1407d0860(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b10)
    return sub_1407d0980(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b18)
    return sub_1407d03e0(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b20)
    return sub_1407d0bc0(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b28)
    return sub_1407d0620(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b30)
    return sub_1407d0ce0(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b38)
    return sub_1407d0740(arg1, arg2, arg3, arg4) __tailcall

if (result == data_143ce2b40)
    void* rax_10 = arg2[2]
    char rcx_10 = *(rax_10 + 2)
    
    if (*(rax_10 + 1) == 0)
        if (rcx_10 == 0)
            return sub_1407d01a0(arg1, arg2, arg3, arg4) __tailcall
        
        return sub_1407d02c0(arg1, arg2, arg3, arg4) __tailcall
    
    if (rcx_10 == 0)
        return sub_1407d0080(arg1, arg2, arg3, arg4) __tailcall
    
    return sub_1407cff60(arg1, arg2, arg3, arg4) __tailcall

int64_t (* rax_16)(int64_t arg1, void* arg2)
void*** rsi_1

if (result == data_143ce2b48)
    void*** rax_15 = sub_140a84c80(0, 0x30, 0)
    rsi_1 = rax_15
    
    if (rax_15 == 0)
        goto label_14080035e
    
    *rsi_1 = &data_142dc0378
    sub_140d3a3a0(&rsi_1[1], arg1)
    rax_16 = sub_1407faf20
label_140800347:
    rsi_1[2] = rax_16
    rsi_1[4] = sub_140a387b0()
    *rsi_1 = &data_142dc03d0
label_14080035e:
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rsi_1 != 0)
            result = (*rsi_1)[8](rsi_1, arg4)
        else if (arg4[1].d != 0)
            int64_t* rcx_20 = *arg4
            
            if (rcx_20 != 0)
                result = (*(*rcx_20 + 0x38))(rcx_20, 0)
                int64_t rcx_21 = *arg4
                
                if (rcx_21 != 0)
                    result = sub_140a84c80(rcx_21, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rsi_1 != 0)
        (*rsi_1)[7](rsi_1, 0)
        result = sub_140a84c80(rsi_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
else if (result == data_143ce2b50)
    void*** rax_17 = sub_140a84c80(0, 0x30, 0)
    rsi_1 = rax_17
    
    if (rax_17 == 0)
        goto label_14080035e
    
    *rsi_1 = &data_142dc0378
    sub_140d3a3a0(&rsi_1[1], arg1)
    rax_16 = sub_1407faf90
    goto label_140800347
return result
