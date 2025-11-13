// 函数: sub_140833b30
// 地址: 0x140833b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_68 = 1
char rcx = (data_1439c7a34).b
int128_t var_78 = zx.o(0)
char var_50 = 0
int32_t var_40 = 0
int128_t var_64 = data_143dbb1e0
int32_t var_54 = (1 << rcx) - 1
int16_t* const rax_4

if (*(arg1 + 0x20) == 0)
    rax_4 = &data_142d40450
else
    rax_4 = *(arg1 + 0x18)

int64_t* rcx_1 = data_143f0f180
int16_t* const var_48 = rax_4
int64_t* var_a0
(*(*rcx_1 + 0x560))(rcx_1, &var_a0, &data_143f02b98, 1, 1, *(arg1 + 0x10), 1, 1, 8, &var_78)

if (arg1 + 0x28 == &var_a0)
label_140833c6e:
    int64_t* rbx_2 = var_a0
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_12
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_12 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_12 != 0))
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
    int64_t* rbx_1 = *(arg1 + 0x28)
    *(arg1 + 0x28) = var_a0
    var_a0 = nullptr
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_8
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
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
        
        goto label_140833c6e

int64_t* rcx_4 = data_143f0f180
int32_t var_c0
var_c0.b = 1
int32_t var_c8
var_c8.b = 0
char var_d0
int32_t var_90
var_d0.q = &var_90
memset((*(*rcx_4 + 0x510))(rcx_4, &data_143f02b98, *(arg1 + 0x28), 0, 1, var_d0, var_c8, var_c0), 
    0, zx.q(var_90))
int64_t* rcx_6 = data_143f0f180
int32_t var_d8_1
var_d8_1.b = 0
(*(*rcx_6 + 0x518))(rcx_6, &data_143f02b98, *(arg1 + 0x28), 0, var_d8_1, 1)
int64_t* rcx_7 = data_143f0f180
int16_t var_87 = 0x100
int64_t var_84 = 0
char var_88 = *(*(arg1 + 0x28) + 0x3c)
int32_t var_7c = 0
var_d8_1.q = &var_88
int64_t* result_1
(*(*rcx_7 + 0x5d0))(rcx_7, &result_1, &data_143f02b98)
int64_t* result = &result_1

if (arg1 + 0x30 == &result_1)
label_140833dde:
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        result_2[1].d -= 1
        
        if (result_2[1].d == 1)
            char rax_22
            
            if (result_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_22 = sub_1405949a0()
            
            if (result_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_22 != 0))
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
    int64_t* rbx_3 = *(arg1 + 0x30)
    result = result_1
    *(arg1 + 0x30) = result
    result_1 = nullptr
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            char rax_20
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_20 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_20 != 0))
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
        
        goto label_140833dde

__security_check_cookie(rax_1 ^ &var_f8)
return result
