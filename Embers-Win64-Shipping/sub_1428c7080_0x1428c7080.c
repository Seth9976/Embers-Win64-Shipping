// 函数: sub_1428c7080
// 地址: 0x1428c7080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x488)
void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int64_t* result_1 = nullptr
char* _Str1_1 = nullptr
int64_t var_450 = 0
int32_t var_468
int64_t* result

if (sub_1428b9b10(&var_450, &var_468, &_Str1_1, "ANY PRIVATE KEY", arg5, arg1, arg3, arg4) != 0)
    char* _Str1 = _Str1_1
    int64_t var_458 = var_450
    int64_t* var_488
    
    if (strcmp(_Str1, "PRIVATE KEY") != 0)
        if (strcmp(_Str1, "ENCRYPTED PRIVATE KEY") != 0)
            int32_t rax_12 = sub_1428bb2f0(_Str1, "PRIVATE KEY")
            
            if (rax_12 s<= 0)
                var_488.d = 0x58
                sub_1428a5670(9, 0x7b, 0xd, "crypto\pem\pem_pkey.c", var_488.d)
            else
                void* rax_13 = sub_1428bc250(nullptr, _Str1_1, rax_12)
                
                if (rax_13 == 0 || *(rax_13 + 0xb8) == 0)
                    var_488.d = 0x58
                    sub_1428a5670(9, 0x7b, 0xd, "crypto\pem\pem_pkey.c", var_488.d)
                else
                    result_1 = sub_1428c7580(*rax_13, arg2, &var_458, var_468)
                label_1428c7286:
                    
                    if (result_1 == 0)
                        var_488.d = 0x58
                        sub_1428a5670(9, 0x7b, 0xd, "crypto\pem\pem_pkey.c", var_488.d)
        else
            int64_t* rax_8 = sub_1428f0bc0(nullptr, &var_458, var_468)
            
            if (rax_8 == 0)
                var_488.d = 0x58
                sub_1428a5670(9, 0x7b, 0xd, "crypto\pem\pem_pkey.c", var_488.d)
            else
                char var_448[0x400]
                char* rcx_6 = &var_448
                int32_t rax_9
                
                if (arg3 == 0)
                    rax_9 = sub_1428b9b50(rcx_6, 0x400, 0, arg4)
                else
                    rax_9 = arg3(rcx_6, 0x400, 0, arg4)
                
                if (rax_9 s>= 0)
                    void* rax_10 = sub_14291c6c0(rax_8, &var_448, rax_9)
                    sub_1428f0b90(rax_8)
                    sub_1428b8960(&var_448, sx.q(rax_9))
                    
                    if (rax_10 != 0)
                        result_1 = sub_1428f1170(rax_10)
                        
                        if (arg2 != 0)
                            sub_1428965a0(*arg2)
                            *arg2 = result_1
                        
                        sub_1428f1010(rax_10)
                        goto label_1428c7286
                    
                    var_488.d = 0x58
                    sub_1428a5670(9, 0x7b, 0xd, "crypto\pem\pem_pkey.c", var_488.d)
                else
                    var_488.d = 0x40
                    sub_1428a5670(9, 0x7b, 0x68, "crypto\pem\pem_pkey.c", var_488.d)
                    sub_1428f0b90(rax_8)
    else
        void* rax_5 = sub_1428f1150(nullptr, &var_458, var_468)
        
        if (rax_5 != 0)
            result_1 = sub_1428f1170(rax_5)
            
            if (arg2 != 0)
                sub_1428965a0(*arg2)
                *arg2 = result_1
            
            sub_1428f1010(rax_5)
            goto label_1428c7286
        
        var_488.d = 0x58
        sub_1428a5670(9, 0x7b, 0xd, "crypto\pem\pem_pkey.c", var_488.d)
    sub_1428a7190(_Str1_1)
    sub_1428a7140(var_450, sx.q(var_468), "crypto\pem\pem_pkey.c", 0x5b)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_4a8)
return result
