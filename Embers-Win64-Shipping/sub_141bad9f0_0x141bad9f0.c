// 函数: sub_141bad9f0
// 地址: 0x141bad9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg1 + 0x1fc)
int128_t zmm7 = *(arg1 + 0x1f8)

if (not(zmm7.d f!= 0f) && not(zmm6.d f!= 0f) && not(*(arg1 + 0x1ec) f!= *(arg1 + 0x1e4))
        && not(*(arg1 + 0x1e8) f!= *(arg1 + 0x1e0)))
    void* var_38
    sub_141bab3c0(arg1, &var_38)
    void* rcx = var_38
    
    if (rcx != 0)
        void arg_8
        int64_t* rax_1 = sub_140e13cf0(rcx, &arg_8)
        zmm7 = *rax_1
        zmm6 = *(rax_1 + 4)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

*arg2 = *(arg1 + 0x1f0)
arg2[1] = *(arg1 + 0x1f4)
arg2[2] = zmm7.d
arg2[3] = zmm6.d
return arg2
