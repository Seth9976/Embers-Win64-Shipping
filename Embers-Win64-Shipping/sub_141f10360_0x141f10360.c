// 函数: sub_141f10360
// 地址: 0x141f10360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int64_t* rbx_1 = *(arg3 + 0xa0)
    void* r14_1 = nullptr
    int64_t* var_28
    int64_t* var_20
    int64_t* var_18
    
    if (arg2 == 0)
    label_141f1044a:
        
        if (sub_141dcded0(rbx_1) != 0)
            (*(*rbx_1 + 0x378))(rbx_1, zx.q(arg1))
            
            if (sub_141dcded0(rbx_1) != 0)
                sub_141f19080(rbx_1 + 0x18b, &var_18)
                int64_t* rcx_13 = var_18
                
                if (rcx_13 != 0)
                    var_28.b = arg1.b
                    var_20 = rbx_1
                    sub_1405a9f90(rcx_13, &var_28)
                
                int64_t* var_10
                
                if (var_10 != 0)
                    var_10[1].d -= 1
                    
                    if (var_10[1].d == 1)
                        (**var_10)(var_10)
                        int32_t temp8_1 = *(var_10 + 0xc)
                        *(var_10 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*var_10 + 8))(var_10, 1)
        
        goto label_141f104c8
    
    int64_t* rsi_1 = *(arg2 + 0xa0)
    
    if (arg3 != arg2)
        int32_t rax_1 = *(arg2 + 0xc)
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_1)
            uint32_t rdx_1 = zx.d(temp4_1)
            int32_t rax_3 = temp5_1 + rdx_1
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
            sub_141f002f0(arg2 + 0x3e5, arg1.b)
        
        if (rbx_1 != rsi_1)
            if (sub_141dcded0(rsi_1) != 0)
                (*(*rsi_1 + 0x380))(rsi_1, zx.q(arg1))
                
                if (sub_141dcded0(rsi_1) != 0)
                    sub_141f00280(rsi_1 + 0x18c, arg1.b)
            
            if (rbx_1 == rsi_1)
                goto label_141f104c8
            
            goto label_141f1044a
        
    label_141f104c8:
        int32_t rax_19 = *(arg3 + 0xc)
        
        if (rax_19 s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_19)
            uint32_t rdx_10 = zx.d(temp2_1)
            int32_t rax_21 = temp3_1 + rdx_10
            r14_1 = *(data_143e1d9a0 + (sx.q(rax_21 s>> 0x10) << 3))
                + sx.q(zx.d(rax_21.w) - rdx_10) * 0x18
        
        if (((*(r14_1 + 8) u>> 0x1d).b & 1) == 0)
            sub_141f19e40(arg3 + 0x3e4, &var_28)
            int64_t* rcx_21 = var_28
            
            if (rcx_21 != 0)
                var_18.b = arg1.b
                void* var_10_1 = arg3
                sub_1405a9f90(rcx_21, &var_18)
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t temp9_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*var_20 + 8))(var_20, 1)
else if (arg2 != 0)
    int32_t rax_29 = *(arg2 + 0xc)
    int64_t* rbx_4 = *(arg2 + 0xa0)
    void* const r14_2
    
    if (rax_29 s>= data_143e1d9b4)
        r14_2 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_29)
        uint32_t rdx_15 = zx.d(temp0_1)
        int32_t rax_31 = temp1_1 + rdx_15
        r14_2 =
            *(data_143e1d9a0 + (sx.q(rax_31 s>> 0x10) << 3)) + sx.q(zx.d(rax_31.w) - rdx_15) * 0x18
    
    if (((*(r14_2 + 8) u>> 0x1d).b & 1) == 0)
        sub_141f002f0(arg2 + 0x3e5, arg1.b)
    
    if (sub_141dcded0(rbx_4) != 0)
        (*(*rbx_4 + 0x380))(rbx_4, zx.q(arg1))
        
        if (sub_141dcded0(rbx_4) != 0)
            sub_141f00280(rbx_4 + 0x18c, arg1.b)
