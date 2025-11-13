// 函数: sub_141da9e50
// 地址: 0x141da9e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
char result
void** const var_38

if ((*(*arg1 + 0x48))(arg1, zx.q(arg4)) != 0)
    int64_t* rcx_2
    
    if (arg1[0x57].d != 0)
        rcx_2 = arg1[0x56]
    
    if (arg1[0x57].d != 0 && rcx_2 != 0)
        if ((*(*rcx_2 + 0x28))(rcx_2) != 0 || arg1[0x58].d != 0xffffffff
                || *(arg1 + 0x2c4) != 0xffffffff || arg1[0x46].d s<= 1)
            goto label_141daa1f8
        
        goto label_141da9f40
    
    if (arg1[0x58].d != 0xffffffff || *(arg1 + 0x2c4) != 0xffffffff || arg1[0x46].d s<= 1)
    label_141daa1f8:
        int64_t* rbx_5 = nullptr
        int64_t var_30_2 = 6
        result = -0x78
        int64_t var_28_2 = -1
        var_38 = &data_142fc8f88
        int32_t var_20_2 = 0xfffffffe
        int32_t var_1c_2 = 0xfffffffe
        
        if (arg3[1].d != 0)
            int64_t* rcx_28 = *arg3
            
            if (rcx_28 != 0)
                result = (*(*rcx_28 + 0x28))(rcx_28)
                
                if (result != 0)
                    if (arg3[1].d != 0)
                        rbx_5 = *arg3
                    
                    return (*(*rbx_5 + 0x50))(rbx_5, &var_38)
    else
    label_141da9f40:
        void*** var_58
        
        if (r14.d == 0xffffffff)
            sub_1407473e0(&arg1[0x56], arg3)
            (*(*arg1 + 0x70))(arg1, 0, zx.q(arg1[0x59].d))
            arg1[0x48] = 0
            void*** rax_7 = j_sub_140a82f30(0x38)
            void*** rdi_1 = rax_7
            
            if (rax_7 == 0)
                rdi_1 = nullptr
            else
                var_38.o = zx.o(0)
                sub_141da5520(rax_7, 0xd, &var_38)
                *rdi_1 = &data_143239de0
            
            var_58 = rdi_1
            void*** rax_8 = j_sub_140a82f30(0x18)
            
            if (rax_8 == 0)
                rax_8 = nullptr
            else
                rax_8[1].d = 1
                *rax_8 = &data_142d42ea8
                *(rax_8 + 0xc) = 1
                rax_8[2] = rdi_1
            
            void*** var_50_1 = rax_8
            return sub_141da6460(arg1, &var_58)
        
        if (r14.d s< 0 || r14.d s>= arg1[0x5c].d)
            goto label_141daa1f8
        
        int64_t* rax_9 = sub_141802500()
        int64_t r8_3 = *rax_9
        int64_t* var_48
        (*(r8_3 + 0x40))(rax_9, &var_48, r8_3)
        var_58 = nullptr
        int32_t var_50_2 = 0
        sub_1405947f0(&var_58, 4)
        int32_t rax_10 = var_50_2 + 4
        var_50_2 = rax_10
        
        if (rax_10 s> 0)
            sub_140594770(&var_58)
        
        UnDecorator::getReferenceType(var_58, &data_142d85f90, 8)
        int64_t* rcx_11 = var_48
        (*(*rcx_11 + 0x48))(rcx_11, &var_58)
        void*** rcx_12 = var_58
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        void* rax_12 = arg1[0x5b]
        int16_t* const r8_4 = &data_142d40450
        void** rax_15
        void* (* r8_5)(int64_t* arg1, int64_t* arg2, int64_t* arg3, char arg4)
        
        if (arg4 != 1)
            int64_t* rbx_3 = var_48
            int64_t rcx_18 = r14 << 6
            
            if (*(rcx_18 + rax_12 + 0x10) != 0)
                *(rcx_18 + rax_12 + 8)
            
            if (arg1[0x46].d != 0)
                r8_4 = arg1[0x45]
            
            sub_140a2e390(&var_58, u"%sevent/%s", r8_4)
            (*(*rbx_3 + 0x50))(rbx_3, &var_58)
            void*** rcx_21 = var_58
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            int64_t* rcx_22 = var_48
            rax_15 = (*(*rcx_22 + 0x90))(rcx_22)
            r8_5 = sub_141daae40
        else
            *(arg1 + 0x2c4) = 0
            int64_t* rbx_2 = var_48
            
            if (*(rax_12 + 0x10) != 0)
                *(rax_12 + 8)
            
            if (arg1[0x46].d != 0)
                r8_4 = arg1[0x45]
            
            sub_140a2e390(&var_58, u"%sevent/%s", r8_4)
            (*(*rbx_2 + 0x50))(rbx_2, &var_58)
            void*** rcx_15 = var_58
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            int64_t* rcx_16 = var_48
            rax_15 = (*(*rcx_16 + 0x90))(rcx_16)
            r8_5 = sub_141daa4f0
        
        sub_141da4560(rax_15, arg1, r8_5)
        sub_1407473e0(&arg1[0x56], arg3)
        uint128_t zmm0_1 = var_48.o
        var_38.o = zmm0_1
        void* rax_18 = _mm_bsrli_si128(zmm0_1, 8).q
        arg1[0x58].d = r14.d
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        result = sub_141da6730(arg1, 0xb, &var_38, 0, 0)
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                result = (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*var_40 + 8))(var_40, 1)
else
    int64_t* rbx_1 = nullptr
    int64_t var_30_1 = 6
    result = -0x78
    int64_t var_28_1 = -1
    var_38 = &data_142fc8f88
    int32_t var_20_1 = 0xfffffffe
    int32_t var_1c_1 = 0xfffffffe
    
    if (arg3[1].d != 0)
        int64_t* rcx = *arg3
        
        if (rcx != 0)
            result = (*(*rcx + 0x28))(rcx)
            
            if (result != 0)
                if (arg3[1].d != 0)
                    rbx_1 = *arg3
                
                return (*(*rbx_1 + 0x50))(rbx_1, &var_38)
return result
