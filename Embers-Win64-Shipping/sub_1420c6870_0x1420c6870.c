// 函数: sub_1420c6870
// 地址: 0x1420c6870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
*arg1 = data_14399f5e0
void* rax_2

if (arg3 != 0)
    rax_2 = sub_1423de540(data_143f5b298, arg2, 1)

int128_t* result

if (arg3 == 0 || rax_2 == 0)
    result = arg1
else
    void* rax_3 = sub_142437350(rax_2, arg3)
    char rax_4 = sub_14214b320(rax_3, arg_20, arg1)
    
    if (rax_4 == 0 && *(rax_3 + 0x28) == rax_4)
        int32_t var_9c_1 = 0x80
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x2c)
        int32_t var_94_1 = 0
        int64_t var_88_1 = 0
        int32_t var_80_1 = 0
        int32_t var_98_1 = 0xffffffff
        void var_198
        int64_t* rax_5 = sub_140aae2b0(&var_198, &arg_20)
        int32_t var_78 = 4
        int64_t var_68_1 = *rax_5
        int64_t* rax_7 = rax_5[1]
        
        if (rax_7 != 0)
            rax_7[1].d += 1
        
        int32_t var_58_1 = rax_5[2].d
        char var_50_1 = 1
        int64_t var_268 = 0
        int32_t var_260_1 = 0
        sub_1405947f0(&var_268, 0xa)
        int32_t rax_9 = var_260_1 + 0xa
        var_260_1 = rax_9
        
        if (rax_9 s> 0)
            sub_140594770(&var_268)
        
        UnDecorator::getReferenceType(var_268, u"ParamName", 0x14)
        int64_t* var_218 = &var_268
        int32_t* var_210_1 = &var_78
        void var_258
        sub_140b91dc0(&var_c8, &var_258, &var_218, nullptr)
        int64_t rcx_9 = var_268
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (var_50_1 != 0)
            char var_50_2 = 0
            
            if (rax_7 != 0)
                rax_7[1].d -= 1
                
                if (rax_7[1].d == 1)
                    (**rax_7)(rax_7)
                    int32_t rax_12 = *(rax_7 + 0xc)
                    *(rax_7 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*(*rax_7 + 8))(rax_7, 1)
        
        int64_t* var_190
        
        if (var_190 != 0)
            var_190[1].d -= 1
            
            if (var_190[1].d == 1)
                (**var_190)(var_190)
                int32_t rax_16 = *(var_190 + 0xc)
                *(var_190 + 0xc) -= 1
                
                if (rax_16 == 1)
                    (*(*var_190 + 8))(var_190, 1)
        
        void*** var_1a8
        void var_138
        void var_120
        char* var_108
        void**** rax_21 = sub_140a005b0(&var_1a8, 
            sub_140aaca20(&var_138, 
                sub_140a96390(&var_108, 
                    _vfprintf_p_l(&var_120, 
                        with invalid ParameterName '{ParamName}'. This is likely due to a Blueprint error.", 
                    KismetMaterialLibrary")), &var_c8))
        void*** var_228 = *rax_21
        int64_t* rax_23 = rax_21[1]
        
        if (rax_23 != 0)
            rax_23[1].d += 1
        
        void*** var_1b8
        void var_150
        void**** rax_25 = sub_140b9e470(&var_1b8, arg3, sub_140a96170(&var_150))
        void*** var_238 = *rax_25
        int64_t* rax_27 = rax_25[1]
        
        if (rax_27 != 0)
            rax_27[1].d += 1
        
        void*** var_1c8
        void var_168
        void**** rax_29 = sub_140a005b0(&var_1c8, 
            _vfprintf_p_l(&var_168, GetVectorParameterValue called on", KismetMaterialLibrary"))
        void*** var_248 = *rax_29
        int64_t* rax_31 = rax_29[1]
        
        if (rax_31 != 0)
            rax_31[1].d += 1
        
        void var_254
        sub_140b58170(&var_254, "PIE", 1)
        void var_180
        int64_t* rax_32 = sub_140a96170(&var_180)
        void var_208
        void var_1f8
        void var_1e8
        void var_1d8
        void var_f8
        sub_140aced10(
            *sub_140aced10(
                *sub_140aced10(*sub_140ae44d0(sub_140accdf0(&var_f8, &var_254), &var_1d8, rax_32), 
                    &var_1e8, &var_248), 
                &var_1f8, &var_238), 
            &var_208, &var_228)
        int64_t* var_200
        
        if (var_200 != 0)
            var_200[1].d -= 1
            
            if (var_200[1].d == 1)
                (**var_200)(var_200)
                int32_t temp3_1 = *(var_200 + 0xc)
                *(var_200 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_200 + 8))(var_200, 1)
        
        int64_t* var_1f0
        
        if (var_1f0 != 0)
            var_1f0[1].d -= 1
            
            if (var_1f0[1].d == 1)
                (**var_1f0)(var_1f0)
                int32_t temp5_1 = *(var_1f0 + 0xc)
                *(var_1f0 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_1f0 + 8))(var_1f0, 1)
        
        int64_t* var_1e0
        
        if (var_1e0 != 0)
            var_1e0[1].d -= 1
            
            if (var_1e0[1].d == 1)
                (**var_1e0)(var_1e0)
                int32_t temp7_1 = *(var_1e0 + 0xc)
                *(var_1e0 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_1e0 + 8))(var_1e0, 1)
        
        int64_t* var_1d0
        
        if (var_1d0 != 0)
            var_1d0[1].d -= 1
            
            if (var_1d0[1].d == 1)
                (**var_1d0)(var_1d0)
                int32_t temp8_1 = *(var_1d0 + 0xc)
                *(var_1d0 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_1d0 + 8))(var_1d0, 1)
        
        sub_140acd9c0(&var_f8)
        int64_t* var_178
        
        if (var_178 != 0)
            var_178[1].d -= 1
            
            if (var_178[1].d == 1)
                (**var_178)(var_178)
                int32_t rax_47 = *(var_178 + 0xc)
                *(var_178 + 0xc) -= 1
                
                if (rax_47 == 1)
                    (*(*var_178 + 8))(var_178, 1)
        
        if (rax_31 != 0)
            rax_31[1].d -= 1
            
            if (rax_31[1].d == 1)
                (**rax_31)(rax_31)
                int32_t temp11_1 = *(rax_31 + 0xc)
                *(rax_31 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rax_31 + 8))(rax_31, 1)
        
        int64_t* var_1c0
        
        if (var_1c0 != 0)
            var_1c0[1].d -= 1
            
            if (var_1c0[1].d == 1)
                (**var_1c0)(var_1c0)
                int32_t temp12_1 = *(var_1c0 + 0xc)
                *(var_1c0 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_1c0 + 8))(var_1c0, 1)
        
        int64_t* var_160
        
        if (var_160 != 0)
            var_160[1].d -= 1
            
            if (var_160[1].d == 1)
                (**var_160)(var_160)
                int32_t rax_55 = *(var_160 + 0xc)
                *(var_160 + 0xc) -= 1
                
                if (rax_55 == 1)
                    (*(*var_160 + 8))(var_160, 1)
        
        if (rax_27 != 0)
            rax_27[1].d -= 1
            
            if (rax_27[1].d == 1)
                (**rax_27)(rax_27)
                int32_t temp15_1 = *(rax_27 + 0xc)
                *(rax_27 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rax_27 + 8))(rax_27, 1)
        
        int64_t* var_1b0
        
        if (var_1b0 != 0)
            var_1b0[1].d -= 1
            
            if (var_1b0[1].d == 1)
                (**var_1b0)(var_1b0)
                int32_t temp16_1 = *(var_1b0 + 0xc)
                *(var_1b0 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_1b0 + 8))(var_1b0, 1)
        
        int64_t* var_148
        
        if (var_148 != 0)
            var_148[1].d -= 1
            
            if (var_148[1].d == 1)
                (**var_148)(var_148)
                int32_t rax_63 = *(var_148 + 0xc)
                *(var_148 + 0xc) -= 1
                
                if (rax_63 == 1)
                    (*(*var_148 + 8))(var_148, 1)
        
        if (rax_23 != 0)
            rax_23[1].d -= 1
            
            if (rax_23[1].d == 1)
                (**rax_23)(rax_23)
                int32_t temp19_1 = *(rax_23 + 0xc)
                *(rax_23 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rax_23 + 8))(rax_23, 1)
        
        int64_t* var_1a0
        
        if (var_1a0 != 0)
            var_1a0[1].d -= 1
            
            if (var_1a0[1].d == 1)
                (**var_1a0)(var_1a0)
                int32_t temp20_1 = *(var_1a0 + 0xc)
                *(var_1a0 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_1a0 + 8))(var_1a0, 1)
        
        int64_t* var_130
        
        if (var_130 != 0)
            var_130[1].d -= 1
            
            if (var_130[1].d == 1)
                (**var_130)(var_130)
                int32_t rax_71 = *(var_130 + 0xc)
                *(var_130 + 0xc) -= 1
                
                if (rax_71 == 1)
                    (*(*var_130 + 8))(var_130, 1)
        
        int64_t* var_118
        
        if (var_118 != 0)
            var_118[1].d -= 1
            
            if (var_118[1].d == 1)
                (**var_118)(var_118)
                int32_t rdi_1 = *(var_118 + 0xc)
                *(var_118 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_118 + 8))(var_118, zx.q(rdi_1))
        
        int32_t var_80_2 = 0
        *(rax_3 + 0x28) = 1
        
        if (var_88_1 != 0)
            sub_140a74f90(var_88_1)
        
        sub_140acd610(&var_c8)
    
    result = arg1

__security_check_cookie(rax_1 ^ &var_288)
return result
