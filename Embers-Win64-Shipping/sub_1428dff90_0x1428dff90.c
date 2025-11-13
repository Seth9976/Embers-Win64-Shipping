// 函数: sub_1428dff90
// 地址: 0x1428dff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* result_1 = nullptr
sub_1428df6c0(sub_1428e3030(sub_1428d58b0(arg3), data_143b85e30), "Called CAPI_dsa_do_sign()\n", 
    arg3)
void* rax_4 = sub_1428d58f0(arg3, data_143b85e38)
int64_t* result

if (rax_4 == 0)
    int32_t rax_5 = data_143fecca8
    
    if (rax_5 == 0)
        rax_5 = sub_1428a5060()
        data_143fecca8 = rax_5
    
    sub_1428a5670(rax_5, 0x72, 0x66, "engines\e_capi.c", 0x3f1)
    result = nullptr
else
    uint64_t hHash_1
    
    if (arg2 == 0x14)
        uint64_t* var_68_1
        
        if (CryptCreateHash(*(rax_4 + 8), 0x8004, 0, 0, &hHash_1) != 0)
            uint8_t pbSignature
            
            if (CryptSetHashParam(hHash_1, HP_HASHVAL, arg1, 0) != 0)
                uint64_t hHash = hHash_1
                uint32_t var_58
                uint32_t* pdwSigLen = &var_58
                var_58 = 0x28
                
                if (CryptSignHashW(hHash, *(rax_4 + 0x18), nullptr, 0, &pbSignature, pdwSigLen)
                        != 0)
                    int64_t* rax_13 = sub_142890500()
                    int64_t* rax_14 = sub_142890500()
                    
                    if (rax_13 == 0 || rax_14 == 0)
                        sub_1428901a0(rax_13)
                        sub_1428901a0(rax_14)
                    else
                        uint8_t pbSignature_2 = pbSignature
                        uint8_t pbSignature_1
                        pbSignature = pbSignature_1
                        char var_47
                        char var_36_1 = var_47
                        char var_36
                        char var_47_1 = var_36
                        char var_46
                        char var_37_1 = var_46
                        char var_37
                        char var_46_1 = var_37
                        char var_45
                        char var_38_1 = var_45
                        char var_38
                        char var_45_1 = var_38
                        char var_44
                        char var_39_1 = var_44
                        char var_39
                        char var_44_1 = var_39
                        char var_43
                        char var_3a_1 = var_43
                        char var_3a
                        char var_43_1 = var_3a
                        char var_42
                        char var_3b_1 = var_42
                        char var_3b
                        char var_42_1 = var_3b
                        char var_41
                        char var_3c_1 = var_41
                        char var_3c
                        char var_41_1 = var_3c
                        char var_40
                        char var_3d_1 = var_40
                        char var_3d
                        char var_40_1 = var_3d
                        char var_3f
                        char var_3e_1 = var_3f
                        char var_3e
                        char var_3f_1 = var_3e
                        void var_34
                        
                        if (sub_14288fa60(&pbSignature, 0x14, rax_13) == 0)
                            sub_1428901a0(rax_13)
                            sub_1428901a0(rax_14)
                        else if (sub_1428e2d90(rax_14, &var_34, 0x14) == 0)
                            sub_1428901a0(rax_13)
                            sub_1428901a0(rax_14)
                        else
                            int64_t* result_2 = sub_1428f06e0()
                            result_1 = result_2
                            
                            if (result_2 == 0)
                                sub_1428901a0(rax_13)
                                sub_1428901a0(rax_14)
                            else
                                sub_1428eea90(result_2, rax_13, rax_14)
                else
                    int32_t rax_12 = data_143fecca8
                    
                    if (rax_12 == 0)
                        rax_12 = sub_1428a5060()
                        data_143fecca8 = rax_12
                    
                    uint8_t* var_68_2
                    var_68_2.d = 0x40b
                    sub_1428a5670(rax_12, 0x72, 0x72, "engines\e_capi.c", var_68_2.d)
                    sub_1428df7e0()
            else
                int32_t rax_10 = data_143fecca8
                
                if (rax_10 == 0)
                    rax_10 = sub_1428a5060()
                    data_143fecca8 = rax_10
                
                var_68_1.d = 0x403
                sub_1428a5670(rax_10, 0x72, 0x67, "engines\e_capi.c", var_68_1.d)
                sub_1428df7e0()
            
            sub_1428b8960(&pbSignature, 0x28)
            CryptDestroyHash(hHash_1)
            result = result_1
        else
            int32_t rax_8 = data_143fecca8
            
            if (rax_8 == 0)
                rax_8 = sub_1428a5060()
                data_143fecca8 = rax_8
            
            var_68_1.d = 0x3fc
            sub_1428a5670(rax_8, 0x72, 0x64, "engines\e_capi.c", var_68_1.d)
            sub_1428df7e0()
            result = nullptr
    else
        int32_t rax_6 = data_143fecca8
        
        if (rax_6 == 0)
            rax_6 = sub_1428a5060()
            data_143fecca8 = rax_6
        
        sub_1428a5670(rax_6, 0x72, 0x76, "engines\e_capi.c", 0x3f6)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_88)
return result
