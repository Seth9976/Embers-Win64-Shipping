// 函数: sub_14088b4e0
// 地址: 0x14088b4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t* var_80
int64_t* var_a8 = &var_80
int32_t var_68 = 1
char var_50 = 0
int64_t* rcx_1 = data_143f0f180
int128_t var_78
int128_t* var_b0 = &var_78
int128_t var_64 = data_143dbb1e0
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
int64_t var_48 = 0
int32_t var_40 = 0
__builtin_memset(&var_80, 0, 0x18)
int64_t* var_90
(*(*rcx_1 + 0x488))(rcx_1, &var_90, &data_143f02b98, 4, 0x201, var_b0, var_a8)

if (arg1 + 0x10 == &var_90)
label_14088b5f9:
    int64_t* rbx_2 = var_90
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_11
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_11 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
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
            char rax_7
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
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
        
        goto label_14088b5f9

*var_80 = 0
int64_t* rcx_4 = data_143f0f180
(*(*rcx_4 + 0x138))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
int64_t* rcx_5 = data_143f0f180
var_b0.b = 0x1d
int64_t* result_1
(*(*rcx_5 + 0x4b8))(rcx_5, &result_1, &data_143f02b98, *(arg1 + 0x10), 4, var_b0)
int64_t* result = &result_1

if (arg1 + 0x18 == &result_1)
label_14088b717:
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        result_2[1].d -= 1
        
        if (result_2[1].d == 1)
            char rax_19
            
            if (result_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_19 = sub_1405949a0()
            
            if (result_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_19 != 0))
                result = (**result_2)(result_2, 1)
            else
                result = nullptr
                bool z_4
                
                if (0 == *(result_2 + 0xc))
                    *(result_2 + 0xc) = 1
                    z_4 = true
                else
                    result = zx.q(*(result_2 + 0xc))
                    z_4 = false
                
                if (z_4)
                    result = sub_1405dcc10(&data_143f02390, result_2)
else
    int64_t* rbx_3 = *(arg1 + 0x18)
    result = result_1
    *(arg1 + 0x18) = result
    result_1 = nullptr
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            char rax_17
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_17 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_17 != 0))
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
        
        goto label_14088b717

__security_check_cookie(rax_1 ^ &var_d8)
return result
