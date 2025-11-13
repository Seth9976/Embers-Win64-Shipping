// 函数: sub_1428bab90
// 地址: 0x1428bab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r13 = 0
int64_t* r14 = *arg2
int32_t rax_1 = arg5 & 1
int32_t rbp = 0
int32_t rdi = 0
char (* _Str1)[0x10]

if (rax_1 == 0)
    _Str1 = sub_1428a6730(0x100)
else
    _Str1 = sub_1428a71b0(0x100)

if (_Str1 == 0)
    sub_1428a5670((&(*_Str1)[9]).d, 0x8f, (&(*_Str1)[0x41]).d, "crypto\pem\pem_lib.c", 0x324)
    return 0

int32_t rax_3 = sub_14289a080(arg1, _Str1, 0xff)
int32_t rbx_1 = rax_3
int32_t var_58_1
int32_t r8_6

if (rax_3 s<= 0)
label_1428bad23:
    var_58_1 = 0x32c
    r8_6 = 0x70
label_1428bad42:
    sub_1428a5670(9, 0x8f, r8_6, "crypto\pem\pem_lib.c", var_58_1)
else
    while (true)
        if (rdi == 0 && memchr(_Str1, rdi.b + 0x3a, sx.q(rbx_1)) != 0)
            rdi = 1
        
        int32_t rax_5 = strncmp(_Str1, "-----END ", 9)
        char r8_4
        
        if (rax_5 != 0)
            r8_4 = -1
        
        if (rax_5 == 0 || rdi == 1)
            r8_4 = -5
        
        int32_t rax_6 = sub_1428bb410(_Str1, rbx_1, r8_4 & arg5.b)
        
        if (*_Str1 != 0xa)
            if (strncmp(_Str1, "-----END ", 9) == 0)
                uint64_t _MaxCount = -1
                
                do
                    _MaxCount += 1
                while (arg4[_MaxCount] != 0)
                
                int32_t rax_10 = strncmp(&(*_Str1)[9], arg4, _MaxCount)
                
                if (rax_10 == 0
                        && strncmp(&(*_Str1)[9 + _MaxCount], "-----\n", zx.q(rax_10 + 6)) == 0)
                    if (rdi == 0)
                        *arg2 = *arg3
                        *arg3 = r14
                    
                    r13 = 1
                    break
                
                var_58_1 = 0x34a
                r8_6 = 0x66
                goto label_1428bad42
            
            if (rbp != 0)
                var_58_1 = 0x354
                r8_6 = 0x66
                goto label_1428bad42
            
            if (sub_14289a750(r14, _Str1) s< 0)
                break
            
            if (rdi == 2)
                if (rax_6 s> 0x41)
                    break
                
                if (rax_6 s< 0x41)
                    rbp = 1
        else
            if (rdi == 2)
                var_58_1 = 0x33c
                r8_6 = 0x66
                goto label_1428bad42
            
            r14 = *arg3
            rdi = 2
        
        int32_t rax_9 = sub_14289a080(arg1, _Str1, 0xff)
        rbx_1 = rax_9
        
        if (rax_9 s<= 0)
            goto label_1428bad23

if (rax_1 == 0)
    sub_1428a6780(_Str1)
else
    sub_1428a7140(_Str1, 0x100, "crypto\pem\pem_lib.c", 0xdd)

return zx.q(r13)
