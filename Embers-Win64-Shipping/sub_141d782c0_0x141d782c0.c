// 函数: sub_141d782c0
// 地址: 0x141d782c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int16_t* var_108
sub_140b1a780(&var_108, arg2)
sub_140a464c0()
int16_t* const rdx = &data_142d40450
int32_t var_100

if (var_100 != 0)
    rdx = var_108

char const (* r8)[0x4] = data_14399ea08

if ((*(r8 + 0x50))(&data_14399ea08, rdx, r8) == 0)
    sub_140a464c0()
    int16_t* rdx_1 = &data_142d40450
    
    if (var_100 != 0)
        rdx_1 = var_108
    
    char const (* r9_1)[0x4] = data_14399ea08
    (*(r9_1 + 0x58))(&data_14399ea08, rdx_1, 0, r9_1)

int64_t* rcx_1 = *(arg1 + 0x48)
void* result = (**rcx_1)(rcx_1)

if (*(result + 0x28) != 0)
    while (true)
        sub_140a464c0()
        arg2[1].d
        result = (*(data_14399ea08 + 0x108))()
        
        if (result == -1)
            break
        
        int64_t* rax_5 = __crt_deferred_errno_cache::get(&data_143db7b00)
        arg2[1].d
        result = (*(*rax_5 + 0x80))()
        
        if (result.b != 0)
            break
        
        void var_78
        int64_t* rax_7 = sub_140aae420(&var_78, arg2)
        void var_b8
        char* var_88
        char** rax_9 = sub_140a96390(&var_88, 
            _vfprintf_p_l(&var_b8, 
                The destination file '{0}' could not be deleted because it's in use by ", 
            MovieSceneCaptureProtocol"))
        int64_t rcx_5 = *rax_7
        int64_t* rcx_6 = rax_7[1]
        int32_t var_60_1 = 4
        
        if (rcx_6 != 0)
            rcx_6[1].d += 1
        
        int32_t rax_10 = rax_7[2].d
        char var_38_1 = 1
        int32_t* var_118 = nullptr
        int32_t var_110_1 = 1
        sub_1405a4b40(&var_118, 1, 0)
        int32_t* rcx_8 = var_118
        *rcx_8 = var_60_1
        int64_t var_58
        *(rcx_8 + 8) = var_58
        *(rcx_8 + 8) = var_58
        rcx_8[2] = var_58.d
        *(rcx_8 + 8) = var_58
        rcx_8[0xa].b = 0
        
        if (var_38_1 != 0)
            *(rcx_8 + 0x10) = rcx_5
            *(rcx_8 + 0x18) = rcx_6
            
            if (rcx_6 != 0)
                rcx_6[1].d += 1
            
            rcx_8[8] = rax_10
            rcx_8[0xa].b = 1
        
        char* var_e0 = *rax_9
        void* rax_18 = rax_9[1]
        void* var_d8_1 = rax_18
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        void var_d0
        int64_t* rax_19 = sub_140aac870(&var_d0, &var_e0, &var_118)
        int64_t var_f8 = *rax_19
        int64_t* rcx_11 = rax_19[1]
        
        if (rcx_11 != 0)
            rcx_11[1].d += 1
        
        int32_t var_e8_1 = rax_19[2].d
        int64_t* var_c8
        
        if (var_c8 != 0)
            var_c8[1].d -= 1
            
            if (var_c8[1].d == 1)
                (**var_c8)(var_c8)
                int32_t rax_23 = *(var_c8 + 0xc)
                *(var_c8 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_c8 + 8))(var_c8, 1)
        
        sub_140596f50(&var_118)
        
        if (var_38_1 != 0)
            char var_38_2 = 0
            
            if (rcx_6 != 0)
                rcx_6[1].d -= 1
                
                if (rcx_6[1].d == 1)
                    (**rcx_6)(rcx_6)
                    int32_t rax_27 = *(rcx_6 + 0xc)
                    *(rcx_6 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*rcx_6 + 8))(rcx_6, 1)
        
        int64_t* rbx_3 = rax_9[1]
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_31 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_31 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* rbx_4 = rax_7[1]
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rax_35 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_35 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* var_b0
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rax_39 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rax_39 == 1)
                    (*(*var_b0 + 8))(var_b0, 1)
        
        void var_a0
        int64_t* rax_42 =
            sub_140ac6680(_vfprintf_p_l(&var_a0, Unable to remove file", MovieSceneCaptureProtocol")
            )
        PWSTR rbx_6
        
        if (rax_42[1].d == 0)
            rbx_6 = &data_142d40450
        else
            rbx_6 = *rax_42
        
        int64_t* rax_43 = sub_140ac6680(&var_f8)
        PWSTR rdx_5
        
        if (rax_43[1].d == 0)
            rdx_5 = &data_142d40450
        else
            rdx_5 = *rax_43
        
        sub_140b709d0(0, rdx_5, rbx_6)
        int64_t* var_98
        
        if (var_98 != 0)
            var_98[1].d -= 1
            
            if (var_98[1].d == 1)
                (**var_98)(var_98)
                int32_t rax_46 = *(var_98 + 0xc)
                *(var_98 + 0xc) -= 1
                
                if (rax_46 == 1)
                    (*(*var_98 + 8))(var_98, 1)
        
        if (rcx_11 != 0)
            rcx_11[1].d -= 1
            
            if (rcx_11[1].d == 1)
                (**rcx_11)(rcx_11)
                int32_t rax_50 = *(rcx_11 + 0xc)
                *(rcx_11 + 0xc) -= 1
                
                if (rax_50 == 1)
                    (*(*rcx_11 + 8))(rcx_11, 1)

int16_t* rcx_30 = var_108

if (rcx_30 != 0)
    result = sub_140a74f90(rcx_30)

__security_check_cookie(rax_1 ^ &var_138)
return result
