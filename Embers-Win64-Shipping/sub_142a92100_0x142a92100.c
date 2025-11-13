// 函数: sub_142a92100
// 地址: 0x142a92100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int128_t* result_1 = nullptr
char var_148 = 1
int64_t* rbx = arg3
void* rdi = arg2
int32_t var_144 = 0
int64_t r14
r14.b = 1
int128_t* result

if (*arg4 s> 0)
    result = nullptr
else
    if (arg2 != 0)
        if (rbx != 0)
            goto label_142a92188
        
        goto label_142a92162
    
    if (rbx == 0)
        void var_118
        rdi = &var_118
    label_142a92162:
        int64_t var_140
        rbx = &var_140
        var_140 = 0
        var_140.d = 0x28
        int64_t var_138
        __builtin_memset(&var_138, 0, 0x20)
    label_142a92188:
        *(rdi + 0x3c) = 0
        *(rdi + 0xdc) = 0
        *rdi = 0
        rbx[3] = arg1
        rbx[4] = rdi + 0x3c
        *(rbx + 0xc) = *(rdi + 0xdc)
        
        if (arg1 != 0)
            char rax_5 = *arg1
            
            if (rax_5 == 0x55)
                if (arg1[1] != 0x54 || arg1[2] != 0x46)
                    goto label_142a921fb
                
                goto label_142a92245
            
            if (rax_5 != 0x75 || arg1[1] != 0x74 || arg1[2] != 0x66)
            label_142a921fb:
                sub_142a91760(arg1, rdi, rbx, arg4)
                
                if (*arg4 s<= 0)
                    int64_t rax_6 = sub_142af5440(rbx[3], &var_148, &var_144)
                    int32_t rcx_1 = var_144
                    rbx[3] = rax_6
                    
                    if (rcx_1 s> 0 || rax_6 == 0)
                        rbx[3] = rdi
                    else if (rcx_1 == 0xffffff86)
                        *arg4 = rcx_1
                    
                    goto label_142a92285
                
                result = nullptr
            else
            label_142a92245:
                char rax_7 = arg1[3]
                
                if (rax_7 != 0x2d)
                    if (rax_7 != 0x38 || arg1[4] != 0)
                        goto label_142a921fb
                    
                    rbx[3] = "UTF-8"
                    result = &data_1436645c0
                else
                    if (arg1[4] != 0x38 || arg1[5] != 0)
                        goto label_142a921fb
                    
                    rbx[3] = "UTF-8"
                    result = &data_1436645c0
        else
            result = sub_142a91fe0()
            rbx[3] = result
            
            if (result != 0)
                r14.b = 0
                result_1 = data_144015bf8
                var_148 = data_144015ba2
            label_142a92285:
                
                if (var_148 != 0)
                    char* rcx_2 = rbx[3]
                    
                    if (rcx_2 != rdi)
                        sub_142a91760(rcx_2, rdi, rbx, arg4)
                
                if (r14.b != 0)
                    result_1 = sub_142a91520(rbx[3])
                
                if (result_1 != 0)
                    result = result_1
                else
                    *(rbx + 4) = 1
                    rbx[2] = result_1
                    sub_142a91400()
                    sub_142a860a0(&data_144015c00)
                    result_1 = sub_142a92320(rbx, arg4)
                    sub_142a91400()
                    sub_142a860d0(&data_144015c00)
                    
                    if (*arg4 s> 0 || result_1 == 0)
                        result = nullptr
                    else
                        result = result_1
            else
                *arg4 = 2
    else
        *arg4 = 5
        result = nullptr

__security_check_cookie(rax_1 ^ &var_168)
return result
