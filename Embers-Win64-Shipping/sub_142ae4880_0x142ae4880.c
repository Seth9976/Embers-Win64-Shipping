// 函数: sub_142ae4880
// 地址: 0x142ae4880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Format::VTable** arg_8 = arg1
int64_t var_38 = -2
struct icu_64::DateFormat::icu_64::RelativeDateFormat::VTable** result = arg1
sub_142a6cbf0(arg1)
*result = &icu_64::RelativeDateFormat::`vftable'{for `icu_64::DateFormat'}
result[0x2c] = 0
result[0x2d] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x2e].w = 2
result[0x35] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
result[0x36].w = 2
result[0x3d] = 0
result[0x3e].d = arg3
sub_142a456d0(&result[0x3f], arg4)
result[0x5b].d = 0
result[0x5c] = 0
result[0x5d].d = 0
result[0x5e] = 0

if (*arg5 s<= 0)
    if (arg2 + 1 u> 4)
        *arg5 = 1
    else
        int32_t rcx_2 = arg3 & 0xffffff7f
        
        if (arg3 s<= 3)
            rcx_2 = arg3
        
        if (rcx_2 == 0xffffffff)
            int64_t* inptr = sub_142a6d740(arg2, arg4)
            int64_t* rax_7 = __RTDynamicCast(inptr, 0, 
                &class icu_64::DateFormat `RTTI Type Descriptor', 
                &class icu_64::SimpleDateFormat `RTTI Type Descriptor', 0)
            int32_t rcx_11 = rax_7.d
            result[0x2c] = rax_7
            
            if (rax_7 != 0)
                (*(*rax_7 + 0xe8))(rcx_11, &result[0x35])
            label_142ae4a70:
                
                if (*arg5 s<= 0)
                    void* rax_11 = sub_142a68a70(sub_142a64c40(), arg4, arg5)
                    result[0x29] = rax_11
                    
                    if (*arg5 s<= 0 && rax_11 == 0)
                        *arg5 = 7
                
                sub_142ae5360(result, arg5)
            else
                *arg5 = 0x10
                
                if (inptr != 0)
                    (**inptr)(inptr, zx.q(rcx_11 + 1))
        else
            int64_t* rax_3 = __RTDynamicCast(sub_142a6d490(rcx_2, arg4), 0, 
                &class icu_64::DateFormat `RTTI Type Descriptor', 
                &class icu_64::SimpleDateFormat `RTTI Type Descriptor', 0)
            result[0x2c] = rax_3
            
            if (rax_3 != 0)
                (*(*rax_3 + 0xe8))(rax_3, &result[0x2d])
                
                if (arg2 != 0xffffffff)
                    int64_t* rax_6 = __RTDynamicCast(sub_142a6d740(arg2, arg4), 0, 
                        &class icu_64::DateFormat `RTTI Type Descriptor', 
                        &class icu_64::SimpleDateFormat `RTTI Type Descriptor', 0)
                    
                    if (rax_6 != 0)
                        int64_t r8 = *rax_6
                        (*(r8 + 0xe8))(rax_6, &result[0x35], r8)
                        int64_t r8_1 = *rax_6
                        (*r8_1)(rax_6, 1, r8_1)
                
                goto label_142ae4a70
            
            *arg5 = 0x10

return result
