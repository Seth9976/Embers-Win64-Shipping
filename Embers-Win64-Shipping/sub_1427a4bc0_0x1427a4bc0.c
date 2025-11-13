// 函数: sub_1427a4bc0
// 地址: 0x1427a4bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t* var_260 = arg4
void var_210
int64_t* rdi_6

if (*sub_1408f1b50(&arg1[0xb], &var_210, arg2) == 0xffffffff)
    void var_e8
    int64_t* rax_3 = sub_140aae420(&var_e8, arg2)
    void var_168
    char* var_108
    char** rax_5 = sub_140a96390(&var_108, 
        _vfprintf_p_l(&var_168, 
            UInteractiveGizmoManager::CreateGizmo: could not find requested type {0}", 
        UInteractiveGizmoManager"))
    int64_t rcx_4 = *rax_3
    int64_t* rcx_5 = rax_3[1]
    int32_t var_b8_1 = 4
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
    
    int32_t rax_6 = rax_3[2].d
    char var_90_1 = 1
    var_260 = nullptr
    int32_t var_258_1 = 1
    sub_1405a4b40(&var_260, 1, 0)
    int32_t* rcx_7 = var_260
    *rcx_7 = var_b8_1
    int64_t var_b0
    *(rcx_7 + 8) = var_b0
    *(rcx_7 + 8) = var_b0
    rcx_7[2] = var_b0.d
    *(rcx_7 + 8) = var_b0
    rcx_7[0xa].b = 0
    
    if (var_90_1 != 0)
        *(rcx_7 + 0x10) = rcx_4
        *(rcx_7 + 0x18) = rcx_5
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        rcx_7[8] = rax_6
        rcx_7[0xa].b = 1
    
    char* var_1a0 = *rax_5
    void* rax_14 = rax_5[1]
    void* var_198_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    void var_180
    int64_t* rax_15 = sub_140aac870(&var_180, &var_1a0, &var_260)
    int64_t var_208 = *rax_15
    int64_t* rcx_10 = rax_15[1]
    
    if (rcx_10 != 0)
        rcx_10[1].d += 1
    
    int32_t var_1f8_1 = rax_15[2].d
    int64_t* var_178
    
    if (var_178 != 0)
        var_178[1].d -= 1
        
        if (var_178[1].d == 1)
            (**var_178)(var_178)
            int32_t rax_19 = *(var_178 + 0xc)
            *(var_178 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_178 + 8))(var_178, 1)
    
    sub_140596f50(&var_260)
    
    if (var_90_1 != 0)
        char var_90_2 = 0
        
        if (rcx_5 != 0)
            rcx_5[1].d -= 1
            
            if (rcx_5[1].d == 1)
                (**rcx_5)(rcx_5)
                int32_t rax_23 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
    
    int64_t* rdi_3 = rax_5[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rax_27 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* rdi_4 = rax_3[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_31 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    (*(*arg1 + 0x2b0))(arg1, &var_208, 0)
    
    if (rcx_10 != 0)
        rcx_10[1].d -= 1
        
        if (rcx_10[1].d == 1)
            (**rcx_10)(rcx_10)
            int32_t rax_36 = *(rcx_10 + 0xc)
            *(rcx_10 + 0xc) -= 1
            
            if (rax_36 == 1)
                (*(*rcx_10 + 8))(rcx_10, 1)
    
    int64_t* var_160
    rdi_6 = var_160
    goto label_1427a52b0

int32_t var_268
sub_1408f1b50(&arg1[0xb], &var_268, arg2)
int64_t rax_38 = sx.q(var_268)
int64_t* result_1 = nullptr
void* const rcx_26

if (rax_38.d == 0xffffffff)
    rcx_26 = nullptr
else
    rcx_26 = (rax_38 << 5) + arg1[0xb]

int64_t* r13_1 = *(rcx_26 + 0x10)
void* rbx_1
void* r14_4

if (arg3[1].d s> 1)
    rbx_1 = arg1[6]
    r14_4 = sx.q(arg1[7].d) * 0x30 + rbx_1

int64_t* result

if (arg3[1].d s<= 1 || rbx_1 == r14_4)
label_1427a4f49:
    int64_t* rcx_28 = arg1[8]
    int128_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x38)
    (*(*rcx_28 + 8))(rcx_28, &var_1d8)
    int64_t* result_2 = (*(*r13_1 + 0x260))(r13_1, &var_1d8)
    
    if (result_2 != 0)
        (*(*result_2 + 0x260))(result_2)
        int64_t* rcx_59 = arg1[0xa]
        (*(*rcx_59 + 0x270))(rcx_59, &result_2[5])
        (*(*arg1 + 0x2b8))(arg1)
        int32_t rbx_5 = arg2[1].d
        int64_t r12_3 = *arg2
        int64_t var_238 = 0
        int32_t var_230_1 = rbx_5
        
        if (rbx_5 != 0)
            sub_1405a4c70(&var_238, rbx_5, 0)
            memcpy(var_238, r12_3, rbx_5 * 2)
        else
            int32_t var_22c_1 = 0
        
        int32_t rbx_6 = arg3[1].d
        int64_t rdi_13 = *arg3
        int64_t var_228 = 0
        int32_t var_220_1 = rbx_6
        
        if (rbx_6 != 0)
            sub_1405a4c70(&var_228, rbx_6, 0)
            memcpy(var_228, rdi_13, rbx_6 * 2)
        else
            int32_t var_21c_1 = 0
        
        int64_t rbx_7 = sx.q(arg1[7].d)
        int32_t* rax_88 = var_260
        int32_t rax_89 = (rbx_7 + 1).d
        arg1[7].d = rax_89
        
        if (rax_89 s> *(arg1 + 0x3c))
            sub_1405c4f50(&arg1[6])
        
        int64_t* rbx_10 = rbx_7 * 0x30 + arg1[6]
        *rbx_10 = result_2
        sub_140596d10(&rbx_10[1], &var_238)
        sub_140596d10(&rbx_10[3], &var_228)
        int64_t rcx_68 = var_228
        result_1 = result_2
        rbx_10[5] = rax_88
        
        if (rcx_68 != 0)
            sub_140a74f90(rcx_68)
        
        int64_t rcx_69 = var_238
        
        if (rcx_69 != 0)
            sub_140a74f90(rcx_69)
    else
        void var_120
        (*(*arg1 + 0x2b0))(arg1, 
            _vfprintf_p_l(&var_120, 
                UInteractiveGizmoManager::CreateGizmo: BuildGizmo() returned null", 
            UInteractiveGizmoManager"), 0)
        int64_t* var_118
        
        if (var_118 != 0)
            var_118[1].d -= 1
            
            if (var_118[1].d == 1)
                (**var_118)(var_118)
                int32_t rbx_3 = *(var_118 + 0xc)
                *(var_118 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*var_118 + 8))(var_118, zx.q(rbx_3))
    
    int64_t var_1b0
    
    if (var_1b0 != 0)
        sub_140a74f90(var_1b0)
    
    int128_t var_1c8
    int64_t rcx_71 = var_1c8:8.q
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    result = result_1
else
    while (true)
        int16_t* rdx_6
        
        if (arg3[1].d == 0)
            rdx_6 = &data_142d40450
        else
            rdx_6 = *arg3
        
        int16_t* const rcx_27
        
        if (*(rbx_1 + 0x20) == 0)
            rcx_27 = &data_142d40450
        else
            rcx_27 = *(rbx_1 + 0x18)
        
        if (sub_140a54510(rcx_27, rdx_6) == 0)
            void var_d0
            int64_t* rax_47 = sub_140aae420(&var_d0, arg3)
            void var_138
            char* var_f8
            char** rax_49 = sub_140a96390(&var_f8, 
                _vfprintf_p_l(&var_138, 
                    UInteractiveGizmoManager::CreateGizmo: instance identifier {0} already in use!", 
                UInteractiveGizmoManager"))
            int64_t rcx_37 = *rax_47
            int64_t* rcx_38 = rax_47[1]
            int32_t var_88_1 = 4
            
            if (rcx_38 != 0)
                rcx_38[1].d += 1
            
            int32_t rax_50 = rax_47[2].d
            char var_60_1 = 1
            int32_t* var_250 = nullptr
            int32_t var_248_1 = 1
            sub_1405a4b40(&var_250, 1, 0)
            int32_t* rcx_40 = var_250
            *rcx_40 = var_88_1
            int64_t var_80
            *(rcx_40 + 8) = var_80
            *(rcx_40 + 8) = var_80
            rcx_40[2] = var_80.d
            *(rcx_40 + 8) = var_80
            rcx_40[0xa].b = 0
            
            if (var_60_1 != 0)
                *(rcx_40 + 0x10) = rcx_37
                *(rcx_40 + 0x18) = rcx_38
                
                if (rcx_38 != 0)
                    rcx_38[1].d += 1
                
                rcx_40[8] = rax_50
                rcx_40[0xa].b = 1
            
            char* var_190 = *rax_49
            void* rax_58 = rax_49[1]
            void* var_188_1 = rax_58
            
            if (rax_58 != 0)
                *(rax_58 + 8) += 1
            
            void var_150
            int64_t* rax_59 = sub_140aac870(&var_150, &var_190, &var_250)
            int64_t var_1f0 = *rax_59
            int64_t* rcx_43 = rax_59[1]
            
            if (rcx_43 != 0)
                rcx_43[1].d += 1
            
            int32_t var_1e0_1 = rax_59[2].d
            int64_t* var_148
            
            if (var_148 != 0)
                var_148[1].d -= 1
                
                if (var_148[1].d == 1)
                    (**var_148)(var_148)
                    int32_t rax_63 = *(var_148 + 0xc)
                    *(var_148 + 0xc) -= 1
                    
                    if (rax_63 == 1)
                        (*(*var_148 + 8))(var_148, 1)
            
            sub_140596f50(&var_250)
            
            if (var_60_1 != 0)
                char var_60_2 = 0
                
                if (rcx_38 != 0)
                    rcx_38[1].d -= 1
                    
                    if (rcx_38[1].d == 1)
                        (**rcx_38)(rcx_38)
                        int32_t rax_67 = *(rcx_38 + 0xc)
                        *(rcx_38 + 0xc) -= 1
                        
                        if (rax_67 == 1)
                            (*(*rcx_38 + 8))(rcx_38, 1)
            
            int64_t* rdi_10 = rax_49[1]
            
            if (rdi_10 != 0)
                rdi_10[1].d -= 1
                
                if (rdi_10[1].d == 1)
                    (**rdi_10)(rdi_10)
                    int32_t rax_71 = *(rdi_10 + 0xc)
                    *(rdi_10 + 0xc) -= 1
                    
                    if (rax_71 == 1)
                        (*(*rdi_10 + 8))(rdi_10, 1)
            
            int64_t* rdi_11 = rax_47[1]
            
            if (rdi_11 != 0)
                rdi_11[1].d -= 1
                
                if (rdi_11[1].d == 1)
                    (**rdi_11)(rdi_11)
                    int32_t rax_75 = *(rdi_11 + 0xc)
                    *(rdi_11 + 0xc) -= 1
                    
                    if (rax_75 == 1)
                        (*(*rdi_11 + 8))(rdi_11, 1)
            
            (*(*arg1 + 0x2b0))(arg1, &var_1f0, 0)
            
            if (rcx_43 != 0)
                rcx_43[1].d -= 1
                
                if (rcx_43[1].d == 1)
                    (**rcx_43)(rcx_43)
                    int32_t rax_80 = *(rcx_43 + 0xc)
                    *(rcx_43 + 0xc) -= 1
                    
                    if (rax_80 == 1)
                        (*(*rcx_43 + 8))(rcx_43, 1)
            
            int64_t* var_130
            rdi_6 = var_130
            break
        
        rbx_1 += 0x30
        
        if (rbx_1 == r14_4)
            goto label_1427a4f49
    
label_1427a52b0:
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t rbx_4 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (rbx_4 == 1)
                (*(*rdi_6 + 8))(rdi_6, zx.q(rbx_4))
    
    result = nullptr

__security_check_cookie(rax_1 ^ &var_288)
return result
