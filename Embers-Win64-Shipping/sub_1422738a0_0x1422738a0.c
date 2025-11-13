// 函数: sub_1422738a0
// 地址: 0x1422738a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2708) != 0 && *(arg1 + 0x2700) s> 0)
    int64_t r9_1 = sx.q(*(arg1 + 0x2700))
    void* result = *(*(arg1 + 0x26f8) + (r9_1 << 3) - 8)
    *(arg1 + 0x2700) = (r9_1 - 1).d
    sub_1405c53d0(arg1 + 0x26f8)
    
    if (result != 0)
        int64_t* rax_3 = sub_142484ee0()
        void* rsi_1 = rax_3[0x23]
        
        if (rsi_1 == 0)
            (*(*rax_3 + 0x390))(rax_3)
            rsi_1 = rax_3[0x23]
        
        int64_t rbp_1 = sx.q(*(arg1 + 0x26f0))
        int32_t rax_5 = (rbp_1 + 1).d
        *(arg1 + 0x26f0) = rax_5
        
        if (rax_5 s> *(arg1 + 0x26f4))
            sub_1405a4d70(arg1 + 0x26e8)
        
        *(*(arg1 + 0x26e8) + (rbp_1 << 3)) = result
        
        if (rsi_1 != 0)
            *(result + 0x58) = *(rsi_1 + 0x58)
            *(result + 0x78) = *(rsi_1 + 0x78)
        
        if (arg2 != 0 && (*(arg2 + 0x50) & 2) == 0)
            *(result + 0x100) = *(arg1 + 0xe78)
        
        *(result + 0xc0) = data_143dbb1f8.q
        *(result + 0xc8) = data_143dbb200
        sub_141ea7d40(result, arg2, *(arg1 + 0x2708), arg3, arg4.d, arg5, arg6.d, arg7, arg8, 
            arg9.d)
        int32_t var_40_1 = arg11[1].d
        int64_t var_48 = *arg11
        sub_141eadc50(result, arg10, &var_48)
        return result

return nullptr
