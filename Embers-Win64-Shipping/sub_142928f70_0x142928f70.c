// 函数: sub_142928f70
// 地址: 0x142928f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1090)
void var_10b8
int64_t rax_1 = __security_cookie ^ &var_10b8
int32_t var_1080 = var_1080 & 0xfffffffe
char* var_1088 = arg2
int64_t r14 = 1
int64_t rdi = 0
int32_t* result

if (_strnicmp(arg2, "file:", 5) != 0)
label_142929062:
    char* _FileName_1 = nullptr
    char** rbx_1 = &var_1088
    
    while (true)
        struct _stat64i32 _Stat
        
        if (rdi u< r14)
            if ((rbx_1[1].b & 1) != 0 && **rbx_1 != 0x2f)
                sub_1428a5670(0x2c, 0x78, 0x6c, "crypto\store\loader_file.c", 0x335)
                sub_1428a4880(1)
                goto label_14292931e
            
            char* _FileName = *rbx_1
            
            if (_stat64i32(_FileName, &_Stat) s>= 0)
                _FileName_1 = _FileName
            else
                sub_1428a5670(2, 0x16, *_errno(), "crypto\store\loader_file.c", 0x33b)
                sub_1428a4880(1)
            
            rdi += 1
            rbx_1 = &rbx_1[2]
            
            if (_FileName_1 == 0)
                continue
        else if (_FileName_1 == 0)
            goto label_14292931e
        
        sub_1428a49e0()
        int32_t* result_1 = sub_1428a6a70(0x50)
        
        if (result_1 == 0)
            sub_1428a5670((&result_1[0xb]).d, (&result_1[0x1e]).d, (result_1 + 0x41).d, 
                "crypto\store\loader_file.c", 0x34a)
            break
        
        char str1[0xfff]
        
        if ((_Stat.st_mode & 0xf000) != 0x4000)
            memset(&str1, 0, 0x1000)
            int64_t* rax_14 = sub_14289a500(&data_1434eb5f0)
            int64_t* rax_15
            
            if (rax_14 != 0)
                rax_15 = sub_1428b6d90(_FileName_1, "rb")
                *(result_1 + 0x10) = rax_15
            
            if (rax_14 == 0 || rax_15 == 0)
                sub_142899f50(rax_14)
                sub_142929cb0(result_1)
                break
            
            int64_t* rax_16 = sub_14289a6f0(rax_14, rax_15)
            *(result_1 + 0x10) = rax_16
            
            if (sub_142899cf0(rax_16, 0x1d, 0xfff, &str1) s> 0)
                char var_39_1 = 0
                
                if (strstr(&str1, "-----BEGIN ") != 0)
                    *result_1 = 1
        else
            int64_t rax_9 = sub_1428a6ba0(arg2)
            *(result_1 + 0x20) = rax_9
            *result_1 = 2
            
            if (rax_9 == 0)
                sub_142929cb0(result_1)
                break
            
            *(result_1 + 0x38) = sub_1428b6440(&result_1[4], _FileName_1)
            int32_t* rax_11 = _errno()
            bool cond:1_1 = *(result_1 + 0x38) != 0
            int32_t rcx_8 = *rax_11
            result_1[0x10] = rcx_8
            
            if (not(cond:1_1))
                if (rcx_8 == 0)
                    result_1[6] = 1
                    result = result_1
                    goto label_14292932b
                
                int32_t* rax_12 = _errno()
                *rax_12 = result_1[0x10]
                sub_1428a7110(*_errno(), &str1, 0x100)
                sub_1428a5670(0x2c, 0x78, 2, "crypto\store\loader_file.c", 0x361)
                sub_1428a4880(1)
                sub_142929cb0(result_1)
                break
        result = result_1
        goto label_14292932b
else
    char* _Str1 = &arg2[5]
    
    if (strncmp(_Str1, "//", 2) != 0)
        goto label_142929012
    
    _Str1 = &arg2[7]
    r14 = 0
    
    if (_strnicmp(_Str1, "localhost/", 0xa) == 0)
        _Str1 = &arg2[0x10]
    label_142929012:
        int64_t rbp_2 = r14 * 2
        int32_t rsi_2 = (&var_1080)[rbp_2 * 2] | 1
        bool cond:0_1 = *_Str1 != 0x2f
        (&var_1080)[rbp_2 * 2] = rsi_2
        
        if (not(cond:0_1) && _Str1[2] == 0x3a && _Str1[3] == 0x2f
                && sub_1428e4730(sx.d(_Str1[1])) - 0x61 u<= 0x19)
            _Str1 = &_Str1[1]
            (&var_1080)[rbp_2 * 2] = rsi_2 & 0xfffffffe
        
        (&var_1088)[rbp_2] = _Str1
        r14 += 1
        goto label_142929062
    
    if (*_Str1 == 0x2f)
        goto label_142929012
    
    sub_1428a5670(0x2c, 0x78, 0x6f, "crypto\store\loader_file.c", 0x318)

label_14292931e:
result = nullptr
label_14292932b:
__security_check_cookie(rax_1 ^ &var_10b8)
return result
