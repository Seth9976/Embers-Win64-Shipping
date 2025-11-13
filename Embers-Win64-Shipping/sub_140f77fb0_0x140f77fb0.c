// 函数: sub_140f77fb0
// 地址: 0x140f77fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
uint32_t rbx = zx.d(*(arg3 + 0x18))
char* result = arg2
char var_1b8
int32_t var_104
char var_f8
int32_t var_44

if (rbx - 1 u> 0x7e)
label_140f78141:
    int64_t* rcx_10 = *arg1
    
    if ((**rcx_10)(rcx_10, arg2) != 0)
        *result = 0
        goto label_140f78277
    
    int64_t* rcx_11 = *arg1
    
    if ((*(*rcx_11 + 0x50))(rcx_11, zx.q(rbx.w)) == 0)
        *result = 0
        goto label_140f78277
    
    sub_140f6a640(arg1)
    int32_t rbx_2 = 0
    char* rdx_3
    int32_t r14_2
    
    if (sub_140f7a650(arg1, rbx.w) == 0)
        int32_t var_44_2 = var_44 & 0xffffff00
        rdx_3 = &var_f8
        int64_t var_f0_2 = 0
        r14_2 = 0
        int64_t var_e8_2 = 0
        char var_d8_2 = 0
        int64_t var_d0_1
        __builtin_memset(&var_d0_1, 0, 0x88)
        rbx_2 = 8
        var_f8 = 0
        int32_t var_48_2 = 0x20702
    else
        int32_t var_104_2 = var_104 & 0xffffff00
        rdx_3 = &var_1b8
        var_1b8 = 1
        r14_2 = 4
        int64_t var_1b0_2 = 0
        int64_t var_1a8_2 = 0
        char var_198_2 = 0
        int64_t var_190_1
        __builtin_memset(&var_190_1, 0, 0x88)
        int32_t var_108_2 = 0x20702
    
    sub_140e51550(result, rdx_3)
    
    if (rbx_2 != 0)
        sub_140597700(&var_f8)
    
    if (r14_2 != 0)
        sub_140597700(&var_1b8)
    
    sub_140f74800(arg1)
else
    arg2 = &__dos_header
    
    switch (rbx)
        case 1, 3, 0xd, 0x16, 0x18, 0x19, 0x1a, 0x1b, 0x7f
            *result = 1
        label_140f78277:
            *(result + 8) = 0
            *(result + 0x10) = 0
            result[0x20] = 0
            __builtin_memset(&result[0x28], 0, 0x88)
            *(result + 0xb4) &= 0xffffff00
            *(result + 0xb0) = 0x20702
        case 2, 4, 5, 6, 7, 9, 0xb, 0xc, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x17, 0x1c, 
                0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 
                0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 
                0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 
                0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 
                0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e
            goto label_140f78141
        case 8
            int64_t* rcx_2 = *arg1
            
            if ((**rcx_2)(rcx_2, &__dos_header) != 0)
                *result = 0
                goto label_140f78277
            
            int32_t rbx_1 = 0
            char* rdx
            int32_t r14_1
            
            if (sub_140f77300(arg1, sub_140f6a640(arg1)) == 0)
                int32_t var_104_1 = var_104 & 0xffffff00
                rdx = &var_1b8
                int64_t var_1b0_1 = 0
                r14_1 = 0
                int64_t var_1a8_1 = 0
                char var_198_1 = 0
                int64_t var_190
                __builtin_memset(&var_190, 0, 0x88)
                rbx_1 = 2
                var_1b8 = 0
                int32_t var_108_1 = 0x20702
            else
                int32_t var_44_1 = var_44 & 0xffffff00
                rdx = &var_f8
                var_f8 = 1
                r14_1 = 1
                int64_t var_f0_1 = 0
                int64_t var_e8_1 = 0
                char var_d8_1 = 0
                int64_t var_d0
                __builtin_memset(&var_d0, 0, 0x88)
                int32_t var_48_1 = 0x20702
            
            sub_140e51550(result, rdx)
            
            if (rbx_1 != 0)
                sub_140597700(&var_1b8)
            
            if (r14_1 == 0)
                sub_140f74800(arg1)
            else
                sub_140597700(&var_f8)
                sub_140f74800(arg1)
        case 0xa
            sub_140e194c0(result)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
