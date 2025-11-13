// 函数: sub_1420d19c0
// 地址: 0x1420d19c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* result

if (arg1 == 0)
    void var_d8
    sub_140b58170(&var_d8, "Blueprint", 1)
    void var_c0
    int64_t* rax_17 = _vfprintf_p_l(&var_c0, 
        SetCastInsetShadowForAllAttachments: PrimitiveComponent must be non-null.", 
        KismetRenderingLibrary")
    void var_d0
    void var_a8
    sub_140ae44d0(sub_140accdf0(&var_a8, &var_d8), &var_d0, rax_17)
    int64_t* var_c8
    
    if (var_c8 != 0)
        var_c8[1].d -= 1
        
        if (var_c8[1].d == 1)
            (**var_c8)(var_c8)
            int32_t temp2_1 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
    
    result = sub_140acd9c0(&var_a8)
    int64_t* var_b8
    
    if (var_b8 != 0)
        result = zx.q(var_b8[1].d)
        var_b8[1].d -= 1
        
        if (result.d == 1)
            result = (**var_b8)(var_b8)
            int32_t rdi_2 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_b8 + 8))(var_b8, zx.q(rdi_2))
else
    sub_141f24710(arg1, arg2)
    sub_141f25bb0(arg1, arg3)
    int64_t rbx = sx.q(arg1[0x1b].d)
    result = nullptr
    void* result_1 = nullptr
    int32_t rdx_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 8
    
    if (rbx.d != 0)
        void var_80
        
        if (rbx.d s> 8)
            sub_140775b80(&var_80, rbx.d)
            rdx_1 = var_38_1
            result = result_1
        
        void* result_2 = &var_80
        
        if (result != 0)
            result_2 = result
        
        memcpy(result_2 + (sx.q(rdx_1) << 3), arg1[0x1a], (rbx << 3).d)
        int32_t i = var_38_1 + rbx.d
        int32_t i_1 = i
        
        while (i s> 0)
            void* result_4 = &var_80
            
            if (result_1 != 0)
                result_4 = result_1
            
            int64_t* rbx_1 = *(result_4 + (sx.q(i - 1) << 3))
            
            if (0 != 0)
                memmove(result_4 + (sx.q(i - 1) << 3), result_4 + (sx.q(i) << 3), 0 << 3)
                i = i_1
            
            i -= 1
            i_1 = i
            
            if (rbx_1 != 0)
                void* rax_10 = sub_142577430()
                void* rdx_6 = rbx_1[2]
                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                
                if (rax_11.d s<= *(rdx_6 + 0x38)
                        && *(*(rdx_6 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30
                        && sub_141f27710(rbx_1) != 0)
                    if (arg3 != 0)
                        sub_141f25bb0(rbx_1, 0)
                    
                    sub_141f24710(rbx_1, arg2)
                
                i = i_1
            
            int64_t rdi_1 = sx.q(rbx_1[0x1b].d)
            
            if (rdi_1.d != 0)
                int32_t rax_14 = i + rdi_1.d
                
                if (rax_14 s> var_34_1)
                    sub_140775b80(&var_80, rax_14)
                    i = i_1
                
                void* result_3 = &var_80
                
                if (result_1 != 0)
                    result_3 = result_1
                
                memcpy(result_3 + (sx.q(i) << 3), rbx_1[0x1a], (rdi_1 << 3).d)
                i = i_1 + rdi_1.d
                i_1 = i
        
        result = result_1
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_f8)
return result
