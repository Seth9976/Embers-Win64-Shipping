// 函数: sub_14088bb30
// 地址: 0x14088bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t* result = __security_cookie ^ &var_d8
int64_t* result_2 = result
uint64_t rdx = zx.q(*(arg1 + 0x28))

if (rdx.d != 0)
    uint32_t count = (rdx << 3).d
    int64_t var_80
    int64_t* var_a8_1 = &var_80
    int128_t var_78
    int128_t* var_b0_1 = &var_78
    int64_t* rcx_1 = data_143f0f180
    int32_t var_68_1 = 1
    int128_t var_64_1 = data_143dbb1e0
    int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
    char var_50_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    __builtin_memset(&var_80, 0, 0x18)
    int64_t* var_90
    (*(*rcx_1 + 0x488))(rcx_1, &var_90, &data_143f02b98, zx.q(count), 0x201, var_b0_1, var_a8_1)
    
    if (arg1 + 0x10 == &var_90)
    label_14088bc64:
        int64_t* rbx_2 = var_90
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                char rax_10
                
                if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_10 = sub_1405949a0()
                
                if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                    (**rbx_2)(rbx_2, 1)
                else
                    bool z_2
                    
                    if (0 == *(rbx_2 + 0xc))
                        *(rbx_2 + 0xc) = 1
                        z_2 = true
                    else
                        *(rbx_2 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        sub_1405dcc10(&data_143f02390, rbx_2)
    else
        int64_t* rbx_1 = *(arg1 + 0x10)
        *(arg1 + 0x10) = var_90
        var_90 = nullptr
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_6
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_6 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rbx_1)
            
            goto label_14088bc64
    
    memcpy(var_80, *(arg1 + 0x20), count)
    int64_t* rcx_5 = data_143f0f180
    (*(*rcx_5 + 0x138))(rcx_5, &data_143f02b98, *(arg1 + 0x10))
    int64_t* rcx_6 = data_143f0f180
    var_b0_1.b = 0x11
    int64_t* result_1
    (*(*rcx_6 + 0x4b8))(rcx_6, &result_1, &data_143f02b98, *(arg1 + 0x10), 8, var_b0_1)
    result = &result_1
    
    if (arg1 + 0x18 == &result_1)
    label_14088bd8a:
        int64_t* result_3 = result_1
        
        if (result_3 != 0)
            result_3[1].d -= 1
            
            if (result_3[1].d == 1)
                char rax_17
                
                if (result_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_17 = sub_1405949a0()
                
                if (result_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_17 != 0))
                    result = (**result_3)(result_3, 1)
                else
                    result = nullptr
                    bool z_4
                    
                    if (0 == *(result_3 + 0xc))
                        *(result_3 + 0xc) = 1
                        z_4 = true
                    else
                        result = zx.q(*(result_3 + 0xc))
                        z_4 = false
                    
                    if (z_4)
                        result = sub_1405dcc10(&data_143f02390, result_3)
    else
        int64_t* rbx_3 = *(arg1 + 0x18)
        result = result_1
        *(arg1 + 0x18) = result
        result_1 = nullptr
        
        if (rbx_3 != 0)
            result = zx.q(rbx_3[1].d)
            rbx_3[1].d -= 1
            
            if (result.d == 1)
                char rax_15
                
                if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_15 = sub_1405949a0()
                
                if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
                    result = (**rbx_3)(rbx_3, 1)
                else
                    result = nullptr
                    bool z_3
                    
                    if (0 == *(rbx_3 + 0xc))
                        *(rbx_3 + 0xc) = 1
                        z_3 = true
                    else
                        result = zx.q(*(rbx_3 + 0xc))
                        z_3 = false
                    
                    if (z_3)
                        result = sub_1405dcc10(&data_143f02390, rbx_3)
            
            goto label_14088bd8a
    
    *(arg1 + 0x28) = 0
    
    if (*(arg1 + 0x2c) != 0)
        result = sub_1405c5570(arg1 + 0x20, 0)

__security_check_cookie(result_2 ^ &var_d8)
return result
