// 函数: sub_140f0e190
// 地址: 0x140f0e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140e19840(arg1, arg5) == 0)
label_140f0e359:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rdi_1 = *(arg4 + 0x48)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t r14
    r14.b = *(arg4 + 0x38) == data_143e1e008
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (r14.b == 0)
        int64_t* rdi_2 = *(arg4 + 0x48)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        r14.b = *(arg4 + 0x38) == data_143e1e038
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (r14.b == 0)
            goto label_140f0e359
        
        float zmm4_1 = *arg3
        float zmm5_1 = arg3[1]
        float zmm3 = zmm5_1 f* arg3[9]
        float zmm2 = zmm4_1 f* arg3[7]
        zmm5_1 = zmm5_1 f* arg3[0xa]
        zmm4_1 = zmm4_1 f* arg3[8]
        arg5.o = arg3[0xc]
        float var_f0_1 = zmm2
        float var_e8_1 = zmm3
        float var_f8 = arg3[0xb].d
        int32_t var_f4_1 = arg5.d
        float var_ec_1 = zmm4_1
        float var_e4_1 = zmm5_1
        char rax_7
        rax_7, arg5 = sub_140db3460(&var_f8, arg4 + 0x18)
        
        if (rax_7 != 0)
            sub_140f14f00(arg1, arg5)
    
    char var_d8 = 1
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    char var_b8_1 = 0
    int64_t var_b0
    __builtin_memset(&var_b0, 0, 0x88)
    int32_t var_24
    int32_t var_24_1 = (var_24 & 0xffffff01) | 1
    int32_t var_28_1 = 0x20702
    sub_140596b00(arg2, &var_d8)
    sub_140597700(&var_d8)

return arg2
