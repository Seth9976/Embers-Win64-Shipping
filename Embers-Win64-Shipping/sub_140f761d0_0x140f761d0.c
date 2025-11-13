// 函数: sub_140f761d0
// 地址: 0x140f761d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s>= 0 && arg3 s< *(arg1 + 0x4c0))
    int64_t r8 = sx.q(arg3)
    int64_t* rsi_3 = (r8 << 4) + *(arg1 + 0x4c8)
    void* r14_1 = *(*(arg1 + 0x4b8) + (r8 << 3))
    int32_t arg_20
    sub_140e13cf0(*rsi_3, &arg_20)
    int64_t var_28
    
    if (*(r14_1 + 0xb0) != data_143e244b0)
        int64_t* rdi_1 = *rsi_3
        
        if (rdi_1[0x7e].d == 2)
            if (rdi_1[0x7c] == 0)
            label_140f7627d:
                
                if (data_1439ae51d != data_1439ae51c)
                    void* rcx_3 = *(*rsi_3 + 0x3f8)
                    int64_t* rax_8
                    
                    if (rcx_3 == 0)
                        rax_8 = &var_28
                        var_28 = data_143dbb1f0
                    else
                        rax_8 = sub_140e13cf0(rcx_3, &var_28)
                    
                    int64_t zmm0
                    zmm0.d = arg_20.d f+ *rax_8
                    int64_t zmm1
                    zmm1.d = arg4.d f+ *(rax_8 + 4)
                    arg_20 = zmm0.d
                    arg4 = zmm1.d
            else if ((*(*rdi_1 + 0x1c8))(rdi_1) == 0 && sub_140f4a730(rdi_1[0x7c]) == 0)
                goto label_140f7627d
    
    if (*(arg1 + 0x528) != 0)
        int64_t* rcx_4 = *(arg1 + 0x520)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (*(arg1 + 0x528) == 0)
                rcx_5 = nullptr
            else
                rcx_5 = *(arg1 + 0x520)
            
            (*(*rcx_5 + 0x48))(rcx_5, &var_28, r14_1, 0)
            int32_t* rax_12 = &arg_20
            
            if (arg_20.d f<= var_28.d)
                rax_12 = &var_28
            
            *arg2 = *rax_12
            return arg2

*arg2 = data_143dbb1f0
return arg2
