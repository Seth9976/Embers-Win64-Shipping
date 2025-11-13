// 函数: sub_142b31e60
// 地址: 0x142b31e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
int32_t* r14 = arg5

if (*r14 s<= 0)
    if (*(*(arg1 + 0x28) + 0x80) != 0)
        struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** rax_2 =
            j_sub_142a7dd00(0x190)
        arg5 = rax_2
        struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** result
        
        if (rax_2 == 0)
            result = nullptr
        else
            result = sub_142b130e0(rax_2, *(*(arg1 + 0x20) + 0x20))
        
        struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** result_1 = result
        arg5 = result_1
        
        if (result == 0 || result[4] == 0)
            *r14 = 7
            result = nullptr
        else
            void var_78
            sub_142b79660(&var_78, *(arg1 + 0x28), r14)
            
            if (*r14 s> 0)
                result = nullptr
            else
                *(arg1 + 0x40) = *(*(*(arg1 + 0x20) + 0x20) + 0x1c)
                uint64_t var_40_1 = arg1
                int64_t r9
                int64_t var_38_1 = r9
                struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rax_6 =
                    sub_142aa1030(&result[4])
                sub_142b79a50(&var_78, arg2, rax_6, arg4, r14)
                int64_t var_48
                *(arg1 + 0x120) = var_48
                
                if (*r14 s> 0)
                    result = nullptr
                else if (*(*(arg1 + 0x48) + 0x260) == 0)
                    result[3] = *(arg1 + 0x28)
                label_142b3205d:
                    
                    if (*r14 s> 0)
                        result = nullptr
                    else
                        rax_6[0xa].d = sub_142b21a80(result[3], rax_6, rax_6 + 0x54, 0x180)
                        sub_142a48100(&result[5], arg2)
                        sub_142a4a210(&result[5])
                        sub_142b13500(result, *(arg1 + 0x20) + 0x148, arg3)
                        result_1 = nullptr
                else
                    sub_142b31520(arg1, r14, arg1)
                    sub_142b300a0(arg1, r14)
                    sub_142b302c0(arg1, r14)
                    sub_142a9e9d0(arg1 + 0x58, 0, 0x7f)
                    sub_142a9e9d0(arg1 + 0x58, 0xc0, 0xff)
                    sub_142aa0040(arg1 + 0x58, 0xac00, 0xd7a3)
                    sub_142b7fe20(*(arg1 + 0x48), arg1 + 0x58, r14)
                    sub_142b133f0(result, r14)
                    
                    if (*r14 s<= 0)
                        if (*(arg1 + 0x50) != 0)
                            *(*(arg1 + 0x48) + 0x261) = 1
                        
                        int64_t* rcx_14 = *(arg1 + 0x48)
                        (*(*rcx_14 + 0x20))(rcx_14, result[0x2a], r14)
                        result[0x2b] = *(arg1 + 0x48)
                        *(arg1 + 0x48) = 0
                        goto label_142b3205d
                    
                    result = nullptr
        
        if (result_1 != 0)
            struct icu_64::SharedObject::icu_64::CollationTailoring::VTable* r8_6 = *result_1
            r8_6->__offset(0x0).q(result_1, 1, r8_6)
        
        return result
    
    *r14 = 2
    *(arg1 + 0x120) = "missing root elements data, tailoring not supported"

return nullptr
