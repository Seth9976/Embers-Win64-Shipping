// 函数: sub_1422a8770
// 地址: 0x1422a8770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
TEB* gsbase

if (data_143cd5b50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd5b50)
    
    if (data_143cd5b50 == 0xffffffff)
        sub_140b58170(&data_143cd5b48, "HotReload", 1)
        _Init_thread_footer(&data_143cd5b50)

int64_t* result = sub_140b3dbe0(data_143cd5b48)

if (result != 0)
    int64_t var_e8
    sub_140b58260(&var_e8, u"Renderer", 1)
    j_sub_140b3db50()
    sub_140b4a6b0(&data_143de7d78, var_e8, 0)
    
    while (true)
        int64_t rbx_1 = *result
        sub_140b19e60()
        int64_t r9_1
        r9_1.b = 2
        
        if ((*(rbx_1 + 0x50))(result, var_e8, &data_1439a8bd0, r9_1) != 0)
            break
        
        void var_68
        int64_t* rax_5 = sub_140aae2b0(&var_68, &var_e8)
        void var_90
        char* var_78
        char** rax_7 = sub_140a96390(&var_78, 
            _vfprintf_p_l(&var_90, 
                C++ compilation of module {0} failed!  Details in the log.  \r\nFix the error the", 
            UnrealEd"))
        int64_t rcx_7 = *rax_5
        int64_t* rcx_8 = rax_5[1]
        int32_t var_50_1 = 4
        
        if (rcx_8 != 0)
            rcx_8[1].d += 1
        
        int32_t rax_8 = rax_5[2].d
        char var_28_1 = 1
        int32_t* var_e0 = nullptr
        int32_t var_d8_1 = 1
        sub_1405a4b40(&var_e0, 1, 0)
        int32_t* rcx_10 = var_e0
        *rcx_10 = var_50_1
        int64_t var_48
        *(rcx_10 + 8) = var_48
        *(rcx_10 + 8) = var_48
        rcx_10[2] = var_48.d
        *(rcx_10 + 8) = var_48
        rcx_10[0xa].b = 0
        
        if (var_28_1 != 0)
            *(rcx_10 + 0x10) = rcx_7
            *(rcx_10 + 0x18) = rcx_8
            
            if (rcx_8 != 0)
                rcx_8[1].d += 1
            
            rcx_10[8] = rax_8
            rcx_10[0xa].b = 1
        
        char* var_b8 = *rax_7
        void* rax_16 = rax_7[1]
        void* var_b0_1 = rax_16
        
        if (rax_16 != 0)
            *(rax_16 + 8) += 1
        
        void var_a8
        int64_t* rax_17 = sub_140aac870(&var_a8, &var_b8, &var_e0)
        int64_t var_d0 = *rax_17
        int64_t* rcx_13 = rax_17[1]
        
        if (rcx_13 != 0)
            rcx_13[1].d += 1
        
        int32_t var_c0_1 = rax_17[2].d
        int64_t* var_a0
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t rax_21 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (rax_21 == 1)
                    (*(*var_a0 + 8))(var_a0, 1)
        
        sub_140596f50(&var_e0)
        
        if (var_28_1 != 0)
            char var_28_2 = 0
            
            if (rcx_8 != 0)
                rcx_8[1].d -= 1
                
                if (rcx_8[1].d == 1)
                    (**rcx_8)(rcx_8)
                    int32_t rax_25 = *(rcx_8 + 0xc)
                    *(rcx_8 + 0xc) -= 1
                    
                    if (rax_25 == 1)
                        (*(*rcx_8 + 8))(rcx_8, 1)
        
        int64_t* rbx_4 = rax_7[1]
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rax_29 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* rbx_5 = rax_5[1]
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_33 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t* rax_35 = sub_140ac6680(&var_d0)
        PWSTR rdx_6
        
        if (rax_35[1].d == 0)
            rdx_6 = &data_142d40450
        else
            rdx_6 = *rax_35
        
        sub_140b709d0(0, rdx_6, u"Error")
        
        if (rcx_13 != 0)
            rcx_13[1].d -= 1
            
            if (rcx_13[1].d == 1)
                (**rcx_13)(rcx_13)
                int32_t rax_38 = *(rcx_13 + 0xc)
                *(rcx_13 + 0xc) -= 1
                
                if (rax_38 == 1)
                    (*(*rcx_13 + 8))(rcx_13, 1)
        
        int64_t* var_88
        
        if (var_88 != 0)
            var_88[1].d -= 1
            
            if (var_88[1].d == 1)
                (**var_88)(var_88)
                int32_t rax_42 = *(var_88 + 0xc)
                *(var_88 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*var_88 + 8))(var_88, 1)
    
    j_sub_140b3db50()
    result = sub_140b407e0(&data_143de7d78, var_e8)

__security_check_cookie(rax_1 ^ &var_108)
return result
