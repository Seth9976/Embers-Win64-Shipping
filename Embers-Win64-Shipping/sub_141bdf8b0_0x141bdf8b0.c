// 函数: sub_141bdf8b0
// 地址: 0x141bdf8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
char result
void* rdi

if (arg2 == 0)
    rdi = 0x28
label_141bdf910:
    (*(*arg1 + 0x308))(arg1)
    int128_t var_120
    int128_t var_e8
    void** var_b0
    void*** rax_2
    int32_t rdi_1
    
    if (arg2 == 0)
        uint128_t zmm1 = data_14399f5c0
        void** var_158
        rax_2 = &var_158
        char var_d8
        char var_d8_1 = var_d8 & 0xfc
        rdi_1 = 2
        int128_t var_150_1 = data_142e05200
        var_158 = &data_142d8ad18
        int64_t var_140_1 = 0
        __builtin_memset(&var_120, 0, 0x20)
        char var_128_1 = 0
        uint128_t var_138_1 = zmm1
        zmm1 = zx.o(data_143dbb1f0)
        arg_10.q = zmm1.q
        int128_t zmm0 = arg3
        int32_t var_f4_1 = zmm0.d
        int32_t var_fc_1 = zmm0.d
        var_e8 = zx.o(0)
        int32_t var_f8_1 = zmm1.d
        int32_t var_100_1 = zmm1.d
        char var_f0_1 = 0
        int32_t var_ec_1 = 3
    else
        rax_2 = sub_14068e310(&var_b0, rdi)
        rdi_1 = 1
    
    result = sub_140693270(&arg1[0x21], rax_2)
    
    if ((rdi_1.b & 2) != 0)
        int64_t* rbx_1 = var_e8:8.q
        rdi_1 &= 0xfffffffd
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rbx_2 = var_120:8.q
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
    
    if ((rdi_1.b & 1) != 0)
        var_b0 = &data_142d8ad18
        int64_t* var_38
        
        if (var_38 != 0)
            var_38[1].d -= 1
            
            if (var_38[1].d == 1)
                result = (**var_38)(var_38)
                int32_t temp5_1 = *(var_38 + 0xc)
                *(var_38 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*var_38 + 8))(var_38, 1)
        
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                result = (**var_70)(var_70)
                int32_t temp7_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*var_70 + 8))(var_70, 1)
    
    int64_t* rcx_12 = arg1[0x3b]
    
    if (rcx_12 != 0)
        void* var_d0 = &arg1[0x21]
        char var_c8_1 = 1
        int64_t var_c0_1 = 0
        int32_t var_b8_1 = 0
        return sub_140e24960(rcx_12, &var_d0)
else
    rdi = arg2 + 0x28
    result = sub_141b86050(&arg1[0x21], rdi)
    
    if (result == 0)
        goto label_141bdf910
return result
