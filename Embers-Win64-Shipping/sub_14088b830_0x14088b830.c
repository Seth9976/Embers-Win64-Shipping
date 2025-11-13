// 函数: sub_14088b830
// 地址: 0x14088b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_58 = 1
int32_t* var_78
int64_t* var_98 = &var_78
int128_t var_68 = zx.o(0)
int128_t* var_a0 = &var_68
int128_t var_54 = data_143dbb1e0
char var_40 = 0
int64_t var_38 = 0
int64_t* rcx_1 = data_143f0f180
int32_t var_44 = (1 << (data_1439c7a34).b) - 1
int32_t var_30 = 0
var_78 = nullptr
int64_t* var_88
(*(*rcx_1 + 0x488))(rcx_1, &var_88, &data_143f02b98, 0x10, 0x801, var_a0, var_98)

if (arg1 + 0x10 == &var_88)
label_14088b948:
    int64_t* rbx_2 = var_88
    
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
    *(arg1 + 0x10) = var_88
    var_88 = nullptr
    
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
        
        goto label_14088b948

int32_t* rax_13 = var_78
int64_t r8 = *(arg1 + 0x10)
rax_13[3] = 0x3f800000
rax_13[2] = 0x3f800000
rax_13[1] = 0x3f800000
*rax_13 = 0x3f800000
int64_t* rcx_4 = data_143f0f180
int64_t result = (*(*rcx_4 + 0x138))(rcx_4, &data_143f02b98, r8)
__security_check_cookie(rax_1 ^ &var_c8)
return result
