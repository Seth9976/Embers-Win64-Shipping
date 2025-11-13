// 函数: sub_14288d960
// 地址: 0x14288d960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t var_18_1
int32_t r8_1

if (arg1 == 0 || arg3 == 0 || arg4 == 0)
    var_18_1 = 0x363
    r8_1 = 0x43
else if (sub_14288e190(arg2, arg3, arg4, nullptr) != 0)
    void* rcx_1 = **(arg1 + 0x130)
    
    if (rcx_1 != 0)
        int64_t rax_3 = sub_1428a67c0(*(rcx_1 + 0x18), arg4, "ssl\ssl_rsa.c", 0x370)
        
        if (rax_3 != 0)
            *(**(arg1 + 0x130) + 0x18) = rax_3
            memcpy(*(**(arg1 + 0x130) + 0x18), arg3, arg4.d)
            *(**(arg1 + 0x130) + 0x20) = arg4
            
            if (sub_14288e190(arg2, arg3, arg4, arg1) != 0)
                return 1
            
            var_18_1 = 0x37f
            r8_1 = 0x184
        else
            var_18_1 = 0x372
            r8_1 = (rax_3 + 0x41).d
    else
        var_18_1 = 0x36c
        r8_1 = (rcx_1 + 0x44).d
else
    var_18_1 = 0x368
    r8_1 = 0x184

sub_1428a5670(0x14, 0x21f, r8_1, "ssl\ssl_rsa.c", var_18_1)
return 0
