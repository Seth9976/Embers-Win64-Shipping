// 函数: sub_140d33bd0
// 地址: 0x140d33bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* rax_2 = *(arg2 + 0x20)
int64_t* rbx = *rax_2
*(arg2 + 0x20) = &rax_2[1]
*(arg2 + 0x30) = rbx
int64_t var_1f8

if (rbx == 0)
label_140d33cb3:
    var_1f8 = 0
    int32_t var_1f0_1 = 0
    sub_1405947f0(&var_1f8, 5)
    int32_t rax_11 = var_1f0_1 + 5
    var_1f0_1 = rax_11
    
    if (rax_11 s> 0)
        sub_140594770(&var_1f8)
    
    UnDecorator::getReferenceType(var_1f8, u"None", 0xa)
    goto label_140d33d10

uint64_t result

if ((*(*arg1 + 0x148))() == 0)
    void* const rax_9
    
    if (sub_140cc16a0(&rbx[2], sub_140bdf2e0()) == 0)
        rax_9 = nullptr
    else
        rax_9 = rbx[2]
    
    if (rax_9 == 0)
        goto label_140d33cb3
    
    int64_t var_1d0 = *(rax_9 + 0x18)
    sub_140b63b70(&var_1d0, &var_1f8)
label_140d33d10:
    void* rax_13 = (*(*arg1 + 0x148))(arg1)
    uint64_t var_208
    
    if (rax_13 != 0)
        int64_t var_1c8 = *(rax_13 + 0x18)
        sub_140b63b70(&var_1c8, &var_208)
    else
        var_208 = 0
        int32_t var_200_1 = 0
        sub_1405947f0(&var_208, (rax_13 + 5).d)
        int32_t rax_14 = var_200_1 + 5
        var_200_1 = rax_14
        
        if (rax_14 s> 0)
            sub_140594770(&var_208)
        
        UnDecorator::getReferenceType(var_208, u"None", 0xa)
    
    int64_t var_218
    
    if (rbx == 0)
        var_218 = 0
        int32_t var_210_1 = 0
        sub_1405947f0(&var_218, 5)
        int32_t rax_16 = var_210_1 + 5
        var_210_1 = rax_16
        
        if (rax_16 s> 0)
            sub_140594770(&var_218)
        
        UnDecorator::getReferenceType(var_218, u"none", 0xa)
    else
        sub_140b63b70(&rbx[5], &var_218)
    
    void var_128
    int64_t* rax_17 = sub_140aae2f0(&var_128, &var_1f8)
    void var_110
    int64_t* rax_18 = sub_140aae2f0(&var_110, &var_208)
    void var_f8
    int64_t* rax_19 = sub_140aae2f0(&var_f8, &var_218)
    void var_150
    char* var_138
    char** rax_21 = sub_140a96390(&var_138, 
        _vfprintf_p_l(&var_150, 
            Attempted to access missing sparse property '{0}' {1}, {2}. If this is a packaged/cooked build, "
    "are you attempting to use an editor-only proper", 
        ScriptCore"))
    int64_t var_c8_1 = *rax_19
    void* rcx_22 = rax_19[1]
    int32_t var_d8_1 = 4
    void* var_c0_1 = rcx_22
    
    if (rcx_22 != 0)
        *(rcx_22 + 8) += 1
    
    int32_t var_b8_1 = rax_19[2].d
    int64_t var_98_1 = *rax_18
    void* rax_24 = rax_18[1]
    char var_b0_1 = 1
    int32_t var_a8_1 = 4
    void* var_90_1 = rax_24
    
    if (rax_24 != 0)
        *(rax_24 + 8) += 1
    
    int32_t var_88_1 = rax_18[2].d
    int64_t var_68_1 = *rax_17
    void* rax_27 = rax_17[1]
    char var_80_1 = 1
    int32_t var_78_1 = 4
    void* var_60_1 = rax_27
    
    if (rax_27 != 0)
        *(rax_27 + 8) += 1
    
    int32_t var_58_1 = rax_17[2].d
    char var_50_1 = 1
    void* var_1e0 = nullptr
    int32_t var_1d8_1 = 3
    sub_1405a4b40(&var_1e0, 3, 0)
    void var_d0
    void* rdx_13 = &var_d0
    int64_t* rcx_25 = var_1e0 + 8
    int32_t i_2 = 3
    int32_t i
    
    do
        rcx_25[-1].d = *(rdx_13 - 8)
        *rcx_25 = *rdx_13
        *rcx_25 = *rdx_13
        *rcx_25 = *rdx_13
        *rcx_25 = *rdx_13
        rcx_25[4].b = 0
        
        if (*(rdx_13 + 0x20) != 0)
            rcx_25[1] = *(rdx_13 + 8)
            void* rax_35 = *(rdx_13 + 0x10)
            rcx_25[2] = rax_35
            
            if (rax_35 != 0)
                *(rax_35 + 8) += 1
            
            rcx_25[3].d = *(rdx_13 + 0x18)
            rcx_25[4].b = 1
        
        rcx_25 = &rcx_25[6]
        rdx_13 += 0x30
        i = i_2
        i_2 -= 1
    while (i != 1)
    char* var_198 = *rax_21
    void* rax_38 = rax_21[1]
    void* var_190_1 = rax_38
    
    if (rax_38 != 0)
        *(rax_38 + 8) += 1
    
    void var_168
    int64_t* rax_39 = sub_140aac870(&var_168, &var_198, &var_1e0)
    int64_t* r14_1 = rax_39[1]
    int64_t rcx_27 = *rax_39
    
    if (r14_1 != 0)
        r14_1[1].d += 1
    
    int32_t rax_40 = rax_39[2].d
    int64_t* var_160
    
    if (var_160 != 0)
        var_160[1].d -= 1
        
        if (var_160[1].d == 1)
            (**var_160)(var_160)
            int32_t rax_43 = *(var_160 + 0xc)
            *(var_160 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*var_160 + 8))(var_160, 1)
    
    sub_140596f50(&var_1e0)
    int64_t i_1 = 3
    int64_t __saved_rdi
    int64_t* rsi_2 = &__saved_rdi
    
    do
        i_1 -= 1
        rsi_2 = &rsi_2[-6]
        
        if (*rsi_2 != 0)
            *rsi_2 = 0
            int64_t* rbx_3 = rsi_2[-2]
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_47 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_47 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
    while (i_1 != 0)
    
    int64_t* rbx_5 = rax_21[1]
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_51 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_51 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* rbx_7 = rax_19[1]
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t rax_55 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (rax_55 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* rbx_8 = rax_18[1]
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t rax_59 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (rax_59 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* rbx_10 = rax_17[1]
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            (**rbx_10)(rbx_10)
            int32_t rax_63 = *(rbx_10 + 0xc)
            *(rbx_10 + 0xc) -= 1
            
            if (rax_63 == 1)
                (*(*rbx_10 + 8))(rbx_10, 1)
    
    int64_t var_180_1 = rcx_27
    int32_t var_188 = 3
    
    if (r14_1 != 0)
        r14_1[1].d += 1
    
    int32_t var_170_1 = rax_40
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t rax_69 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (rax_69 == 1)
                (*(*r14_1 + 8))(r14_1, 1)
    
    int64_t* var_148
    
    if (var_148 != 0)
        var_148[1].d -= 1
        
        if (var_148[1].d == 1)
            (**var_148)(var_148)
            int32_t rax_73 = *(var_148 + 0xc)
            *(var_148 + 0xc) -= 1
            
            if (rax_73 == 1)
                (*(*var_148 + 8))(var_148, 1)
    
    int64_t rcx_45 = var_218
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    uint64_t rcx_46 = var_208
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    int64_t rcx_47 = var_1f8
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    result = sub_140d30680(arg1, arg2, &var_188)
    *(arg2 + 0x38) = 0
    
    if (r14_1 != 0)
        result = zx.q(r14_1[1].d)
        r14_1[1].d -= 1
        
        if (result.d == 1)
            result = (**r14_1)(r14_1)
            int32_t rdi_2 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*r14_1 + 8))(r14_1, zx.q(rdi_2))
else
    int64_t* rcx = arg1[2]
    result = rcx[0x24]
    
    if (result == 0)
        result = sub_140bda730(rcx)
    
    *(arg2 + 0x38) = sx.q(*(rbx + 0x4c)) + result
    
    if (arg3 != 0)
        result = (*(*rbx + 0xc8))(rbx, arg3)

__security_check_cookie(rax_1 ^ &var_238)
return result
