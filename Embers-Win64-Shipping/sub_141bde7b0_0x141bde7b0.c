// 函数: sub_141bde7b0
// 地址: 0x141bde7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t result = __security_cookie ^ &var_328
int64_t result_1 = result

if (data_143e29f28 != 0 && *(arg1 + 0x200) != 0)
    void var_248
    int32_t zmm6_1 = sub_140dbf000(arg1 + 0x238, &var_248, 0, 0, arg2, data_1439ae51c)
    int64_t var_2d8 = data_143e1dff0
    int64_t var_2d0_1 = data_143e1dff8
    void* rax_4 = data_143e1e000
    void* var_2c8_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    char var_308_1
    var_308_1.q = arg1 + 0x340
    void** var_2b8
    sub_140e51450(&var_2b8, *(*(arg1 + 0x200) + 8), (int.q(fconvert.t(*(arg1 + 0x214)))).d, 
        arg1 + 0x338, var_308_1, arg1 + 0x260, &var_2d8, zmm6_1, arg1 + 0x258)
    var_308_1.q = 0
    void var_e8
    sub_140e86b10(data_143e29f28, &var_e8, &var_248, &var_2b8)
    sub_140597700(&var_e8)
    int64_t* var_270
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t temp2_1 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_270 + 8))(var_270, 1)
    
    var_2b8 = &data_142d7f690
    void var_f8
    sub_140596d80(&var_f8)
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t temp3_1 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_100 + 8))(var_100, 1)
    
    void var_240
    result = sub_140d94d20(&var_240)

__security_check_cookie(result_1 ^ &var_328)
return result
