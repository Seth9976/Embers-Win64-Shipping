// 函数: sub_140834200
// 地址: 0x140834200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int128_t var_88 = zx.o(0)
int32_t r10_1 = arg2 * arg3
int64_t var_58 = arg5
int32_t var_78 = 1
int128_t* var_b8 = &var_88
char var_60 = 0
arg1[3].d = r10_1
int64_t* rcx_1 = data_143f0f180
int128_t var_74 = data_143dbb1e0
int32_t var_64 = (1 << (data_1439c7a34).b) - 1
int32_t var_50 = 0
int32_t var_c0 = arg4 | 0x208
int32_t var_c8 = r10_1
int64_t* var_a0
(*(*rcx_1 + 0x4a0))(rcx_1, &var_a0, &data_143f02b98)

if (arg1 == &var_a0)
label_14083432e:
    int64_t* rbx_2 = var_a0
    
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
    int64_t* rbx_1 = *arg1
    *arg1 = var_a0
    var_a0 = nullptr
    
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
        
        goto label_14083432e

int64_t* rcx_4 = data_143f0f180
var_c0.b = arg7
var_c8.b = arg6
int64_t* var_98
(*(*rcx_4 + 0x5a8))(rcx_4, &var_98, &data_143f02b98, *arg1, var_c8, var_c0, var_b8)

if (&arg1[1] == &var_98)
label_140834427:
    int64_t* rbx_4 = var_98
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            char rax_21
            
            if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                rax_21 = sub_1405949a0()
            
            if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_21 != 0))
                (**rbx_4)(rbx_4, 1)
            else
                bool z_4
                
                if (0 == *(rbx_4 + 0xc))
                    *(rbx_4 + 0xc) = 1
                    z_4 = true
                else
                    *(rbx_4 + 0xc)
                    z_4 = false
                
                if (z_4)
                    sub_1405dcc10(&data_143f02390, rbx_4)
else
    int64_t* rbx_3 = arg1[1]
    arg1[1] = var_98
    var_98 = nullptr
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            char rax_17
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_17 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_17 != 0))
                (**rbx_3)(rbx_3, 1)
            else
                bool z_3
                
                if (0 == *(rbx_3 + 0xc))
                    *(rbx_3 + 0xc) = 1
                    z_3 = true
                else
                    *(rbx_3 + 0xc)
                    z_3 = false
                
                if (z_3)
                    sub_1405dcc10(&data_143f02390, rbx_3)
        
        goto label_140834427

int64_t* rcx_8 = data_143f0f180
int64_t* result_1
(*(*rcx_8 + 0x5b0))(rcx_8, &result_1, &data_143f02b98, *arg1)
int64_t* result = &result_1

if (&arg1[2] == &result_1)
label_140834506:
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        result_2[1].d -= 1
        
        if (result_2[1].d == 1)
            char rax_27
            
            if (result_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_27 = sub_1405949a0()
            
            if (result_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_27 != 0))
                result = (**result_2)(result_2, 1)
            else
                result = nullptr
                bool z_6
                
                if (0 == *(result_2 + 0xc))
                    *(result_2 + 0xc) = 1
                    z_6 = true
                else
                    result = zx.q(*(result_2 + 0xc))
                    z_6 = false
                
                if (z_6)
                    result = sub_1405dcc10(&data_143f02390, result_2)
else
    int64_t* rbx_5 = arg1[2]
    result = result_1
    arg1[2] = result
    result_1 = nullptr
    
    if (rbx_5 != 0)
        result = zx.q(rbx_5[1].d)
        rbx_5[1].d -= 1
        
        if (result.d == 1)
            char rax_25
            
            if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
                rax_25 = sub_1405949a0()
            
            if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_25 != 0))
                result = (**rbx_5)(rbx_5, 1)
            else
                result = nullptr
                bool z_5
                
                if (0 == *(rbx_5 + 0xc))
                    *(rbx_5 + 0xc) = 1
                    z_5 = true
                else
                    result = zx.q(*(rbx_5 + 0xc))
                    z_5 = false
                
                if (z_5)
                    result = sub_1405dcc10(&data_143f02390, rbx_5)
        
        goto label_140834506

__security_check_cookie(rax_1 ^ &var_e8)
return result
