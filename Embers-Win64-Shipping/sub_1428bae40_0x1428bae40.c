// 函数: sub_1428bae40
// 地址: 0x1428bae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r15 = 0
int32_t rsi_1 = arg3 & 1
char* _Str1

if (rsi_1 == 0)
    _Str1 = sub_1428a6730(0x100)
else
    _Str1 = sub_1428a71b0(0x100)

if (_Str1 == 0)
    sub_1428a5670((&_Str1[9]).d, 0x90, (&_Str1[0x41]).d, "crypto\pem\pem_lib.c", 0x2e1)
    return 0

while (true)
    int32_t rax_1 = sub_14289a080(arg1, _Str1, 0xff)
    int32_t var_28_1
    int32_t r8_8
    
    if (rax_1 s<= 0)
        var_28_1 = 0x2e9
        r8_8 = 0x6c
    else
        int64_t rdi_1 = sx.q(sub_1428bb410(_Str1, rax_1, arg3.b & 0xfb))
        int32_t rax_3 = strncmp(_Str1, "-----BEGIN ", 0xb)
        
        if (rax_3 != 0)
            continue
        else if (rdi_1.d s< 6)
            continue
        else if (strncmp(rdi_1 - 6 + _Str1, "-----\n", zx.q(rax_3 + 6)) != 0)
            continue
        else
            int64_t rdi_2 = sx.q((rdi_1 - 0x10).d)
            _Str1[sx.q((rdi_1 - 6).d)] = 0
            int64_t rax_7
            
            if (rsi_1 == 0)
                rax_7 = sub_1428a6730(rdi_2)
            else
                rax_7 = sub_1428a71b0(rdi_2)
            
            *arg2 = rax_7
            
            if (rax_7 != 0)
                memcpy(rax_7, &_Str1[0xb], rdi_2.d)
                r15 = 1
                break
            
            var_28_1 = 0x2f8
            r8_8 = (rax_7 + 0x41).d
    
    sub_1428a5670(9, 0x90, r8_8, "crypto\pem\pem_lib.c", var_28_1)
    break

if (rsi_1 == 0)
    sub_1428a6780(_Str1)
else
    sub_1428a7140(_Str1, 0x100, "crypto\pem\pem_lib.c", 0xdd)

return zx.q(r15)
