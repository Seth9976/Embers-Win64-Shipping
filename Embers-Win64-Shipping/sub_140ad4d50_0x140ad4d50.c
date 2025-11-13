// 函数: sub_140ad4d50
// 地址: 0x140ad4d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t var_228 = arg6
uint64_t result = arg2
int64_t* var_220 = arg3
int128_t var_208 = *sub_1405e25d0(arg3)
int128_t var_1f8 = *sub_1405e25d0(arg4)
int128_t zmm0 = *sub_1405e25d0(arg5)
void* const r8_3

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
label_140ad4ed2:
    r8_3 = nullptr
else
    int32_t rax_6 = sub_140ad88a0(&var_208)
    void* r8 = arg1 + 0xd8
    void* rcx_5 = *(r8 + 8)
    arg2 = (sx.q(*(arg1 + 0xe8)) - 1) & sx.q(rax_6)
    
    if (rcx_5 != 0)
        r8 = rcx_5
    
    int32_t rax_8 = *(r8 + (arg2 << 2))
    
    if (rax_8 == 0xffffffff)
    label_140ad4ed2_1:
        r8_3 = nullptr
    else
        while (true)
            r8_3 = (sx.q(rax_8) << 7) + *(arg1 + 0xa0)
            arg2 = (zx.q(*(r8_3 + 4)) ^ zx.q(var_208:4.d)) | (zx.q(*(r8_3 + 8)) ^ zx.q(var_208:8.d))
                | (zx.q(*(r8_3 + 0xc)) ^ zx.q(var_208:0xc.d)) | (zx.q(var_208.d) ^ zx.q(*r8_3))
            
            if (arg2.d == 0)
                arg2 = (zx.q(*(r8_3 + 0x14)) ^ zx.q(var_1f8:4.d))
                    | (zx.q(*(r8_3 + 0x18)) ^ zx.q(var_1f8:8.d))
                    | (zx.q(*(r8_3 + 0x1c)) ^ zx.q(var_1f8:0xc.d))
                    | (zx.q(var_1f8.d) ^ zx.q(*(r8_3 + 0x10)))
                
                if (arg2.d == 0)
                    arg2 = (zx.q(*(r8_3 + 0x24)) ^ zx.q(zmm0:4.d))
                        | (zx.q(*(r8_3 + 0x28)) ^ zx.q(zmm0:8.d))
                        | (zx.q(*(r8_3 + 0x2c)) ^ zx.q(zmm0:0xc.d))
                        | (zx.q(*(r8_3 + 0x20)) ^ zx.q(zmm0.d))
                    
                    if (arg2.d == 0)
                        break
            
            rax_8 = *(r8_3 + 0x70)
            
            if (rax_8 == 0xffffffff)
                goto label_140ad4ed2_2
        
        if (rax_8 == 0xffffffff)
        label_140ad4ed2_2:
            r8_3 = nullptr

void* rbx_2 = r8_3 + 0x30

if (r8_3 == 0)
    rbx_2 = nullptr

if (rbx_2 == 0)
    int64_t* rbx_4 = var_220
    int32_t rdx_19 = 0
    int32_t rcx_31 = 0
    int64_t var_268 = 0
    int32_t var_260_1 = 0
    int64_t var_258 = 0
    int16_t* rdi_3 = rbx_4[8]
    int32_t var_250_1 = 0
    int32_t rbx_7 = ((rbx_4[9] - rdi_3) s>> 1).d
    int32_t var_24c_1 = 0
    
    if (rdi_3 != 0 && *rdi_3 != 0 && rbx_7 s> 0)
        if (rbx_7 + 1 s> 0)
            sub_1405947f0(&var_258, rbx_7 + 1)
            rcx_31 = var_24c_1
            rdx_19 = var_250_1
        
        int32_t rax_19 = rbx_7 + 1 + rdx_19
        
        if (rax_19 s> rcx_31)
            sub_140594770(&var_258)
        
        UnDecorator::getReferenceType(var_258, rdi_3, rbx_7 * 2)
        *(var_258 + (sx.q(rax_19) << 1) - 2) = 0
    
    void var_1d8
    int64_t* rax_21 = sub_140aae2f0(&var_1d8, &var_258)
    int64_t* rdi_4 = rax_21[1]
    int64_t r15_2 = *rax_21
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    int64_t rbx_8 = sx.q(var_260_1)
    int32_t rsi_2 = rax_21[2].d
    int32_t rax_22 = (rbx_8 + 1).d
    
    if (rax_22 s> 0)
        sub_1405c4f50(&var_268)
    
    int32_t* rcx_40 = rbx_8 * 0x30 + var_268
    int64_t var_e0
    *(rcx_40 + 8) = var_e0
    *rcx_40 = 4
    rcx_40[0xa].b = 0
    *(rcx_40 + 0x10) = r15_2
    *(rcx_40 + 0x18) = rdi_4
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    rcx_40[8] = rsi_2
    rcx_40[0xa].b = 1
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_25 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_25 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t* var_1d0
    
    if (var_1d0 != 0)
        var_1d0[1].d -= 1
        
        if (var_1d0[1].d == 1)
            (**var_1d0)(var_1d0)
            int32_t rax_29 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (rax_29 == 1)
                (*(*var_1d0 + 8))(var_1d0, 1)
    
    int64_t rcx_45 = var_258
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    int32_t rdx_24 = 0
    int32_t rcx_46 = 0
    int64_t var_248 = 0
    int32_t var_240_1 = 0
    int32_t var_23c_1 = 0
    int16_t* rsi_3 = *(arg4 + 0x40)
    int32_t rdi_9 = ((*(arg4 + 0x48) - rsi_3) s>> 1).d
    
    if (rsi_3 != 0 && *rsi_3 != 0 && rdi_9 s> 0)
        if (rdi_9 + 1 s> 0)
            sub_1405947f0(&var_248, rdi_9 + 1)
            rcx_46 = var_23c_1
            rdx_24 = var_240_1
        
        int32_t rax_33 = rdi_9 + 1 + rdx_24
        
        if (rax_33 s> rcx_46)
            sub_140594770(&var_248)
        
        UnDecorator::getReferenceType(var_248, rsi_3, rdi_9 * 2)
        *(var_248 + (sx.q(rax_33) << 1) - 2) = 0
    
    void var_1c0
    int64_t* rax_35 = sub_140aae2f0(&var_1c0, &var_248)
    int64_t* rdi_10 = rax_35[1]
    int64_t r12_2 = *rax_35
    
    if (rdi_10 != 0)
        rdi_10[1].d += 1
    
    int64_t rsi_4 = sx.q(rax_22)
    int32_t r15_3 = rax_35[2].d
    int32_t rax_36 = (rsi_4 + 1).d
    
    if (rax_36 s> 0)
        sub_1405c4f50(&var_268)
    
    int32_t* rcx_55 = rsi_4 * 0x30 + var_268
    int64_t var_b0
    *(rcx_55 + 8) = var_b0
    *rcx_55 = 4
    rcx_55[0xa].b = 0
    *(rcx_55 + 0x10) = r12_2
    *(rcx_55 + 0x18) = rdi_10
    
    if (rdi_10 != 0)
        rdi_10[1].d += 1
    
    rcx_55[8] = r15_3
    rcx_55[0xa].b = 1
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d == 1)
            (**rdi_10)(rdi_10)
            int32_t rax_39 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rdi_10 + 8))(rdi_10, 1)
    
    int64_t* var_1b8
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t rax_43 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*var_1b8 + 8))(var_1b8, 1)
    
    int64_t rcx_60 = var_248
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    int32_t rdx_29 = 0
    int32_t rcx_61 = 0
    int64_t var_238 = 0
    int32_t var_230_1 = 0
    int32_t var_22c_1 = 0
    int16_t* rsi_5 = *(arg5 + 0x40)
    int32_t rdi_15 = ((*(arg5 + 0x48) - rsi_5) s>> 1).d
    
    if (rsi_5 != 0 && *rsi_5 != 0 && rdi_15 s> 0)
        if (rdi_15 + 1 s> 0)
            sub_1405947f0(&var_238, rdi_15 + 1)
            rcx_61 = var_22c_1
            rdx_29 = var_230_1
        
        int32_t rax_47 = rdi_15 + 1 + rdx_29
        
        if (rax_47 s> rcx_61)
            sub_140594770(&var_238)
        
        UnDecorator::getReferenceType(var_238, rsi_5, rdi_15 * 2)
        *(var_238 + (sx.q(rax_47) << 1) - 2) = 0
    
    void var_1a8
    int64_t* rax_49 = sub_140aae2f0(&var_1a8, &var_238)
    int64_t* rdi_16 = rax_49[1]
    int64_t r12_3 = *rax_49
    
    if (rdi_16 != 0)
        rdi_16[1].d += 1
    
    int64_t rsi_6 = sx.q(rax_36)
    int32_t r15_4 = rax_49[2].d
    int32_t rax_50 = (rsi_6 + 1).d
    var_260_1 = rax_50
    
    if (rax_50 s> 0)
        sub_1405c4f50(&var_268)
    
    int32_t* rcx_70 = rsi_6 * 0x30 + var_268
    int64_t var_80
    *(rcx_70 + 8) = var_80
    *rcx_70 = 4
    rcx_70[0xa].b = 0
    *(rcx_70 + 0x10) = r12_3
    *(rcx_70 + 0x18) = rdi_16
    
    if (rdi_16 != 0)
        rdi_16[1].d += 1
    
    rcx_70[8] = r15_4
    rcx_70[0xa].b = 1
    
    if (rdi_16 != 0)
        rdi_16[1].d -= 1
        
        if (rdi_16[1].d == 1)
            (**rdi_16)(rdi_16)
            int32_t rax_53 = *(rdi_16 + 0xc)
            *(rdi_16 + 0xc) -= 1
            
            if (rax_53 == 1)
                (*(*rdi_16 + 8))(rdi_16, 1)
    
    int64_t* var_1a0
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            (**var_1a0)(var_1a0)
            int32_t rax_57 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (rax_57 == 1)
                (*(*var_1a0 + 8))(var_1a0, 1)
    
    int64_t rcx_75 = var_238
    
    if (rcx_75 != 0)
        sub_140a74f90(rcx_75)
    
    void var_190
    void var_178
    char* var_160
    var_220 = sub_140aac8f0(&var_190, 
        sub_140a96390(&var_160, 
            _vfprintf_p_l(&var_178, Binary operator {0} cannot operate on {1} and {2}", 
            ExpressionParser")), &var_268)
    sub_140aca4f0(result, &var_220)
    int64_t* var_188
    
    if (var_188 != 0)
        var_188[1].d -= 1
        
        if (var_188[1].d == 1)
            (**var_188)(var_188)
            int32_t rax_64 = *(var_188 + 0xc)
            *(var_188 + 0xc) -= 1
            
            if (rax_64 == 1)
                (*(*var_188 + 8))(var_188, 1)
    
    int64_t* var_170
    
    if (var_170 != 0)
        var_170[1].d -= 1
        
        if (var_170[1].d == 1)
            (**var_170)(var_170)
            int32_t rbx_9 = *(var_170 + 0xc)
            *(var_170 + 0xc) -= 1
            
            if (rbx_9 == 1)
                (*(*var_170 + 8))(var_170, zx.q(rbx_9))
    
    sub_140596f50(&var_268)
else
    void* rcx_24 = rbx_2 + 0x20
    var_228 = var_228
    void* rax_10 = *(rbx_2 + 0x10)
    
    if (rax_10 != 0)
        rcx_24 = rax_10
    
    void var_150
    int64_t* rax_13 = (*rbx_2)(&var_150, (*(*rcx_24 + 8))(rcx_24, arg2), arg4, arg5, &var_228)
    *(result + 0x18) = 0
    
    if (rax_13[3].b != 0)
        *result = *rax_13
        void* rcx_26 = rax_13[1]
        *(result + 8) = rcx_26
        
        if (rcx_26 != 0)
            *(rcx_26 + 8) += 1
        
        *(result + 0x10) = rax_13[2].d
        *(result + 0x18) = 1
    
    *(result + 0x60) = 0
    
    if (rax_13[0xc].b != 0)
        sub_140b0a670(result + 0x20, &rax_13[4])
        *(result + 0x60) = 1
    
    char var_f0
    
    if (var_f0 != 0)
        char var_f0_1 = 0
        void var_130
        sub_140b0bbf0(&var_130)
    
    char var_138
    
    if (var_138 != 0)
        char var_138_1 = 0
        int64_t* var_148
        
        if (var_148 != 0)
            var_148[1].d -= 1
            
            if (var_148[1].d == 1)
                int64_t rdx_17 = *var_148
                (*rdx_17)(var_148, rdx_17)
                int32_t rbx_3 = *(var_148 + 0xc)
                *(var_148 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    int64_t r8_5 = *var_148
                    (*(r8_5 + 8))(var_148, zx.q(rbx_3), r8_5)

__security_check_cookie(rax_1 ^ &var_298)
return result
