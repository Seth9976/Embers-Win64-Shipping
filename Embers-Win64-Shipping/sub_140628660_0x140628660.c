// 函数: sub_140628660
// 地址: 0x140628660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* result = sub_1423de540(data_143f5b298, arg1, 0)
int64_t* result_1 = result

if (result != 0)
    int64_t* i = result[0x13]
    int64_t var_40
    
    for (void* rbp_1 = &i[sx.q(result[0x14].d)]; i != rbp_1; i = &i[1])
        int64_t rbx_1 = *arg2
        result = sub_1420e4d10(*i, &var_40)
        
        if (*result == rbx_1)
            goto label_1406288d8
    
    var_40 = *arg2
    int16_t* var_38
    sub_140b63b70(&var_40, &var_38)
    int64_t* rcx_4 = data_143f5b298
    int64_t r9_1
    r9_1.b = 1
    int64_t var_48
    
    if ((*(*rcx_4 + 0x400))(rcx_4, result_1[7], &var_38, r9_1) != 0)
        int16_t* const rdx_4 = &data_142d40450
        int32_t var_30
        
        if (var_30 != 0)
            rdx_4 = var_38
        
        var_40 = *sub_140b58260(&var_48, rdx_4, 1)
    
    sub_1423d83d0(data_143f5b298)
    var_48 = 0
    int64_t* rax_6 = sub_14252cd20()
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(result_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    int64_t* rax_8 = sub_140d2dfc0(rax_6, result_1, 0, 0x40, 0, 0, 0, 0, 0)
    sub_1420ee550(rax_8, var_40)
    float var_28[0x4]
    sub_140acc920(&var_28, sub_140adc660(&var_48))
    int64_t r8_2 = *rax_8
    *(rax_8 + 0xbc) = var_28
    (*(r8_2 + 0x260))(rax_8, arg2[5].b & 1, r8_2)
    sub_1420ee450(rax_8, arg2[5].b u>> 1 & 1)
    rax_8[0x29].d |= 3
    *(rax_8 + 0xba) = ((arg2[5].b << 5 ^ *(rax_8 + 0xba)) & 0x7f) ^ arg2[5].b << 5
    sub_140ade170(arg2 + 0x1c, &var_28)
    uint128_t zmm3_1 = zx.o(data_14399f668.q)
    uint128_t zmm4_1 = arg2[2] | arg2[3].d << 0x40
    int64_t zmm2_1 = data_14399f670
    *(rax_8 + 0x80) = var_28
    *(rax_8 + 0x90) = zmm4_1
    *(rax_8 + 0xa0) = zmm3_1.q | zmm2_1 << 0x40
    rax_8[0xa] = arg2[1]
    sub_14242c7b0(result_1, rax_8)
    result = sub_142435600(result_1, 1)
    int16_t* rcx_19 = var_38
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)

label_1406288d8:
__security_check_cookie(rax_1 ^ &var_98)
return result
