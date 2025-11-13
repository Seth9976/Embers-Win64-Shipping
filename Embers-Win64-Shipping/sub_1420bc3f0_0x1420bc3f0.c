// 函数: sub_1420bc3f0
// 地址: 0x1420bc3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de540(data_143f5b298, arg1, 1)
int32_t result
int64_t* rdi_3

if (rax == 0)
    void var_f8
    sub_140b58170(&var_f8, "Blueprint", 1)
    void var_a0
    int64_t* rax_11 =
        _vfprintf_p_l(&var_a0, EndDrawCanvasToRenderTarget: WorldContextObject is not valid.", 
        KismetRenderingLibrary")
    void var_c8
    void var_60
    sub_140ae44d0(sub_140accdf0(&var_60, &var_f8), &var_c8, rax_11)
    int64_t* var_c0
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t temp2_1 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
    
    result = sub_140acd9c0(&var_60)
    int64_t* var_98
    rdi_3 = var_98
label_1420bc693:
    
    if (rdi_3 != 0)
        result = rdi_3[1].d
        rdi_3[1].d -= 1
        
        if (result == 1)
            result = (**rdi_3)(rdi_3)
            int32_t rbx_7 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rbx_7 == 1)
                return (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_7))
else
    void* rax_1 = sub_142436070(rax)
    void* rcx_2 = *(rax_1 + 0x260)
    
    if (rcx_2 != 0)
        sub_14240e030(rcx_2, 0)
        void* rdi_1 = *(rax_1 + 0x260)
        
        if (rdi_1 != 0)
            sub_1423fef60(rdi_1)
            j_sub_140a74f90(rdi_1)
        
        *(rax_1 + 0x260) = 0
    
    void* rcx_5 = *arg2
    
    if (rcx_5 == 0)
        void arg_18
        sub_140b58170(&arg_18, "Blueprint", 1)
        void var_b8
        int64_t* rax_7 =
            _vfprintf_p_l(&var_b8, EndDrawCanvasToRenderTarget: Context must be valid.", 
            KismetRenderingLibrary")
        void var_d8
        void var_88
        sub_140ae44d0(sub_140accdf0(&var_88, &arg_18), &var_d8, rax_7)
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t temp4_1 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        result = sub_140acd9c0(&var_88)
        int64_t* var_b0
        rdi_3 = var_b0
        goto label_1420bc693
    
    int64_t var_108 = sub_140cbe180(rcx_5)
    int64_t var_100_1 = arg2[1]
    
    if (sub_140a80f40() == 0)
        uint32_t rax_5
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
            void var_38
            int64_t* rax_6 = sub_1420ba1f0(&var_38, nullptr, 0xff)
            *(*rax_6 + 0x10) = var_108.o
            void* rcx_10 = *rax_6
            int32_t r8_1 = rax_6[2].d
            int64_t* rdx_2 = rax_6[1]
            int64_t* rbx_1 = *(rcx_10 + 0x28)
            int64_t* arg_20 = rbx_1
            int32_t* rdi_2 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_2 += 1
                rbx_1 = arg_20
            
            result = sub_1405e48c0(rcx_10, rdx_2, r8_1, 1)
            
            if (rbx_1 != 0)
                int32_t rbx_2 = *rdi_2
                *rdi_2 -= 1
                
                if (rbx_2 == 1)
                    result = sub_140a2f6e0(arg_20)
            
            *arg2 = zx.o(0)
        else
            int128_t var_e8 = var_108.o
            result = sub_1420b0ba0(&var_e8, &data_143f02b98)
            *arg2 = zx.o(0)
    else
        result = sub_1420b0ba0(&var_108, &data_143f02b98)
        *arg2 = zx.o(0)
return result
