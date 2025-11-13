// 函数: sub_142085030
// 地址: 0x142085030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x9c] = 0

if (arg1[0x94].d s> 0)
    void* rcx = arg1[0x88]
    
    if (rcx != 0 && sub_142368cd0(rcx, 1, 0xffffffff) != 0)
        if (*(arg1 + 0x50c) != 0)
            sub_14209fb70(&arg1[0x9f])
            int64_t var_28_1 = 0
            int128_t var_68
            __builtin_memset(&var_68, 0, 0x18)
            int64_t var_48_1 = (zx.o(0)).q
            int64_t var_38_1 = (zx.o(0)).q
            char var_20_1 = 1
            sub_141a00740(&var_68, 0, 0)
            int128_t zmm1_1 = sub_142080d10(arg1, &var_68, arg1[0x9d])
            sub_1420a9f70(arg1[0x9d], &var_68, zmm1_1)
            int64_t* rcx_5 = var_68.q
            
            if (rcx_5 != 0)
                (**rcx_5)(rcx_5, 1)
            
            if (var_48_1 != 0)
                (**var_48_1)(var_48_1, 1)
            
            int64_t* var_58
            
            if (var_58 != 0)
                (**var_58)(var_58, 1)
            
            if (var_38_1 != 0)
                (**var_38_1)(var_38_1, 1)
        
        arg1[0x9c] = *(arg1[0x9d] + 0x10)
        int64_t* result = j_sub_140a82f30(0x760)
        
        if (result == 0)
            return 0
        
        void* rax_7 = arg1[0x15]
        
        if (rax_7 == 0)
            rax_7 = sub_141ee69e0(arg1)
        
        uint32_t rbp = zx.d(*(rax_7 + 0x118))
        sub_14237f650(result, arg1, 1)
        *result = &data_1432ab988
        result[0xc8] = arg1[0x88]
        result[0xc9] = arg1
        result[0xca] = arg1[0x9d]
        void* rax_10 = arg1[0x9e]
        result[0xcb] = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        result[0xcc] = 0
        result[0xcd] = 0
        result[0xce] = *(*(result[0xc9] + 0x440) + 0x50)
        result[0xcf].d = rbp
        sub_142098cf0(&result[0xc9])
        
        if (*(*(result[0xc9] + 0x440) + 0xc8) != 0)
            int32_t i = 0
            
            if (*(result[0xce] + 8) s> 0)
                int64_t* r14_1 = nullptr
                
                do
                    int64_t* rax_15 = sub_141ee6400(result[0xc9])
                    int64_t r9_1 = *rax_15
                    (*(r9_1 + 0x208))(rax_15, *(r14_1 + result[0xcc]), *(result[0xc9] + 0x440), 
                        r9_1)
                    r14_1 = &r14_1[1]
                    i += 1
                while (i s< *(result[0xce] + 8))
        
        __builtin_memset(&result[0xe5], 0, 0x30)
        *(result + 0x3b) |= 2
        sub_1420a4550(result, arg1)
        sub_1420a4970(result)
        return result

return 0
