// 函数: sub_1429287f0
// 地址: 0x1429287f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x480)
void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int64_t var_438 = arg3
int32_t* var_450
__builtin_memset(&var_450, 0, 0x18)

if (arg1 == 0)
    goto label_142928878

int32_t* result

if (strcmp(arg1, "ENCRYPTED PRIVATE KEY") != 0)
    result = nullptr
else
    *arg5 = 1
label_142928878:
    int64_t* rax_3 = sub_1428f0bc0(nullptr, &var_438, arg4)
    
    if (rax_3 == 0)
        result = nullptr
    else
        *arg5 = 1
        int64_t* rax_4 = sub_1428a7510()
        int64_t var_478
        int32_t r8_1
        
        if (rax_4 == 0)
            var_478.d = 0x162
            r8_1 = 0x41
            goto label_1429289a2
        
        void var_428
        char* rax_5 = sub_142929d20(arg6, &var_428, 0x400, "PKCS8 decrypt password", arg7)
        
        if (rax_5 != 0)
            int64_t* var_448
            sub_1428eea10(rax_3, &var_448, &var_450)
            int32_t i = 0
            char* rax_6 = rax_5
            
            if (*rax_5 != 0)
                while (i u< 0x80000000)
                    rax_6 = &rax_6[1]
                    i += 1
                    
                    if (*rax_6 == 0)
                        break
            
            int32_t* r9 = var_450
            var_478.d = *r9
            int32_t var_458
            void* var_440
            
            if (sub_142956790(var_448, rax_5, i & 0x7fffffff, *(r9 + 8), var_478.d, &var_440, 
                    &var_458, 0) == 0)
                goto label_1429289aa
            
            rax_4[1] = var_440
            int64_t rax_10 = sx.q(var_458)
            *rax_4 = rax_10
            rax_4[2] = rax_10
            sub_1428f0b90(rax_3)
            result = sub_1429694d0("PRIVATE KEY", rax_4)
            
            if (result == 0)
                var_478.d = 0x179
                r8_1 = 0x41
                goto label_1429289a2
        else
            var_478.d = 0x169
            r8_1 = (&rax_5[0x73]).d
        label_1429289a2:
            sub_1428a5670(0x2c, 0x7d, r8_1, "crypto\store\loader_file.c", var_478.d)
        label_1429289aa:
            sub_1428f0b90(rax_3)
            sub_1428a71f0(rax_4)
            result = nullptr

__security_check_cookie(rax_1 ^ &var_498)
return result
