// 函数: sub_141995220
// 地址: 0x141995220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (data_143db7ab0 == 0)
    int64_t* rsi_1 = *arg1
    
    if (rsi_1 != 0)
        rsi_1[9].d += 1
    
    int32_t rbp_1 = arg1[1].d
    
    if (rsi_1 != 0)
        rsi_1[9].d += 1
        rsi_1[9].d -= 1
        
        if (rsi_1[9].d == 1)
            sub_140a2f6e0(rsi_1)
    
    if (rbp_1 != 1)
        int64_t* arg_20 = rsi_1
        
        if (rsi_1 != 0)
            rsi_1[9].d += 1
        
        result = sub_14197cd20(data_1439c7a50 - 1, &arg_20)
    else
        int64_t var_28 = 0
        int64_t var_20_1 = 0
        result = sub_140a22e70(rsi_1, &var_28, 0xff)
        int64_t rcx_5 = var_28
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
    
    if (rsi_1 != 0)
        rsi_1[9].d -= 1
        
        if (rsi_1[9].d == 1)
            return sub_140a2f6e0(rsi_1)
else
    void*** r8_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &r8_3[4]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x28)
        r8_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r8_3[4]
    
    *(arg2 + 0x30) = rax_1
    *(arg2 + 0x14) += 1
    result = *(arg2 + 8)
    *result = r8_3
    *(arg2 + 8) = &r8_3[1]
    int64_t* rdx = *arg1
    
    if (rdx != 0)
        rdx[9].d += 1
    
    int32_t r9_1 = arg1[1].d
    r8_3[1] = 0
    *r8_3 = &data_14300a490
    r8_3[2] = rdx
    
    if (rdx != 0)
        rdx[9].d += 1
    
    r8_3[3].d = r9_1
    
    if (rdx != 0)
        rdx[9].d -= 1
        
        if (rdx[9].d == 1)
            result = sub_140a2f6e0(rdx)
    
    if (*(arg2 + 0x14) u> 0)
        return j_sub_14196ef60(&data_143f02b88, arg2, arg3, arg4) __tailcall

return result
