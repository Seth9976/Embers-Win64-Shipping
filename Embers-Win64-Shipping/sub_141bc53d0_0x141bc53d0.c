// 函数: sub_141bc53d0
// 地址: 0x141bc53d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x3a0)

if (rax == 0)
label_141bc5491:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t rax_1 = *(rax + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1c).b & 1) != 0)
        goto label_141bc5491
    
    char arg_8 = 0
    char* var_30_1 = &arg_8
    void*** (* var_38)() = sub_140884c50
    
    if (*(sub_140a756e0(&var_38, &data_14397f5f0) + 0x20) != 0)
        goto label_141bc5491
    
    int64_t* rcx_5 = *(arg1 + 0x3a0)
    (*(*rcx_5 + 0x440))(rcx_5, arg2, arg3, arg4)

if (*(arg1 + 0x3ee) != 0)
    *(arg1 + 0x3ee) = 0
    int64_t* rsi_1 = nullptr
    int64_t* rdi_1 = *(arg1 + 0x3e0)
    
    if (rdi_1 != 0)
        int32_t rax_13 = rdi_1[1].d
        
        if (rax_13 != 0)
            rdi_1[1].d = rax_13 + 1
            rax_13.b = 1
        
        if (rax_13.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            rsi_1 = *(arg1 + 0x3d8)
    
    int64_t* rax_15 = (*(*rsi_1 + 0x48))(rsi_1, arg1 + 0x3a8)
    
    if (rax_15 != 0)
        int64_t rdx_5 = *(arg1 + 0x3a8)
        int32_t rax_16 = (*(rdx_5 + 0x70))(arg1 + 0x3a8, rdx_5)
        char var_f8
        int32_t var_44
        
        if (rax_16 != 0)
            int64_t r8_1 = *rsi_1
            char rax_17
            int64_t r9_1
            rax_17, r9_1 = (*(r8_1 + 0x10))(rsi_1, rax_15, r8_1)
            
            if (rax_17 == 0)
                if (rax_16 != 3)
                    (*(*rsi_1 + 0x30))(rsi_1)
                
                goto label_141bc55bf
            
            if (rax_16 - 2 u<= 1)
            label_141bc55bf:
                r9_1.b = 1
                (*(*rsi_1 + 0x28))(rsi_1, *rax_15, 1, r9_1)
                (*(*rsi_1 + 0x40))(rsi_1, 2)
                var_44 &= 0xffffff00
                var_f8 = 1
                int64_t var_f0_1 = 0
                int64_t var_e8_1 = 0
                char var_d8_1 = 0
                int64_t var_d0
                __builtin_memset(&var_d0, 0, 0x88)
                int32_t var_48_1 = 0x20702
                sub_1405979f0(arg2, &var_f8)
                sub_140597700(&var_f8)
        
        if ((*(*rsi_1 + 0xa8))(rsi_1, *rax_15) != 0)
            int32_t var_44_1 = var_44 & 0xffffff00
            var_f8 = 1
            int64_t var_f0_2 = 0
            int64_t var_e8_2 = 0
            char var_d8_2 = 0
            int64_t var_d0_1
            __builtin_memset(&var_d0_1, 0, 0x88)
            int32_t var_48_2 = 0x20702
            sub_1405979f0(arg2, &var_f8)
            sub_140597700(&var_f8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
