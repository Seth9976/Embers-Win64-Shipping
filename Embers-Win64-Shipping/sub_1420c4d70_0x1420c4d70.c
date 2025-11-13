// 函数: sub_1420c4d70
// 地址: 0x1420c4d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_278
int64_t result = __security_cookie ^ &var_278
int64_t result_1 = result
int32_t var_258 = 0

if (arg2 != 0)
    int512_t zmm0_1
    result, zmm0_1 = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (result == 0)
        zmm0_1.o = var_258
    else
        void* rax_1 = sub_142437350(result, arg2)
        int512_t zmm0_2
        result, zmm0_2 = sub_142149f00(rax_1, arg_18, &var_258)
        
        if (result.b == 0 && *(rax_1 + 0x28) == result.b)
            int32_t var_8c_1 = 0x80
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x2c)
            int32_t var_84_1 = 0
            int64_t var_78_1 = 0
            int32_t var_70_1 = 0
            int32_t var_88_1 = 0xffffffff
            void var_180
            int64_t* rax_2 = sub_140aae2b0(&var_180, &arg_18)
            int32_t var_68 = 4
            int64_t var_58_1 = *rax_2
            int64_t* rcx_5 = rax_2[1]
            
            if (rcx_5 != 0)
                rcx_5[1].d += 1
            
            int32_t var_48_1 = rax_2[2].d
            char var_40_1 = 1
            int64_t var_250 = 0
            int32_t var_248_1 = 0
            sub_1405947f0(&var_250, 0xa)
            int32_t rax_4 = var_248_1 + 0xa
            var_248_1 = rax_4
            
            if (rax_4 s> 0)
                sub_140594770(&var_250)
            
            UnDecorator::getReferenceType(var_250, u"ParamName", 0x14)
            int64_t* var_200 = &var_250
            int32_t* var_1f8_1 = &var_68
            void var_240
            sub_140b91dc0(&var_b8, &var_240, &var_200, nullptr)
            int64_t rcx_10 = var_250
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            if (var_40_1 != 0)
                char var_40_2 = 0
                
                if (rcx_5 != 0)
                    rcx_5[1].d -= 1
                    
                    if (rcx_5[1].d == 1)
                        (**rcx_5)(rcx_5)
                        int32_t rax_7 = *(rcx_5 + 0xc)
                        *(rcx_5 + 0xc) -= 1
                        
                        if (rax_7 == 1)
                            (*(*rcx_5 + 8))(rcx_5, 1)
            
            int64_t* var_178
            
            if (var_178 != 0)
                var_178[1].d -= 1
                
                if (var_178[1].d == 1)
                    (**var_178)(var_178)
                    int32_t rax_11 = *(var_178 + 0xc)
                    *(var_178 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*var_178 + 8))(var_178, 1)
            
            void*** var_190
            void var_120
            void var_108
            char* var_f0
            void**** rax_16 = sub_140a005b0(&var_190, 
                sub_140aaca20(&var_120, 
                    sub_140a96390(&var_f0, 
                        _vfprintf_p_l(&var_108, 
                            with invalid ParameterName '{ParamName}'. This is likely due to a Blueprint error.", 
                        KismetMaterialLibrary")), &var_b8))
            void*** var_210 = *rax_16
            int64_t* rcx_20 = rax_16[1]
            
            if (rcx_20 != 0)
                rcx_20[1].d += 1
            
            void*** var_1a0
            void var_138
            void**** rax_18 = sub_140b9e470(&var_1a0, arg2, sub_140a96170(&var_138))
            void*** var_220 = *rax_18
            int64_t* rcx_24 = rax_18[1]
            
            if (rcx_24 != 0)
                rcx_24[1].d += 1
            
            void*** var_1b0
            void var_150
            void**** rax_20 = sub_140a005b0(&var_1b0, 
                _vfprintf_p_l(&var_150, GetScalarParameterValue called on", KismetMaterialLibrary"))
            void*** var_230 = *rax_20
            int64_t* rcx_28 = rax_20[1]
            
            if (rcx_28 != 0)
                rcx_28[1].d += 1
            
            void var_23c
            sub_140b58170(&var_23c, "PIE", 1)
            void var_168
            int64_t* rax_21 = sub_140a96170(&var_168)
            void var_1f0
            void var_1e0
            void var_1d0
            void var_1c0
            void var_e0
            sub_140aced10(
                *sub_140aced10(
                    *sub_140aced10(
                        *sub_140ae44d0(sub_140accdf0(&var_e0, &var_23c), &var_1c0, rax_21), 
                        &var_1d0, &var_230), 
                    &var_1e0, &var_220), 
                &var_1f0, &var_210)
            int64_t* var_1e8
            
            if (var_1e8 != 0)
                var_1e8[1].d -= 1
                
                if (var_1e8[1].d == 1)
                    (**var_1e8)(var_1e8)
                    int32_t temp3_1 = *(var_1e8 + 0xc)
                    *(var_1e8 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_1e8 + 8))(var_1e8, 1)
            
            int64_t* var_1d8
            
            if (var_1d8 != 0)
                var_1d8[1].d -= 1
                
                if (var_1d8[1].d == 1)
                    (**var_1d8)(var_1d8)
                    int32_t temp5_1 = *(var_1d8 + 0xc)
                    *(var_1d8 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_1d8 + 8))(var_1d8, 1)
            
            int64_t* var_1c8
            
            if (var_1c8 != 0)
                var_1c8[1].d -= 1
                
                if (var_1c8[1].d == 1)
                    (**var_1c8)(var_1c8)
                    int32_t temp7_1 = *(var_1c8 + 0xc)
                    *(var_1c8 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*var_1c8 + 8))(var_1c8, 1)
            
            int64_t* var_1b8
            
            if (var_1b8 != 0)
                var_1b8[1].d -= 1
                
                if (var_1b8[1].d == 1)
                    (**var_1b8)(var_1b8)
                    int32_t temp8_1 = *(var_1b8 + 0xc)
                    *(var_1b8 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*var_1b8 + 8))(var_1b8, 1)
            
            sub_140acd9c0(&var_e0)
            int64_t* var_160
            
            if (var_160 != 0)
                var_160[1].d -= 1
                
                if (var_160[1].d == 1)
                    (**var_160)(var_160)
                    int32_t rax_36 = *(var_160 + 0xc)
                    *(var_160 + 0xc) -= 1
                    
                    if (rax_36 == 1)
                        (*(*var_160 + 8))(var_160, 1)
            
            if (rcx_28 != 0)
                rcx_28[1].d -= 1
                
                if (rcx_28[1].d == 1)
                    (**rcx_28)(rcx_28)
                    int32_t temp11_1 = *(rcx_28 + 0xc)
                    *(rcx_28 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rcx_28 + 8))(rcx_28, 1)
            
            int64_t* var_1a8
            
            if (var_1a8 != 0)
                var_1a8[1].d -= 1
                
                if (var_1a8[1].d == 1)
                    (**var_1a8)(var_1a8)
                    int32_t temp12_1 = *(var_1a8 + 0xc)
                    *(var_1a8 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*var_1a8 + 8))(var_1a8, 1)
            
            int64_t* var_148
            
            if (var_148 != 0)
                var_148[1].d -= 1
                
                if (var_148[1].d == 1)
                    (**var_148)(var_148)
                    int32_t rax_44 = *(var_148 + 0xc)
                    *(var_148 + 0xc) -= 1
                    
                    if (rax_44 == 1)
                        (*(*var_148 + 8))(var_148, 1)
            
            if (rcx_24 != 0)
                rcx_24[1].d -= 1
                
                if (rcx_24[1].d == 1)
                    (**rcx_24)(rcx_24)
                    int32_t temp15_1 = *(rcx_24 + 0xc)
                    *(rcx_24 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rcx_24 + 8))(rcx_24, 1)
            
            int64_t* var_198
            
            if (var_198 != 0)
                var_198[1].d -= 1
                
                if (var_198[1].d == 1)
                    (**var_198)(var_198)
                    int32_t temp16_1 = *(var_198 + 0xc)
                    *(var_198 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*var_198 + 8))(var_198, 1)
            
            int64_t* var_130
            
            if (var_130 != 0)
                var_130[1].d -= 1
                
                if (var_130[1].d == 1)
                    (**var_130)(var_130)
                    int32_t rax_52 = *(var_130 + 0xc)
                    *(var_130 + 0xc) -= 1
                    
                    if (rax_52 == 1)
                        (*(*var_130 + 8))(var_130, 1)
            
            if (rcx_20 != 0)
                rcx_20[1].d -= 1
                
                if (rcx_20[1].d == 1)
                    (**rcx_20)(rcx_20)
                    int32_t temp19_1 = *(rcx_20 + 0xc)
                    *(rcx_20 + 0xc) -= 1
                    
                    if (temp19_1 == 1)
                        (*(*rcx_20 + 8))(rcx_20, 1)
            
            int64_t* var_188
            
            if (var_188 != 0)
                var_188[1].d -= 1
                
                if (var_188[1].d == 1)
                    (**var_188)(var_188)
                    int32_t temp20_1 = *(var_188 + 0xc)
                    *(var_188 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*var_188 + 8))(var_188, 1)
            
            int64_t* var_118
            
            if (var_118 != 0)
                var_118[1].d -= 1
                
                if (var_118[1].d == 1)
                    (**var_118)(var_118)
                    int32_t rax_60 = *(var_118 + 0xc)
                    *(var_118 + 0xc) -= 1
                    
                    if (rax_60 == 1)
                        (*(*var_118 + 8))(var_118, 1)
            
            int64_t* var_100
            
            if (var_100 != 0)
                var_100[1].d -= 1
                
                if (var_100[1].d == 1)
                    (**var_100)(var_100)
                    int32_t rdi_1 = *(var_100 + 0xc)
                    *(var_100 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        (*(*var_100 + 8))(var_100, zx.q(rdi_1))
            
            int32_t var_70_2 = 0
            *(rax_1 + 0x28) = 1
            
            if (var_78_1 != 0)
                sub_140a74f90(var_78_1)
            
            result, zmm0_2 = sub_140acd610(&var_b8)
        
        zmm0_2.o = var_258

__security_check_cookie(result_1 ^ &var_278)
return result
