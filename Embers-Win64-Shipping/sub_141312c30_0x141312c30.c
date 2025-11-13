// 函数: sub_141312c30
// 地址: 0x141312c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r14 = sx.q(arg2)
int64_t r12 = r14 * 3
int64_t* result = arg1 + 0x28 + (r12 << 3)

if (*(arg1 + 0x28 + (r12 << 3)) == 0)
    char rcx = (data_1439c7a34).b
    int128_t var_98 = zx.o(0)
    int64_t* rcx_1 = data_143f0f180
    int32_t var_74_1 = (1 << rcx) - 1
    int32_t var_88_1 = 1
    wchar16 const* const var_68_1 = u"ExposureBuffer"
    int128_t var_84_1 = data_143dbb1e0
    char var_70_1 = 0
    int32_t var_60_1 = 0
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int64_t* var_b0
    (*(*rcx_1 + 0x498))(rcx_1, &var_b0, &data_143f02b98, 0x10, 0x249, &var_98)
    
    if (result == &var_b0)
    label_141312d67:
        int64_t* rdi_2 = var_b0
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                char rax_11
                
                if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_11 = sub_1405949a0()
                
                if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
                    (**rdi_2)(rdi_2, 1)
                else
                    bool z_2
                    
                    if (0 == *(rdi_2 + 0xc))
                        *(rdi_2 + 0xc) = 1
                        z_2 = true
                    else
                        *(rdi_2 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        sub_1405dcc10(&data_143f02390, rdi_2)
    else
        int64_t* rdi_1 = *result
        *result = var_b0
        var_b0 = nullptr
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                char rax_7
                
                if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_7 = sub_1405949a0()
                
                if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                    (**rdi_1)(rdi_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_1 + 0xc))
                        *(rdi_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rdi_1)
            
            goto label_141312d67
    
    int64_t* rcx_4 = data_143f0f180
    int128_t* var_c0_1
    var_c0_1.d = 1
    *(*(*rcx_4 + 0x130))(rcx_4, &data_143f02b98, *result, 0, 0x10, var_c0_1) = data_142d3f670
    int64_t* rcx_5 = data_143f0f180
    (*(*rcx_5 + 0x138))(rcx_5, &data_143f02b98, *result)
    int64_t* rcx_6 = data_143f0f180
    var_c0_1.b = 1
    int64_t* var_a8
    (*(*rcx_6 + 0x4b8))(rcx_6, &var_a8, &data_143f02b98, *result, 0x10, var_c0_1)
    int64_t* rcx_7 = arg1 + (r14 + 2) * 0x18
    
    if (rcx_7 == &var_a8)
    label_141312eb5:
        int64_t* rdi_4 = var_a8
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                char rax_26
                
                if (rdi_4[2].b == 0 && data_143f0f1d0 == 0)
                    rax_26 = sub_1405949a0()
                
                if (rdi_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_26 != 0))
                    (**rdi_4)(rdi_4, 1)
                else
                    bool z_4
                    
                    if (0 == *(rdi_4 + 0xc))
                        *(rdi_4 + 0xc) = 1
                        z_4 = true
                    else
                        *(rdi_4 + 0xc)
                        z_4 = false
                    
                    if (z_4)
                        sub_1405dcc10(&data_143f02390, rdi_4)
    else
        int64_t* rdi_3 = *rcx_7
        *rcx_7 = var_a8
        var_a8 = nullptr
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                char rax_22
                
                if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_22 = sub_1405949a0()
                
                if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_22 != 0))
                    (**rdi_3)(rdi_3, 1)
                else
                    bool z_3
                    
                    if (0 == *(rdi_3 + 0xc))
                        *(rdi_3 + 0xc) = 1
                        z_3 = true
                    else
                        *(rdi_3 + 0xc)
                        z_3 = false
                    
                    if (z_3)
                        sub_1405dcc10(&data_143f02390, rdi_3)
            
            goto label_141312eb5
    
    int64_t* rcx_10 = data_143f0f180
    int32_t var_c8_3
    var_c8_3.b = 1
    int64_t* var_a0
    (*(*rcx_10 + 0x590))(rcx_10, &var_a0, &data_143f02b98, *result, var_c8_3)
    int64_t* rcx_12 = arg1 + 0x38 + (r12 << 3)
    
    if (rcx_12 == &var_a0)
    label_141312fa1:
        int64_t* rdi_6 = var_a0
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                char rax_35
                
                if (rdi_6[2].b == 0 && data_143f0f1d0 == 0)
                    rax_35 = sub_1405949a0()
                
                if (rdi_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_35 != 0))
                    (**rdi_6)(rdi_6, 1)
                else
                    bool z_6
                    
                    if (0 == *(rdi_6 + 0xc))
                        *(rdi_6 + 0xc) = 1
                        z_6 = true
                    else
                        *(rdi_6 + 0xc)
                        z_6 = false
                    
                    if (z_6)
                        sub_1405dcc10(&data_143f02390, rdi_6)
    else
        int64_t* rdi_5 = *rcx_12
        *rcx_12 = var_a0
        var_a0 = nullptr
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                char rax_32
                
                if (rdi_5[2].b == 0 && data_143f0f1d0 == 0)
                    rax_32 = sub_1405949a0()
                
                if (rdi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_32 != 0))
                    (**rdi_5)(rdi_5, 1)
                else
                    bool z_5
                    
                    if (0 == *(rdi_5 + 0xc))
                        *(rdi_5 + 0xc) = 1
                        z_5 = true
                    else
                        *(rdi_5 + 0xc)
                        z_5 = false
                    
                    if (z_5)
                        sub_1405dcc10(&data_143f02390, rdi_5)
            
            goto label_141312fa1

__security_check_cookie(rax_1 ^ &var_e8)
return result
